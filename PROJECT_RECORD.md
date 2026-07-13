# Gun Detection Project Record

## Purpose and Maintenance Contract

This file is the durable source of truth for the Gun Detection project. It was introduced after the original Windows installation and conversation history were lost. Its purpose is to preserve enough verified context that the project can be resumed safely without relying on chat history or memory.

Before modifying any file in this repository, read this record and reconcile the proposed work with the current verified baseline, known limitations, and prior decisions.

Every change to firmware, radar configuration, calibration data, Python tooling, tests, documentation, build tooling, hardware interfaces, or intentionally committed runtime artifacts must do both of the following in the same change set:

1. Update any affected current-state section in this file.
2. Append a complete chronological entry to the Change Ledger.

Do not use vague ledger entries such as “updated firmware” or “fixed config.” Record exactly what changed, why it changed, how it affects the system, what evidence supports it, what was verified, what still requires hardware testing, and how to roll it back.

Historical ledger entries are append-only. If an earlier entry is incomplete or incorrect, add a corrective entry and update the affected current-state section rather than silently rewriting history. Factual corrections to spelling, links, or formatting that do not change meaning may be made directly.

## Current Verified Baseline

### Repository state

- Baseline date: 2026-07-13
- Branch: `main`
- Baseline commit: `fef5494` (`prepared .md files`)
- Remote state at reconstruction time: `main...origin/main`
- Working tree before this documentation change: clean
- Canonical detection firmware: `parsing_detailed/parsing_detailed.ino`
- Firmware build or hardware test performed during reconstruction: no; the reconstruction was read-only
- Latest baseline commit purpose: commit the permanent project record, repository instructions, reconstruction plan, and current runtime capture after the tracker-storage crash fix

There is no build manifest or README that formally declares the canonical sketch. `parsing_detailed/parsing_detailed.ino` is treated as canonical because it contains the latest firmware evolution and its print statements match the committed `output.md` telemetry and the user-provided live sample.

### Project file roles

| Path | Current role |
|---|---|
| `parsing_detailed/parsing_detailed.ino` | Current ESP32-S3 detection firmware: UART parsing, filtering, clustering, descriptors, tracking, calibration matching, serial telemetry, and alert output. |
| `parsing_test/parsing_test.ino` | Older detector implementation with stricter point thresholds, older parsing behavior, and 115200-baud monitor output. Do not treat it as current firmware. |
| `RCS.py` | Original PC-side detector and interactive 256-frame calibration utility. It is the source lineage for many ESP32 descriptors. |
| `RCS_NO MENU.py` | PC-side detection-only variant without the interactive calibration menu. |
| `configuration_command/configuration_command.ino` | Separate ESP32 utility that reads `/radar_config.txt` from SPIFFS and sends commands to the radar CLI UART. It does not run as part of the detector. |
| `config_testing/config_testing.ino` | Experimental SPIFFS/configuration diagnostics. Most earlier experiments are commented; the active sketch lists SPIFFS files. |
| `json/json.ino` | Separate provisioning sketch that overwrites `/radar_calibration.json` in ESP32 SPIFFS with embedded JSON and reads it back. |
| `json/radar_calibration.json` | Checked-in aggregate calibration data containing `GUN`, `BOX`, and lowercase `gun` profiles. The running detector reads the SPIFFS copy, which can differ from this repository file. |
| `cfg_profiles/iwr6843aop_gun_baseline_16loops_16db.cfg` | Controlled baseline radar profile: 16 loops, 16 dB range CFAR, 15 dB Doppler CFAR. |
| `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg` | Fixed profile for the current detection phase: 32 loops, 14 dB range and Doppler CFAR, 0.30-3.50 m range FOV, and +/-45 degree azimuth/elevation FOV. The current relative-power conversion assumes this profile. |
| `cfg_profiles/iwr6843aop_gun_high_sensitivity_64loops_12db.cfg` | Higher-sensitivity profile: 64 loops, 12 dB range and Doppler CFAR. |
| `oprimized_config.cfg` | Older experimental profile using 48 loops, 50 ms frames, clutter removal, wider angular FOV, and a 0.10–2.00 m range FOV. |
| `xwr68xx_AOP_profile_2026_01_29T17_01_51_013.cfg` | Earlier Visualizer-generated 16-loop profile. |
| `output.md` | Current user-saved long-range gun-present diagnostic capture. It contains pre-classifier rejection evidence for radar frames 4134-4220 but no accepted object descriptor or firmware range-profile reading. It is not a complete labeled validation dataset. |
| `fixes_plan.md` | Earlier repair plan. Some items were implemented and some were not. It is not the source of truth for current behavior. |
| `detection_fix_plan.md` | Later tuning/repair proposal. Several recommendations were superseded or remain unimplemented. |
| `docs/superpowers/specs/2026-07-11-relaxed-point-thresholds-design.md` | Approved design that retained `DBSCAN_EPS=0.15 m` and aligned four point-count gates at six. |
| `docs/superpowers/plans/2026-07-11-relaxed-point-thresholds.md` | Implementation plan for the six-point threshold change. |

### Hardware and interfaces

| Component | Current setting |
|---|---|
| ESP32 target | ESP32-S3 |
| Radar family/profile | IWR6843AOP / xWR68xx AOP mmWave demo data format |
| Radar data UART | UART1, RX-only on GPIO16, 921600 baud, 8N1 |
| Radar UART receive ring | 32 KiB (`MAX_PACKET_LEN`) allocated before UART start |
| Serial monitor | 460800 baud |
| Radar CLI configurator UART | GPIO18 RX, GPIO17 TX, initially 115200 baud |
| Start/stop button | GPIO4, input pull-up, active low |
| Alert LED | GPIO11 |
| Active buzzer | GPIO12 |
| Alert duration | 3000 ms |
| Buzzer toggle interval | 200 ms |
| Calibration path used by detector | `/radar_calibration.json` in SPIFFS |

The detector does not configure the radar because `RADAR_TX_PIN=-1`. Radar configuration, calibration provisioning, and detection are separate flashing/operational steps.

## Runtime Data Flow

### 1. Radar packet reception

1. `syncToMagic()` scans UART bytes for the eight-byte magic word `02 01 04 03 06 05 08 07`.
2. The parser reads the rest of the fixed 40-byte packet header.
3. It extracts total packet length, sensor frame number, detected-object count, and TLV count as little-endian values.
4. Packet length must be between 40 bytes and 32 KiB.
5. The remaining packet bytes are read into a fixed parser buffer.

There is no CRC/checksum validation. Platform, version, subframe, and packet-alignment fields are not used to authenticate the packet.

### 2. TLV parsing

The parser heuristically supports demo variants where the TLV length either includes or excludes the eight-byte TLV header.

- TLV 1 — detected points: four 32-bit floats per point (`x`, `y`, `z`, radial velocity). Non-finite values or magnitudes of 100 or more are rejected.
- TLV 7 — detected-point side information: one 16-bit SNR value and one 16-bit noise value per point, associated by array order.
- TLV 2 — zero-Doppler range profile: up to 128 unsigned 16-bit log-magnitude bins.
- TLVs 6 and 9 — traversed but not interpreted by the detector. They commonly represent statistics and temperature statistics in the demo protocol.

Points initially receive `SNR_UNKNOWN=0`. If TLV 7 is missing or cannot be applied, those points fail SNR filtering instead of passing with fabricated data.

### 3. Point filtering

A parsed point is retained only when:

- Euclidean range is at least 0.20 m and at most 3.0 m.
- Side-information SNR is available.
- Raw SNR is at least 20.

The filter records range rejections, unknown-SNR rejections, and low-SNR rejections for diagnostics.

### 4. DBSCAN clustering

- Neighborhood radius: strictly less than 0.15 m.
- Configured minimum neighbors: 6.
- Minimum retained cluster size: 6.

The implementation excludes the point itself from the neighborhood list. Therefore, a core point requires six other neighbors—seven total points—even though the constant and documentation call this a six-point minimum.

Cluster centroid is the arithmetic mean of all DBSCAN-assigned points.

### 5. Descriptor extraction

1. Calculate each point’s distance from the untrimmed cluster centroid.
2. Find the median distance.
3. Retain points whose distance is strictly less than 2.5 times that median.
4. Require at least six trimmed points.
5. Recompute a trimmed centroid.
6. Calculate axis-aligned X/Y/Z extents and sort the three extents largest-to-smallest as length, width, and height.
7. Calculate geometric, SNR, density, and shape descriptors.

Geometry and SNR use the trimmed points. Printed position, radial velocity, and noise statistics are based on the untrimmed cluster, so the displayed fields do not all describe exactly the same point population.

### 6. Tracking

- Existing active tracks greedily associate with the nearest unused cluster within 0.3 m.
- Track position becomes the latest untrimmed cluster centroid.
- Track velocity is `(newCentroid - oldCentroid) * 10`, assuming a 100 ms measurement interval.
- Descriptor history retains at most 20 samples.
- Quality history retains at most 30 samples.
- At most 32 tracks are retained.
- Tracks older than 10 tracker updates are erased.

Early returns for no packet, no points, no accepted points, no cluster, or no descriptor occur before `tracker.update()`. Consequently, tracks do not age and temporal counters do not change on those radar frames.

### 7. Calibration matching and alerting

After enough valid detections, the tracker averages recent descriptor fields and compares the result with every object in the SPIFFS calibration JSON. The nearest calibration record becomes the displayed candidate even when it is outside the acceptance threshold.

An alert requires all of the following:

1. A usable measured track that is not ghost or low-quality.
2. At least six valid-quality associated descriptors before matching begins.
3. A nearest calibration distance below 0.25 for `findMatch()` to return a match.
4. A stricter distance below 0.20 to acquire a new identity.
5. At least ten high-quality detections for confirmed state.
6. Calibration key equal to `gun`, case-insensitively.
7. Track state equal to `CONFIRMED`.

When these conditions are met, the LED activates and the buzzer toggles for three seconds.

## Metric Reference

### Frame and UART diagnostics

| Field | Meaning |
|---|---|
| `Frame N` | Local output-frame counter. It increments only when at least one measured, non-ghost, non-low-quality object is available. |
| `radar N` | Sensor frame number from the packet header. |
| `Valid Objects` | Measured active tracks excluding ghost and low-quality states. A track still in `DETECTING` counts as a valid object. |
| `packet` | Header-reported total packet length in bytes. |
| `objects` | Header-reported detected-object count. |
| `raw` | Successfully parsed, finite, sanity-bounded TLV-1 points; not raw UART bytes. |
| `filtered` | Points remaining after range and SNR filters. |
| `TLVs` | Header TLV count followed by the first eight types encountered. |
| `points` / `sideInfo` | Whether valid TLV-1/TLV-7 parsing branches executed. |
| `malformed` | The parser encountered a truncated TLV header or unresolved TLV boundary before both required data TLVs were parsed. It is not a checksum-backed packet-integrity verdict. |

### Object classification labels

`[3D]`, `[PLATE]`, `[BOX]`, `[MET]`, and similar tags are display heuristics. They do not directly determine whether the object is a gun.

Object type is estimated from flatness, bimodality, dimensionality, and planarity. Material type is estimated from a pseudo-RCS value and reflection consistency. These labels are not direct measurements of physical object type or material.

### Position and range

- X/Y/Z are the untrimmed DBSCAN centroid in the sensor coordinate system, in metres.
- Range is `sqrt(X^2 + Y^2 + Z^2)`.
- No coordinate transform is applied.
- This range is derived from the point-cloud centroid rather than received as a separate object-level measurement.

### Range-profile relative power

TLV 2 contains a zero-Doppler range profile. For each displayed track, the firmware:

1. Converts centroid range to the nearest range bin.
2. Searches from two bins below to two bins above that bin.
3. Selects the strongest raw value.
4. Converts its bin to range using `0.0381529018 m/bin`.
5. Converts raw magnitude to relative dB using:

```text
relativePowerDb = raw * 0.031357291215 - 18.061799740
```

For the reconstructed sample:

```text
raw 3180 -> 3180 * 0.031357291215 - 18.061799740 = 81.6544 dB
bin 53 -> 53 * 0.0381529018 = 2.0221 m
```

This is relative power, not dBm, calibrated RCS, or uniquely cluster-associated energy. Objects at similar ranges can use the same range-profile peak. The conversion is hard-coded for the balanced 128-range-bin/32-Doppler-bin profile and must be revisited if the active radar profile changes.

Range-profile power is currently display-only. It does not participate in filtering, validity, quality, calibration distance, identity confirmation, or alerting.

On 2026-07-13, the user reported that the updated balanced profile detected the gun at approximately 1.1 m with approximately 98 relative dB in the mmWave Demo Visualizer. This is a user-reported hardware observation, not an independently verified measurement or a committed labeled capture. It must not be treated as a final gun threshold: range, orientation, clutter, competing objects, and the global range-profile ambiguity can all change the value.

Later on 2026-07-13, the user changed the target deployment distance to 3.5 m and reported mmWave Demo Visualizer observations of approximately 80.21 relative dB at approximately 3.3 m and 77.54 relative dB at approximately 3.2 m. The subsequently saved `output.md` confirms the firmware-side failure but cannot confirm those power values: every target-like point set is rejected before a track exists, and the firmware prints range-profile power only for displayed tracks. The power values therefore remain user-reported Visualizer observations.

The saved long-range capture contains 82 diagnostic radar-frame records from sensor frame 4134 through 4220, with frames 4192-4196 absent. In 74 records, all 651 parsed points were rejected by the range filter (`rangeRejected=651`, `unknownSNR=0`, `lowSNR=0`). The remaining eight records reached DBSCAN with 20 total filtered points distributed as one to six points per frame; none formed a cluster. No object descriptor, calibration candidate, relative-power line, gun identity, LED alert, or buzzer alert was produced.

### Velocity

- Radial mean: arithmetic mean of signed sensor Doppler velocities over the untrimmed cluster.
- Radial peak: largest absolute sensor Doppler magnitude; its sign is discarded.
- Track X/Y/Z velocity: centroid displacement multiplied by 10.

The track-velocity calculation assumes measurements are exactly 100 ms apart. Skipped frames or profiles with different frame periods cause incorrect magnitude estimates. Velocity is currently telemetry-only and is not used for classification.

### SNR and noise

TLV-7 SNR and noise are retained and printed as raw 16-bit values. For the IWR6843 demo side-information format, 1 LSB represents 0.1 dB. The firmware does not divide by ten.

Examples:

```text
raw SNR 121.111 -> approximately 12.1111 dB
raw SNR minimum 116 -> approximately 11.6 dB
raw SNR peak 129 -> approximately 12.9 dB
raw noise 586.556 -> approximately 58.6556 dB
```

Reference: https://e2e.ti.com/support/sensors-group/sensors/f/sensors-forum/933558/iwr6843-how-to-read-the-snr-and-noise-values-from-oob-demo

The current thresholds operate on raw values:

- `MIN_SNR=20` means approximately 2.0 dB.
- `MIN_AVERAGE_SNR=22` means approximately 2.2 dB.
- `MIN_PEAK_SNR=30` means approximately 3.0 dB.

These thresholds are therefore much more permissive than their names/comments may imply. SNR influences point filtering, validity, quality, pseudo-RCS, material display classification, and calibration distance. Noise is displayed but is not used in the final match distance.

### Geometry

- Length/width/height are sorted axis-aligned bounding-box extents after outlier trimming.
- They are not an oriented bounding box and are sensitive to object orientation.
- Point count is the trimmed descriptor point count.
- Volume is `length * width * height`.
- Density is `pointCount / (volume + 1e-6)`, nominally points per cubic metre.
- Geometry is an estimate derived from sparse radar returns, not a direct measurement of physical dimensions.

### Shape

- Flatness is smallest sorted extent divided by largest sorted extent.
- Spread is the maximum point-to-trimmed-centroid distance, not object diameter.
- Thickness is raw Z-axis extent and is forced to zero below 10 points.
- Planarity is `1 - min(axis RMS spread) / max(axis RMS spread)` and is forced to zero below 10 points.
- Z bimodality is forced to zero below 20 points.
- Local-density variance is forced to zero below 30 points.

Because accepted clusters may have as few as seven effective points, zero can mean “insufficient samples” rather than a measured zero. In the user-provided nine-point sample, `planarity=0` and `thickness=0` are unavailable-feature sentinels despite nonzero bounding-box dimensions.

The planarity approximation is axis-dependent and can score line-like clouds as highly planar. It is not a full PCA plane fit.

### Quality and validity

Descriptor validity requires all of the following:

| Gate | Current threshold |
|---|---|
| Trimmed points | At least 6 |
| Spread | At most 0.60 m |
| Density | At least 25 points/m3 |
| Mean raw SNR | At least 22 |
| Peak raw SNR | At least 30 |
| SNR standard deviation / mean | At most 0.9 |
| Volume | At least 0.0001 m3 and at most 1.0 m3 |

`reason` contains only the first failed validity gate.

Quality is a heuristic average of four sub-scores:

1. Point-count score.
2. Spatial-coherence score.
3. Mean-SNR score.
4. Density score.

It is not a calibrated probability of object correctness or gun identity.

For the reconstructed nine-point sample:

```text
point score   = 9 / 6 * 50 = 75
spread score  = 100 * (1 - 0.1257 / 0.6) = 79.05
SNR score     = capped at 100
density score = capped at 100
quality       = (75 + 79.05 + 100 + 100) / 4 = 88.51%, displayed as 89%
```

### Calibration candidate, distance, and score

The distance function combines geometry and material-like features.

Geometry distance uses normalized differences for flatness, dimensionality, Z bimodality, planarity, thickness, local-density variance, volume, surface area, and aspect ratios. Flatness receives the largest individual geometry weight.

Material distance uses normalized differences for pseudo-RCS, mean SNR, peak SNR, point density, and reflection consistency.

```text
combinedDistance = 0.7 * geometryDistance + 0.3 * materialDistance
```

Smaller is more similar.

- `Best calibration candidate` is the nearest JSON key even if it is rejected.
- Displayed candidate threshold 0.25 is the database acceptance threshold.
- Effective new-identity entry threshold is stricter at 0.20.
- The output field `Quality ... score=` is mislabelled: it prints `track.lastMatchDistance`, not quality and not the current candidate distance.
- `score=999999` is the initial sentinel meaning the track has never held a confirmed match.

Therefore, this sample is internally consistent:

```text
DETECTING... need 0 more valid frames
score=999999
Best candidate: gun, distance=0.3852, threshold=0.25
```

The six-frame quality gate has been met, but 0.3852 fails both the 0.25 database cutoff and 0.20 identity-entry threshold. No gun match is confirmed.

### No-points and malformed sample

The sample line:

```text
Radar frame 44: no points | packet=704B objects=15 TLVs=5 pointsTLV=no sideInfo=no malformed=yes
```

describes a separate radar frame. The packet header claimed 15 detected objects, but the parser did not execute valid point or side-information branches and encountered an unresolved/truncated TLV condition. It is not evidence of a truly empty scene. Determining whether the root cause was UART byte loss, unsupported TLV ordering, corrupt length data, or another boundary issue requires a raw packet capture.

## Current Detection Rules

### Point and cluster gates

```text
RANGE_MIN                         = 0.20 m
RANGE_MAX                         = 3.00 m
MIN_SNR                           = 20 raw (~2.0 dB)
DBSCAN_EPS                        = 0.15 m
DBSCAN_MIN_POINTS                 = 6 other neighbors (effectively 7 total)
MIN_CLUSTER_POINTS                = 6
MIN_POINTS_FOR_OUTPUT             = 6
MIN_POINTS_FOR_VALID_OBJECT       = 6
MIN_POINTS_FOR_CONFIRMED_MATCH    = 15 (declared but unused)
```

### Quality gates

```text
MAX_CLUSTER_SPREAD                = 0.60 m
MIN_POINT_DENSITY                 = 25 points/m3
MIN_AVERAGE_SNR                   = 22 raw (~2.2 dB)
MIN_PEAK_SNR                      = 30 raw (~3.0 dB)
MAX_SNR_VARIANCE_RATIO            = 0.9
valid volume                      = 0.0001 to 1.0 m3
high-quality descriptor threshold = confidenceScore > 70
```

### Matching and temporal gates

```text
SHAPE_DESCRIPTOR_TOLERANCE = 0.25
MATCH_ENTER_THRESHOLD      = 0.20
MATCH_EXIT_THRESHOLD       = 0.40
GEOMETRY_WEIGHT            = 0.70
material weight            = 0.30
MIN_CONSECUTIVE_DETECTIONS = 6
MIN_STABLE_FRAMES          = 10
DESCRIPTOR_WINDOW_SIZE     = 20
MIN_DESCRIPTORS_FOR_ROBUST = 5
PRESENCE_HOLD_FRAMES       = 10
MIN_HITS_FOR_CONFIRMED     = 8
MAX_TRACKING_DISTANCE      = 0.30 m
MAX_TRACK_AGE              = 10 tracker updates
MAX_TRACKS                 = 32
```

The 0.40 exit threshold is not fully effective: `findMatch()` rejects distances at or above 0.25 and the caller clears the match before the 0.40 hysteresis branch can retain it.

## Calibration Architecture

### PC-side calibration

`RCS.py` connects directly to radar UART on configured `COM5` at 921600 baud. Interactive calibration:

1. Requests an object name.
2. Collects 256 successful descriptor frames, not 256 consecutive wall-clock radar frames.
3. Uses the first tracked object in each successful frame.
4. Requires at least 20 collected descriptors.
5. Stores medians for descriptor features and standard deviations for dimensions.
6. Writes `radar_calibration.json` relative to the Python process working directory.

### ESP32 deployment and use

`json/json.ino` embeds JSON and overwrites `/radar_calibration.json` in SPIFFS. The detector mounts SPIFFS, loads that file at startup, and cannot collect or update calibration itself.

The repository JSON contains three aggregate profiles:

- `GUN` calibrated 2026-01-13
- `BOX` calibrated 2026-01-13
- `gun` calibrated 2026-01-29

The ESP32 ignores stored dimension standard deviations, timestamps, object/material labels, sample counts, and any calibration conditions. It uses the aggregate descriptor values only.

### Calibration/runtime feature mismatch

Several Python calibration features are PCA-based, while ESP32 runtime uses simplified axis-based approximations:

- Python thickness uses spread along the smallest principal axis; ESP32 thickness uses raw Z extent.
- Python planarity uses covariance eigenvalues; ESP32 planarity uses per-coordinate RMS spreads.
- Python bimodality projects onto a principal axis; ESP32 bins raw Z.
- Python dimension extraction and ESP32 axis-aligned extraction are not guaranteed to describe orientation identically.

This means the stored calibration profiles and runtime candidates are not computed in exactly the same feature space. It is a major consideration for future rule and calibration work.

The current `rcsEstimate` is a heuristic:

```text
sum(raw SNR) / (range^2 * sqrt(pointCount))
```

It is not calibrated physical radar cross section. Applying range correction directly to logarithmic SNR codes also prevents interpreting it as true RCS.

## Radar Configuration Baseline

The current power conversion explicitly assumes the balanced profile:

```text
profile:          60 GHz, 112 ADC samples, 70 MHz/us slope
range FFT:        128 bins
chirps:           TX1, TX2, TX3
loops:            32
frame period:     100 ms
range CFAR:       14 dB configuration value
Doppler CFAR:     14 dB configuration value
range FOV:        0.30 to 3.50 m
azimuth FOV:      -45 to +45 degrees
elevation FOV:    -45 to +45 degrees
clutter removal:  disabled
GUI outputs:      detected points, range profile, side information/statistics
```

The 0.30-3.50 m range supersedes the earlier 0.30-1.50 m decision and is the fixed testing, calibration, and deployment envelope for the current project phase. The radar CFAR range FOV now allows 3.50 m, but the ESP32 point filter still declares `RANGE_MAX=3.00 m`. Consequently, firmware currently rejects all parsed points beyond 3.00 m before clustering, regardless of radar detection or range-profile power.

Switching to the 16-, 48-, or 64-loop profiles changes Doppler processing, sensitivity, point-cloud density, and relative-power compensation. Any rule thresholds derived under one profile must record the exact profile and must not be assumed transferable.

## Known Limitations and Unresolved Risks

1. **Raw SNR unit mismatch:** code and output use 0.1 dB raw units while thresholds resemble whole-dB values.
2. **DBSCAN off-by-one semantics:** configured six-point core requires seven total points.
3. **Sparse-feature sentinels:** planarity/thickness are zero below 10 points, bimodality below 20, and density variance below 30.
4. **Calibration/runtime mismatch:** PCA-based Python features differ from ESP32 axis-based features.
5. **Unused confirmation setting:** `MIN_POINTS_FOR_CONFIRMED_MATCH=15` is never referenced.
6. **Mislabelled score:** the quality line prints a previous match distance or sentinel.
7. **Misleading candidate threshold:** printed 0.25 is not the stricter 0.20 entry threshold.
8. **Ineffective exit hysteresis:** matches at 0.25 or above are cleared before the 0.40 exit threshold can retain them.
9. **Fixed-rate track velocity:** multiplying displacement by 10 ignores skipped frames and other frame periods.
10. **Temporal state freezes across early returns:** “consecutive” detections are not strictly consecutive radar frames.
11. **High-quality counter behavior:** descriptors with quality from 40 through 70 reset the valid counter but do not reset the high-quality counter.
12. **Mixed point populations:** position/velocity/noise and geometry/SNR may refer to different trimmed/untrimmed sets.
13. **Side-information alignment risk:** invalid TLV-1 points are dropped before TLV-7 values are assigned, which can shift later SNR/noise associations.
14. **TLV ordering limitation:** TLV 7 arriving before TLV 1 is ignored.
15. **No packet checksum:** `malformed=no` does not guarantee packet integrity.
16. **Malformed telemetry only:** a frame is not rejected solely because diagnostics mark it malformed if usable points were extracted.
17. **Global range-profile ambiguity:** power is selected by range only and is not uniquely associated with an angular cluster.
18. **Profile-specific power conversion:** hard-coded constants assume the balanced 32-loop profile.
19. **Pseudo-RCS is not physical RCS:** it derives from raw logarithmic SNR, range, and point count.
20. **Robust descriptor is a mean, not a median:** low-quality samples can remain in the 20-sample window.
21. **Window peak SNR is averaged:** `maxSnr` becomes the mean of per-frame maxima instead of the maximum across the window.
22. **Calibration provenance is incomplete:** raw samples, active profile, range, orientation, firmware version, and per-feature dispersion are not retained.
23. **Duplicate/weakly separated profiles:** `GUN`, `BOX`, and `gun` coexist as nearest-neighbor candidates without a labeled negative-set validation record.
24. **No automated packet fixtures or build tests:** prior verification was mainly source checks and hardware logs.
25. **Insufficient evaluation data:** `output.md` is a mostly stationary, unlabeled session and cannot establish sensitivity, specificity, false-alert rate, or cross-range/orientation performance.

## Rule-Based Detection Direction

The project will remain rule-based for the current phase; no trained detection model is planned.

Relative power, SNR, geometry, shape, velocity, and temporal stability can contribute to a rule system, but thresholds must be derived empirically rather than selected from a single frame. The required next experimental foundation is a labeled capture protocol with:

- One fixed, recorded radar profile.
- Gun and non-gun objects.
- Difficult metal negatives such as phones, tools, keys, metal boxes, bottles, and plates.
- Non-metal negatives and empty-scene/background captures.
- Multiple ranges, orientations, heights, lateral positions, and motion states.
- Raw per-frame telemetry rather than confirmed-only summaries.
- Separate development/tuning and held-out validation captures.

Future rules should explicitly handle missing shape features, normalize or stratify range-dependent power, aggregate evidence over time, and measure false positives as well as detection rate.

For the current phase, all labeled captures, power bands, calibration profiles, acceptance tests, and deployment claims must cover 0.30-3.50 m using `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`. Relative power will be supporting metal evidence rather than sufficient proof of a gun, because other metal objects can also produce strong returns. Long-range rules must explicitly handle five-to-six-point returns and the lack of shape features that are forced to zero below ten points.

## Git History Reconstruction

All baseline commits were made on 2026-07-11 in a linear history.

| Commit | Summary and project impact |
|---|---|
| `3449abb` | Initial commit containing `.gitattributes`. |
| `56ff467` | Imported Python detection/calibration, Arduino prototype, configuration utilities, calibration JSON, and initial radar profile. |
| `b6077ec` | Corrected configuration content and activated the SPIFFS JSON-provisioning sketch. |
| `259c848` | Added 16/32/64-loop radar profiles, experimental optimized profile, and initial runtime capture. |
| `54160d0` | Added `parsing_detailed.ino` with detailed parser diagnostics, velocity/noise telemetry, tracking improvements, and 460800-baud output. |
| `47e4599` | Implemented major parser/DBSCAN repairs, unknown-SNR rejection, double-precision accumulators, deque histories, and match API cleanup. |
| `ff21722` | Changed malformed handling so unknown trailing TLVs do not invalidate a frame after point and side-info TLVs were parsed. |
| `5ed17ee` | Added TLV-2 range-profile parsing, power telemetry, filter diagnostics, 32 KiB UART RX buffer, and removal of the extra 50 ms delay. |
| `f0588a4` | Attempted parameter/power changes but accidentally set match tolerance to zero. |
| `fcf8e87` | Reverted the entire preceding parameter commit. |
| `2ca3cd4` | Reapplied only the corrected Visualizer-style relative-power conversion and precise bin spacing. |
| `b016668` | Documented the approved relaxed-point design: retain 0.15 m radius and align point gates at six. |
| `0f33728` | Implemented the four six-point thresholds without changing matching or temporal thresholds. |
| `82035de` | Bounded tracker count at 32 and erased retired tracks to avoid memory-growth crashes. |
| `fef5494` | Added the permanent project record and enforcement instructions, the reconstruction plan, and the updated runtime capture. |

### Earlier plans versus current code

- The proposal to increase DBSCAN radius to 0.25 m was superseded. Current radius remains 0.15 m.
- The proposal to decay `consecutiveValidDetections` instead of resetting it was not implemented.
- The proposal to reduce temporal thresholds to 3 valid/5 stable frames was not implemented. Current thresholds remain 6/10.
- The trailing-TLV malformed fix was implemented.
- The proposal to retain the maximum window `maxSnr` was not implemented.
- The proposal to add explicit task-watchdog resets in UART waits was not implemented.
- The later approved point-threshold design, not the earlier broad tuning proposal, defines current point thresholds.

## Mandatory Change Entry Template

Copy this template for every repository change. Replace every field with concrete information. Use `None` or `Not applicable` only when that is factually correct; do not leave fields blank.

```markdown
### YYYY-MM-DD - Short change title

- Status: Proposed / Implemented / Verified / Reverted / Superseded
- Requested by: User / investigation / hardware evidence / other named source
- Objective: Exact outcome intended
- Files changed: Every created, modified, renamed, or deleted path
- Symbols/settings changed: Exact functions, constants, commands, JSON keys, or sections
- Previous behavior: What the project did before the change
- New behavior: What the project does after the change
- Detailed implementation: Complete technical description
- Reason and evidence: Why the change was selected and supporting observations/data
- System impact: Parser, memory, timing, detection, calibration, configuration, hardware, documentation, or workflow effects
- Risks and trade-offs: Expected failure modes and compromises
- Verification performed: Exact commands, inspections, builds, flashes, and experiments
- Verification results: Exit codes, counts, observed output, and failures
- Hardware validation required/completed: Exact status; never claim unperformed testing
- Rollback procedure: Exact files/settings/commit or reverse change
- Related commit: Commit hash or `Not committed`
- Follow-up work: Remaining validation, tuning, cleanup, or `None`
```

## Change Ledger

### 2026-07-13 - Establish permanent project record and enforcement policy

- Status: Verified
- Requested by: User, following loss of the original Windows installation and conversation history
- Objective: Preserve the complete reconstructed project context and require detailed documentation for every future repository edit
- Files changed: `PROJECT_RECORD.md` created; `AGENTS.md` created; `docs/superpowers/plans/2026-07-13-project-record.md` created
- Symbols/settings changed: Documentation and contributor workflow only; no firmware symbol, radar command, calibration value, hardware pin, or runtime threshold changed
- Previous behavior: Project context was distributed across source code, commits, plans, calibration data, output captures, and lost conversation history. No repository-level instruction required future assistants to maintain a unified change record.
- New behavior: `PROJECT_RECORD.md` is the single source of truth and chronological ledger. `AGENTS.md` requires future repository edits to update the record in the same change set.
- Detailed implementation: Reconstructed the canonical firmware data flow, metric meanings, calibration architecture, radar-profile assumptions, current detection rules, Git timeline, and unresolved limitations. Added a mandatory change-entry template and repository-wide maintenance requirements.
- Reason and evidence: The user explicitly requested durable continuity after losing local chat and product context. The baseline was reconstructed from current `HEAD`, Git history, firmware symbols, committed telemetry, calibration sources, radar profiles, and TI side-information units.
- System impact: Improves documentation continuity, reviewability, auditability, and future-agent behavior. No runtime, parser, timing, memory, configuration, calibration, detection, or alert behavior changes.
- Risks and trade-offs: The record must be maintained diligently or it can become stale. The enforcement file reduces that risk but cannot replace human review of factual accuracy.
- Verification performed: Ran exact-heading checks for all nine required `PROJECT_RECORD.md` sections; searched `AGENTS.md` for the canonical-record link, pre-edit rule, same-change-set rule, verification rule, and hardware-validation rule; scanned both permanent files for incomplete placeholder markers; confirmed every implementation-plan checkbox is complete; checked all three files for trailing whitespace; asserted exact Git status scope; ran `git diff --check`.
- Verification results: The first comprehensive verification run correctly failed because the ledger’s description of the placeholder scan repeated the literal marker words. That self-referential wording was corrected and the full verifier was rerun. The final run returned exit code 0: all nine required record sections appeared exactly once, all five mandatory enforcement concepts were present, no incomplete placeholders or trailing whitespace remained, all plan steps were checked, Git status listed exactly the three intended new documentation files, and `git diff --check` returned exit code 0. No firmware build, flash, or hardware run was performed because runtime files were unchanged.
- Hardware validation required/completed: Not applicable; documentation-only change with no hardware/runtime modifications
- Rollback procedure: Remove `PROJECT_RECORD.md`, `AGENTS.md`, and `docs/superpowers/plans/2026-07-13-project-record.md`. This is not recommended because it would remove the restored project context and maintenance policy.
- Related commit: Not committed
- Follow-up work: Use this ledger for every subsequent edit; establish a labeled capture protocol before selecting final gun-detection rules

### 2026-07-13 - Fix the current operating envelope at 0.30-1.50 metres

- Status: Implemented; hardware threshold validation pending
- Requested by: User, following mmWave Demo Visualizer configuration and a gun-present observation at approximately 1.1 m
- Objective: Make the balanced 32-loop profile the fixed configuration for current testing, calibration, and deployment, with a 0.30-1.50 m operating envelope
- Files changed: `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`; `PROJECT_RECORD.md`
- Symbols/settings changed: `aoaFovCfg -1 -45 45 -45 45`; `cfarFovCfg -1 0 0.30 1.50`; balanced-profile header comment; Current Verified Baseline; Project file roles; Range-profile relative power; Radar Configuration Baseline; Rule-Based Detection Direction; Git History Reconstruction; Change Ledger
- Previous behavior: The committed balanced profile used a 0.30-2.50 m range FOV and +/-25 degree elevation FOV. Its header described that older envelope. The project record also described 0.30-2.50 m and did not define a fixed calibration/deployment range for this phase.
- New behavior: The balanced profile limits range detections to 0.30-1.50 m and uses +/-45 degree azimuth and elevation FOV. The record defines that exact profile and envelope as mandatory for current captures, calibration, tuning, validation, and deployment. Future distance extension is deferred to a separate validation cycle.
- Detailed implementation: Preserved the user's radar-command edits, corrected the profile header so it matches the active commands, updated the documented baseline configuration, recorded the phase-specific range decision, and documented the user's approximately 1.1 m / approximately 98 relative-dB gun observation with an explicit unverified-evidence qualifier. The record also notes that firmware `RANGE_MAX` remains 3.00 m until the planned detector implementation aligns it.
- Reason and evidence: Relative range-profile power, point density, and SNR depend on radar configuration and range. Locking one profile and one operating envelope is necessary before deriving empirical rule thresholds. The user confirmed that this balanced profile produced the current successful Visualizer observation.
- System impact: Changes radar angular/range acceptance when this `.cfg` is loaded and narrows the scope of calibration and deployment claims. No ESP32 parsing, classification, temporal confirmation, LED, or buzzer logic changed. Documentation now matches the selected radar commands.
- Risks and trade-offs: Targets beyond 1.50 m are intentionally excluded for this phase. The wider elevation FOV can admit more off-axis clutter. A strong relative-power return is not unique to a gun, and the reported approximately 98 value cannot be used as a standalone threshold without labeled negative captures and range-band normalization.
- Verification performed: Inspected `git diff` for the balanced profile; read the complete active `.cfg`; checked the documented profile values against `profileCfg`, `frameCfg`, both `cfarCfg` commands, `clutterRemoval`, `aoaFovCfg`, and both `cfarFovCfg` commands; ran `git diff --check` after the documentation update.
- Verification results: Static inspection confirms 32 loops, 100 ms frames, 14 dB range/Doppler CFAR settings, clutter removal disabled, 0.30-1.50 m range FOV, and +/-45 degree azimuth/elevation FOV. No firmware compile, flash, fresh serial capture, or controlled false-positive test was performed by Codex for this documentation/configuration update.
- Hardware validation required/completed: User-reported observation only: a gun was detected by the mmWave Demo Visualizer at approximately 1.1 m with approximately 98 relative dB. Required follow-up is a saved, labeled capture set across 0.30-1.50 m for gun, empty-scene, non-metal, and difficult metal-negative cases.
- Rollback procedure: Restore `aoaFovCfg -1 -45 45 -25 25` and `cfarFovCfg -1 0 0.30 2.50` in the balanced profile, restore its previous header, and append a superseding ledger entry that removes the phase-specific 1.50 m constraint.
- Related commit: Not committed
- Follow-up work: Complete and approve the hybrid geometry/shape, range-normalized power, and temporal-confirmation design; then align firmware range filtering and implement diagnostic capture support before choosing final thresholds

### 2026-07-13 - Supersede the operating envelope with a 3.50-metre deployment target

- Status: Configuration and record updated; firmware implementation and controlled hardware validation pending
- Requested by: User, based on a changed deployment goal and long-range mmWave Demo Visualizer observations
- Objective: Extend the fixed testing, calibration, and deployment envelope from 0.30-1.50 m to 0.30-3.50 m and preserve the evidence and known firmware blockers before detector tuning
- Files changed: `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`; `PROJECT_RECORD.md`; the user reported a new `output.md` capture, but the saved file remained unchanged during inspection and was not edited by Codex
- Symbols/settings changed: `cfarFovCfg -1 0 0.30 3.50`; balanced-profile header comment; Project file roles; Range-profile relative power; Radar Configuration Baseline; Rule-Based Detection Direction; Change Ledger
- Previous behavior: The immediately preceding phase decision limited the balanced profile and all calibration/deployment claims to 0.30-1.50 m. Firmware `RANGE_MAX=3.00 m`, and DBSCAN's configured six-neighbor rule effectively required seven total points.
- New behavior: The balanced radar profile allows range detections from 0.30 m through 3.50 m, and the record defines 3.50 m as the current deployment target. Firmware remains unchanged and therefore still cannot process targets beyond 3.00 m or form a DBSCAN cluster from only five or six total points.
- Detailed implementation: Preserved the user's change from `cfarFovCfg -1 0 0.30 1.50` to `cfarFovCfg -1 0 0.30 3.50`, corrected the profile header, superseded current-state documentation that declared the 1.50 m envelope, and recorded the reported long-range power values with explicit provenance. Source inspection identified two independent pre-classifier blockers: range filtering at 3.00 m and DBSCAN's exclusion of the seed point when enforcing `DBSCAN_MIN_POINTS=6`.
- Reason and evidence: The deployment goal now requires LED and buzzer activation for a gun through 3.50 m. The user reported approximately 80.21 relative dB at approximately 3.3 m and 77.54 relative dB at approximately 3.2 m with only approximately five to six detected points. Static firmware inspection confirmed `RANGE_MAX=3.0`, `DBSCAN_MIN_POINTS=6`, seed exclusion in both neighborhood loops, and `MIN_CLUSTER_POINTS`, `MIN_POINTS_FOR_OUTPUT`, and `MIN_POINTS_FOR_VALID_OBJECT` all equal to six.
- System impact: Loading the updated `.cfg` permits the radar to report detections out to 3.50 m. No ESP32 parser, range filter, clusterer, descriptor, matching, alert, LED, or buzzer behavior changed, so the configuration change alone cannot satisfy the new deployment goal.
- Risks and trade-offs: Extending range and accepting sparse clusters will increase clutter and false-cluster exposure. Five-point clusters cannot provide the current thickness/planarity features, which are forced to zero below ten points, and are poorly matched to close-range calibration profiles. Relative power also falls with range and is not unique to guns, so a fixed 77.54 or 80.21 threshold would be unsafe without negative-object captures and local-background or range-band normalization.
- Verification performed: Read `PROJECT_RECORD.md`; ran `git status --short --branch`; inspected the balanced-profile diff and complete current file; inspected saved `output.md` metadata, tail, long-range-value searches, and diagnostic counts; inspected firmware constants and source for range filtering, DBSCAN neighborhood semantics, minimum cluster/output/validity gates, and range-profile lookup.
- Verification results: The radar profile contains `cfarFovCfg -1 0 0.30 3.50`. Firmware source still contains `RANGE_MAX=3.0`; a point outside that range increments `rangeRejected` and is discarded. DBSCAN omits the seed point and requires six neighbors, so at least seven total nearby points are needed. The saved 165,996-byte `output.md` was last modified at 10:55:48 and contains the earlier approximately 1.0 m capture; it contains no 3.2-3.3 m target record or reported 77.54/80.21 values. An untracked `.output.md.kate-swp` last modified at 12:39:06 was observed but not read or modified.
- Hardware validation required/completed: User-reported Visualizer observations only. Required next evidence is a saved long-range serial capture showing raw/filtered counts, range rejections, DBSCAN failures, range-profile power, SNR, and point geometry at multiple distances through 3.50 m, followed by gun-absent and metal-negative captures under the same profile.
- Rollback procedure: Restore `cfarFovCfg -1 0 0.30 1.50` and the 1.50 m profile header, then append a new superseding ledger entry that reinstates the earlier deployment envelope. Do not rewrite either historical range-decision entry.
- Related commit: Not committed
- Follow-up work: Save the current editor capture to `output.md`; approve a sparse long-range hybrid detection design; then implement firmware range alignment, corrected DBSCAN minimum-point semantics, range-aware power evidence, temporal confirmation, diagnostics, and controlled false-positive testing

### 2026-07-13 - Ingest the saved 3.2-3.3-metre firmware rejection capture

- Status: Verified diagnostic evidence; no detector fix implemented
- Requested by: User hardware experiment; the editor saved `output.md` during the investigation
- Objective: Replace the earlier unsaved-capture assumption with exact firmware evidence and quantify where the long-range gun-present frames are rejected
- Files changed: `output.md` replaced by the user's saved capture; `PROJECT_RECORD.md` current-state evidence and Change Ledger updated
- Symbols/settings changed: No firmware symbol or radar command changed; `output.md` evidence; Project file roles; Range-profile relative power; Change Ledger
- Previous behavior: The repository still held the older approximately 1.0 m output capture when the first long-range inspection ran. The 3.2-3.3 m behavior and reported 77.54/80.21 relative-dB values were available only through the user's description and an active editor swap file.
- New behavior: `output.md` now contains the saved long-range firmware diagnostics. The record quantifies 74 complete range-rejection records and eight DBSCAN failures and retains the power values as Visualizer-only observations because the firmware never created a track from which it could print TLV-2 power.
- Detailed implementation: Parsed both diagnostic formats in the saved capture. For `raw, 0 accepted` records, counted frame IDs, raw points, range rejections, unknown-SNR rejections, and low-SNR rejections. For `filtered points, no DBSCAN cluster` records, counted frame IDs and per-frame point totals. Searched for object, candidate, power, identity, and alert output. Updated only documentation around the user-provided capture; did not alter `output.md` contents.
- Reason and evidence: The saved capture directly identifies the failure stage. Across 74 frames, all 651 raw points were rejected specifically for range, with zero unknown-SNR or low-SNR rejections. Eight other frames supplied 1, 1, 1, 2, 2, 3, 4, or 6 filtered points; the six-point frame still failed because DBSCAN requires six other neighbors, effectively seven total points.
- System impact: Converts the long-range diagnosis from an inference into saved firmware evidence. No parser, filter, clusterer, classifier, LED, buzzer, timing, memory, calibration, or radar runtime behavior changed.
- Risks and trade-offs: The capture does not contain raw point coordinates, raw TLV-2 bins, object descriptors, or negative-object cases, so it cannot establish the correct DBSCAN radius, power threshold, false-positive rate, or gun/non-gun separation. Radar frames 4192-4196 are absent, and frame 4191 reports an anomalous fifth TLV type while `malformed=no`; neither issue changes the dominant range-filter diagnosis but both remain diagnostic caveats.
- Verification performed: Read the complete saved `output.md`; searched all event and diagnostic lines; parsed the two rejection formats with a read-only Python script; counted frame records and per-reason point totals; searched for long-range power, object, match, gun, and alert output; ran `git diff --check` after updating the record.
- Verification results: The capture has 82 diagnostic records covering radar frames 4134-4220 with five absent frame numbers. Seventy-four records reject 651 of 651 raw points for range. Eight records pass 20 total points to DBSCAN but produce no cluster; the largest contains six points. There are zero displayed object frames and therefore zero firmware relative-power, calibration-candidate, gun-detection, LED-alert, or buzzer-alert lines.
- Hardware validation required/completed: Hardware capture completed for the current unmodified firmware's failure mode. After implementation, repeat gun-present tests at 0.30, 1.0, 2.0, 3.0, 3.2, 3.3, and 3.5 m and collect empty-scene plus non-metal and difficult metal-negative captures at the same bands.
- Rollback procedure: Restore the prior committed `output.md` if the project needs the earlier close-range capture as the primary artifact, and append a new ledger entry explaining which capture is authoritative. Revert the current-state capture descriptions without deleting either historical evidence entry.
- Related commit: Not committed
- Follow-up work: Approve a design that first aligns the range filter and corrects sparse-cluster semantics, then adds long-range diagnostics and range-aware power evidence before calibrating alert thresholds

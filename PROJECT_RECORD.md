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

- Baseline date: 2026-07-15
- Branch: `BEFORE_CONFIG_TWEAKS`
- Baseline commit: `1260415` (`somewhat_satisfactory_results`)
- Remote state before the current edit: `BEFORE_CONFIG_TWEAKS...origin/BEFORE_CONFIG_TWEAKS`
- Working tree before the 2026-07-15 tuning edit: the uncommitted 2026-07-14 operating-policy changes remained present; the firmware also contained user-set `LED_PIN=2` and `BUZZER_PIN=38`; the user supplied new `outputs/only_human_present.md` and `outputs/human_with_gun.md` captures; unrelated `.claude/` and `IWR_Config.md` paths were left untouched
- Canonical detection firmware: `parsing_detailed/parsing_detailed.ino`
- Firmware build or hardware test performed during reconstruction: no; the reconstruction was read-only
- Latest baseline commit purpose: retain the later five-capture concealed/open gun tuning, 0.08 m width minimum, five-of-seven signature window, continuously refreshed alert, and updated `outputs/gun_present_open.md`; those later firmware commits did not update this record and are reconciled by the 2026-07-14 ledger entry

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
| `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg` | Fixed profile for the current detection phase: 32 loops, 14 dB range and Doppler CFAR, 0.50-3.00 m range FOV, and +/-30 degree azimuth/elevation FOV. The current relative-power conversion assumes this profile. |
| `cfg_profiles/iwr6843aop_gun_high_sensitivity_64loops_12db.cfg` | Higher-sensitivity profile: 64 loops, 12 dB range and Doppler CFAR. |
| `oprimized_config.cfg` | Older experimental profile using 48 loops, 50 ms frames, clutter removal, wider angular FOV, and a 0.10–2.00 m range FOV. |
| `xwr68xx_AOP_profile_2026_01_29T17_01_51_013.cfg` | Earlier Visualizer-generated 16-loop profile. |
| `output.md` | Latest user-saved gun-present capture near 3.0 m from the long-range signature firmware. Stable track 1144 supplies 64 consecutive `gun`-candidate samples that expose the original maximum-length/width rejection. It contains no negative-object cases. |
| `fixes_plan.md` | Earlier repair plan. Some items were implemented and some were not. It is not the source of truth for current behavior. |
| `detection_fix_plan.md` | Later tuning/repair proposal. Several recommendations were superseded or remain unimplemented. |
| `docs/superpowers/specs/2026-07-11-relaxed-point-thresholds-design.md` | Approved design that retained `DBSCAN_EPS=0.15 m` and aligned four point-count gates at six. |
| `docs/superpowers/plans/2026-07-11-relaxed-point-thresholds.md` | Implementation plan for the six-point threshold change. |
| `docs/superpowers/specs/2026-07-13-long-range-clustering-design.md` | Approved 3.50 m clustering design: processing margin, five-total-point semantics, adaptive epsilon bands, and diagnostic requirements. |
| `docs/superpowers/plans/2026-07-13-long-range-clustering.md` | Implementation and verification checklist for the approved long-range clustering stage. |
| `tests/test_long_range_clustering_policy.py` | Source-contract regression tests for the range margin, five-point gates, seed-inclusive DBSCAN, adaptive epsilon policy, and no-cluster diagnostics. |
| `docs/superpowers/specs/2026-07-13-long-range-alert-signature-design.md` | Design and evidence bounds for the scenario-specific 2.70-3.60 m gun signature. |
| `docs/superpowers/plans/2026-07-13-long-range-alert-signature.md` | Implementation and validation checklist for the long-range alert stage. |
| `docs/superpowers/plans/2026-07-13-expand-long-range-geometry.md` | Approved and completed red-green plan for expanding only the disproven long-range length/width maxima. |
| `tests/test_long_range_alert_policy.py` | Capture-replay and source-contract tests for base long-range gates, per-track base and shape-Doppler histories, human-only rejection, human-with-gun retention, and alert-path integration. |
| `docs/superpowers/specs/2026-07-14-concealed-gun-operating-envelope-design.md` | Approved design for the next implementation: 0.50-3.00 m deployment FOV, +/-30 degree angular FOV, conservative candidate/motion gates, preserved 80-relative-dB floor, processing margin, and diagnostic-only motion-coherence measurements. |
| `docs/superpowers/plans/2026-07-14-concealed-gun-operating-envelope.md` | TDD implementation plan for the approved concealed-detection profile, firmware constants, capture replay, diagnostic Doppler coherence, documentation, and verification. |
| `outputs/only_human_present.md` | User-supplied human-only development capture near 2.0-2.2 m. Its dominant track 1756 demonstrates that the base five-of-seven signature can false-confirm a person-sized cluster. |
| `outputs/human_with_gun.md` | User-supplied human-with-gun development capture near 2.0-2.2 m. Its dominant track 1756 supplies the positive comparison for the secondary shape-Doppler gate. |
| `docs/superpowers/plans/2026-07-15-human-gun-shape-doppler-gate.md` | Test-first implementation and verification plan for the two-history human-vs-gun scenario gate. |

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
| Alert LED | GPIO2; pre-existing user working-tree setting observed before the 2026-07-15 detector tuning |
| Active buzzer | GPIO38; pre-existing user working-tree setting observed before the 2026-07-15 detector tuning |
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

- Euclidean range is at least 0.45 m and at most 3.10 m. The radar deployment envelope is 0.50-3.00 m; the extra 0.05 m below and 0.10 m above are processing margins for quantization and point jitter.
- Side-information SNR is available.
- Raw SNR is at least 20.

The filter records input and accepted range extrema plus range, unknown-SNR, and low-SNR rejection counts for diagnostics.

### 4. DBSCAN clustering

- Neighborhood radius: strictly less than 0.15 m through 1.50 m, 0.20 m above 1.50 m through 2.50 m, and 0.25 m beyond 2.50 m.
- Configured minimum: 5 total points including the seed.
- Minimum retained cluster size: 5.

The implementation includes the point itself in both initial and expansion neighborhood lists, matching conventional DBSCAN `minPoints` semantics. On a no-cluster frame it reports accepted range, epsilon range, maximum total-neighbor count, and number of core candidates.

Cluster centroid is the arithmetic mean of all DBSCAN-assigned points.

### 5. Descriptor extraction

1. Calculate each point’s distance from the untrimmed cluster centroid.
2. Find the median distance.
3. Retain points whose distance is strictly less than 2.5 times that median.
4. Require at least five trimmed points.
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

Early returns occur before `tracker.update()`, so legacy track age and calibration counters still freeze. A successfully parsed radar frame that has no points, no accepted points, no cluster, or no descriptor calls `recordLongRangeGunMissAllTracks()`. That helper pushes `false, false` through `pushLongRangeGunObservation()` for every active track, shifting one miss into both the base and secondary seven-observation histories without clearing the remaining history. A UART read that produces no complete radar frame does not shift either history.

### 7. Calibration matching and alerting

After enough valid detections, the tracker averages recent descriptor fields and compares the result with every object in the SPIFFS calibration JSON. The nearest calibration record becomes the displayed candidate even when it is outside the acceptance threshold.

The original calibration-confirmed alert path requires all of the following:

1. A usable measured track that is not ghost or low-quality.
2. At least six valid-quality associated descriptors before matching begins.
3. A nearest calibration distance below 0.25 for `findMatch()` to return a match.
4. A stricter distance below 0.20 to acquire a new identity.
5. At least ten high-quality detections for confirmed state.
6. Calibration key equal to `gun`, case-insensitively.
7. Track state equal to `CONFIRMED`.

The current scenario-specific path is independent of identity acquisition and maintains two per-track seven-observation histories. The base history requires at least five passing observations. Each base pass requires: a valid descriptor; nearest candidate `gun`; candidate distance at most 0.48; range 0.50-3.00 m; available range-profile power of at least 80.0 relative dB; length 0.15-0.80 m; width 0.08-0.55 m; raw mean SNR at least 118; raw peak SNR at least 140; peak absolute radial velocity at most 0.13 m/s; absolute Z at most 0.50 m; quality at least 80%; and at least five descriptor points. The secondary history records only base-passing frames whose planarity is at least 0.75, flatness is at most 0.20, and trimmed radial-velocity standard deviation is at least 0.052 m/s; at least one secondary hit is required in the same seven-observation window. A failed or unmeasured update shifts a miss into both histories. Final scenario confirmation requires both history conditions. The original calibration-confirmed path remains independent and can still activate the same LED/toggling-buzzer alert; continuing detection refreshes the three-second expiry.

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

Range-profile power remains excluded from point filtering, descriptor validity/quality, calibration distance, and the original identity-confirmation path. It now participates only as one mandatory input to the bounded long-range signature. Missing TLV 2 fails that frame's long-range evidence.

On 2026-07-13, the user reported that the updated balanced profile detected the gun at approximately 1.1 m with approximately 98 relative dB in the mmWave Demo Visualizer. This is a user-reported hardware observation, not an independently verified measurement or a committed labeled capture. It must not be treated as a final gun threshold: range, orientation, clutter, competing objects, and the global range-profile ambiguity can all change the value.

Later on 2026-07-13, the user changed the target deployment distance to 3.5 m and reported mmWave Demo Visualizer observations of approximately 80.21 relative dB at approximately 3.3 m and 77.54 relative dB at approximately 3.2 m. Those two values remain user-reported Visualizer observations.

The previous committed positive capture near 3.0 m shows stable track 99 with range 3.0128-3.0130 m, power 81.53-81.81 relative dB, raw mean SNR 134.556-159.667, length 21.97-25.00 cm, width 10.26-10.77 cm, point count 9, quality 91-92%, and 52 nearest-candidate `gun` distances of 0.4927-0.4982.

The latest user-saved `output.md` at approximately the same placement contains 64 consecutive stable track-1144 `gun` candidates. Range is 3.0298-3.0467 m, power is 83.57-83.85 relative dB, raw mean SNR is 140.067-158.000, length is 42.94-48.89 cm, width is 10.02-47.35 cm, point count is 12-15, quality is 84-90%, and candidate distance is 0.3381-0.3710. All 64 frames passed every original long-range gate except length; all failed the 30 cm maximum, and 61 also failed the 16 cm width maximum. No early-return radar diagnostics interrupted the displayed sequence. These two positive captures demonstrate horizontal DBSCAN footprint variability but still do not measure false-positive performance.

### Velocity

- Radial mean: arithmetic mean of signed sensor Doppler velocities over the untrimmed cluster.
- Radial peak: largest absolute sensor Doppler magnitude; its sign is discarded.
- Radial standard deviation: population standard deviation of signed Doppler velocities whose point indices survive the geometry outlier trim.
- Radial span: maximum minus minimum signed Doppler velocity across those trimmed velocities.
- Track X/Y/Z velocity: centroid displacement multiplied by 10.

The track-velocity calculation assumes measurements are exactly 100 ms apart. Skipped frames or profiles with different frame periods cause incorrect magnitude estimates. Radial peak remains the base signature's active maximum-motion gate. Trimmed radial standard deviation is an active input only to the secondary shape-Doppler evidence gate. Track velocity and radial span remain telemetry-only.

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

Because accepted clusters may have as few as five points, zero can mean “insufficient samples” rather than a measured zero. In the user-provided nine-point sample, `planarity=0` and `thickness=0` are unavailable-feature sentinels despite nonzero bounding-box dimensions.

The planarity approximation is axis-dependent and can score line-like clouds as highly planar. It is not a full PCA plane fit.

### Quality and validity

Descriptor validity requires all of the following:

| Gate | Current threshold |
|---|---|
| Trimmed points | At least 5 |
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

For the reconstructed nine-point sample, the old six-point firmware printed 89%. With the current five-point denominator, the same values would produce:

```text
point score   = 9 / 5 * 50 = 90
spread score  = 100 * (1 - 0.1257 / 0.6) = 79.05
SNR score     = capped at 100
density score = capped at 100
quality       = (90 + 79.05 + 100 + 100) / 4 = 92.26%, displayed as 92%
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

For accepted points that fail clustering, the current firmware prints:

```text
acceptedRange=min-max m epsRange=min-max m minPts=5 total maxNeighbors=N coreCandidates=N
```

`acceptedRange` is the Euclidean range span after filtering. `epsRange` shows which adaptive bands were used. `maxNeighbors` counts the seed point and is the largest neighborhood in the frame. `coreCandidates=0` proves no point reached the five-total-point density gate; a positive value with no retained cluster indicates a clustering/retention defect that requires source investigation.

## Current Detection Rules

### Point and cluster gates

```text
RANGE_MIN                         = 0.45 m processing limit (0.50 m deployment boundary)
RANGE_MAX                         = 3.10 m processing limit (3.00 m deployment boundary)
MIN_SNR                           = 20 raw (~2.0 dB)
DBSCAN_EPS_NEAR                   = 0.15 m through 1.50 m
DBSCAN_EPS_MID                    = 0.20 m through 2.50 m
DBSCAN_EPS_FAR                    = 0.25 m beyond 2.50 m
DBSCAN_MIN_POINTS                 = 5 total points including seed
MIN_CLUSTER_POINTS                = 5
MIN_POINTS_FOR_OUTPUT             = 5
MIN_POINTS_FOR_VALID_OBJECT       = 5
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

### Scenario-specific long-range gun gates

```text
LONG_RANGE_GUN_MIN_RANGE              = 0.50 m
LONG_RANGE_GUN_MAX_RANGE              = 3.00 m
LONG_RANGE_GUN_MIN_POWER_DB           = 80.0 relative dB
LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE = 0.48
LONG_RANGE_GUN_MIN_LENGTH             = 0.15 m
LONG_RANGE_GUN_MAX_LENGTH             = 0.80 m
LONG_RANGE_GUN_MIN_WIDTH              = 0.08 m
LONG_RANGE_GUN_MAX_WIDTH              = 0.55 m
LONG_RANGE_GUN_MIN_MEAN_SNR           = 118 raw (~11.8 dB)
LONG_RANGE_GUN_MIN_PEAK_SNR           = 140 raw (~14.0 dB)
LONG_RANGE_GUN_MAX_ABS_VELOCITY       = 0.13 m/s
LONG_RANGE_GUN_MAX_ABS_Z              = 0.50 m
LONG_RANGE_GUN_MIN_QUALITY            = 80%
LONG_RANGE_GUN_MIN_POINTS             = 5
LONG_RANGE_GUN_REQUIRED_HITS          = 5 passing observations
LONG_RANGE_GUN_HIT_WINDOW             = 7 evaluated observations
LONG_RANGE_GUN_MIN_PLANARITY          = 0.75 secondary evidence
LONG_RANGE_GUN_MAX_FLATNESS           = 0.20 secondary evidence
LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV    = 0.052 m/s secondary evidence
LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS = 1 observation in the same 7-observation window
```

`longRangeGunConfirmed` is true only when the base history has at least five hits and the secondary shape-Doppler history has at least one hit. The secondary condition is evaluated only on a frame that already passes every base gate.

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
range FOV:        0.50 to 3.00 m
azimuth FOV:      -30 to +30 degrees
elevation FOV:    -30 to +30 degrees
clutter removal:  disabled
GUI outputs:      detected points, range profile, side information/statistics
```

The 0.50-3.00 m range supersedes the earlier 0.30-3.50 m decision and is the fixed testing, calibration, and deployment envelope for the current project phase. The radar CFAR range FOV accepts 0.50-3.00 m, and the ESP32 point filter accepts 0.45-3.10 m so edge jitter is not rejected prematurely.

Switching to the 16-, 48-, or 64-loop profiles changes Doppler processing, sensitivity, point-cloud density, and relative-power compensation. Any rule thresholds derived under one profile must record the exact profile and must not be assumed transferable.

## Known Limitations and Unresolved Risks

1. **Raw SNR unit mismatch:** code and output use 0.1 dB raw units while thresholds resemble whole-dB values.
2. **Adaptive clustering needs hardware validation:** the 0.15/0.20/0.25 m bands and five-total-point minimum are source-verified starting values but can merge clutter or fragment targets under real placement conditions.
3. **Sparse-feature sentinels:** planarity/thickness are zero below 10 points, bimodality below 20, and density variance below 30. Because the active secondary gate requires planarity at least 0.75, a scenario track cannot confirm until at least one base-passing frame in its current window contains ten or more trimmed descriptor points.
4. **Calibration/runtime mismatch:** PCA-based Python features differ from ESP32 axis-based features.
5. **Unused confirmation setting:** `MIN_POINTS_FOR_CONFIRMED_MATCH=15` is never referenced.
6. **Mislabelled score:** the quality line prints a previous match distance or sentinel.
7. **Misleading candidate threshold:** printed 0.25 is not the stricter 0.20 entry threshold.
8. **Ineffective exit hysteresis:** matches at 0.25 or above are cleared before the 0.40 exit threshold can retain them.
9. **Fixed-rate track velocity:** multiplying displacement by 10 ignores skipped frames and other frame periods.
10. **Legacy temporal state freezes across early returns:** calibration/tracker “consecutive” counters are not strictly consecutive radar frames. The scenario signature separately shifts one miss into its seven-observation history on parsed radar frames rejected before tracking.
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
24. **No automated packet fixtures or Arduino build tests:** source-contract and text-capture replay tests exist, but they do not compile the sketch or replay binary UART packets.
25. **Development-pair tuning is not validation:** the secondary gate was selected from one human-only and one human-with-gun capture near 2.0-2.2 m, while the older capture set is positive-only and lacks the new Doppler-standard-deviation telemetry. These data cannot establish sensitivity, specificity, false-alert rate, or cross-range/orientation performance. The beyond-3.00 m under-cloth capture remains out of scope rather than a negative.
26. **Long-range power is not object-isolated:** another reflector at a similar range can supply the TLV-2 peak used by a track and help a false candidate pass.
27. **Secondary shape-Doppler overfit risk:** planarity and flatness are axis-dependent sparse-cluster estimates, and the 0.052 m/s lower standard-deviation bound reflects this one development pair. Different people, clothing, gun placement, orientation, or motion can remove the secondary hit and cause a false negative; difficult non-gun objects can still reproduce it.

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

The current concealed-gun signature is a provisional, scenario-specific rule that requires five passing observations in a seven-observation window and combines candidate, range, power, broad geometry, raw SNR, peak radial velocity, Z, quality, and point-count gates. Its broad geometry maxima intentionally tolerate footprint changes observed across gun-present captures. Future revisions should normalize or stratify range-dependent power, explicitly handle missing shape features, and measure false positives as well as detection rate.

The implemented policy uses a 0.50-3.00 m deployment FOV, +/-30 degree azimuth/elevation FOV, 0.45-3.10 m ESP32 processing margin, candidate distance at most 0.48, preserved 80.0-relative-dB power floor, and peak absolute radial velocity at most 0.13 m/s. Existing geometry, SNR, quality, point-count, and adaptive-clustering gates remain unchanged. Scenario confirmation now requires both five base passes and one planar/flat/Doppler-standard-deviation secondary hit in the same seven-observation window. Radial span remains diagnostic-only.

For the current phase, all labeled captures, power bands, calibration profiles, acceptance tests, and deployment claims must cover 0.50-3.00 m using `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`. Relative power remains supporting metal evidence rather than sufficient proof of a gun, because other metal objects can also produce strong returns. Rules must explicitly handle five-to-six-point returns and the lack of shape features that are forced to zero below ten points.

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

### 2026-07-13 - Implement range-adaptive five-point long-range clustering

- Status: Implemented and source-contract verified; firmware build, flash, and hardware validation pending
- Requested by: User, after the radar produced approximately nine to ten long-range gun-present points but firmware still reported no DBSCAN cluster
- Objective: Allow sparse returns to form diagnosable clusters through the 3.50 m deployment boundary without relaxing calibration identity or alert thresholds
- Files changed: `parsing_detailed/parsing_detailed.ino`; `tests/test_long_range_clustering_policy.py`; `docs/superpowers/specs/2026-07-13-long-range-clustering-design.md`; `docs/superpowers/plans/2026-07-13-long-range-clustering.md`; `PROJECT_RECORD.md`
- Symbols/settings changed: `RANGE_MAX`; `DBSCAN_EPS_NEAR`; `DBSCAN_EPS_MID`; `DBSCAN_EPS_FAR`; `DBSCAN_NEAR_RANGE_MAX`; `DBSCAN_MID_RANGE_MAX`; `DBSCAN_MIN_POINTS`; `MIN_CLUSTER_POINTS`; `MIN_POINTS_FOR_OUTPUT`; `MIN_POINTS_FOR_VALID_OBJECT`; `FilterDiagnostics`; new `DbscanDiagnostics`; new `adaptiveDbscanEps()`; `filterPoints()`; `clusterDBSCAN()`; zero-accepted and no-cluster serial diagnostics; Project file roles; Runtime Data Flow; Metric Reference; Current Detection Rules; Radar Configuration Baseline; Known Limitations; Change Ledger
- Previous behavior: Firmware rejected points beyond 3.00 m. DBSCAN used one fixed 0.15 m radius, excluded the seed, and required six other neighbors, so a core point effectively needed seven total points. Cluster retention, descriptor output, and validity each required six points. No-cluster output exposed only filtered count, fixed epsilon, and configured minimum, so it could not distinguish sparse neighborhoods from range-dependent point dispersion.
- New behavior: Firmware processes through 3.60 m while the radar/deployment boundary remains 3.50 m. DBSCAN uses 0.15 m through 1.50 m, 0.20 m above 1.50 m through 2.50 m, and 0.25 m beyond 2.50 m. Neighborhoods include the seed and require five total points. Cluster retention, descriptor output, and validity require five points. Failure output reports input/accepted range spans, adaptive epsilon span, maximum total neighbors, and core-candidate count.
- Detailed implementation: Added named adaptive-policy constants and `adaptiveDbscanEps(float)`. Extended filtering diagnostics with input and accepted range extrema. Added a read-only DBSCAN diagnostic prepass that measures the epsilon bands and total-neighbor density for every filtered point, including frames too sparse to cluster. Removed both seed-exclusion branches so initial and expansion neighborhoods use conventional total-point semantics. Passed `DbscanDiagnostics` through the clustering call and expanded serial failure messages. Added an approved design, executable implementation plan, and Python source-contract regression suite. Calibration distance, match thresholds, temporal gates, LED control, buzzer control, and relative-power classification were intentionally unchanged.
- Reason and evidence: The saved long-range capture showed 651 points rejected at the old 3.00 m filter and a separate six-filtered-point frame that could not satisfy the effective seven-point DBSCAN rule. The user then reported approximately nine to ten radar points near 3 m with no cluster. Point separation grows with range for a fixed angular separation, so a bounded range-adaptive radius is safer than globally increasing epsilon.
- System impact: Long-range point sets can now reach clustering and descriptor generation. The five-point minimum and far-range 0.25 m radius increase sensitivity and false-cluster exposure. Extra diagnostic work is an O(n squared) prepass in addition to DBSCAN's existing O(n squared) searches; expected point counts are small, but ESP32 timing must be observed. Classification and alert behavior remain unchanged, so cluster formation alone does not guarantee a gun match or buzzer/LED activation.
- Risks and trade-offs: Far-range clutter can merge within 0.25 m, five-point noise groups can become candidates, and outlier trimming can still reduce a five-point cluster below five. Sparse descriptors still force planarity/thickness to zero below ten points, bimodality below twenty, and density variance below thirty; current calibration distance still treats those sentinels as numeric values. The source-contract tests do not compile C++ or validate Arduino library compatibility.
- Verification performed: Created the regression test before firmware edits; ran `python -m unittest tests.test_long_range_clustering_policy -v` against the old firmware; implemented the minimum behavior; reran the same command; searched all `DBSCAN_EPS` and `clusterDBSCAN(` references; inspected available build commands with PowerShell `Get-Command`; ran `git diff --check`; compared protected calibration, temporal, LED, buzzer, and alert constants between `HEAD` and the working firmware; counted opening/closing braces; inspected Git status and the working-tree diff.
- Verification results: The red run exited 1 with all five test methods failing and 16 failing assertions/subtests for the absent policy. The first combined final verifier stopped after a naive string count treated the mandatory plan header's inline checkbox example as an unfinished task; firmware tests and `git diff --check` had already passed in that run. The corrected line-anchored verifier exited 0: five tests passed in 0.003 seconds, `git diff --check` returned 0 with only Git line-ending warnings, protected constants reported an empty changed list, brace counts matched at 259 opening and 259 closing braces, and zero actual checklist lines remained unchecked. No `g++`, `clang++`, or `arduino-cli` command was available in the workspace shell, so no firmware compilation was performed.
- Hardware validation required/completed: Required and not yet performed on the modified firmware. Flash `parsing_detailed/parsing_detailed.ino`, retain the balanced 32-loop 0.30-3.50 m profile, and capture gun-present output near 1.0, 2.0, 3.0, 3.3, and 3.5 m. For any no-cluster frame, preserve the new range, epsilon, neighbor, and core-candidate fields. Also run an empty scene before using the new cluster policy as a basis for alert tuning.
- Rollback procedure: Restore `RANGE_MAX=3.0`, fixed `DBSCAN_EPS=0.15`, seed-excluding neighborhood loops, and the four six-point gates; remove the new diagnostics/tests/spec/plan; restore affected current-state documentation; append a superseding rollback ledger entry rather than deleting this history.
- Related commit: Not committed
- Follow-up work: Hardware-test cluster formation first. If stable tracks appear, use their saved range-profile, SNR, geometry, point-count, and temporal data to design the separate range-aware gun evidence and LED/buzzer activation stage.

### 2026-07-13 - Add a temporally confirmed 3-metre gun alert signature

- Status: Implemented and source/capture-contract verified; Arduino compilation, flashing, negative-case testing, and hardware alert validation pending
- Requested by: User, after saving a new gun-present `output.md` near 3 m on branch `BEFORE_CONFIG_TWEAKS`
- Objective: Make the existing GPIO11 LED and GPIO12 buzzer activate for repetitions of the captured long-range gun scenario while avoiding a global relaxation of the original calibration matcher
- Files changed: `parsing_detailed/parsing_detailed.ino`; `tests/test_long_range_alert_policy.py`; `docs/superpowers/specs/2026-07-13-long-range-alert-signature-design.md`; `docs/superpowers/plans/2026-07-13-long-range-alert-signature.md`; `PROJECT_RECORD.md`
- Symbols/settings changed: new `LONG_RANGE_GUN_MIN_RANGE`; `LONG_RANGE_GUN_MAX_RANGE`; `LONG_RANGE_GUN_MIN_POWER_DB`; `LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE`; `LONG_RANGE_GUN_MIN_LENGTH`; `LONG_RANGE_GUN_MAX_LENGTH`; `LONG_RANGE_GUN_MIN_WIDTH`; `LONG_RANGE_GUN_MAX_WIDTH`; `LONG_RANGE_GUN_MIN_MEAN_SNR`; `LONG_RANGE_GUN_MIN_QUALITY`; `LONG_RANGE_GUN_MIN_POINTS`; `LONG_RANGE_GUN_REQUIRED_HITS`; new `TrackedObject::consecutiveLongRangeGunHits`; `longRangeGunEvidenceThisFrame`; `longRangeGunConfirmed`; `longRangePowerAvailable`; `longRangePowerDb`; `longRangePowerRange`; `longRangePowerRaw`; new `evaluateLongRangeGunSignature()`; new `resetAllLongRangeGunEvidence()`; tracker initialization; `loop()` early-return resets, match/evidence evaluation, `gunDetected` aggregation, object identity output, and evidence telemetry; Current Verified Baseline; Project file roles; Runtime Data Flow; Calibration matching and alerting; Range-profile relative power; Current Detection Rules; Known Limitations; Rule-Based Detection Direction; Change Ledger
- Previous behavior: Adaptive clustering produced a stable nine-point track near 3.013 m and consistently displayed nearest candidate `gun`, but candidate distance 0.4927-0.4982 exceeded both `SHAPE_DESCRIPTOR_TOLERANCE=0.25` and `MATCH_ENTER_THRESHOLD=0.20`. The firmware therefore never populated `matchedName`, never satisfied the original confirmed-gun condition, and did not activate the LED or buzzer. Relative power was telemetry-only.
- New behavior: The original general matcher and its 0.25/0.20/0.40 thresholds are unchanged. A separate 2.70-3.60 m path passes a measured frame only when the valid descriptor's nearest candidate is `gun`, candidate distance is at most 0.55, relative power is available and at least 75.0 dB, length is 0.18-0.30 m, width is 0.07-0.16 m, raw mean SNR is at least 100, quality is at least 80%, and point count is at least five. Five consecutive passing updates on the same track confirm the signature and feed the existing `gunDetected` alert path.
- Detailed implementation: Added named scenario constants and per-track evidence/power state with explicit initialization. `evaluateLongRangeGunSignature()` selects the strongest TLV-2 bin within the existing +/-2-bin window around track range, applies every gate conjunctively, increments a counter capped at five, and resets the counter and confirmation on any evaluated failure or unmeasured track. `resetAllLongRangeGunEvidence()` additionally clears every active track when a parsed radar frame exits for no points, no accepted points, no cluster, or no descriptor. Evaluation runs after `updateMatchWithHysteresis()` so the nearest candidate is current. Confirmed signature state activates the existing alert manager and prints `GUN DETECTED`, `LONG-RANGE GUN SIGNATURE`, plus per-frame pass/hit/confirmation/power telemetry. Added a capture replay and source-contract test, design record, and implementation plan.
- Reason and evidence: Stable track 99 appears in 53 displayed capture rows; 52 contain a candidate distance. The captured ranges are 3.0128-3.0130 m, powers 81.53-81.81 relative dB, raw mean SNR values 134.556-159.667, lengths 0.2197-0.2500 m, widths 0.1026-0.1077 m, point count 9, quality 91-92%, and `gun` candidate distances 0.4927-0.4982. This proves cluster formation is no longer the blocker and motivates a bounded multi-feature override instead of accepting every calibration candidate below 0.55.
- System impact: A stable track matching the new long-range signature can now activate the existing three-second LED/buzzer alert even when the original calibrated identity is not acquired. Missing TLV 2, one failing gate, or one parsed radar frame rejected before tracking immediately clears consecutive evidence. The added per-track state is small; evaluation reuses the existing bounded range-profile scan. Close-range and non-`gun` candidates continue through the original matcher only.
- Risks and trade-offs: The thresholds are deliberately aggressive and derived from one stationary positive capture. A similarly sized metal object can become nearest candidate `gun`, and the global range-profile peak can come from another reflector at a similar range. Five-hit confirmation suppresses isolated frames but does not prove object identity. The lower 75 dB floor incorporates the user's earlier reported 77.54 dB long-range observation, not a committed negative-separated measurement. False positives and misses across orientation, placement, clutter, and the full 3.50 m boundary remain unknown.
- Verification performed: Wrote the initial replay/source-contract test before constants and integration; ran it against the incomplete implementation; added a tracker-declaration/initialization contract after source inspection found missing C++ fields; observed that focused test fail before the fix; declared and initialized the fields; added and observed a failing early-return reset contract before implementing `resetAllLongRangeGunEvidence()`; ran `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v`; ran `git diff --check`; counted sketch braces; compared protected match, GPIO, and alert constants with `HEAD`; queried `Get-Command` for `arduino-cli`, `g++`, and `clang++`.
- Verification results: The first red alert-policy run exited 1 while the capture replay passed and absent constants/integration produced 17 failing subtests. The focused tracker-state test then exited 1 with 14 failing declaration/initialization subtests, exposing a compile-blocking incomplete edit. The focused rejected-frame reset test also exited 1 before its helper and calls existed. After correction, the combined verifier exited 0: ten tests passed in 0.036 seconds; the replay accepted at least 50 stable track-99 rows; `git diff --check` exited 0 with only line-ending warnings; opening and closing brace counts both equal 268; `SHAPE_DESCRIPTOR_TOLERANCE`, `MATCH_ENTER_THRESHOLD`, `MATCH_EXIT_THRESHOLD`, `LED_PIN`, `BUZZER_PIN`, `ALERT_DURATION`, and `BEEP_PATTERN_FAST` all equal their `HEAD` values. No Arduino/C++ compiler command was available, so no firmware compilation was performed.
- Hardware validation required/completed: Required and not yet completed on this modified firmware. Flash `parsing_detailed/parsing_detailed.ino` while retaining `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg` and the current SPIFFS calibration. With the gun in the captured pose near 3.0 m, verify `Long-range gun evidence` reaches `hits=5/5 confirmed=yes`, `LONG-RANGE GUN SIGNATURE` and `ALERT TRIGGERED` print, GPIO11 goes high, and GPIO12 toggles. Then capture gun-present trials at 2.7, 3.0, 3.3, and 3.5 m plus empty scene, non-metal negatives, and difficult metal negatives such as a phone, tool, keys, plate, and metal box.
- Rollback procedure: Remove the twelve `LONG_RANGE_GUN_*` constants, the seven per-track state fields and their initializers, `evaluateLongRangeGunSignature()`, its `loop()` call, the `longRangeGunConfirmed` alert/telemetry branches, the alert test/spec/plan, and affected current-state documentation. Preserve the adaptive clustering firmware and append a superseding rollback ledger entry rather than deleting this entry.
- Related commit: Not committed
- Follow-up work: Compile and flash immediately, save the resulting serial output, confirm physical LED/buzzer operation, then use negative captures to tighten candidate distance, power, geometry, and temporal gates before treating the behavior as deployable gun detection.

### 2026-07-13 - Expand long-range geometry maxima after same-distance alert failure

- Status: Implemented and source/latest-capture replay verified; Arduino compilation, flashing, physical alert validation, and negative-case testing pending
- Requested by: User, after flashing the first long-range signature and saving a same-distance gun-present capture where no alert triggered
- Objective: Allow the newly observed DBSCAN footprint of the same approximately 3 m gun scenario to reach the existing five-frame alert without relaxing any non-geometry evidence gate
- Files changed: user-updated `output.md`; `parsing_detailed/parsing_detailed.ino`; `tests/test_long_range_alert_policy.py`; `docs/superpowers/specs/2026-07-13-long-range-alert-signature-design.md`; new `docs/superpowers/plans/2026-07-13-expand-long-range-geometry.md`; `PROJECT_RECORD.md`
- Symbols/settings changed: `LONG_RANGE_GUN_MAX_LENGTH` from `0.30` to `0.55`; `LONG_RANGE_GUN_MAX_WIDTH` from `0.16` to `0.55`; `capture_rows()` now selects any displayed block whose nearest candidate is `gun` instead of hard-coding track ID 99; `test_signature_constants_cover_the_captured_scenario`; renamed latest-capture replay test; Project file roles; Calibration matching and alerting; Range-profile evidence; Current Detection Rules; Known Limitations; Rule-Based Detection Direction; Change Ledger
- Previous behavior: The long-range path required length 0.18-0.30 m and width 0.07-0.16 m. In the latest stable track-1144 sequence, candidate `gun`, candidate distance, range, relative power, raw SNR, quality, and point count passed in all 64 frames, but length 0.4294-0.4889 m failed in all 64 and width 0.1002-0.4735 m failed in 61. `pass=no`, `hits=0/5`, and `confirmed=no` therefore remained constant and no alert occurred.
- New behavior: The minimum length and width remain 0.18 m and 0.07 m, while both maxima are 0.55 m. The latest 64-frame gun-candidate sequence passes the complete rule under these bounds. Candidate limit 0.55, range 2.70-3.60 m, power floor 75.0 relative dB, raw SNR floor 100, quality floor 80%, point minimum 5, five-hit confirmation, GPIO assignments, and alert timing are unchanged.
- Detailed implementation: Generalized the capture replay away from transient tracker IDs, changed its expected and simulated length/width maxima to 0.55 m, observed the exact two constant failures, then changed only the two firmware constants. Updated the approved design with cross-capture geometry evidence and added/completed the implementation plan. No radar command, parser, clustering, tracker association, calibration database, power conversion, or alert-manager code changed.
- Reason and evidence: Compared the previous committed capture with the latest working `output.md`. The prior gun footprint was 0.2197-0.2500 m long and 0.1026-0.1077 m wide; the latest is 0.4294-0.4889 m long and 0.1002-0.4735 m wide. Latest range, power, SNR, candidate identity/distance, quality, point count, and 64-frame stability all satisfy the existing signature. The root cause is therefore the narrow horizontal geometry maxima, not a power, calibration, temporal, clustering, UART, or alert-manager failure.
- System impact: A latest-capture-equivalent track can accumulate five consecutive hits and enter the already-wired LED/buzzer path. The broader horizontal footprint increases detection tolerance but also increases the set of large metal or clutter-merged `gun` candidates that can pass, so negative-object validation becomes more urgent. Memory, computation, UART bandwidth, and radar behavior are unchanged.
- Risks and trade-offs: A 0.55 m maximum is a capture-backed tolerance rather than a physical gun-size claim. DBSCAN can merge nearby clutter into the target footprint, and other metal objects can pass candidate/power/geometry gates. Both available tuning captures are positive; no false-positive rate can be claimed. The alert still requires five uninterrupted qualifying parsed radar frames, which may miss unstable targets.
- Verification performed: Parsed every latest displayed object block and evaluated each rule gate; compared latest telemetry with `git show HEAD:output.md`; updated the test before firmware; ran `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_alert_policy -v` for the red phase; changed the two constants; ran `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v`; ran `git diff --check`; asserted exact values for all twelve long-range gates plus LED, buzzer, alert duration, and beep interval; counted sketch braces.
- Verification results: Root-cause analysis found 64/64 passes for candidate `gun`, distance at most 0.55, 2.70-3.60 m range, power at least 75, raw mean SNR at least 100, quality at least 80, and points at least 5; length passed 0/64 and width passed 3/64 under the old gates. The red test exited 1 with exactly two failures: firmware length maximum 0.30 versus expected 0.55 and width maximum 0.16 versus expected 0.55. The initial green run passed ten tests in 0.027 seconds. The final complete verifier passed ten tests in 0.024 seconds with `testExit=0`, `diffExit=0`, zero constant assertion failures, brace counts 268/268, zero unchecked plan steps, and exactly one corrective ledger entry; `git diff --check` emitted only line-ending warnings. No Arduino compiler is available in the current shell, so no compilation was performed.
- Hardware validation required/completed: The latest capture validates the old firmware's failure mode but not the new binary. Recompile and flash `parsing_detailed/parsing_detailed.ino`, retain the current balanced profile and SPIFFS calibration, place the gun in the same approximately 3 m pose, and verify evidence counts 1/5 through 5/5 followed by `LONG-RANGE GUN SIGNATURE`, `ALERT TRIGGERED`, GPIO11 high, and GPIO12 toggling. Then repeat with empty scene, phone, tools, keys, plate, and metal box at similar range.
- Rollback procedure: Restore only `LONG_RANGE_GUN_MAX_LENGTH=0.30` and `LONG_RANGE_GUN_MAX_WIDTH=0.16`, restore the test expectations and historical track-99-only replay if required, update current-state documentation, and append a superseding rollback ledger entry. Do not alter the earlier historical entries.
- Related commit: Not committed
- Follow-up work: Flash and capture the corrected alert run immediately; if it triggers, begin same-range metal-negative testing before any further sensitivity expansion.

### 2026-07-14 - Preserve 80-relative-dB power and approve the 0.50-3.00 m concealed-detection design

- Status: User power edit preserved and source-inspected; design approved and documented; remaining firmware, profile, test, compilation, flashing, and hardware work pending
- Requested by: User, after reporting good concealed-detection results near 2.5 m, selecting a 0.50-3.00 m target envelope with +/-30 degree azimuth/elevation, prioritizing false-alarm reduction, and explicitly choosing to preserve the uncommitted 80.0 relative-dB threshold
- Objective: Establish an exact capture-backed implementation design that extends concealed-gun detection to 0.50-3.00 m, narrows the radar field of view, tightens calibration and motion gates, preserves the 80.0 power floor, and adds diagnostic motion-coherence measurements without inventing an unsupported alert threshold
- Files changed: user-modified and subsequently policy-updated `parsing_detailed/parsing_detailed.ino`; `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`; `tests/test_long_range_alert_policy.py`; `tests/test_long_range_clustering_policy.py`; new `docs/superpowers/specs/2026-07-14-concealed-gun-operating-envelope-design.md`; new `docs/superpowers/plans/2026-07-14-concealed-gun-operating-envelope.md`; `PROJECT_RECORD.md`
- Symbols/settings changed: user changed `LONG_RANGE_GUN_MIN_POWER_DB` from committed `65.0` to working-tree `80.0`; documented planned `aoaFovCfg -1 -30 30 -30 30`; planned `cfarFovCfg -1 0 0.50 3.00`; planned `RANGE_MIN=0.45`; planned `RANGE_MAX=3.10`; planned `LONG_RANGE_GUN_MIN_RANGE=0.50`; planned `LONG_RANGE_GUN_MAX_RANGE=3.00`; planned `LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE=0.48`; planned `LONG_RANGE_GUN_MAX_ABS_VELOCITY=0.13`; planned radial-velocity standard-deviation/span descriptor telemetry; Current Verified Baseline; Project file roles; Calibration matching and alerting; Current Detection Rules; Rule-Based Detection Direction; Change Ledger
- Previous behavior: The checked-in balanced profile accepts 0.30-3.50 m and +/-45 degrees. Firmware point processing accepts 0.20-3.60 m. The current signature accepts 2.30-3.45 m, candidate distance through 0.55, and peak absolute radial velocity through 0.35 m/s. HEAD used a 65.0 relative-dB floor, while the user changed the working sketch to 80.0 before this design was recorded. The project record still described older 2.70-3.60 m, 75.0 dB, narrow geometry, and consecutive-hit behavior.
- New behavior: The only current runtime-source change is the preserved user edit `LONG_RANGE_GUN_MIN_POWER_DB=80.0`; Codex has not yet changed the profile or remaining firmware constants. The approved next implementation will use a 0.50-3.00 m radar/signature envelope, 0.45-3.10 m processing margin, +/-30 degree angular FOV, candidate distance at most 0.48, peak absolute radial velocity at most 0.13 m/s, existing geometry/SNR/quality/point/five-of-seven gates, and diagnostic-only within-cluster Doppler dispersion telemetry.
- Detailed implementation: Inspected the current source, profile, five saved output captures, existing source-contract tests, and recent commits. Replayed each object block against complete candidate, range, power, geometry, SNR, velocity, Z, quality, point-count, and five-of-seven gates. Rejected range-only expansion after it confirmed an additional moving near-range `gun` candidate. Compared candidate-distance and velocity limits, selected the conservative 0.48/0.13 pair, preserved the user's 80.0 floor, documented exact profile and firmware targets, and reconciled current-state record sections with the actual 1260415 firmware lineage and working-tree power edit.
- Reason and evidence: Dominant concealed-gun track 1953 repeatedly reports peak absolute radial velocity near 0.121 m/s, while human-associated and other moving clusters commonly report larger peaks. With the approved candidate, range, 80.0-power, and 0.13-velocity gates, track 1953 retains 71 passing observations and 64 confirmed rows in `concealed_hand_bag.md`, 166 passes and 143 confirmed rows in `gun_concealed_bag.md`, and 50 passes and 44 confirmed rows in `gun_with_human_open.md`. The extra near-range track 287 in `gun_present_open.md` has two isolated passes and zero confirmed rows. `gun_under_cloth.md` has zero passing tracks because its recorded targets are beyond the new 3.00 m signature limit.
- System impact: The preserved 80.0 source value immediately raises the scenario-specific power floor relative to HEAD and can reduce sensitivity. The specification and record changes do not yet alter radar commands, point filtering, clustering, calibration distance, motion gating, temporal state, GPIO, buzzer, or serial telemetry. Later implementation will narrow the radar FOV and alert envelope, reduce moving-cluster acceptance, and add UART telemetry and small per-descriptor computation.
- Risks and trade-offs: All saved captures are positive scenarios rather than a controlled negative dataset. A 0.13 m/s absolute peak can miss a concealed gun moving rapidly toward or away from the radar, and 80.0 relative dB can miss weak, occluded, edge-range, or unfavourably oriented guns. TLV-2 power is not angularly isolated. Candidate distance and geometry use calibration/runtime feature definitions that are not identical. Diagnostic Doppler dispersion cannot become a gate until point-level hardware data supports a threshold.
- Verification performed: Ran source/profile searches and `git diff` to isolate the user power edit; parsed all five `outputs/*.md` files with a read-only Python replay implementing every proposed signature gate and per-track five-of-seven history; scanned the new specification for incomplete placeholder markers and an accidental 65.0 approved threshold; ran `git diff --check`.
- Verification results: The user firmware diff contains exactly one source change, `LONG_RANGE_GUN_MIN_POWER_DB` from 65.0 to 80.0. Replay results were: `concealed_hand_bag.md` track 1953, 71 passes/64 confirmed rows; `gun_concealed_bag.md` track 1953, 166/143; `gun_present_open.md` track 287, 2/0; `gun_under_cloth.md`, no passing tracks because recorded ranges exceed 3.00 m; `gun_with_human_open.md` track 1953, 50/44. The placeholder/obsolete-threshold scan found zero matches. `git diff --check` exited 0 with only line-ending conversion warnings. No Arduino build was run.
- Hardware validation required/completed: Required and not completed for the proposed policy or preserved 80.0 threshold. Load the eventual updated balanced profile, flash the eventual updated detector, and capture labeled gun-present and negative trials at 0.50, 1.00, 1.50, 2.00, 2.50, and 3.00 m. Include open, under-clothing, handbag, concealed-bag, person-carried gun, empty scene, human-only motion, phone, keys, tools, belt buckle, metal bottle, plate, and metal box cases. Record orientation, height, lateral position, motion, serial evidence, and physical LED/buzzer behavior.
- Rollback procedure: To revert only the current runtime source edit, restore `LONG_RANGE_GUN_MIN_POWER_DB=65.0` and append a superseding ledger entry. To reject the approved design before implementation, leave runtime/profile files otherwise unchanged, mark the specification superseded through a new ledger entry, and do not silently delete this history. After implementation, restore the profile to 0.30-3.50 m and +/-45 degrees, processing to 0.20-3.60 m, signature to 2.30-3.45 m, candidate distance to 0.55, and peak absolute radial velocity to 0.35 m/s.
- Related commit: Not committed
- Follow-up work: Execute `docs/superpowers/plans/2026-07-14-concealed-gun-operating-envelope.md` inline using TDD; the stale source-contract tests have been replaced before production edits and must first be observed failing for the approved missing behavior; then implement the profile/firmware/diagnostic changes, run all static/replay verification, compile if a toolchain is available, and complete labeled hardware validation

### 2026-07-14 - Implement the 0.50-3.00 m concealed-gun operating policy

- Status: Implemented and source/capture-replay verified; Arduino compilation, radar loading, flashing, physical alert confirmation, and controlled positive/negative hardware validation pending
- Requested by: User, after approving the written concealed-detection design and instructing implementation while preserving the 80.0 relative-dB floor
- Objective: Apply the 0.50-3.00 m and +/-30 degree operating envelope, tighten the candidate and absolute radial-velocity gates to reduce observed moving-cluster false confirmation, preserve the 80.0 power threshold, and expose diagnostic-only trimmed Doppler coherence metrics
- Files changed: `parsing_detailed/parsing_detailed.ino`; `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`; `tests/test_long_range_alert_policy.py`; `tests/test_long_range_clustering_policy.py`; `docs/superpowers/specs/2026-07-14-concealed-gun-operating-envelope-design.md`; `docs/superpowers/plans/2026-07-14-concealed-gun-operating-envelope.md`; `PROJECT_RECORD.md`
- Symbols/settings changed: `RANGE_MIN` from `0.20` to `0.45`; `RANGE_MAX` from `3.60` to `3.10`; `LONG_RANGE_GUN_MIN_RANGE` from `2.30` to `0.50`; `LONG_RANGE_GUN_MAX_RANGE` from `3.45` to `3.00`; preserved user-modified `LONG_RANGE_GUN_MIN_POWER_DB=80.0`; `LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE` from `0.55` to `0.48`; `LONG_RANGE_GUN_MAX_ABS_VELOCITY` from `0.35` to `0.13`; new `AdvancedShapeDescriptor::radialVelocityStdDev`; new `AdvancedShapeDescriptor::radialVelocitySpan`; constructor initialization; `extractDimensions()` trimmed-velocity collection and dispersion calculation; radial-velocity serial telemetry; `aoaFovCfg -1 -30 30 -30 30`; `cfarFovCfg -1 0 0.50 3.00`; balanced-profile header; rewritten `capture_rows()`; new `row_passes()`; new `confirmed_rows_by_track()`; concealed-track, moving-track, under-cloth-boundary, profile, temporal-window, and diagnostic-only tests; clustering processing-margin test; Current Verified Baseline; Project file roles; Point filtering; Calibration matching and alerting; Velocity; Current Detection Rules; Radar Configuration Baseline; Known Limitations; Rule-Based Detection Direction; Change Ledger
- Previous behavior: The balanced profile accepted 0.30-3.50 m and +/-45 degrees. ESP32 point filtering accepted 0.20-3.60 m. The scenario signature accepted 2.30-3.45 m, candidate distance through 0.55, and peak absolute radial velocity through 0.35 m/s. The user had already raised power from committed 65.0 to 80.0. Saved-capture replay showed that extending only the range down to 0.50 m allowed moving near-range track 287 to confirm. Firmware printed untrimmed mean and peak radial velocity but no within-cluster dispersion diagnostics. Existing alert-policy tests still asserted superseded consecutive-hit fields and older 2.70-3.60 m/75.0/narrow-geometry constants.
- New behavior: The profile accepts 0.50-3.00 m within +/-30 degrees while retaining the waveform, 32 loops, 100 ms period, both 14 dB CFAR commands, clutter-removal state, and GUI outputs. Point processing accepts 0.45-3.10 m. The scenario signature requires 0.50-3.00 m, candidate distance at most 0.48, 80.0 relative dB, and peak absolute radial velocity at most 0.13 m/s; geometry, SNR, Z, quality, point-count, and five-of-seven gates are unchanged. Descriptor telemetry now reports population standard deviation and span of trimmed signed Doppler velocities, but those fields do not enter either alert path.
- Detailed implementation: Replaced the stale source-contract test with per-object parsing of all five saved output files and an exact per-track seven-observation replay. Added explicit source/profile contracts before production edits and observed their failures. Updated only the two profile FOV commands/header and seven approved firmware constants. In `extractDimensions()`, retained velocity values whose matching point indices survive the existing 2.5-times-median geometry trim, calculated their double-precision mean and population variance, stored standard deviation and maximum-minus-minimum span, and added both values to serial telemetry. Kept the existing untrimmed radial mean/peak calculation and used only peak for the active signature, preserving replay comparability. Updated current-state documentation and completed the approved TDD plan without staging or committing.
- Reason and evidence: A range-only replay confirmed near-range moving track 287 in `outputs/gun_present_open.md`. With the complete implemented policy, dominant concealed-gun track 1953 continues to confirm in `concealed_hand_bag.md`, `gun_concealed_bag.md`, and `gun_with_human_open.md`, while track 287 has isolated passes but zero confirmed rows. Candidate distance 0.48 and peak velocity 0.13 were selected from saved capture comparisons prioritizing false-alarm reduction. The user explicitly selected 80.0 relative dB. Dispersion remains diagnostic because saved text captures do not include individual point velocities needed to derive a threshold.
- System impact: The radar admits a narrower spatial region and the ESP32 discards points outside its new margins. The scenario alert can operate from 0.50 m but no longer covers targets beyond 3.00 m. Tighter candidate, power, and velocity gates reduce acceptance but can increase misses. Two floats are added per descriptor and trimmed-velocity collection/calculation adds bounded memory and linear work per descriptor. Serial output grows by two numeric fields. Parser format, UART settings, adaptive DBSCAN, tracker association, calibration distance formula, original calibration-confirmed path, temporal window, LED GPIO11, buzzer GPIO12, and alert timing remain unchanged.
- Risks and trade-offs: The available captures are positive scenarios, not a controlled negative set. The 80.0 power floor can reject weak or occluded guns, especially near the 3.00 m boundary. A 0.13 m/s absolute peak can reject a concealed gun moving quickly toward or away from the sensor. The TLV-2 peak remains range-only and can come from another reflector. The +/-30 degree FOV can miss targets outside the narrower cone. Standard deviation/span are new diagnostics without hardware-observed distributions. The under-cloth capture lies just beyond 3.00 m and is intentionally out of scope, not proof of a negative.
- Verification performed: TDD red run with `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v`; focused parameter/profile/replay run with six named test methods; green and final full runs of both policy modules; exact PowerShell assertions for nine changed constants, 24 protected constants, eight protected/required profile lines, absence of diagnostic fields from the signature gate, and firmware brace balance; placeholder scan of the new spec and plan; `git diff --check`; `Get-Command arduino-cli,g++,clang++`.
- Verification results: The red run exited 1 with 12 tests executed and 14 failures caused by old range/profile/candidate/velocity values, missing diagnostic fields, and the not-yet-admitted near-range track; the 80.0 constant and existing five-of-seven/positive-track contracts passed. The focused post-parameter run exited 0 with six tests passing. The green full run exited 0 with 12 tests passing in 0.332 seconds. The fresh comprehensive verifier exited 0 with 12 tests passing in 0.186 seconds, nine changed-constant assertions, 24 protected-constant assertions, eight profile-line assertions, diagnostic-only gate isolation, and 276 opening/276 closing braces. Placeholder scans found zero matches. `git diff --check` exited 0 with line-ending conversion warnings only. `arduino-cli`, `g++`, and `clang++` were unavailable.
- Hardware validation required/completed: Required and not completed. Load `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg` through the separate radar CLI process, compile and flash `parsing_detailed/parsing_detailed.ino`, retain the current SPIFFS calibration, and capture labeled trials at 0.50, 1.00, 1.50, 2.00, 2.50, and 3.00 m. Include open, under-clothing, handbag, concealed-bag, person-carried gun, empty scene, human-only motion, phone, keys, tools, belt buckle, metal bottle, plate, and metal box. Verify serial gate evidence, new `std`/`span` telemetry, `LONG-RANGE GUN SIGNATURE`, `ALERT TRIGGERED - GUN DETECTED!`, GPIO11 LED behavior, and GPIO12 buzzer toggling. No build, radar load, flash, fresh capture, or physical validation was performed in this change.
- Rollback procedure: Restore profile header/FOV commands to 0.30-3.50 m and +/-45 degrees; restore `RANGE_MIN=0.20`, `RANGE_MAX=3.60`, signature range 2.30-3.45 m, candidate limit 0.55, and peak-velocity limit 0.35; restore power to 65.0 only if separately reverting the user's 80.0 decision; remove `radialVelocityStdDev`, `radialVelocitySpan`, filtered-velocity collection/calculation, and serial fields; restore tests to the resulting policy; update current-state sections; append a superseding rollback entry rather than deleting this history.
- Related commit: Not committed
- Follow-up work: Compile and flash with an Arduino toolchain; load the updated balanced profile; perform the complete labeled hardware matrix; use captured per-cluster standard deviation/span distributions to decide whether a translation-invariant coherence gate can safely supplement or replace the absolute 0.13 m/s peak gate

### 2026-07-15 - Add secondary shape-Doppler confirmation to reject the human-only capture

- Status: Implemented and source/capture-replay verified; Arduino compilation, radar loading, flashing, physical alert confirmation, and independent hardware validation pending
- Requested by: User, after `outputs/only_human_present.md` activated the alert at approximately 2.0-2.2 m and comparison with `outputs/human_with_gun.md`
- Objective: Preserve the existing 80.0-relative-dB base signature while preventing the supplied human-only dominant track from confirming unless the current seven-observation window also contains the planar/flat Doppler-dispersion evidence observed in the human-with-gun capture
- Files changed: `parsing_detailed/parsing_detailed.ino`; `tests/test_long_range_alert_policy.py`; new `docs/superpowers/plans/2026-07-15-human-gun-shape-doppler-gate.md`; `PROJECT_RECORD.md`. User-supplied `outputs/only_human_present.md` and `outputs/human_with_gun.md` are new development inputs referenced by the tests but were not modified by Codex. Existing changes in `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`, `tests/test_long_range_clustering_policy.py`, the 2026-07-14 spec/plan, `.claude/`, and `IWR_Config.md` were preserved and not changed for this tuning.
- Symbols/settings changed: new `LONG_RANGE_GUN_MIN_PLANARITY=0.75`; new `LONG_RANGE_GUN_MAX_FLATNESS=0.20`; new `LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV=0.052`; new `LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS=1`; new `TrackedObject::longRangeGunShapeDopplerHitHistory`; new `TrackedObject::longRangeGunShapeDopplerWindowHits`; new `TrackedObject::longRangeGunShapeDopplerEvidenceThisFrame`; `pushLongRangeGunObservation(TrackedObject&, bool, bool)`; `evaluateLongRangeGunSignature()`; `recordLongRangeGunMissAllTracks()`; long-range signature/evidence serial telemetry; firmware hardware-header comments reconciled to the pre-existing user values GPIO2/GPIO38; `capture_rows()` optional shape/Doppler parsing; new `row_has_shape_doppler_evidence()`; new `final_confirmed_rows_by_track()`; human-only, human-with-gun, source-state, secondary-gate, and constant tests; Current Verified Baseline; Project file roles; Hardware and interfaces; Calibration matching and alerting; Velocity; Current Detection Rules; Known Limitations; Rule-Based Detection Direction; Change Ledger
- Previous behavior: Scenario confirmation depended only on five base passes in seven observations. In the supplied captures, dominant track 1756 produced 103 base-passing human-only rows and 106 base-passing human-with-gun rows; both recordings contained an alert trigger, and the firmware printed 88 human-only and 85 human-with-gun `LONG-RANGE GUN SIGNATURE` rows. Relative power, candidate distance, SNR, geometry, peak Doppler, and Doppler standard deviation overlapped too strongly to provide a reliable standalone threshold. Trimmed Doppler standard deviation and span were telemetry-only.
- New behavior: The base pass expression, its five-of-seven history, `LONG_RANGE_GUN_MIN_POWER_DB=80.0`, and `LONG_RANGE_GUN_MAX_ABS_VELOCITY=0.13` are preserved. A second seven-observation bit history records a hit only when a base-passing descriptor also has planarity at least 0.75, flatness at most 0.20, and trimmed radial-velocity population standard deviation at least 0.052 m/s. `longRangeGunConfirmed` now requires at least five base hits and at least one secondary hit in the same window. A failed, unmeasured, or rejected radar update shifts a miss into both histories. Serial output exposes the secondary current-frame flag, hit count, requirement, and exact thresholds. The original calibration-confirmed gun path remains independent.
- Detailed implementation: Extended each track with a secondary bit history, count, and per-frame flag; initialized and reset them beside the existing base state. Changed `pushLongRangeGunObservation()` to shift both histories under one seven-bit mask, count each history, and assign confirmation from their conjunction. Calculated `shapeDopplerPass` only after all base gates pass and did not add a Doppler-peak lower bound. Updated both explicit miss paths to push `false, false`. Added capture parsing for optional `std`, planarity, and flatness so older captures without Doppler dispersion remain usable for base-policy tests. Added a final-policy replay that keeps separate per-track base and secondary deques. Corrected only the firmware header comments for the already-present GPIO2/GPIO38 values; the constants themselves were not changed in this tuning.
- Reason and evidence: Among base-passing dominant-track rows, human-only Doppler peak was 0.1207 m/s in 42/103 rows versus 59/106 for human-with-gun, and median Doppler standard deviation was 0.0493 versus 0.0551 m/s; standalone frame-level separation was weak. Conditioning on planarity at least 0.75 and flatness at most 0.20 produced four human-only rows, all with Doppler standard deviation at most 0.0493 m/s, versus eighteen human-with-gun rows, eleven of which met the selected 0.052 m/s standard-deviation floor. Object-row replay of the complete conjunction produced zero secondary hits and zero final confirmations for human-only track 1756, and eleven secondary hits plus 48 final confirmations for human-with-gun track 1756.
- System impact: Adds one byte history, one integer count, and one boolean flag per track subject to C++ alignment, plus one additional seven-bit count and three comparisons per evaluated track. UART output grows by secondary evidence fields. The radar profile, packet parser, range filtering, DBSCAN, descriptor formulas, calibration database/distance, base signature thresholds, original identity alert path, alert duration, and user-set GPIO constants are unchanged. Requiring planarity makes at least one ten-or-more-point base-passing frame necessary within the active window.
- Risks and trade-offs: The thresholds were tuned and replayed on the same single negative/positive pair and are not a held-out accuracy estimate. The text replay advances histories on parsed object rows and cannot perfectly reconstruct every absent-track or rejected radar update, although firmware source pushes misses through both histories. Sparse five-to-nine-point gun returns cannot produce nonzero planarity and therefore cannot supply the required secondary hit. Different people, clothing, gun positions, orientations, concealment, motion, and clutter can cause false negatives or reproduce the evidence in a non-gun object. The global TLV-2 power ambiguity and calibration/runtime feature mismatch remain. The independent calibration-confirmed path can still alert if a human-only track ever acquires a true `gun` identity under its separate thresholds.
- Verification performed: Wrote the new capture-replay and source-contract tests before firmware changes; ran `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_alert_policy -v` for RED and GREEN; ran `$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v`; ran PowerShell assertions for required firmware contracts, both explicit `false, false` miss calls, brace balance, completed plan steps, one ledger entry, and new-plan trailing whitespace; queried `Get-Command` for `arduino-cli`, `g++`, and `clang++`; ran `git diff --check`; inspected final `git status --short` without staging or committing; requested an independent read-only firmware/test/record review and corrected the current-state early-return helper description it identified.
- Verification results: The RED run exited 1 with 10 tests and 17 expected failures for missing secondary constants, state, conjunction, replay result, and telemetry while existing profile/base tests passed. The focused GREEN run exited 0 with 10 tests passing in 0.932 seconds. The first combined run exited 0 with 15 tests passing in 0.562 seconds. The final comprehensive run exited 0 with 15 tests passing in 0.433 seconds, 14/14 required firmware contracts, exactly two explicit miss calls, 277 opening/277 closing braces, zero unchecked plan steps, exactly one new ledger heading, and zero trailing-whitespace lines in the new plan. `git diff --check` exited 0 with line-ending warnings only. The independent review found no firmware or replay-logic defect; it found one stale current-state reference to nonexistent `resetAllLongRangeGunEvidence()`, which was corrected to the actual `recordLongRangeGunMissAllTracks()` `false, false` shift semantics. It also noted a minor opportunity to scope source-contract assertions more tightly. No `arduino-cli`, `g++`, or `clang++` command was available, so no firmware compilation was performed.
- Hardware validation required/completed: Required and not completed. Load `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`, compile and flash `parsing_detailed/parsing_detailed.ino`, retain the current SPIFFS calibration, and repeat the same human-only and human-with-gun trials at 2.0-2.2 m. Human-only must show `shapeDoppler=no`, `shapeHits=0/1`, `confirmed=no`, no alert line, GPIO2 low, and GPIO38 inactive even if base hits reach 5/5. Human-with-gun must produce at least one `shapeDoppler=yes` frame inside a window with five base hits, then print the signature/alert and drive GPIO2/GPIO38. Repeat with multiple people, clothing, positions, orientations, and motion at 0.50, 1.00, 1.50, 2.00, 2.50, and 3.00 m, plus phone, keys, tools, belt buckle, bottle, plate, and metal-box negatives.
- Rollback procedure: Remove the four new `LONG_RANGE_GUN_*` secondary constants and three per-track secondary fields/initializers; restore `pushLongRangeGunObservation(TrackedObject&, bool)` and its base-only confirmation assignment; change both miss calls back to one boolean; remove `shapeDopplerPass` and secondary telemetry; return the standard-deviation comment/record to diagnostic-only; remove the secondary replay/source contracts and 2026-07-15 plan; restore affected current-state documentation; append a superseding rollback ledger entry. Preserve the user's 80.0 power floor, 0.13 m/s peak cap, GPIO2/GPIO38 constants, and 2026-07-14 operating policy unless separately authorized to change them.
- Related commit: Not committed
- Follow-up work: Perform the exact on-device validation matrix and save the new serial captures. If gun sensitivity is too low, collect additional controlled paired captures before changing the one-secondary-hit requirement or the 0.75/0.20/0.052 thresholds; do not relax the base signature from this one development pair.

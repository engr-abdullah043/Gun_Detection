# Concealed-Gun Operating Envelope and Motion Policy Design

## Goal

Tune the current rule-based detector for concealed-gun detection from 0.50 m through 3.00 m while reducing false alerts from moving human returns and carried non-gun objects. Use the balanced 32-loop radar profile with a +/-30 degree azimuth and elevation field of view.

## Current evidence

The current firmware signature covers 2.30-3.45 m and accepts peak absolute radial velocity through 0.35 m/s. Replaying the saved captures with only the requested 0.50-3.00 m range expansion causes an additional moving near-range `gun` candidate in `outputs/gun_present_open.md` to reach confirmation. A range-only expansion is therefore rejected.

The dominant gun tracks in `outputs/concealed_hand_bag.md`, `outputs/gun_concealed_bag.md`, and `outputs/gun_with_human_open.md` repeatedly report peak absolute radial velocity near 0.121 m/s. Human-associated and other moving clusters commonly report substantially larger peaks. A replay using a 0.13 m/s maximum, candidate distance at most 0.48, and the existing five-of-seven confirmation retains repeated confirmation of the dominant concealed-gun tracks and prevents confirmation of the extra near-range moving track in the available captures.

The saved files are positive-scenario captures, not a controlled negative dataset. These replay results justify a conservative starting policy but do not establish sensitivity, specificity, or a false-alert rate.

## Considered approaches

1. Range-only expansion was rejected because it confirms an additional near-range moving `gun` candidate in an existing capture.
2. A conservative capture-backed range and motion update was selected for implementation because it preserves repeated positive-track confirmation while rejecting that observed moving track.
3. A translation-invariant motion-coherence classifier based on within-cluster Doppler dispersion is retained as a diagnostic-only follow-up. The saved text telemetry lacks point-level Doppler samples needed to choose a safe alert threshold.

## Approved radar configuration

Keep the balanced profile's waveform, 32 loops, 100 ms frame period, 14 dB range and Doppler CFAR settings, disabled clutter removal, and GUI output selections unchanged. Change only:

```text
aoaFovCfg -1 -30 30 -30 30
cfarFovCfg -1 0 0.50 3.00
```

The detector does not send these commands because its radar TX pin is disabled. The profile must still be loaded through the separate radar configuration procedure.

## Approved firmware policy

### Processing and clustering

- Set the ESP32 point-processing range to 0.45-3.10 m. This preserves 5 cm below and 10 cm above the deployment envelope for range-bin quantization and point jitter.
- Keep adaptive DBSCAN unchanged: 0.15 m through 1.50 m, 0.20 m above 1.50 m through 2.50 m, and 0.25 m beyond 2.50 m.
- Keep the five-total-point DBSCAN, retained-cluster, descriptor-output, and validity minima unchanged.

### Concealed-gun signature

Retain the existing independent calibration-confirmed alert path. Avoid a broad identifier refactor. The scenario-specific signature passes a measured track only when every condition below holds:

```text
descriptor valid                       = yes
nearest calibration candidate          = gun, case-insensitive
candidate distance                     <= 0.48
track range                            = 0.50-3.00 m
TLV-2 range-profile relative power     >= 80.0 relative dB
length                                 = 0.15-0.80 m
width                                  = 0.08-0.55 m
raw mean SNR                           >= 118
raw peak SNR                           >= 140
peak absolute radial velocity          <= 0.13 m/s
absolute track Z                       <= 0.50 m
descriptor quality                     >= 80%
descriptor points                      >= 5
temporal confirmation                  >= 5 passes in the last 7 evaluations
```

The 80.0 value remains relative power, not dBm or physical RCS. It is supporting evidence only because the TLV-2 peak is selected by range and is not angularly isolated to the candidate cluster. The user explicitly requested preserving the uncommitted 80.0 source value instead of restoring the committed 65.0 value.

### Motion-coherence diagnostics

Add descriptor telemetry for within-cluster radial-velocity standard deviation and radial-velocity span, computed from the same trimmed points used for geometry and SNR. Do not make either measurement an alert gate in this change. The next labeled capture set will determine whether translation-invariant motion coherence can replace or supplement the 0.13 m/s absolute-peak gate.

## Verification design

- Update source-contract tests before firmware and profile edits and observe failures for every old value.
- Replay every saved capture against the complete proposed signature, not isolated constants.
- Assert that dominant concealed-gun tracks still reach five-of-seven confirmation where their range-profile power reaches 80.0 relative dB.
- Assert that the extra near-range moving track in `gun_present_open.md` does not confirm.
- Verify the exact radar FOV commands and ensure waveform, loop, CFAR, frame-period, clutter-removal, and GUI-output commands do not drift.
- Run all existing Python policy tests and `git diff --check`.
- If an Arduino toolchain is unavailable, report compilation as not performed rather than passed.

## Hardware validation

After compiling and flashing the updated firmware and loading the updated balanced profile, capture labeled trials at 0.50, 1.00, 1.50, 2.00, 2.50, and 3.00 m. Include open, under-clothing, handbag, concealed-bag, and person-carried gun cases. At every distance also capture empty scene, human-only movement, phone, keys, tools, belt buckle, metal bottle, plate, and metal box. Record orientation, height, lateral position, motion direction, and whether the alert physically activated.

Because the preserved 80.0 relative-dB floor is higher than some previously observed gun frames, explicitly count power-gate misses by distance. Do not claim a validated false-alert rate or full-range accuracy until a held-out labeled negative and positive set has been evaluated.

## Rollback

Restore the profile FOV to 0.30-3.50 m and +/-45 degrees, firmware processing range to 0.20-3.60 m, signature range to 2.30-3.45 m, candidate distance to 0.55, and peak radial velocity to 0.35 m/s. Restore the relative-power floor to committed value 65.0 only if the user separately decides to revert the preserved 80.0 edit. Remove the new motion-coherence telemetry if it causes timing or UART-volume problems. Preserve the corresponding project-record history through a superseding ledger entry.

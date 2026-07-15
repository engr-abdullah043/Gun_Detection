# Concealed-Gun Operating Envelope Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Implement the approved 0.50-3.00 m, +/-30 degree concealed-gun policy while preserving the user-selected 80.0 relative-dB floor and adding diagnostic-only motion-coherence telemetry.

**Architecture:** Keep the existing two alert paths and adaptive clustering architecture. Update source-contract/capture-replay tests first, then change the radar FOV and bounded firmware constants, and finally add trimmed-cluster Doppler dispersion fields that are printed but are not used for alerting.

**Tech Stack:** ESP32-S3 Arduino C++, TI IWR6843AOP CLI configuration, Python `unittest` source-contract and text-capture replay tests, PowerShell verification.

## Global Constraints

- Do not stage or commit any file unless the user separately requests it.
- Preserve `LONG_RANGE_GUN_MIN_POWER_DB=80.0`.
- Deployment/signature envelope is 0.50-3.00 m; ESP32 processing margin is 0.45-3.10 m.
- Radar azimuth and elevation FOV are both -30 to +30 degrees.
- Preserve the balanced waveform, 32 loops, 100 ms frame period, both 14 dB CFAR settings, disabled clutter removal, GUI output selections, adaptive DBSCAN radii, geometry/SNR/quality/point minima, and five-of-seven temporal policy.
- New radial-velocity standard deviation and span values are telemetry only and must not participate in gun confirmation.
- Update `PROJECT_RECORD.md` current-state sections and append a complete ledger entry for the implementation and observed verification.

---

### Task 1: Replace stale policy contracts with the approved behavior

**Files:**
- Modify: `tests/test_long_range_alert_policy.py`
- Modify: `tests/test_long_range_clustering_policy.py`
- Test: `tests/test_long_range_alert_policy.py`
- Test: `tests/test_long_range_clustering_policy.py`

**Interfaces:**
- Consumes: firmware constants, balanced-profile CLI commands, `outputs/*.md` object telemetry.
- Produces: `capture_rows(path)`, `confirmed_track_rows(rows, constants)`, exact source/profile contracts, and diagnostic-field contracts used by Tasks 2 and 3.

- [x] **Step 1: Rewrite the alert-policy fixture and constant contract**

Load all five `outputs/*.md` files and `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`. Parse each displayed object independently, including object ID, validity, candidate, candidate distance, range, power, length, width, point count, mean/peak SNR, peak absolute radial velocity, absolute Z, and quality. Assert these exact constants:

```python
expected = {
    "LONG_RANGE_GUN_MIN_RANGE": 0.50,
    "LONG_RANGE_GUN_MAX_RANGE": 3.00,
    "LONG_RANGE_GUN_MIN_POWER_DB": 80.0,
    "LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE": 0.48,
    "LONG_RANGE_GUN_MIN_LENGTH": 0.15,
    "LONG_RANGE_GUN_MAX_LENGTH": 0.80,
    "LONG_RANGE_GUN_MIN_WIDTH": 0.08,
    "LONG_RANGE_GUN_MAX_WIDTH": 0.55,
    "LONG_RANGE_GUN_MIN_MEAN_SNR": 118.0,
    "LONG_RANGE_GUN_MIN_PEAK_SNR": 140.0,
    "LONG_RANGE_GUN_MAX_ABS_VELOCITY": 0.13,
    "LONG_RANGE_GUN_MAX_ABS_Z": 0.50,
    "LONG_RANGE_GUN_MIN_QUALITY": 80.0,
    "LONG_RANGE_GUN_MIN_POINTS": 5,
    "LONG_RANGE_GUN_REQUIRED_HITS": 5,
    "LONG_RANGE_GUN_HIT_WINDOW": 7,
}
```

- [x] **Step 2: Add complete replay assertions**

Apply every gate conjunctively and keep a seven-observation Boolean window per object ID. Assert track 1953 confirms in `concealed_hand_bag.md`, `gun_concealed_bag.md`, and `gun_with_human_open.md`; assert track 287 never confirms in `gun_present_open.md`; assert any `gun_under_cloth.md` non-pass is attributable to the approved 3.00 m boundary rather than silently counted as a validated negative.

- [x] **Step 3: Add profile and diagnostic source contracts**

Assert the profile contains exactly:

```python
self.assertIn("aoaFovCfg -1 -30 30 -30 30", PROFILE)
self.assertIn("cfarFovCfg -1 0 0.50 3.00", PROFILE)
```

Assert the firmware contains `radialVelocityStdDev`, `radialVelocitySpan`, their initialization, computation from `filteredVelocities`, and serial labels `std=` and `span=`. Assert neither field occurs inside the `const bool passes =` gate block.

- [x] **Step 4: Update the processing-margin contract**

Change the clustering policy test to assert both:

```python
self.assertEqual(numeric_constant("RANGE_MIN"), 0.45)
self.assertEqual(numeric_constant("RANGE_MAX"), 3.10)
```

- [x] **Step 5: Run focused tests and verify RED**

Run:

```powershell
$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v
```

Expected: FAIL because the profile still uses 0.30-3.50 m and +/-45 degrees; firmware still uses 0.20-3.60 m, 2.30-3.45 m, 0.55 candidate distance, and 0.35 m/s velocity; diagnostic fields do not yet exist. The 80.0 power assertion must already pass.

### Task 2: Implement the bounded range, profile, and alert constants

**Files:**
- Modify: `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`
- Modify: `parsing_detailed/parsing_detailed.ino`
- Test: `tests/test_long_range_alert_policy.py`
- Test: `tests/test_long_range_clustering_policy.py`

**Interfaces:**
- Consumes: exact constants and CLI commands from Task 1.
- Produces: updated radar FOV, processing margin, and scenario signature; no parser, clustering, temporal, GPIO, or alert-manager changes.

- [x] **Step 1: Change only the balanced-profile operating FOV**

Update the header and commands to:

```text
% Current phase operating region: 0.50 m to 3.00 m, +/-30 deg azimuth/elevation
aoaFovCfg -1 -30 30 -30 30
cfarFovCfg -1 0 0.50 3.00
```

Do not alter `profileCfg`, `frameCfg`, either `cfarCfg`, `clutterRemoval`, or `guiMonitor`.

- [x] **Step 2: Change only the approved firmware constants**

Set:

```cpp
const float RANGE_MIN = 0.45;
const float RANGE_MAX = 3.10;
const float LONG_RANGE_GUN_MIN_RANGE = 0.50;
const float LONG_RANGE_GUN_MAX_RANGE = 3.00;
const float LONG_RANGE_GUN_MIN_POWER_DB = 80.0;
const float LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE = 0.48;
const float LONG_RANGE_GUN_MAX_ABS_VELOCITY = 0.13;
```

Update nearby comments to state the 0.50-3.00 m deployment envelope and processing margins. Keep every other detection constant unchanged.

- [x] **Step 3: Run parameter/profile tests**

Run the focused constant, processing-range, profile, and capture-replay test methods. Expected: parameter and replay methods PASS; diagnostic source-contract method remains FAIL until Task 3.

### Task 3: Add diagnostic-only trimmed Doppler coherence telemetry

**Files:**
- Modify: `parsing_detailed/parsing_detailed.ino`
- Test: `tests/test_long_range_alert_policy.py`

**Interfaces:**
- Consumes: trimmed-point selection in `extractDimensions()` and aligned `cluster.velocities` indices.
- Produces: `AdvancedShapeDescriptor::radialVelocityStdDev`, `AdvancedShapeDescriptor::radialVelocitySpan`, and serial telemetry; neither field changes `evaluateLongRangeGunSignature()`.

- [x] **Step 1: Declare and initialize diagnostic fields**

Add:

```cpp
float radialVelocityStdDev;
float radialVelocitySpan;
```

Initialize both to `0` in `AdvancedShapeDescriptor()`.

- [x] **Step 2: Preserve velocities aligned with trimmed points**

In `extractDimensions()`, create `std::vector<float> filteredVelocities`. Whenever point index `i` passes the existing 2.5-times-median trim, append `cluster.velocities[i]` only when that index exists. Do not change the existing point/SNR trim or the current untrimmed `meanRadialVelocity` and `maxAbsRadialVelocity` fields used by the alert gate.

- [x] **Step 3: Compute dispersion diagnostics**

For non-empty `filteredVelocities`, compute the arithmetic mean in double precision, population variance, standard deviation via `sqrt`, and span as maximum minus minimum. Store only the standard deviation and span on the descriptor.

- [x] **Step 4: Print diagnostics without gating**

Extend the radial-velocity telemetry to:

```cpp
Serial.printf("     Radial velocity estimate: mean=%+.4fm/s peak=%.4fm/s std=%.4fm/s span=%.4fm/s | Track velocity=(%+.4f,%+.4f,%+.4f)m/s\n",
              desc.meanRadialVelocity, desc.maxAbsRadialVelocity,
              desc.radialVelocityStdDev, desc.radialVelocitySpan,
              track.velocity.x, track.velocity.y, track.velocity.z);
```

- [x] **Step 5: Run focused tests and verify GREEN**

Run both policy modules. Expected: all tests PASS.

### Task 4: Reconcile documentation and run final verification

**Files:**
- Modify: `PROJECT_RECORD.md`
- Modify: `docs/superpowers/plans/2026-07-14-concealed-gun-operating-envelope.md`

**Interfaces:**
- Consumes: final diff and observed command output.
- Produces: accurate current-state documentation, checked plan steps, and a complete implementation ledger entry.

- [x] **Step 1: Update current-state sections**

Record the 0.50-3.00 m radar/signature envelope, +/-30 degree angular FOV, 0.45-3.10 m processing margin, 80.0 power, 0.48 candidate distance, 0.13 m/s peak velocity, unchanged adaptive clustering and other gates, and diagnostic-only velocity standard deviation/span.

- [x] **Step 2: Append the implementation ledger entry**

List every changed path and symbol/command. Distinguish capture replay, source inspection, compilation, flashing, and physical hardware validation. Record exact exit codes and test counts.

- [x] **Step 3: Run complete software verification**

Run:

```powershell
$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v
git diff --check
```

Also assert exact protected profile commands/constants, count firmware opening/closing braces, scan the plan for unchecked steps after completion, and query `Get-Command arduino-cli, g++, clang++`.

- [x] **Step 4: Record toolchain and hardware status accurately**

If no compiler is available, state that no Arduino/C++ compilation occurred. Hardware validation remains pending until the updated profile is loaded, the sketch is compiled/flashed, serial evidence is captured at all six range bands, and LED/buzzer behavior is physically observed.

- [x] **Step 5: Mark completed plan steps**

Change each executed checkbox to `[x]` only after its command or edit has actually completed. Do not stage or commit.

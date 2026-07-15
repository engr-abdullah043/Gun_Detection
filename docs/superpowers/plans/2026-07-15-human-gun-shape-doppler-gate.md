# Human-vs-Gun Shape-Doppler Gate Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Prevent the supplied human-only capture from confirming the scenario alert while retaining confirmation of the supplied human-with-gun capture.

**Architecture:** Keep the existing base signature and its five-of-seven history unchanged. Add a second per-track seven-observation bit history whose evidence is a base-passing frame with planarity at least 0.75, flatness at most 0.20, and trimmed Doppler standard deviation at least 0.052 m/s; final scenario confirmation requires five base hits plus one secondary hit in the same window.

**Tech Stack:** Arduino/C++ ESP32 firmware, Python `unittest` source-contract and text-capture replay tests, PowerShell verification.

## Global Constraints

- Preserve `LONG_RANGE_GUN_MIN_POWER_DB = 80.0` relative dB.
- Preserve `LONG_RANGE_GUN_MAX_ABS_VELOCITY = 0.13` m/s and do not add a Doppler-peak lower bound.
- Preserve the 0.50-3.00 m deployment envelope, +/-30 degree radar FOV, existing calibration matcher, GPIO alert path, and three-second alert behavior.
- Do not alter the pre-existing working-tree pin values `LED_PIN = 2` and `BUZZER_PIN = 38`.
- Do not stage or commit; repository instructions require explicit user authorization for either action.
- Update `PROJECT_RECORD.md` current-state sections and append a complete Change Ledger entry in the same change set.
- Treat replay against the two supplied captures as development evidence, not held-out validation or hardware proof.

---

### Task 1: Add failing replay and source-contract tests

**Files:**
- Modify: `tests/test_long_range_alert_policy.py`
- Read: `outputs/only_human_present.md`
- Read: `outputs/human_with_gun.md`

**Interfaces:**
- Consumes: Existing `capture_rows()`, `row_passes()`, and per-track seven-frame replay.
- Produces: Parsed `doppler_std`, `planarity`, and `flatness`; `row_has_shape_doppler_evidence()`; final-confirmation replay using both histories.

- [x] **Step 1: Extend capture parsing without breaking older captures**

Parse these optional fields from each object block:

```python
std_match = re.search(r"\bstd=([0-9.]+)m/s", block)
shape_match = re.search(
    r"Shape: planarity=([0-9.]+) flatness=([0-9.]+)", block
)
row["doppler_std"] = float(std_match.group(1)) if std_match else None
row["planarity"] = float(shape_match.group(1)) if shape_match else None
row["flatness"] = float(shape_match.group(2)) if shape_match else None
```

- [x] **Step 2: Add secondary-evidence and final-confirmation replay helpers**

```python
def row_has_shape_doppler_evidence(row):
    return (
        row_passes(row)
        and row["planarity"] is not None
        and row["flatness"] is not None
        and row["doppler_std"] is not None
        and row["planarity"] >= numeric_constant("LONG_RANGE_GUN_MIN_PLANARITY")
        and row["flatness"] <= numeric_constant("LONG_RANGE_GUN_MAX_FLATNESS")
        and row["doppler_std"]
        >= numeric_constant("LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV")
    )
```

Maintain one base `deque(maxlen=7)` and one secondary `deque(maxlen=7)` per track. Count final confirmation only when the base sum is at least five and the secondary sum is at least one.

- [x] **Step 3: Add exact policy tests**

Assert the firmware constants are `0.75`, `0.20`, `0.052`, and one required secondary hit. Assert track 1756 in `only_human_present.md` has base confirmation but zero final confirmations. Assert track 1756 in `human_with_gun.md` has at least one secondary evidence frame and at least one final confirmation. Add source contracts for the secondary history fields, confirmation conjunction, and telemetry labels.

- [x] **Step 4: Run the focused test and verify RED**

Run:

```powershell
$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_alert_policy -v
```

Expected: nonzero exit with failures caused by missing shape-Doppler constants, per-track history, confirmation conjunction, and telemetry—not parsing errors.

### Task 2: Implement the secondary per-track gate

**Files:**
- Modify: `parsing_detailed/parsing_detailed.ino`
- Test: `tests/test_long_range_alert_policy.py`

**Interfaces:**
- Consumes: `AdvancedShapeDescriptor::planarityScore`, `flatnessRatio`, `radialVelocityStdDev`, and existing base-pass result.
- Produces: `longRangeGunShapeDopplerHitHistory`, window-hit count, per-frame evidence flag, and conjunction-based `longRangeGunConfirmed`.

- [x] **Step 1: Add named policy constants**

```cpp
const float LONG_RANGE_GUN_MIN_PLANARITY = 0.75;
const float LONG_RANGE_GUN_MAX_FLATNESS = 0.20;
const float LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV = 0.052;
const int LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS = 1;
```

- [x] **Step 2: Add and initialize per-track secondary state**

Add a seven-bit history, hit count, and current-frame evidence boolean beside the existing long-range fields. Initialize all three for new tracks and clear them when a track is invalid/reset.

- [x] **Step 3: Update the observation helper atomically**

Change the helper to accept `bool pass, bool shapeDopplerPass`, shift both bit histories under the same seven-frame mask, count both windows, and assign:

```cpp
track.longRangeGunConfirmed =
  baseHits >= LONG_RANGE_GUN_REQUIRED_HITS &&
  shapeDopplerHits >= LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS;
```

All missing/unmeasured paths must call the helper with `false, false` so neither history bridges rejected frames.

- [x] **Step 4: Calculate secondary evidence only after the base pass**

```cpp
const bool shapeDopplerPass =
  passes &&
  desc.planarityScore >= LONG_RANGE_GUN_MIN_PLANARITY &&
  desc.flatnessRatio <= LONG_RANGE_GUN_MAX_FLATNESS &&
  desc.radialVelocityStdDev >= LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV;
```

Store the flag and push both observations. Do not modify the existing base-pass expression.

- [x] **Step 5: Extend serial diagnostics**

Keep the existing `pass`, `hits`, and `confirmed` fields and add the current shape-Doppler pass plus its hit count/requirement. Print the three thresholds so the next hardware capture is auditable.

- [x] **Step 6: Run the focused test and verify GREEN**

Run:

```powershell
$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_alert_policy -v
```

Expected: exit 0, with the new human-only rejection and human-with-gun retention tests passing.

### Task 3: Reconcile documentation and perform complete verification

**Files:**
- Modify: `PROJECT_RECORD.md`
- Modify: `docs/superpowers/plans/2026-07-15-human-gun-shape-doppler-gate.md`

**Interfaces:**
- Consumes: Final firmware symbols and fresh test results.
- Produces: Accurate current-state policy, evidence bounds, rollback instructions, and verification record.

- [x] **Step 1: Update current-state sections**

Document the secondary shape-Doppler rule in Calibration matching and alerting, Velocity, Current Detection Rules, Known Limitations, and Rule-Based Detection Direction. Reconcile the pre-existing source pin values as observed working-tree state without claiming this change introduced them.

- [x] **Step 2: Append the mandatory Change Ledger entry**

List every changed path and symbol, previous/new behavior, the two-capture evidence, expected false-negative trade-offs for sparse or unfavorable gun returns, exact verification commands/results, absent compilation/flashing, rollback steps, and required hardware matrix.

- [x] **Step 3: Run the full policy suite**

```powershell
$env:PYTHONDONTWRITEBYTECODE='1'; python -m unittest tests.test_long_range_clustering_policy tests.test_long_range_alert_policy -v
```

Expected: exit 0 with zero failures.

- [x] **Step 4: Run static checks**

```powershell
git diff --check
```

Check exact constants, both history shifts, both miss paths, confirmation conjunction, telemetry labels, balanced opening/closing braces, and availability of `arduino-cli`, `g++`, or `clang++`. Record unavailable compilation tools as a limitation rather than a pass.

- [x] **Step 5: Mark completed checkboxes and rerun verification**

Change every plan checkbox to `[x]`, rerun the complete suite and `git diff --check`, and record the fresh final outputs in `PROJECT_RECORD.md`. Do not stage or commit.

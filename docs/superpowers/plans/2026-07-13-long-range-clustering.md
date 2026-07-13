# Long-Range Clustering Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Allow sparse gun-present radar returns to form diagnosable clusters through 3.50 m without relaxing identity or alert thresholds.

**Architecture:** Keep the current parser and DBSCAN implementation, but centralize long-range clustering policy in named constants, count DBSCAN seeds as total points, select epsilon by point range, and report why an accepted point set did not contain a core point. Keep classification behavior unchanged.

**Tech Stack:** ESP32 Arduino C++, Python 3 source-contract regression tests, TI IWR6843AOP balanced 32-loop profile.

## Global Constraints

- Supported deployment range is 0.30-3.50 m with a 3.60 m firmware processing margin.
- Minimum cluster size is five total points including the DBSCAN seed.
- Adaptive epsilon bands are 0.15 m through 1.50 m, 0.20 m through 2.50 m, and 0.25 m through 3.60 m.
- Calibration matching, identity thresholds, LED behavior, buzzer behavior, and relative-power classification remain unchanged.
- Every repository edit must update `PROJECT_RECORD.md` and its Change Ledger.

---

### Task 1: Add failing policy regression tests

**Files:**
- Create: `tests/test_long_range_clustering_policy.py`
- Test: `tests/test_long_range_clustering_policy.py`

**Interfaces:**
- Consumes: `parsing_detailed/parsing_detailed.ino` source text.
- Produces: executable source-contract tests for exact constants, seed semantics, adaptive epsilon bands, and failure diagnostics.

- [x] Write tests that require a 3.60 m processing range, five-point gates, seed-inclusive DBSCAN, three adaptive epsilon bands, and diagnostic field names.
- [x] Run `python -m unittest tests.test_long_range_clustering_policy -v` and verify failures against the current firmware.

### Task 2: Implement range-adaptive five-point clustering

**Files:**
- Modify: `parsing_detailed/parsing_detailed.ino`
- Test: `tests/test_long_range_clustering_policy.py`

**Interfaces:**
- Consumes: parsed and SNR-filtered `std::vector<RadarPoint>` values.
- Produces: `adaptiveDbscanEps(float rangeMeters)`, seed-inclusive neighborhoods, and five-point `ClusterData` values.

- [x] Change `RANGE_MAX` to 3.60 m and align `DBSCAN_MIN_POINTS`, `MIN_CLUSTER_POINTS`, `MIN_POINTS_FOR_OUTPUT`, and `MIN_POINTS_FOR_VALID_OBJECT` at five.
- [x] Add named near/mid/far epsilon values and range boundaries plus `adaptiveDbscanEps()`.
- [x] Include the seed point in both initial and expansion neighborhood lists and compare total neighbor count with five.
- [x] Run the regression test and verify the policy assertions pass.

### Task 3: Add actionable filter and DBSCAN diagnostics

**Files:**
- Modify: `parsing_detailed/parsing_detailed.ino`
- Test: `tests/test_long_range_clustering_policy.py`

**Interfaces:**
- Consumes: per-frame input/accepted point ranges and DBSCAN neighborhood observations.
- Produces: `DbscanDiagnostics` and serial fields `acceptedRange`, `epsRange`, `maxNeighbors`, and `coreCandidates`.

- [x] Extend `FilterDiagnostics` with input and accepted minimum/maximum ranges.
- [x] Add `DbscanDiagnostics` and populate epsilon bounds, maximum total-neighbor count, and core-candidate count.
- [x] Print the new fields on no-cluster frames and input range on zero-accepted frames.
- [x] Run the regression test and verify all diagnostic assertions pass.

### Task 4: Update the permanent record and verify the change set

**Files:**
- Modify: `PROJECT_RECORD.md`
- Modify: `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`
- Preserve: `output.md`

**Interfaces:**
- Consumes: implemented constants, diagnostics, user capture, and verification output.
- Produces: accurate current-state documentation and a complete Change Ledger entry.

- [x] Update current clustering/range rules and document the new diagnostic meanings.
- [x] Append the mandatory ledger entry with exact changes, risks, verification, rollback, and hardware-test status.
- [x] Run `python -m unittest tests.test_long_range_clustering_policy -v` and require zero failures.
- [x] Run `git diff --check` and require exit code 0.
- [x] Inspect `git diff` to confirm no calibration, identity, LED, or buzzer thresholds changed.

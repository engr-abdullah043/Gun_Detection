# Expand Long-Range Geometry Bounds Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Allow both observed 3 m gun DBSCAN footprints to reach the existing five-frame alert confirmation.

**Architecture:** Preserve the multi-gate long-range signature and change only its maximum length and width constants from 0.30/0.16 m to 0.55/0.55 m. Replay the latest capture against all gates and retain source-contract coverage for the previous capture bounds.

**Tech Stack:** ESP32 Arduino C++, Python `unittest`, saved serial telemetry.

## Global Constraints

- Do not change radar `.cfg` commands.
- Do not change candidate, power, range, SNR, quality, point-count, GPIO, alert timing, or five-hit thresholds.
- Do not stage or commit without explicit user authorization.

---

### Task 1: Expand the disproven geometry maxima

**Files:**
- Modify: `tests/test_long_range_alert_policy.py`
- Modify: `parsing_detailed/parsing_detailed.ino`
- Modify: `docs/superpowers/specs/2026-07-13-long-range-alert-signature-design.md`
- Modify: `PROJECT_RECORD.md`

**Interfaces:**
- Consumes: latest `output.md` gun-present telemetry and the `LONG_RANGE_GUN_*` policy constants.
- Produces: `LONG_RANGE_GUN_MAX_LENGTH=0.55` and `LONG_RANGE_GUN_MAX_WIDTH=0.55` with all other alert gates unchanged.

- [x] **Step 1: Update the replay test to parse the latest `gun`-candidate track and require at least 50 accepted frames using 0.55 m maxima.**
- [x] **Step 2: Run `python -m unittest tests.test_long_range_alert_policy -v` and verify it fails because firmware still declares the old maxima.**
- [x] **Step 3: Change only `LONG_RANGE_GUN_MAX_LENGTH` and `LONG_RANGE_GUN_MAX_WIDTH` to `0.55`.**
- [x] **Step 4: Run both long-range test modules and require zero failures.**
- [x] **Step 5: Compare every protected non-geometry constant with its pre-fix value and run `git diff --check`.**
- [x] **Step 6: Update `PROJECT_RECORD.md` current state and append a complete corrective ledger entry.**

# Project Record Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Create a durable, self-enforcing project record that preserves the reconstructed system baseline and documents every future repository change with its reason, impact, evidence, and rollback path.

**Architecture:** `PROJECT_RECORD.md` will be the single source of truth for project context, current behavior, known limitations, and the chronological change ledger. A short root-level `AGENTS.md` will require future assistants and contributors to read and update that record whenever they edit any project file.

**Tech Stack:** Markdown, Git, PowerShell, Arduino C++ project documentation.

## Global Constraints

- Do not change firmware, radar configuration, calibration data, Python utilities, or captured output as part of this documentation task.
- Preserve the existing clean `main` history; do not stage or commit without explicit user authorization.
- Record facts from current `HEAD` (`82035de1e2cc73c6a5ddf83b369fc442de0b405b`) separately from proposed future work.
- Clearly distinguish direct sensor measurements, derived estimates, heuristics, unavailable/sentinel values, and known defects.
- Every future repository edit must update `PROJECT_RECORD.md` in the same change set.
- The creation of the record, enforcement file, and this implementation plan must be the first chronological ledger entry.
- Use absolute dates in `YYYY-MM-DD` format and include the relevant Git commit when one exists.

---

### Task 1: Create the project source-of-truth record

**Files:**
- Create: `PROJECT_RECORD.md`
- Read: `parsing_detailed/parsing_detailed.ino`
- Read: `configuration_command/configuration_command.ino`
- Read: `RCS.py`
- Read: `json/json.ino`
- Read: `json/radar_calibration.json`
- Read: `cfg_profiles/iwr6843aop_gun_balanced_32loops_14db.cfg`
- Read: `output.md`
- Read: Git history through `82035de`

**Interfaces:**
- Consumes: Current repository behavior and the approved documentation structure.
- Produces: The canonical `PROJECT_RECORD.md` that all later changes must maintain.

- [x] **Step 1: Write the record purpose and maintenance contract**

  State that the file replaces lost conversational context, is the single source of truth, must be read before edits, and must be updated in the same change set as every firmware, configuration, calibration, tooling, documentation, test, or hardware-interface change.

- [x] **Step 2: Record the verified repository baseline**

  Include:

  - Clean `main` at `82035de1e2cc73c6a5ddf83b369fc442de0b405b` as of 2026-07-13.
  - `parsing_detailed/parsing_detailed.ino` as the evidence-backed canonical detection firmware.
  - The roles of `parsing_test.ino`, `RCS.py`, `RCS_NO MENU.py`, `configuration_command.ino`, `config_testing.ino`, `json.ino`, the calibration JSON, radar profiles, and `output.md`.
  - Hardware pins, UART baud rates, SPIFFS calibration path, button, LED, and buzzer behavior.

- [x] **Step 3: Document the complete runtime data flow**

  Describe sensor packet synchronization, the 40-byte header, TLVs 1/7/2, filtering, DBSCAN, outlier trimming, descriptor extraction, tracking, calibration matching, temporal confirmation, serial output, and alert activation.

- [x] **Step 4: Document every displayed metric and its units**

  Include position/range, range-profile raw and relative power, radial and track velocities, raw SNR/noise and 0.1 dB scaling, geometry, point count, density, planarity, flatness, thickness, spread, quality, validity reason, match score, candidate name/distance, and malformed-frame diagnostics.

  Preserve the verified sample calculations:

  ```text
  raw 3180 -> 3180 * 0.031357291215 - 18.061799740 = 81.6544 dB
  range bin 53 -> 53 * 0.0381529018 = 2.0221 m
  nine-point sample quality -> 88.51%, displayed as 89%
  raw SNR 121.111 -> approximately 12.1111 dB
  raw noise 586.556 -> approximately 58.6556 dB
  ```

- [x] **Step 5: Document current detection and alert rules**

  Include all current thresholds, the 70/30 geometry/material distance, the distinction between the displayed 0.25 tolerance and the effective 0.20 entry threshold, six valid detections, ten high-quality frames, case-insensitive `gun` label matching, and confirmed-state alerting.

- [x] **Step 6: Document known limitations and unresolved risks**

  Include raw SNR scaling, effective seven-point DBSCAN core requirement, unavailable shape fields below their sample minima, Python/ESP32 feature-definition mismatch, unused `MIN_POINTS_FOR_CONFIRMED_MATCH`, stale/mislabelled match score, profile-specific power scaling, fixed 10 Hz track velocity, early-return temporal freezing, range-profile ambiguity, calibration provenance gaps, malformed-frame ambiguity, and absence of a labeled validation dataset.

- [x] **Step 7: Record the Git reconstruction**

  Summarize the progression from initial Python/Arduino import through detailed firmware, parser and DBSCAN corrections, TLV 2 power support, corrected relative-power conversion, relaxed point thresholds, and the bounded-track crash fix. Clearly mark old plan recommendations that were superseded or never implemented.

- [x] **Step 8: Add the mandatory change-entry template**

  The template must contain:

  ```markdown
  ### YYYY-MM-DD - Short change title

  - Status:
  - Requested by:
  - Objective:
  - Files changed:
  - Symbols/settings changed:
  - Previous behavior:
  - New behavior:
  - Detailed implementation:
  - Reason and evidence:
  - System impact:
  - Risks and trade-offs:
  - Verification performed:
  - Verification results:
  - Hardware validation required/completed:
  - Rollback procedure:
  - Related commit:
  - Follow-up work:
  ```

- [x] **Step 9: Add the initial ledger entry**

  Record creation of `PROJECT_RECORD.md`, `AGENTS.md`, and this plan; explain that they were introduced after loss of conversation history to preserve project continuity. State that no firmware, radar configuration, calibration, or runtime behavior changed.

- [x] **Step 10: Verify the record structure**

  Run:

  ```powershell
  rg -n "Purpose|Current Verified Baseline|Runtime Data Flow|Metric Reference|Current Detection Rules|Known Limitations|Git History Reconstruction|Mandatory Change Entry Template|Change Ledger" PROJECT_RECORD.md
  ```

  Expected: every required section appears exactly once.

---

### Task 2: Create the enforcement instructions

**Files:**
- Create: `AGENTS.md`
- Reference: `PROJECT_RECORD.md`

**Interfaces:**
- Consumes: The maintenance contract defined in `PROJECT_RECORD.md`.
- Produces: Repository-level instructions that future assistants automatically discover.

- [x] **Step 1: Add mandatory pre-edit instructions**

  Require every assistant to read `PROJECT_RECORD.md` before modifying any repository file and reconcile its planned change with the documented current state and known limitations.

- [x] **Step 2: Add mandatory same-change-set logging instructions**

  Require every edit to update both the current-state sections affected by the change and append a complete chronological ledger entry. Prohibit vague entries such as “updated firmware” or “fixed config.”

- [x] **Step 3: Define coverage**

  Apply the rule to firmware, radar `.cfg` files, calibration data, Python tools, tests, documentation, build tooling, hardware pin mappings, generated/captured artifacts intentionally committed to the repository, and changes made in response to user-run hardware experiments.

- [x] **Step 4: Define evidence and status rules**

  Require exact verification commands/results, distinguish static checks from compilation and hardware validation, never mark unperformed hardware testing as passed, and add a corrective entry rather than silently rewriting historical facts.

- [x] **Step 5: Verify discoverability and linkage**

  Run:

  ```powershell
  rg -n "PROJECT_RECORD.md|before modifying|same change set|verification|hardware" AGENTS.md
  ```

  Expected: the canonical record, pre-edit requirement, update requirement, and evidence rules are all present.

---

### Task 3: Cross-check and verify the documentation change

**Files:**
- Verify: `PROJECT_RECORD.md`
- Verify: `AGENTS.md`
- Verify: `docs/superpowers/plans/2026-07-13-project-record.md`

**Interfaces:**
- Consumes: Tasks 1 and 2 outputs.
- Produces: A coherent, internally consistent documentation system ready for future use.

- [x] **Step 1: Check for incomplete placeholders**

  Run:

  ```powershell
  rg -n "TBD|TODO|fill in|implement later" PROJECT_RECORD.md AGENTS.md
  ```

  Expected: no matches outside the intentionally blank reusable change-entry template fields.

- [x] **Step 2: Confirm no runtime files changed**

  Run:

  ```powershell
  git status --short
  ```

  Expected: only `PROJECT_RECORD.md`, `AGENTS.md`, and `docs/superpowers/plans/2026-07-13-project-record.md` are new or modified.

- [x] **Step 3: Check Markdown and patch cleanliness**

  Run:

  ```powershell
  git diff --check
  ```

  Expected: exit code 0 with no whitespace errors.

- [x] **Step 4: Review the initial ledger entry against the actual diff**

  Confirm every changed file is listed, no firmware/configuration behavior is claimed to have changed, verification results match the commands actually run, and unperformed build/hardware testing is explicitly marked not applicable or not performed.

- [x] **Step 5: Report completion without staging or committing**

  Provide clickable links to `PROJECT_RECORD.md` and `AGENTS.md`, summarize the enforcement rule, list verification performed, and leave all changes unstaged unless the user separately requests Git staging or a commit.

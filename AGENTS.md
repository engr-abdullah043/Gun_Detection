# Repository Instructions

## Mandatory Project Record

`PROJECT_RECORD.md` is the single source of truth for this repository’s architecture, current firmware and radar configuration, calibration assumptions, known limitations, decisions, and chronological change history.

Before modifying any repository file, read `PROJECT_RECORD.md` completely and reconcile the planned work with its current verified baseline.

## Required Update for Every Change

Every repository edit must update `PROJECT_RECORD.md` in the same change set. This requirement applies to:

- ESP32/Arduino firmware
- Radar `.cfg` profiles and CLI commands
- Calibration JSON and calibration procedures
- Python parsing, detection, calibration, or analysis tools
- Tests, packet fixtures, and validation scripts
- Documentation and implementation plans
- Build, flashing, deployment, and development tooling
- Hardware pin mappings, UART settings, and peripheral behavior
- Generated or captured artifacts intentionally added to the repository
- Edits made because of user-run hardware experiments or serial-output evidence

For every change:

1. Update affected current-state sections of `PROJECT_RECORD.md` so they describe the resulting repository accurately.
2. Append a complete entry under `## Change Ledger` using the mandatory template in that file.
3. List every changed path and exact symbol, constant, radar command, JSON key, or documentation section.
4. Explain previous behavior, new behavior, technical implementation, reason, system impact, risks, verification, hardware-validation status, rollback, and follow-up work.

Do not use vague summaries such as “updated firmware,” “fixed parser,” or “tuned config.”

## Evidence and Status Rules

- Record exact verification commands and their results, including exit codes or failure counts where available.
- Distinguish source inspection, static checks, compilation, flashing, and hardware validation.
- Never report a build or hardware test as passed unless it was actually run and its output was observed.
- If hardware validation remains necessary, state exactly what must be flashed, connected, captured, and evaluated.
- Record assumptions and estimates as assumptions and estimates, not verified measurements.
- Keep direct sensor measurements, derived estimates, heuristics, sentinel/unavailable values, and confirmed defects clearly separated.
- Do not silently rewrite historical ledger entries. Add a corrective, superseding, reverting, or follow-up entry when meaning changes.
- Do not stage or commit changes unless the user explicitly requests Git staging or a commit.

## Read-Only Work

If an investigation makes no repository edits, a ledger entry is not mandatory. If that investigation establishes durable facts that will guide future work, update `PROJECT_RECORD.md` before using those facts as the basis for a later edit.

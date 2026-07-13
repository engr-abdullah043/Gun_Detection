# Long-Range Gun Alert Signature Implementation Plan

1. Add a replay/source-contract test that proves the captured stable target satisfies a bounded multi-feature policy and that the firmware contains a temporally confirmed alert path.
2. Add named long-range signature constants without changing the existing calibration thresholds, GPIO mappings, or alert timing.
3. Store consecutive evidence, confirmation, and selected range-profile power per track and initialize every field on track creation.
4. Evaluate the signature after calibration-candidate calculation and reset evidence on any failed or unmeasured update.
5. Feed confirmed evidence into the existing LED/buzzer trigger and print explicit diagnostic telemetry.
6. Update `PROJECT_RECORD.md` current-state sections and append the mandatory change-ledger entry.
7. Run both source-contract suites, whitespace validation, protected-constant comparison, structural checks, and record the absence of a local Arduino compile tool.
8. Flash the canonical sketch and validate gun-present plus negative-object captures under the balanced 32-loop profile.


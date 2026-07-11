# Relaxed Point Thresholds Design

## Goal

Allow spatially sparse gun returns containing roughly 22–23 filtered points to form usable DBSCAN clusters when fewer than 12 points occupy each 0.15 m neighborhood.

## Approved change

- Reduce `DBSCAN_MIN_POINTS` from 12 to 6.
- Reduce `MIN_CLUSTER_POINTS` from 10 to 6.
- Reduce `MIN_POINTS_FOR_OUTPUT` from 10 to 6.
- Reduce `MIN_POINTS_FOR_VALID_OBJECT` from 12 to 6.
- Keep `DBSCAN_EPS` at 0.15 m so nearby human and gun returns are not merged more aggressively.
- Keep SNR, range, quality, temporal confirmation, calibration matching, and alert thresholds unchanged.

The four point-count thresholds remain aligned. A six-point DBSCAN cluster can therefore pass cluster construction, descriptor extraction, and object-quality validation without being rejected immediately by a later point-count gate.

## Expected behavior and risk

Frames that previously reported `no DBSCAN cluster (eps=0.15m minPts=12)` can form clusters when at least six mutually dense points are present. Smaller noise groups remain rejected. The reduced threshold increases sensitivity and may increase false clusters; existing SNR, spatial-spread, density, six-frame validity, and ten-frame stability checks remain active to limit that risk.

## Verification

- A source-level regression check must fail with the old thresholds and pass when all four approved thresholds equal 6.
- Confirm the DBSCAN radius remains 0.15 m and unrelated detection constants are unchanged.
- Run static syntax/delimiter and `git diff --check` validation.
- Hardware validation must confirm the serial log reports `minPts=6`, produces clusters for the stated gun scenario, and does not materially increase empty-scene alerts.

# Long-Range Clustering Design

## Goal

Form stable object clusters through the 3.50 m deployment boundary before changing calibration matching or alert rules.

## Approved design

- Keep the balanced 32-loop radar profile and its 0.30-3.50 m CFAR range FOV.
- Give the firmware a 3.60 m processing margin so range jitter at the 3.50 m boundary is not discarded prematurely.
- Define DBSCAN minimum points as total points including the seed, with five total points required.
- Use a 0.15 m neighborhood through 1.50 m, 0.20 m above 1.50 m through 2.50 m, and 0.25 m beyond 2.50 m through 3.60 m.
- Align retained-cluster, descriptor-output, and valid-object minimums at five points.
- Print accepted range, adaptive epsilon range, maximum total neighbors, and core-candidate count whenever filtered points fail to form a cluster.
- Do not change calibration-distance thresholds, identity confirmation, LED behavior, buzzer behavior, or relative-power classification in this stage.

## Safety and validation

The adaptive radius limits close-range merging while allowing angularly dispersed far-range returns. Five-point clusters increase clutter exposure, so no alert threshold is relaxed in this stage. The first hardware test must establish cluster formation and collect descriptors; relative-power and gun-confirmation rules are a subsequent change based on those captures.


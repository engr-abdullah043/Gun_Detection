# Long-Range Gun Alert Signature Design

## Goal

Activate the existing GPIO11 LED and GPIO12 buzzer for the stable gun-present signature captured in `output.md` near 3.0 m, without globally relaxing the existing calibration matcher.

## Evidence

The stable track 99 capture contains 53 displayed samples at approximately 3.013 m. Fifty-two samples include a `gun` calibration candidate. Across the stable samples, relative power is 81.53-81.81 dB, raw mean SNR is 134.556-159.667, length is 0.2197-0.2500 m, width is 0.1026-0.1077 m, point count is 9, quality is 91-92%, and candidate distance is 0.4927-0.4982. The old `0.25` match and `0.20` entry gates therefore reject the object even though `gun` is consistently the nearest calibration candidate.

## Design

Keep the existing general calibration matcher unchanged. Add a second, explicitly bounded long-range signature evaluated per measured track after candidate calculation. A frame passes only when all of these conditions hold:

- descriptor is valid;
- nearest candidate is `gun`, case-insensitively;
- candidate distance is at most `0.55`;
- track range is `2.70-3.60 m`;
- TLV-2 range-profile relative power is available and at least `75.0 dB`;
- length is `0.18-0.55 m`;
- width is `0.07-0.55 m`;
- raw mean SNR is at least `100.0`;
- descriptor quality is at least `80%`;
- descriptor contains at least five points.

Require five consecutive passing measured updates on the same track. Any failed or unmeasured update resets the counter. Confirmation feeds the existing `gunDetected` path, which activates the existing three-second LED/buzzer alert. Serial telemetry exposes pass state, hit count, confirmation, selected power, and candidate limit.

## Safety and limitations

This is a scenario-specific heuristic derived from one positive capture, not a validated gun classifier. Relative power is range-profile energy selected by range and is not uniquely associated with the angular cluster. Other metal objects can satisfy the gates. Hardware tests must include empty-scene, non-metal, and difficult metal negatives before deployment claims are made.

## Superseding geometry evidence

A second gun-present capture at the same approximately 3.0 m placement produced 64 stable `gun`-candidate frames. Every frame passed candidate distance, range, power, SNR, quality, and point-count gates, but the DBSCAN footprint measured 0.4294-0.4889 m long and 0.1002-0.4735 m wide. The original 0.30 m length maximum rejected all 64 frames and the 0.16 m width maximum rejected 61. Because the earlier capture measured 0.2197-0.2500 m long and 0.1026-0.1077 m wide, the absolute horizontal footprint is not repeatable enough for the original narrow maxima. The approved correction keeps the 0.18 m and 0.07 m minima and expands only both maxima to 0.55 m. All non-geometry gates and five-hit confirmation remain unchanged.


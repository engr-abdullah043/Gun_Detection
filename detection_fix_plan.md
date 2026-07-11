# Detection Fix Plan — `parsing_detailed.ino`
**Project:** Gun Detection (mmWave Radar, ESP32-S3 / xWR68xx)**  
**File:** `D:\Projects\Gun_Detection\parsing_detailed\parsing_detailed.ino`  
**Problem:** Gun at 1.2m detected only ~1 in every 3–4 frames; `consecutiveValidDetections` never reaches threshold; `malformed=yes` on valid frames.

---

## How to Use This Plan

Apply fixes in order A → B → C → D. Each fix is self-contained. Do not change anything outside the described blocks. After all fixes are applied, do a full compile before flashing.

---

## Fix A — DBSCAN and Cluster Parameters (CRITICAL)

### Why
The sensor produces 13–29 points per frame for a gun at 1.2m, spread across a bounding box of roughly 20cm × 15cm × 4cm. At 1.2m, mmWave angular resolution means adjacent reflection points are 5–7cm apart. `DBSCAN_EPS = 0.15` (15cm) is barely at the edge of that spacing — many legitimate neighbours fall just outside the radius and the cluster never forms. This is why 70% of frames show filtered points but no cluster.

`DBSCAN_MIN_POINTS = 12` compounds the problem: with only 13–25 total points in a thin elongated gun shape, most points simply cannot find 12 neighbours within 15cm, so no core point is ever seeded.

`MIN_CLUSTER_POINTS`, `MIN_POINTS_FOR_OUTPUT`, and `MIN_POINTS_FOR_VALID_OBJECT` are all set to values that are at or above the typical point count for a gun return, leaving zero margin.

### What to Change

**Find this block** (in the Configuration Constants section near the top of the file):

```cpp
// Clustering parameters
const float DBSCAN_EPS = 0.15;
const int DBSCAN_MIN_POINTS = 12;

// Range filtering
const float RANGE_MIN = 0.20;
const float RANGE_MAX = 3.0;

// SNR threshold
const int MIN_SNR = 20;

// TLV 7 overwrites this value. Frames without side information must not
// silently pass SNR filtering with fabricated measurements.
const uint16_t SNR_UNKNOWN = 0;

// Minimum cluster size
const int MIN_CLUSTER_POINTS = 10;
const int MIN_POINTS_FOR_OUTPUT = 10;

// ===== NEW: GHOST REJECTION SETTINGS =====
const int MIN_POINTS_FOR_VALID_OBJECT = 12;
const int MIN_POINTS_FOR_CONFIRMED_MATCH = 15;
```

**Replace with:**

```cpp
// Clustering parameters
// eps=0.25 matches actual inter-point spacing at 1.2m for xWR68xx AOP.
// minPts=8 is achievable with the 13-25 points a gun return produces.
const float DBSCAN_EPS = 0.25;
const int DBSCAN_MIN_POINTS = 8;

// Range filtering
const float RANGE_MIN = 0.20;
const float RANGE_MAX = 3.0;

// SNR threshold
const int MIN_SNR = 20;

// TLV 7 overwrites this value. Frames without side information must not
// silently pass SNR filtering with fabricated measurements.
const uint16_t SNR_UNKNOWN = 0;

// Minimum cluster size
// Lowered to match realistic gun point counts at 1.2m.
const int MIN_CLUSTER_POINTS = 6;
const int MIN_POINTS_FOR_OUTPUT = 6;

// ===== NEW: GHOST REJECTION SETTINGS =====
const int MIN_POINTS_FOR_VALID_OBJECT = 8;
const int MIN_POINTS_FOR_CONFIRMED_MATCH = 10;
```

### Verification
- Frames that previously printed `no DBSCAN cluster (eps=0.15m minPts=12)` with 13–25 filtered points should now produce a cluster.
- The `eps=0.25m minPts=8` values will appear in the "no cluster" diagnostic line if a frame still fails — confirm this updates correctly after the change.
- Do not change `RANGE_MIN`, `RANGE_MAX`, or `MIN_SNR` — those are correct.

---

## Fix B — Decay `consecutiveValidDetections` Instead of Hard Reset (CRITICAL)

### Why
In `updateDescriptor()`, when a descriptor is invalid or low-confidence, the code does:

```cpp
track.consecutiveValidDetections = 0;
```

This hard-resets the counter on any single frame where DBSCAN happens to fail or quality dips. Because the gap between successful cluster frames is currently 8–13 frames (even after Fix A it may still be 1–3 frames), the counter is perpetually zeroed before it can reach `MIN_CONSECUTIVE_DETECTIONS`. The tracker is stuck in `DETECTING` state forever.

Replacing the hard reset with a decrement-by-one means the counter survives brief gaps. If the gun is genuinely gone, the counter still drains to zero — it just takes a few frames instead of one.

### What to Change

**Find this block** in `ObjectTracker::updateDescriptor()`:

```cpp
  void updateDescriptor(TrackedObject& track, const AdvancedShapeDescriptor& descriptor) {
    track.allDescriptors.push_back(descriptor);
    
    if (track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.pop_front();
    }
    
    // Track quality
    track.qualityHistory.push_back(descriptor.confidenceScore);
    if (track.qualityHistory.size() > 30) {
      track.qualityHistory.pop_front();
    }
    
    if (descriptor.isValid && descriptor.confidenceScore > 70) {
      track.consecutiveValidDetections++;
      track.consecutiveHighQuality++;
      track.isGhost = false;
    } else {
      track.consecutiveValidDetections = 0;
      if (descriptor.confidenceScore < 40) {
        track.consecutiveHighQuality = 0;
        track.isGhost = true;
      }
    }
  }
```

**Replace with:**

```cpp
  void updateDescriptor(TrackedObject& track, const AdvancedShapeDescriptor& descriptor) {
    track.allDescriptors.push_back(descriptor);
    
    if (track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.pop_front();
    }
    
    // Track quality
    track.qualityHistory.push_back(descriptor.confidenceScore);
    if (track.qualityHistory.size() > 30) {
      track.qualityHistory.pop_front();
    }
    
    if (descriptor.isValid && descriptor.confidenceScore > 70) {
      track.consecutiveValidDetections++;
      track.consecutiveHighQuality++;
      track.isGhost = false;
    } else {
      // Decay by 1 instead of hard reset. This lets the counter survive
      // brief DBSCAN gaps (1-3 frames) caused by sparse point clouds at
      // range, while still draining to zero if the object is genuinely gone.
      if (track.consecutiveValidDetections > 0) {
        track.consecutiveValidDetections--;
      }
      if (descriptor.confidenceScore < 40) {
        // Only mark ghost and reset high-quality counter on very poor frames.
        if (track.consecutiveHighQuality > 0) {
          track.consecutiveHighQuality--;
        }
        if (track.consecutiveHighQuality == 0) {
          track.isGhost = true;
        }
      }
    }
  }
```

### Verification
- A track that previously reset to `DETECTING... (need 5 more valid frames)` after every gap should now show the counter *holding* or slowly advancing across gaps.
- If the gun is removed from the scene, the counter should drain to zero within `MIN_CONSECUTIVE_DETECTIONS` frames and the track should go LOST.

---

## Fix C — Reduce Temporal Thresholds (CRITICAL)

### Why
`MIN_CONSECUTIVE_DETECTIONS = 6` requires six consecutive valid-quality frames to even attempt a calibration match. `MIN_STABLE_FRAMES = 10` requires ten consecutive high-quality frames before the track transitions to CONFIRMED. 

With Fix A and B applied, detection will be more consistent, but the radar still returns a variable point cloud and occasional missed frames will remain normal for mmWave. At the original thresholds, a gun would need to be held still for 6–10 clean consecutive frames — approximately 3–5 seconds assuming the radar runs at ~2 fps effective throughput after all the filtering. This is far too slow for a detection system.

The values below are tuned to the observed frame rate and point cloud characteristics from the output log.

### What to Change

**Find these two lines** in the Configuration Constants section:

```cpp
// Temporal consistency requirements
const int MIN_CONSECUTIVE_DETECTIONS = 6;
const int MIN_STABLE_FRAMES = 10;
```

**Replace with:**

```cpp
// Temporal consistency requirements
// Reduced to match realistic mmWave point cloud cadence at 1.2m.
// With decay-based counter (Fix B), these values are effectively
// forgiving across 1-2 frame gaps.
const int MIN_CONSECUTIVE_DETECTIONS = 3;
const int MIN_STABLE_FRAMES = 5;
```

### Verification
- The serial output `DETECTING... (need N more valid frames)` should reach 0 within 3–5 successful cluster frames.
- The track should transition to CONFIRMED and show `✅ IDENTIFIED: 'gun'` faster — typically within 5–8 radar frames of the gun entering the scene.
- If false positives appear (other objects triggering gun match), increase `MIN_CONSECUTIVE_DETECTIONS` back toward 4–5 rather than lowering it further.

---

## Fix D — Do Not Set `malformed=true` for Non-Data TLVs (MEDIUM)

### Why
The output log shows `malformed=yes` on virtually every frame that successfully parses points and side-info (`pointsTLV=yes sideInfo=yes`). The TLV list is `[1,7,2]` — types 1 and 7 are parsed correctly, but TLV type 2 (range profile) comes last and its boundary resolution fails because the `plausibleTlvHeader()` lambda finds no valid next TLV after it (it is the last TLV). This causes `diagnostics.malformed = true` even though all useful data was already extracted.

`malformed=yes` is misleading and could cause future logic to skip frames that are actually valid.

### What to Change

**Find the `readPacket()` function** in the `RadarParser` class. Locate the TLV parsing loop's boundary-resolution `else` branch — the block that fires when neither `includeValid` nor `payloadValid` is true. It currently reads:

```cpp
      } else {
        diagnostics.malformed = true;
        break;
      }
```

This is the branch immediately after the full `if / else if / else if / else if / else if` chain that resolves `lengthIncludesHeader`. It looks like this in full context:

```cpp
      bool lengthIncludesHeader = false;
      if (includeValid && !payloadValid) {
        lengthIncludesHeader = true;
      } else if (!includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else if (includeValid && payloadValid && preferredLengthConventionKnown) {
        lengthIncludesHeader = preferredLengthIncludesHeader;
      } else if (includeValid && payloadValid && tlvType == 1U) {
        const size_t expectedPointBytes = (size_t)numObj * 16U;
        lengthIncludesHeader = tlvLen >= expectedPointBytes + 8U;
      } else if (includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else {
        diagnostics.malformed = true;
        break;
      }
```

**Replace the entire block above with:**

```cpp
      bool lengthIncludesHeader = false;
      if (includeValid && !payloadValid) {
        lengthIncludesHeader = true;
      } else if (!includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else if (includeValid && payloadValid && preferredLengthConventionKnown) {
        lengthIncludesHeader = preferredLengthIncludesHeader;
      } else if (includeValid && payloadValid && tlvType == 1U) {
        const size_t expectedPointBytes = (size_t)numObj * 16U;
        lengthIncludesHeader = tlvLen >= expectedPointBytes + 8U;
      } else if (includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else {
        // Cannot resolve boundary for this TLV. If we have already parsed
        // the point cloud (TLV 1) and side info (TLV 7), the useful data
        // is already in hand — do NOT flag the frame as malformed, just
        // stop parsing further TLVs.
        // Only set malformed if we never saw the points TLV at all.
        if (!diagnostics.pointsTlvSeen) {
          diagnostics.malformed = true;
        }
        break;
      }
```

### Verification
- Frames with TLV list `[1,7,2]` where types 1 and 7 were parsed successfully should now show `malformed=no`.
- A frame that contains no TLV type 1 at all (no point cloud) and hits an unresolvable boundary should still show `malformed=yes`.
- The serial output line `] points=yes sideInfo=yes malformed=yes` should change to `malformed=no` for normal gun detection frames.

---

## Fix E — Fix `maxSnr` Averaging in Robust Descriptor (CARRY-OVER from previous plan)

### Why
This fix was identified in the original review but was not applied by the agent in the last update. `maxSnr` is still being summed and divided in the robust descriptor averaging block, which produces the mean of per-frame peaks rather than the true peak across the window. This deflates the peak SNR used in `distanceTo()` material matching, weakening gun identification.

### What to Change

**Find the accumulation loop** inside `ObjectTracker::updateMatchWithHysteresis()`, specifically the block that builds `robustDesc` by summing all sample fields. The loop body contains many lines of the form `robustDesc.X += sample.X`. Find this specific line inside that loop:

```cpp
        robustDesc.maxSnr += sample.maxSnr;
```

**Replace with:**

```cpp
        robustDesc.maxSnr = max(robustDesc.maxSnr, sample.maxSnr);
```

**Then find the division block** that comes immediately after the loop, which divides every accumulated field by `count`. It contains many lines of the form `robustDesc.X /= count`. Find and **delete** this specific line from that block:

```cpp
      robustDesc.maxSnr /= count;
```

Delete that line entirely. All other `/= count` lines in the same block remain unchanged.

**Also verify** that `robustDesc.maxSnr` is initialized to `0` before the loop begins. Find this line in the zero-initialization block just before the loop:

```cpp
      robustDesc.rcsEstimate = robustDesc.meanSnr = robustDesc.maxSnr = 0;
```

This sets `maxSnr` to `0` before the `max()` accumulation starts, which is correct — leave it unchanged.

### Verification
- After the fix, `robustDesc.maxSnr` equals the highest `maxSnr` value seen across all samples in the descriptor window.
- It will always be ≥ any individual frame's `maxSnr`, never lower.
- Compile confirms no `/= count` applied to `maxSnr`.

---

## Fix F — Add WDT Feed in Blocking Serial Loops (CARRY-OVER from previous plan)

### Why
This fix was also missed by the agent. `syncToMagic()` and `readExact()` both spin up to 3000ms and 1500ms respectively without feeding the ESP32-S3 task watchdog. With the radar sensor producing intermittent frames (as seen in the output), these timeouts will be hit regularly, and back-to-back calls risk a cumulative 4.5s block that triggers the 5s TWDT reset.

### What to Change

**Step 1 — Add the WDT include.** Find the existing `#include` block at the top of the file:

```cpp
#include <Arduino.h>
#include <HardwareSerial.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <cstring>
```

**Replace with:**

```cpp
#include <Arduino.h>
#include <HardwareSerial.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include <esp_task_wdt.h>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <cstring>
```

**Step 2 — Feed WDT in `readExact()`.** Find the `else` branch inside `readExact()`:

```cpp
      } else {
        if (millis() - start > timeoutMs) return false;
        delay(1);
      }
```

**Replace with:**

```cpp
      } else {
        if (millis() - start > timeoutMs) return false;
        esp_task_wdt_reset();
        delay(1);
      }
```

**Step 3 — Feed WDT in `syncToMagic()`.** Find the `else` branch inside `syncToMagic()`:

```cpp
      } else {
        if (millis() - start > timeoutMs) return false;
        delay(1);
      }
```

**Replace with:**

```cpp
      } else {
        if (millis() - start > timeoutMs) return false;
        esp_task_wdt_reset();
        delay(1);
      }
```

Note: there are two separate functions with this same `else` branch pattern. Both must be updated. Confirm by checking that `esp_task_wdt_reset()` appears in both `readExact` and `syncToMagic` after editing.

### Verification
- Compile confirms `esp_task_wdt_reset()` resolves without error (requires ESP-IDF / Arduino ESP32 core ≥ 2.0).
- With the radar unplugged or silent for several seconds, the system continues printing `Waiting for frames...` without resetting.

---

## Complete Apply Order

| Fix | Description | Priority |
|-----|-------------|----------|
| A | Increase `DBSCAN_EPS` to 0.25, reduce `minPts` to 8, lower cluster minimums | CRITICAL |
| B | Decay `consecutiveValidDetections` instead of hard reset | CRITICAL |
| C | Reduce `MIN_CONSECUTIVE_DETECTIONS` to 3, `MIN_STABLE_FRAMES` to 5 | CRITICAL |
| D | Do not set `malformed=true` when points and side-info already parsed | MEDIUM |
| E | Fix `maxSnr` max-not-average in robust descriptor | MEDIUM |
| F | Add `esp_task_wdt_reset()` in `syncToMagic` and `readExact` | MEDIUM |

Fixes A, B, C together directly address the intermittent detection and the gap problem. D, E, F are correctness improvements that should be applied in the same pass.

---

## Expected Behaviour After All Fixes

- Frames with 13–25 filtered points at 1.2m should now consistently form a DBSCAN cluster.
- The track should reach CONFIRMED (`✅ IDENTIFIED: 'gun'`) within approximately 5–10 radar frames of the gun entering the scene.
- Detection gaps of 5–13 frames (which were causing the counter to reset) will be bridged by the decay logic.
- `malformed=no` should appear on frames where `points=yes sideInfo=yes`.
- No spurious WDT resets during radar silence.

---

## Post-Fix Tuning Notes (for after testing)

If false positives appear (other metal objects triggering gun match):
- Increase `MIN_CONSECUTIVE_DETECTIONS` from 3 back toward 4–5.
- Increase `MATCH_ENTER_THRESHOLD` from 0.20 toward 0.18 (stricter).

If detection is still too slow after fixes:
- Try `DBSCAN_EPS = 0.30` (one more step up).
- Try `MIN_STABLE_FRAMES = 3`.

If ghost detections appear with the looser DBSCAN parameters:
- Increase `MIN_AVERAGE_SNR` from 22.0 toward 25.0 (the gun shows SNR ~140, so this is safe).
- Increase `MIN_POINT_DENSITY` from 25.0 toward 40.0.

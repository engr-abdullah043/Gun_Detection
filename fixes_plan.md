# Bug Fix Plan — `parsing_detailed.ino`
**Project:** Gun Detection (mmWave Radar, ESP32-S3 / xWR68xx)**  
**File:** `D:\Projects\Gun_Detection\parsing_detailed\parsing_detailed.ino`  
**Prepared for:** Autonomous agent execution  

---

## How to Use This Plan

Apply each fix in the order listed. Each fix section contains:
- **Location** — exact function name and approximate line context
- **Root cause** — why it is broken
- **What to change** — old code block and exact replacement
- **Verification** — how to confirm the fix is correct after editing

Do not reformat unrelated code. Make only the changes described.

---

## Fix 1 — DBSCAN Neighbor Expansion Logic (HIGH PRIORITY)

### Location
Function: `clusterDBSCAN()`  
Inside the inner `for (size_t k = 0; k < neighbors.size(); k++)` loop.

### Root Cause
The expansion loop contains two consecutive checks on `labels[nIdx]` that are logically contradictory:

```cpp
if (labels[nIdx] == -1) labels[nIdx] = clusterID;   // sets label away from -1
if (labels[nIdx] >= 0) continue;                      // always true after line above — skips expansion
```

After the first `if` assigns `clusterID` (a non-negative value), the second `if` is always true, so `continue` always fires. This means the sub-neighbor search that grows the cluster never executes. Clusters stop expanding after their seed point's direct neighbors — exactly the opposite of DBSCAN's intended behaviour.

### What to Change

**Find this block** (inside `clusterDBSCAN`, inside the `for k` loop):

```cpp
    for (size_t k = 0; k < neighbors.size(); k++) {
      size_t nIdx = neighbors[k];
      if (labels[nIdx] == -1) labels[nIdx] = clusterID;
      if (labels[nIdx] >= 0) continue;

      labels[nIdx] = clusterID;

      Point3D pn(points[nIdx].x, points[nIdx].y, points[nIdx].z);
      for (size_t j = 0; j < points.size(); j++) {
        if (nIdx == j) continue;
        Point3D pj(points[j].x, points[j].y, points[j].z);
        if (pn.distanceTo(pj) < DBSCAN_EPS) {
          bool found = false;
          for (size_t m = 0; m < neighbors.size(); m++) {
            if (neighbors[m] == j) { found = true; break; }
          }
          if (!found) neighbors.push_back(j);
        }
      }
    }
```

**Replace with:**

```cpp
    // visited[] tracks which points have already been added to the neighbor
    // queue to avoid O(n) linear scans inside the expansion loop.
    std::vector<bool> visited(points.size(), false);
    // Seed: every direct neighbor of the core point is already queued.
    for (size_t nIdx : neighbors) visited[nIdx] = true;
    visited[i] = true;

    for (size_t k = 0; k < neighbors.size(); k++) {
      size_t nIdx = neighbors[k];

      // Assign label if this point was noise (unvisited noise points get
      // absorbed into the cluster without becoming core points themselves).
      if (labels[nIdx] == -1) {
        labels[nIdx] = clusterID;
        continue;   // noise border point — do not expand further from it
      }

      // Already processed as a core point in a previous iteration.
      if (labels[nIdx] >= 0 && labels[nIdx] != clusterID) continue;

      labels[nIdx] = clusterID;

      // Expand: find sub-neighbors of nIdx.
      Point3D pn(points[nIdx].x, points[nIdx].y, points[nIdx].z);
      std::vector<size_t> subNeighbors;
      subNeighbors.reserve(32);
      for (size_t j = 0; j < points.size(); j++) {
        if (j == nIdx || visited[j]) continue;
        Point3D pj(points[j].x, points[j].y, points[j].z);
        if (pn.distanceTo(pj) < DBSCAN_EPS) {
          subNeighbors.push_back(j);
          visited[j] = true;
        }
      }
      // If nIdx is itself a core point, enqueue its sub-neighbors.
      if ((int)subNeighbors.size() >= DBSCAN_MIN_POINTS) {
        for (size_t sn : subNeighbors) neighbors.push_back(sn);
      }
    }
```

### Verification
- `visited` array eliminates the O(n) linear `found` scan that was in the original (this also closes Fix 7 from the review).
- After the fix, a single dense cloud of 50 points should produce one cluster instead of many single-seed clusters.
- Compile and confirm no new warnings.

---

## Fix 2 — TLV Length Convention Detection (HIGH PRIORITY)

### Location
Function: `RadarParser::readPacket()`  
The `for (uint32_t t = 0; t < numTLVs; t++)` loop, specifically the block:

```cpp
if (!tlvLengthConventionKnown && tlvType == 1) { ... }
if (!tlvLengthConventionKnown) {
    diagnostics.malformed = true;
    break;
}
```

### Root Cause
The convention (does `tlvLen` include the 8-byte header or not?) is detected only when TLV type 1 is the *first* TLV in the packet. If the radar firmware emits TLVs in a different order (e.g. type 6 or type 3 first), `tlvLengthConventionKnown` stays `false`, the packet is immediately marked malformed, and `break` exits the loop — dropping a perfectly valid frame silently.

### What to Change

**Find this block** (at the top of the TLV parsing loop, after `tlvData` is set):

```cpp
      // Determine the wire convention from TLV 1. Different xWR68xx demo
      // builds use either payload-only length or header+payload length.
      if (!tlvLengthConventionKnown && tlvType == 1) {
        const size_t expectedPointBytes = (size_t)numObj * 16U;
        if (tlvLen >= expectedPointBytes + 8U) {
          tlvLengthIncludesHeader = true;
          tlvLengthConventionKnown = true;
        } else if (tlvLen >= expectedPointBytes) {
          tlvLengthIncludesHeader = false;
          tlvLengthConventionKnown = true;
        }
      }

      if (!tlvLengthConventionKnown) {
        diagnostics.malformed = true;
        break;
      }
```

**Replace with:**

```cpp
      // Detect TLV length convention from TLV type 1 whenever it appears,
      // regardless of its position in the TLV list.
      if (!tlvLengthConventionKnown && tlvType == 1) {
        const size_t expectedPointBytes = (size_t)numObj * 16U;
        if (tlvLen >= expectedPointBytes + 8U) {
          tlvLengthIncludesHeader = true;
          tlvLengthConventionKnown = true;
        } else if (tlvLen >= expectedPointBytes) {
          tlvLengthIncludesHeader = false;
          tlvLengthConventionKnown = true;
        }
        // If neither branch matched, the point count in the header is wrong;
        // mark malformed and stop.
        if (!tlvLengthConventionKnown) {
          diagnostics.malformed = true;
          break;
        }
      }

      // For TLV types other than 1 encountered before we have seen TLV 1,
      // we cannot determine payload size safely. Skip ahead by a safe
      // heuristic: treat as payload-only with the raw tlvLen value, and
      // do not extract data from this TLV.
      if (!tlvLengthConventionKnown) {
        // Best-effort skip: assume payload-only convention so we can at least
        // advance the pointer and try the next TLV.
        size_t skipEnd = tlvData + tlvLen;
        if (skipEnd > totalLen) { diagnostics.malformed = true; break; }
        tlvStart = skipEnd;
        continue;
      }
```

### Verification
- Packets where TLV type 6 or type 3 appears before type 1 should no longer be marked malformed.
- `diagnostics.malformed` should only be `true` when TLV 1's `tlvLen` is inconsistent with `numObj`.

---

## Fix 3 — Default SNR Magic Number (MEDIUM PRIORITY)

### Location
Function: `RadarParser::readPacket()`  
Inside the `if (tlvType == 1 ...)` block where `RadarPoint` structs are populated.

### Root Cause
When TLV 7 (side information) is absent, every point is given `pt.snr = 100`. The value `100` is an arbitrary magic number that happens to always pass the `MIN_SNR = 20` filter. This means points from a frame with no side-info TLV skip SNR quality gating entirely and corrupt the RCS and SNR statistics used for gun matching.

### What to Change

**Step 1 — Add a sentinel constant near the top of the file**, after the existing `const int MIN_SNR = 20;` line:

```cpp
// Sentinel used when TLV 7 side-information is absent.
// Set to 0 so that SNR-gated filters reject these points rather than
// silently passing them with a fabricated value.
const uint16_t SNR_UNKNOWN = 0;
```

**Step 2 — Find this block** inside the TLV type 1 parsing section:

```cpp
          pt.snr = 100;
          pt.noise = 0;
```

**Replace with:**

```cpp
          pt.snr = SNR_UNKNOWN;   // overwritten by TLV 7 if present
          pt.noise = 0;
```

**Step 3 — In `filterPoints()`**, the existing SNR check `pt.snr >= MIN_SNR` already correctly rejects points with `snr == 0`, so no change is needed there. Confirm the line reads:

```cpp
    if (range >= RANGE_MIN && range <= RANGE_MAX && pt.snr >= MIN_SNR) {
```

If it does, no further change is needed for `filterPoints`.

### Verification
- On a frame that contains only TLV 1 (no TLV 7), `filteredPointCount` should be 0 because all points have `snr = 0 < MIN_SNR = 20`.
- On a frame that contains both TLV 1 and TLV 7, behaviour is unchanged.

---

## Fix 4 — `maxSnr` Averaging in Robust Descriptor (MEDIUM PRIORITY)

### Location
Function: `ObjectTracker::updateMatchWithHysteresis()`  
The large block inside `if (track.allDescriptors.size() >= MIN_DESCRIPTORS_FOR_ROBUST)` that accumulates and divides all descriptor fields.

### Root Cause
`maxSnr` is the peak SNR seen within a single frame's cluster. Averaging peaks across frames produces a value lower than any individual frame peak, which is meaningless and weakens the material signature used in `distanceTo()`. The true per-window peak is wanted here.

### What to Change

**Find the line** (inside the averaging accumulation loop):

```cpp
        robustDesc.maxSnr += sample.maxSnr;
```

**Replace with:**

```cpp
        robustDesc.maxSnr = max(robustDesc.maxSnr, sample.maxSnr);
```

**Then find the corresponding division line** (after the loop, in the block that divides by `count`):

```cpp
      robustDesc.maxSnr /= count;
```

**Delete that line entirely.** `maxSnr` must not be divided — it is now maintained as a running maximum, not a sum.

### Verification
- After the fix, `robustDesc.maxSnr` equals the highest `maxSnr` across all samples in the window, not their average.
- Confirm the division block no longer contains a `/= count` line for `maxSnr`.

---

## Fix 5 — Watchdog Timer (WDT) Feed in Blocking Loops (MEDIUM PRIORITY)

### Location
Two functions: `RadarParser::syncToMagic()` and `RadarParser::readExact()`

### Root Cause
Both functions block in a tight polling loop for up to 3000 ms and 1500 ms respectively. The ESP32-S3 task watchdog timer (TWDT) default timeout is 5 seconds. Under normal operation this is fine, but during radar silence (sensor not sending, cable fault, reconfiguration) consecutive calls to `syncToMagic` + `readExact` can exceed 4.5 seconds total, triggering an unwanted WDT reset.

### What to Change

**Step 1 — Add the WDT header** at the top of the file, after the existing `#include` block:

```cpp
#include <esp_task_wdt.h>
```

**Step 2 — In `syncToMagic()`**, find the `else` branch of the `if (radarSerial->available())` block:

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
        esp_task_wdt_reset();   // keep WDT happy during radar silence
        delay(1);
      }
```

**Step 3 — In `readExact()`**, find the same `else` branch:

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
        esp_task_wdt_reset();   // keep WDT happy during inter-byte gaps
        delay(1);
      }
```

### Verification
- Compile confirms `esp_task_wdt_reset()` resolves (requires ESP-IDF component; available on ESP32 Arduino core ≥ 2.0).
- With the radar unplugged, the system should print the "Waiting for frames" message indefinitely without resetting.

---

## Fix 6 — Remove Unused `geoMatch` / `matMatch` Parameters from `findMatch` (LOW PRIORITY)

### Location
Function: `CalibrationDatabase::findMatch()` declaration and all call sites.

### Root Cause
`geoMatch` and `matMatch` are passed by reference and documented as outputs, but the function always writes `0.0f` to both. The call site in `updateMatchWithHysteresis` ignores them. They are dead code and create maintenance confusion.

### What to Change

**Step 1 — Change the function signature.** Find:

```cpp
  bool findMatch(const AdvancedShapeDescriptor& descriptor,
                 String& matchedName, float& confidence,
                 float& geoMatch, float& matMatch) {
```

**Replace with:**

```cpp
  bool findMatch(const AdvancedShapeDescriptor& descriptor,
                 String& matchedName, float& confidence) {
```

**Step 2 — Remove the dead assignments inside `findMatch`.** Find:

```cpp
      confidence = max(0.0f, min(100.0f, (1.0f - bestDistance) * 100.0f));
      geoMatch = 0.0f;
      matMatch = 0.0f;
```

**Replace with:**

```cpp
      confidence = max(0.0f, min(100.0f, (1.0f - bestDistance) * 100.0f));
```

**Step 3 — Update the call site in `updateMatchWithHysteresis`.** Find:

```cpp
    String matchName;
    float confidence = 0.0f, geoMatch = 0.0f, matMatch = 0.0f;
    bool matched = calibDB->findMatch(robustDesc, matchName, confidence, geoMatch, matMatch);
```

**Replace with:**

```cpp
    String matchName;
    float confidence = 0.0f;
    bool matched = calibDB->findMatch(robustDesc, matchName, confidence);
```

### Verification
- Project compiles without unused-variable warnings for `geoMatch` and `matMatch`.

---

## Fix 7 — Replace `std::vector` Descriptor Window with `std::deque` (LOW PRIORITY)

### Location
`struct TrackedObject` — field `allDescriptors`.  
`ObjectTracker::updateDescriptor()` — the trim logic.  
`ObjectTracker::updateMatchWithHysteresis()` — the accumulation loop.

### Root Cause
`allDescriptors` is a `std::vector<AdvancedShapeDescriptor>`. When it exceeds `DESCRIPTOR_WINDOW_SIZE = 20`, `erase(begin())` is called, which shifts all remaining elements — O(n) memory move every frame per track. A `std::deque` provides O(1) `pop_front`.

### What to Change

**Step 1 — Add deque header** at the top of the file after the existing includes:

```cpp
#include <deque>
```

**Step 2 — In `struct TrackedObject`**, find:

```cpp
  std::vector<AdvancedShapeDescriptor> allDescriptors;
```

**Replace with:**

```cpp
  std::deque<AdvancedShapeDescriptor> allDescriptors;
```

**Step 3 — In `ObjectTracker::updateDescriptor()`**, find:

```cpp
    track.allDescriptors.push_back(descriptor);
    
    if (track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.erase(track.allDescriptors.begin());
    }
```

**Replace with:**

```cpp
    track.allDescriptors.push_back(descriptor);
    
    if ((int)track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.pop_front();   // O(1) vs O(n) erase-from-front
    }
```

**Step 4 — Similarly for `qualityHistory`** in `struct TrackedObject`, find:

```cpp
  std::vector<float> qualityHistory;
```

**Replace with:**

```cpp
  std::deque<float> qualityHistory;
```

**Step 5 — In `ObjectTracker::updateDescriptor()`**, find:

```cpp
    if (track.qualityHistory.size() > 30) {
      track.qualityHistory.erase(track.qualityHistory.begin());
    }
```

**Replace with:**

```cpp
    if ((int)track.qualityHistory.size() > 30) {
      track.qualityHistory.pop_front();
    }
```

**Step 6 — In `ObjectTracker::update()`** (new track creation block), find:

```cpp
        t.allDescriptors.clear();
        t.allDescriptors.push_back(descriptors[i]);
```

No change needed — `std::deque` supports both `clear()` and `push_back()`.

### Verification
- Compile confirms no type errors; `std::deque` supports `size()`, `push_back()`, `pop_front()`, `back()`, `begin()`, `end()`, `empty()` — all uses in the file are compatible.

---

## Fix Order Summary

| # | Fix | Priority | Function(s) Affected |
|---|-----|----------|----------------------|
| 1 | DBSCAN neighbor expansion | HIGH | `clusterDBSCAN` |
| 2 | TLV convention detection ordering | HIGH | `RadarParser::readPacket` |
| 3 | Default SNR sentinel value | MEDIUM | `RadarParser::readPacket`, `filterPoints` |
| 4 | `maxSnr` max not average | MEDIUM | `ObjectTracker::updateMatchWithHysteresis` |
| 5 | WDT feed in blocking loops | MEDIUM | `syncToMagic`, `readExact` |
| 6 | Remove dead `geoMatch`/`matMatch` | LOW | `CalibrationDatabase::findMatch`, call site |
| 7 | `std::deque` for descriptor window | LOW | `TrackedObject`, `ObjectTracker::updateDescriptor` |

---

## Post-Fix Build Check

After all fixes are applied:

1. Compile target: **ESP32-S3**, Arduino framework, board `esp32s3dev` or equivalent.
2. Confirm zero new compiler errors.
3. Confirm zero new warnings beyond any pre-existing ones.
4. Flash to hardware and verify serial output at **460800 baud** shows normal frame parsing without `malformed=yes` on valid radar frames.
5. With the radar sensor active and a dense object at < 1 m, verify clusters appear and track IDs increment correctly — confirming DBSCAN expansion now works.

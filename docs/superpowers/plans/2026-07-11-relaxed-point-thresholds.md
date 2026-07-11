# Relaxed Point Thresholds Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Let spatially sparse gun returns form and retain six-point clusters without changing the 0.15 m DBSCAN radius or downstream matching behavior.

**Architecture:** Change only the four point-count constants that sequentially gate DBSCAN core formation, cluster retention, descriptor extraction, and object validity. Keep them equal so a cluster accepted at one stage is not rejected solely by a stricter later point-count gate.

**Tech Stack:** Arduino C++ firmware, ESP32-S3, IWR6843AOP UART point cloud, Python source-level regression check.

## Global Constraints

- Set `DBSCAN_MIN_POINTS`, `MIN_CLUSTER_POINTS`, `MIN_POINTS_FOR_OUTPUT`, and `MIN_POINTS_FOR_VALID_OBJECT` to 6.
- Keep `DBSCAN_EPS` exactly 0.15 m.
- Do not change SNR, range, quality, temporal confirmation, calibration matching, or alert thresholds.

---

### Task 1: Align the point-count detection gates

**Files:**
- Modify: `parsing_detailed/parsing_detailed.ino:71-91`
- Test: one-off Python source assertion executed from the repository root

**Interfaces:**
- Consumes: existing DBSCAN and descriptor point-count constants.
- Produces: a consistent six-point minimum across clustering and descriptor validation.

- [ ] **Step 1: Run a failing source-level regression check**

```powershell
@'
from pathlib import Path
import re
s = Path('parsing_detailed/parsing_detailed.ino').read_text(encoding='utf-8')
expected = {
    'DBSCAN_MIN_POINTS': 6,
    'MIN_CLUSTER_POINTS': 6,
    'MIN_POINTS_FOR_OUTPUT': 6,
    'MIN_POINTS_FOR_VALID_OBJECT': 6,
}
for name, value in expected.items():
    actual = int(re.search(rf'const int {name} = (\d+);', s).group(1))
    assert actual == value, f'{name}: expected {value}, got {actual}'
assert re.search(r'const float DBSCAN_EPS = 0\.15;', s)
'@ | python -
```

Expected: FAIL because `DBSCAN_MIN_POINTS` is currently 12.

- [ ] **Step 2: Apply the minimal firmware change**

```cpp
const float DBSCAN_EPS = 0.15;
const int DBSCAN_MIN_POINTS = 6;
const int MIN_CLUSTER_POINTS = 6;
const int MIN_POINTS_FOR_OUTPUT = 6;
const int MIN_POINTS_FOR_VALID_OBJECT = 6;
```

- [ ] **Step 3: Re-run the regression check**

Run the exact PowerShell/Python check from Step 1.

Expected: PASS with exit code 0.

- [ ] **Step 4: Run static verification**

```powershell
git diff --check
```

Also verify balanced braces and parentheses, confirm `DBSCAN_EPS` remains 0.15, and inspect the focused firmware diff. If `arduino-cli` is available, compile the sketch; otherwise report that hardware/toolchain compilation remains pending.

- [ ] **Step 5: Hardware validation after flashing**

Expected serial evidence: `no DBSCAN cluster` diagnostics display `minPts=6`; the stated gun scene begins producing clusters; empty-scene captures do not trigger confirmed gun alerts.

=================================================
ESP32-S3 mmWave Gun Detection System
Advanced Geometric + RCS Recognition
WITH GHOST REJECTION & QUALITY VALIDATION
WITH ALERT SYSTEM (LED + BUZZER)
WITH BUTTON START/STOP CONTROL
=================================================
Serial Monitor: 460800 baud
=================================================
No PSRAM detected - using internal RAM only
Free Heap: 343 KB
✓ SPIFFS mounted
✓ Button initialized on GPIO4
✓ Radar UART: RX=GPIO16 @ 921600 baud (TX unused)
✓ Alert System initialized (LED: GPIO11, Buzzer: GPIO12)
✓ Components initialized (Free heap: 301 KB)
Loaded 3 calibrated objects
✓ Calibration loaded successfully

=================================================
🔧 ENHANCED FEATURES:
   • Ghost Point Rejection (min 12 points)
   • Quality Validation (SNR, density, coherence)
   • Requires 6 consecutive valid detections
   • Requires 10 stable frames for confident ID
=================================================
READY - Press button on GPIO4 to START/STOP
System is OFF. Press button to begin detection.
=================================================


🟢 SYSTEM STARTED - Detection active
Radar frame 2129: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 1 (radar 2147) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1527390986] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,+0.004,+0.034)m/s
     Sensor side info (raw): SNR mean=19259.3 min=288 peak=46600 | Noise mean=16200.3 | SNR-noise margin=3059.0
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45623.9/m3
     Shape: planarity=0.794 flatness=0.178 thickness=7.1cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 2149) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,3305201408] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.004,-0.037)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=55885.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.8cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 2153) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=364.3 min=288 peak=433 | Noise mean=476.5 | SNR-noise margin=-112.3
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52797.4/m3
     Shape: planarity=0.794 flatness=0.179 thickness=6.2cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 2155) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.022)m/s
     Sensor side info (raw): SNR mean=366.2 min=288 peak=436 | Noise mean=474.2 | SNR-noise margin=-108.0
     Geometry: L=16.1cm W=6.8cm H=2.9cm | points=15 density=47948.0/m3
     Shape: planarity=0.794 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 5 (radar 2157) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.027)m/s
     Sensor side info (raw): SNR mean=362.8 min=285 peak=433 | Noise mean=477.1 | SNR-noise margin=-114.3
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55174.4/m3
     Shape: planarity=0.793 flatness=0.179 thickness=5.9cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 6 (radar 2159) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.000,+0.005)m/s
     Sensor side info (raw): SNR mean=359.1 min=283 peak=430 | Noise mean=481.0 | SNR-noise margin=-121.9
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55599.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 7 (radar 2161) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,+0.003,+0.023)m/s
     Sensor side info (raw): SNR mean=358.7 min=283 peak=429 | Noise mean=481.1 | SNR-noise margin=-122.4
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51885.8/m3
     Shape: planarity=0.794 flatness=0.179 thickness=6.3cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 8 (radar 2163) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2164365312] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.660m Z=-0.091m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.041,-0.209,-0.130)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.6cm W=7.9cm H=2.6cm | points=16 density=60588.0/m3
     Shape: planarity=0.790 flatness=0.208 thickness=7.9cm spread=7.9cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3317 | threshold=0.25

=================================================
Frame 9 (radar 2165) | Valid Objects: 1
UART: packet=1376 B, objects=48, raw=44, filtered=42, TLVs=5 [1,2634126080] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.089m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(-0.005,+0.042,+0.019)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.7cm H=2.6cm | points=15 density=69906.3/m3
     Shape: planarity=0.777 flatness=0.216 thickness=6.7cm spread=6.9cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3314 | threshold=0.25

=================================================
Frame 10 (radar 2167) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=42, filtered=42, TLVs=5 [1,2583796224] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.660m Z=-0.092m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.043,-0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.4cm H=2.6cm | points=16 density=65245.3/m3
     Shape: planarity=0.789 flatness=0.209 thickness=7.4cm spread=7.6cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 11 (radar 2197) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1980360714] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=360.9 min=288 peak=430 | Noise mean=479.4 | SNR-noise margin=-118.5
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41476.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 12 (radar 2205) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,2047472650] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.006,+0.058)m/s
     Sensor side info (raw): SNR mean=358.0 min=284 peak=429 | Noise mean=482.0 | SNR-noise margin=-124.0
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41617.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 13 (radar 2217) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.012)m/s
     Sensor side info (raw): SNR mean=363.3 min=293 peak=434 | Noise mean=476.9 | SNR-noise margin=-113.5
     Geometry: L=16.1cm W=6.9cm H=2.9cm | points=15 density=47163.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 14 (radar 2219) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1980366090] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=363.1 min=292 peak=432 | Noise mean=477.1 | SNR-noise margin=-114.0
     Geometry: L=16.1cm W=6.8cm H=2.9cm | points=15 density=47584.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 15 (radar 2221) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,2013922058] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.005)m/s
     Sensor side info (raw): SNR mean=356.3 min=283 peak=426 | Noise mean=484.1 | SNR-noise margin=-127.8
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=49886.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 16 (radar 2223) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=364.9 min=294 peak=433 | Noise mean=475.1 | SNR-noise margin=-110.2
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44670.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 17 (radar 2225) | Valid Objects: 1
UART: packet=992 B, objects=30, raw=30, filtered=30, TLVs=5 [1,7,2,12435684] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.039)m/s
     Sensor side info (raw): SNR mean=367.9 min=296 peak=438 | Noise mean=472.5 | SNR-noise margin=-104.5
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51527.4/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.3cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 18 (radar 2229) | Valid Objects: 1
UART: packet=992 B, objects=30, raw=30, filtered=30, TLVs=5 [1,7,2,12435410] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=360.1 min=289 peak=428 | Noise mean=480.3 | SNR-noise margin=-120.3
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50445.4/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 19 (radar 2231) | Valid Objects: 1
UART: packet=992 B, objects=29, raw=29, filtered=29, TLVs=5 [1,7,2,16777216] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=362.6 min=291 peak=431 | Noise mean=477.5 | SNR-noise margin=-114.9
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=49947.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 20 (radar 2233) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=363.4 min=292 peak=434 | Noise mean=477.0 | SNR-noise margin=-113.6
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50445.3/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 21 (radar 2235) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=361.5 min=289 peak=434 | Noise mean=478.9 | SNR-noise margin=-117.4
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=51180.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 22 (radar 2237) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=366.1 min=296 peak=434 | Noise mean=474.5 | SNR-noise margin=-108.3
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=50581.2/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.4cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 23 (radar 2251) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.044)m/s
     Sensor side info (raw): SNR mean=365.8 min=293 peak=435 | Noise mean=474.3 | SNR-noise margin=-108.5
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44615.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 24 (radar 2257) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.034)m/s
     Sensor side info (raw): SNR mean=361.7 min=291 peak=431 | Noise mean=478.6 | SNR-noise margin=-116.9
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49615.6/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 25 (radar 2263) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1963587082] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.034)m/s
     Sensor side info (raw): SNR mean=359.5 min=288 peak=429 | Noise mean=481.5 | SNR-noise margin=-121.9
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49096.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 26 (radar 2265) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1913255690] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=362.4 min=292 peak=431 | Noise mean=477.8 | SNR-noise margin=-115.4
     Geometry: L=16.1cm W=6.8cm H=2.9cm | points=15 density=47631.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 27 (radar 2271) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.025)m/s
     Sensor side info (raw): SNR mean=366.5 min=297 peak=435 | Noise mean=474.2 | SNR-noise margin=-107.7
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48638.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 28 (radar 2273) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1980363786] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=356.9 min=284 peak=428 | Noise mean=483.0 | SNR-noise margin=-126.1
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45807.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 29 (radar 2275) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=38, TLVs=5 [1,7,1963584266] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.027)m/s
     Sensor side info (raw): SNR mean=22632.2 min=296 peak=55304 | Noise mean=31936.7 | SNR-noise margin=-9304.5
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=52046.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 30 (radar 2277) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,235002880] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.183,+0.090)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=8.2cm H=2.6cm | points=16 density=60339.3/m3
     Shape: planarity=0.756 flatness=0.213 thickness=8.2cm spread=7.6cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 31 (radar 2279) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=45, filtered=42, TLVs=5 [1,2718018048] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.026m Y=+0.660m Z=-0.091m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.020,-0.189)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.4cm H=2.6cm | points=16 density=66098.7/m3
     Shape: planarity=0.790 flatness=0.210 thickness=7.4cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3308 | threshold=0.25

=================================================
Frame 32 (radar 2281) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.041,+0.207,+0.113)m/s
     Sensor side info (raw): SNR mean=363.9 min=289 peak=434 | Noise mean=476.3 | SNR-noise margin=-112.4
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55683.2/m3
     Shape: planarity=0.794 flatness=0.179 thickness=5.9cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 33 (radar 2285) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.003,-0.020)m/s
     Sensor side info (raw): SNR mean=365.7 min=292 peak=435 | Noise mean=474.7 | SNR-noise margin=-109.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60194.2/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 34 (radar 2287) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=358.1 min=283 peak=425 | Noise mean=482.1 | SNR-noise margin=-124.1
     Geometry: L=16.0cm W=5.5cm H=2.9cm | points=15 density=59487.4/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 35 (radar 2289) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,+0.002,+0.011)m/s
     Sensor side info (raw): SNR mean=364.5 min=288 peak=433 | Noise mean=475.4 | SNR-noise margin=-110.9
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56440.1/m3
     Shape: planarity=0.793 flatness=0.179 thickness=5.8cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 36 (radar 2291) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.023)m/s
     Sensor side info (raw): SNR mean=363.9 min=288 peak=434 | Noise mean=476.1 | SNR-noise margin=-112.2
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52922.9/m3
     Shape: planarity=0.794 flatness=0.179 thickness=6.2cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 37 (radar 2293) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.005,-0.034)m/s
     Sensor side info (raw): SNR mean=359.5 min=283 peak=427 | Noise mean=481.1 | SNR-noise margin=-121.7
     Geometry: L=16.0cm W=5.7cm H=2.9cm | points=15 density=57754.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3259 | threshold=0.25

=================================================
Frame 38 (radar 2295) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=358.1 min=282 peak=426 | Noise mean=482.3 | SNR-noise margin=-124.2
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61393.9/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3253 | threshold=0.25

=================================================
Frame 39 (radar 2297) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.028)m/s
     Sensor side info (raw): SNR mean=363.1 min=289 peak=431 | Noise mean=477.0 | SNR-noise margin=-113.9
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=52058.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3255 | threshold=0.25

=================================================
Frame 40 (radar 2299) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,-0.003,-0.032)m/s
     Sensor side info (raw): SNR mean=357.6 min=282 peak=426 | Noise mean=482.7 | SNR-noise margin=-125.1
     Geometry: L=16.0cm W=5.5cm H=2.9cm | points=15 density=59728.2/m3
     Shape: planarity=0.793 flatness=0.179 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 41 (radar 2303) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=44, filtered=42, TLVs=5 [1,2818678272] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.041,-0.209,-0.143)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=6.7cm H=2.6cm | points=16 density=73785.2/m3
     Shape: planarity=0.789 flatness=0.212 thickness=6.7cm spread=7.1cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 42 (radar 2305) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,654416384] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.027m Y=+0.661m Z=-0.086m | Range=0.667m
     Radial velocity: mean=-0.017m/s peak=0.121m/s | Track velocity=(-0.007,+0.005,+0.039)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.2cm H=2.6cm | points=14 density=70675.7/m3
     Shape: planarity=0.767 flatness=0.216 thickness=6.2cm spread=7.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 43 (radar 2315) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1963595018] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.019)m/s
     Sensor side info (raw): SNR mean=20657.8 min=290 peak=59661 | Noise mean=25230.3 | SNR-noise margin=-4572.5
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53881.6/m3
     Shape: planarity=0.780 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 44 (radar 2351) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1862928394] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.026)m/s
     Sensor side info (raw): SNR mean=21902.5 min=287 peak=59405 | Noise mean=26221.3 | SNR-noise margin=-4318.8
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=53973.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

⚠️  No valid objects (filtering ghost points) - frame 20

⚠️  No valid objects (filtering ghost points) - frame 40

⚠️  No valid objects (filtering ghost points) - frame 60

=================================================
Frame 45 (radar 2497) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1930042635] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=24686.5 min=293 peak=65291 | Noise mean=25638.9 | SNR-noise margin=-952.4
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47431.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

⚠️  No valid objects (filtering ghost points) - frame 20

=================================================
Frame 46 (radar 2539) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,2013918730] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=21135.9 min=289 peak=59917 | Noise mean=25128.3 | SNR-noise margin=-3992.5
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=43722.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 47 (radar 2561) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1963587594] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.011)m/s
     Sensor side info (raw): SNR mean=22823.2 min=284 peak=59661 | Noise mean=22962.5 | SNR-noise margin=-139.3
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55429.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

⚠️  No valid objects (filtering ghost points) - frame 20

⚠️  No valid objects (filtering ghost points) - frame 40

=================================================
Frame 48 (radar 2657) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.040)m/s
     Sensor side info (raw): SNR mean=361.3 min=288 peak=430 | Noise mean=479.8 | SNR-noise margin=-118.5
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41728.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 49 (radar 2679) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,1812042496] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.027m Y=+0.664m Z=-0.092m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.052,-0.169,-0.132)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=7.6cm H=2.6cm | points=15 density=61726.6/m3
     Shape: planarity=0.776 flatness=0.216 thickness=7.6cm spread=6.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 50 (radar 2683) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,637638656] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.088m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.052,-0.165,-0.114)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.9cm H=2.6cm | points=15 density=67717.2/m3
     Shape: planarity=0.777 flatness=0.216 thickness=6.9cm spread=6.9cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 51 (radar 2685) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1762277899] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.052,+0.165,+0.111)m/s
     Sensor side info (raw): SNR mean=359.5 min=288 peak=429 | Noise mean=481.2 | SNR-noise margin=-121.7
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40672.7/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 52 (radar 2689) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.042)m/s
     Sensor side info (raw): SNR mean=362.4 min=290 peak=432 | Noise mean=478.5 | SNR-noise margin=-116.1
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41952.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 53 (radar 2695) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=363.7 min=293 peak=434 | Noise mean=476.9 | SNR-noise margin=-113.1
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45096.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 54 (radar 2701) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1695165962] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=366.6 min=295 peak=437 | Noise mean=474.1 | SNR-noise margin=-107.5
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=44037.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 55 (radar 2707) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1745495307] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.019)m/s
     Sensor side info (raw): SNR mean=360.2 min=289 peak=430 | Noise mean=480.4 | SNR-noise margin=-120.2
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40811.4/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 56 (radar 2709) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1711943690] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.048)m/s
     Sensor side info (raw): SNR mean=361.1 min=289 peak=432 | Noise mean=479.8 | SNR-noise margin=-118.7
     Geometry: L=16.1cm W=6.9cm H=2.9cm | points=15 density=47347.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 57 (radar 2713) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.027)m/s
     Sensor side info (raw): SNR mean=360.1 min=288 peak=433 | Noise mean=481.0 | SNR-noise margin=-120.9
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48568.2/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 58 (radar 2715) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.046)m/s
     Sensor side info (raw): SNR mean=365.7 min=294 peak=436 | Noise mean=475.2 | SNR-noise margin=-109.5
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43641.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 59 (radar 2717) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.011)m/s
     Sensor side info (raw): SNR mean=361.9 min=292 peak=431 | Noise mean=478.7 | SNR-noise margin=-116.8
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43091.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 60 (radar 2725) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.009)m/s
     Sensor side info (raw): SNR mean=367.7 min=296 peak=438 | Noise mean=473.1 | SNR-noise margin=-105.5
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45243.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 61 (radar 2727) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862937867] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=365.5 min=294 peak=434 | Noise mean=475.5 | SNR-noise margin=-109.9
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=44978.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 62 (radar 2729) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846160907] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.017)m/s
     Sensor side info (raw): SNR mean=364.2 min=293 peak=435 | Noise mean=477.1 | SNR-noise margin=-112.9
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48209.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 63 (radar 2731) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=362.1 min=292 peak=430 | Noise mean=479.1 | SNR-noise margin=-116.9
     Geometry: L=16.1cm W=6.7cm H=2.9cm | points=15 density=48617.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 64 (radar 2737) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.005)m/s
     Sensor side info (raw): SNR mean=365.1 min=291 peak=435 | Noise mean=476.2 | SNR-noise margin=-111.1
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47366.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 65 (radar 2745) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.033)m/s
     Sensor side info (raw): SNR mean=356.9 min=286 peak=426 | Noise mean=483.6 | SNR-noise margin=-126.7
     Geometry: L=16.1cm W=8.3cm H=2.9cm | points=15 density=39062.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.3cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 66 (radar 2747) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.055)m/s
     Sensor side info (raw): SNR mean=363.3 min=291 peak=432 | Noise mean=477.8 | SNR-noise margin=-114.5
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47718.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 67 (radar 2749) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=362.4 min=292 peak=432 | Noise mean=478.7 | SNR-noise margin=-116.3
     Geometry: L=16.1cm W=6.9cm H=2.9cm | points=15 density=46820.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 68 (radar 2757) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1762269707] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=361.1 min=290 peak=430 | Noise mean=479.5 | SNR-noise margin=-118.3
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44618.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 69 (radar 2761) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.035)m/s
     Sensor side info (raw): SNR mean=361.9 min=290 peak=430 | Noise mean=478.6 | SNR-noise margin=-116.7
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42490.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 70 (radar 2779) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779043083] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.033)m/s
     Sensor side info (raw): SNR mean=362.4 min=291 peak=430 | Noise mean=478.3 | SNR-noise margin=-115.9
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43328.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 71 (radar 2783) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1711938315] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.011)m/s
     Sensor side info (raw): SNR mean=364.6 min=293 peak=435 | Noise mean=476.1 | SNR-noise margin=-111.5
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46308.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 72 (radar 2795) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=361.7 min=286 peak=437 | Noise mean=478.7 | SNR-noise margin=-117.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46607.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 73 (radar 2797) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795826954] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.011)m/s
     Sensor side info (raw): SNR mean=354.8 min=283 peak=423 | Noise mean=485.7 | SNR-noise margin=-130.9
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45183.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 74 (radar 2799) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.005)m/s
     Sensor side info (raw): SNR mean=356.3 min=284 peak=425 | Noise mean=484.7 | SNR-noise margin=-128.5
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46722.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 75 (radar 2801) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862935050] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.015)m/s
     Sensor side info (raw): SNR mean=363.9 min=289 peak=437 | Noise mean=477.1 | SNR-noise margin=-113.1
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47701.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 76 (radar 2811) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862932234] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=365.4 min=292 peak=436 | Noise mean=475.7 | SNR-noise margin=-110.3
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48363.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 77 (radar 2815) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846159882] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=358.7 min=285 peak=429 | Noise mean=481.7 | SNR-noise margin=-123.0
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44841.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 78 (radar 2817) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.014)m/s
     Sensor side info (raw): SNR mean=359.5 min=288 peak=428 | Noise mean=481.1 | SNR-noise margin=-121.6
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=43023.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 79 (radar 2819) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846156042] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=364.5 min=292 peak=435 | Noise mean=476.5 | SNR-noise margin=-112.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48730.1/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 80 (radar 2827) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1829381642] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=363.5 min=294 peak=433 | Noise mean=477.5 | SNR-noise margin=-114.0
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45311.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 81 (radar 2829) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=365.3 min=296 peak=433 | Noise mean=476.3 | SNR-noise margin=-111.0
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44796.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 82 (radar 2831) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.018)m/s
     Sensor side info (raw): SNR mean=364.7 min=293 peak=435 | Noise mean=476.7 | SNR-noise margin=-112.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48567.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 83 (radar 2847) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1762272010] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.036)m/s
     Sensor side info (raw): SNR mean=360.5 min=288 peak=431 | Noise mean=479.9 | SNR-noise margin=-119.4
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41568.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 84 (radar 2849) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.037)m/s
     Sensor side info (raw): SNR mean=364.1 min=293 peak=433 | Noise mean=477.0 | SNR-noise margin=-112.9
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46275.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 85 (radar 2851) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.041)m/s
     Sensor side info (raw): SNR mean=358.2 min=288 peak=428 | Noise mean=482.9 | SNR-noise margin=-124.7
     Geometry: L=16.1cm W=8.1cm H=2.9cm | points=15 density=40134.8/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.1cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 86 (radar 2853) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=364.8 min=294 peak=435 | Noise mean=475.9 | SNR-noise margin=-111.1
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40372.7/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 87 (radar 2857) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1762266890] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.005)m/s
     Sensor side info (raw): SNR mean=366.9 min=292 peak=439 | Noise mean=473.4 | SNR-noise margin=-106.5
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=44107.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 88 (radar 2861) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1812606986] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=367.5 min=296 peak=438 | Noise mean=473.3 | SNR-noise margin=-105.8
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40457.9/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 89 (radar 2863) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=364.3 min=292 peak=435 | Noise mean=476.6 | SNR-noise margin=-112.3
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45034.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 90 (radar 2865) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.021)m/s
     Sensor side info (raw): SNR mean=359.7 min=289 peak=429 | Noise mean=480.7 | SNR-noise margin=-120.9
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41526.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 91 (radar 2867) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.015)m/s
     Sensor side info (raw): SNR mean=358.9 min=289 peak=428 | Noise mean=481.8 | SNR-noise margin=-122.9
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=43898.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 92 (radar 2869) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=357.4 min=288 peak=426 | Noise mean=483.7 | SNR-noise margin=-126.3
     Geometry: L=16.1cm W=8.2cm H=2.9cm | points=15 density=39707.9/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.2cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3239 | threshold=0.25

=================================================
Frame 93 (radar 2877) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.053)m/s
     Sensor side info (raw): SNR mean=361.6 min=292 peak=431 | Noise mean=479.3 | SNR-noise margin=-117.7
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40398.2/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 94 (radar 2881) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.027)m/s
     Sensor side info (raw): SNR mean=365.3 min=294 peak=435 | Noise mean=475.7 | SNR-noise margin=-110.4
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41424.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 95 (radar 2883) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1812604938] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.032)m/s
     Sensor side info (raw): SNR mean=362.1 min=292 peak=431 | Noise mean=478.9 | SNR-noise margin=-116.8
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45880.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 96 (radar 2885) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779045130] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.040)m/s
     Sensor side info (raw): SNR mean=357.7 min=288 peak=426 | Noise mean=482.9 | SNR-noise margin=-125.1
     Geometry: L=16.1cm W=8.2cm H=2.9cm | points=15 density=39806.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.2cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 97 (radar 2887) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.016)m/s
     Sensor side info (raw): SNR mean=361.1 min=291 peak=431 | Noise mean=479.4 | SNR-noise margin=-118.3
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43092.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 98 (radar 2889) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.007)m/s
     Sensor side info (raw): SNR mean=363.6 min=291 peak=434 | Noise mean=477.1 | SNR-noise margin=-113.5
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40454.2/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3194 | threshold=0.25

=================================================
Frame 99 (radar 2891) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.025)m/s
     Sensor side info (raw): SNR mean=365.9 min=296 peak=435 | Noise mean=474.8 | SNR-noise margin=-108.9
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44710.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3110 | threshold=0.25

=================================================
Frame 100 (radar 2893) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.038)m/s
     Sensor side info (raw): SNR mean=362.2 min=291 peak=433 | Noise mean=478.3 | SNR-noise margin=-116.1
     Geometry: L=16.1cm W=7.9cm H=2.9cm | points=15 density=41161.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.9cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 101 (radar 2897) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=368.5 min=298 peak=438 | Noise mean=472.2 | SNR-noise margin=-103.7
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=44057.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 102 (radar 2899) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=363.9 min=293 peak=432 | Noise mean=477.0 | SNR-noise margin=-113.1
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43569.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 103 (radar 2901) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=359.7 min=290 peak=428 | Noise mean=481.5 | SNR-noise margin=-121.8
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45360.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 104 (radar 2903) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=366.3 min=296 peak=435 | Noise mean=474.5 | SNR-noise margin=-108.2
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=44974.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 105 (radar 2905) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.018)m/s
     Sensor side info (raw): SNR mean=362.5 min=292 peak=433 | Noise mean=478.4 | SNR-noise margin=-115.9
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45379.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 106 (radar 2909) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.032)m/s
     Sensor side info (raw): SNR mean=361.3 min=290 peak=433 | Noise mean=479.7 | SNR-noise margin=-118.3
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41674.4/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 107 (radar 2911) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.007)m/s
     Sensor side info (raw): SNR mean=363.9 min=294 peak=433 | Noise mean=476.9 | SNR-noise margin=-112.9
     Geometry: L=16.1cm W=8.1cm H=2.9cm | points=15 density=39955.8/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.1cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 108 (radar 2915) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.031)m/s
     Sensor side info (raw): SNR mean=361.5 min=290 peak=432 | Noise mean=479.1 | SNR-noise margin=-117.7
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42139.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 109 (radar 2917) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.016)m/s
     Sensor side info (raw): SNR mean=368.9 min=297 peak=440 | Noise mean=472.1 | SNR-noise margin=-103.1
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45440.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 110 (radar 2919) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.027)m/s
     Sensor side info (raw): SNR mean=363.1 min=292 peak=434 | Noise mean=478.1 | SNR-noise margin=-114.9
     Geometry: L=16.1cm W=7.9cm H=2.9cm | points=15 density=41083.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.9cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 111 (radar 2921) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.046)m/s
     Sensor side info (raw): SNR mean=362.8 min=292 peak=432 | Noise mean=478.4 | SNR-noise margin=-115.6
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49146.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 112 (radar 2923) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.034)m/s
     Sensor side info (raw): SNR mean=369.7 min=296 peak=441 | Noise mean=471.2 | SNR-noise margin=-101.5
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40532.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3109 | threshold=0.25

=================================================
Frame 113 (radar 2925) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.011)m/s
     Sensor side info (raw): SNR mean=359.1 min=287 peak=433 | Noise mean=481.5 | SNR-noise margin=-122.4
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42045.9/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 114 (radar 2929) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,0] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=356.8 min=286 peak=426 | Noise mean=484.1 | SNR-noise margin=-127.3
     Geometry: L=16.1cm W=8.2cm H=2.9cm | points=15 density=39470.8/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.2cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 115 (radar 2931) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.040)m/s
     Sensor side info (raw): SNR mean=360.3 min=287 peak=431 | Noise mean=480.5 | SNR-noise margin=-120.3
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45643.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 116 (radar 2943) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.034)m/s
     Sensor side info (raw): SNR mean=361.7 min=289 peak=432 | Noise mean=479.3 | SNR-noise margin=-117.7
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48440.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 117 (radar 2957) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1745491978] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.031)m/s
     Sensor side info (raw): SNR mean=369.6 min=299 peak=438 | Noise mean=471.8 | SNR-noise margin=-102.2
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47817.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 118 (radar 2983) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795825162] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.039)m/s
     Sensor side info (raw): SNR mean=364.6 min=292 peak=434 | Noise mean=476.3 | SNR-noise margin=-111.7
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48770.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 119 (radar 2995) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779049994] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=359.3 min=289 peak=429 | Noise mean=481.2 | SNR-noise margin=-121.9
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=43965.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 120 (radar 2999) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862937610] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=369.3 min=296 peak=440 | Noise mean=471.7 | SNR-noise margin=-102.4
     Geometry: L=16.1cm W=8.2cm H=2.9cm | points=15 density=39572.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.2cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 121 (radar 3009) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795828234] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.015)m/s
     Sensor side info (raw): SNR mean=368.1 min=296 peak=438 | Noise mean=472.7 | SNR-noise margin=-104.7
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44353.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 122 (radar 3023) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1829386762] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.040)m/s
     Sensor side info (raw): SNR mean=370.3 min=300 peak=439 | Noise mean=470.7 | SNR-noise margin=-100.4
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=42929.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 123 (radar 3025) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795825674] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=364.7 min=293 peak=435 | Noise mean=476.4 | SNR-noise margin=-111.7
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41780.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 124 (radar 3037) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.024)m/s
     Sensor side info (raw): SNR mean=359.1 min=288 peak=428 | Noise mean=481.8 | SNR-noise margin=-122.7
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49346.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 125 (radar 3039) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1812597770] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.019)m/s
     Sensor side info (raw): SNR mean=362.5 min=290 peak=433 | Noise mean=478.3 | SNR-noise margin=-115.8
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45051.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 126 (radar 3049) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=360.8 min=290 peak=431 | Noise mean=480.1 | SNR-noise margin=-119.3
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46115.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 127 (radar 3057) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862939146] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.048)m/s
     Sensor side info (raw): SNR mean=361.5 min=291 peak=431 | Noise mean=479.2 | SNR-noise margin=-117.7
     Geometry: L=16.1cm W=8.1cm H=2.9cm | points=15 density=40122.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.1cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 128 (radar 3059) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1829383946] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.000)m/s
     Sensor side info (raw): SNR mean=358.6 min=287 peak=428 | Noise mean=482.3 | SNR-noise margin=-123.7
     Geometry: L=16.1cm W=8.3cm H=2.9cm | points=15 density=39383.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.3cm spread=9.4cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 129 (radar 3065) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.038)m/s
     Sensor side info (raw): SNR mean=362.7 min=291 peak=431 | Noise mean=478.1 | SNR-noise margin=-115.4
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41449.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 130 (radar 3067) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=363.9 min=292 peak=434 | Noise mean=477.1 | SNR-noise margin=-113.1
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43208.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 131 (radar 3071) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1812603402] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=360.1 min=289 peak=428 | Noise mean=480.4 | SNR-noise margin=-120.3
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46761.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 132 (radar 3073) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795823114] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.012)m/s
     Sensor side info (raw): SNR mean=364.5 min=292 peak=435 | Noise mean=476.6 | SNR-noise margin=-112.1
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45452.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 133 (radar 3077) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=361.8 min=290 peak=432 | Noise mean=479.0 | SNR-noise margin=-117.2
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46645.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 134 (radar 3083) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779049738] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=370.0 min=301 peak=438 | Noise mean=471.5 | SNR-noise margin=-101.5
     Geometry: L=16.1cm W=6.8cm H=2.9cm | points=15 density=47633.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 135 (radar 3085) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1829381642] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=366.2 min=294 peak=437 | Noise mean=474.9 | SNR-noise margin=-108.7
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46313.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 136 (radar 3093) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=363.8 min=290 peak=433 | Noise mean=477.8 | SNR-noise margin=-114.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46250.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 137 (radar 3103) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1862936586] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=363.2 min=293 peak=431 | Noise mean=3586.7 | SNR-noise margin=-3223.5
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47048.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 138 (radar 3111) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=361.4 min=292 peak=431 | Noise mean=479.4 | SNR-noise margin=-118.0
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=42694.9/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 139 (radar 3113) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1862933258] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=363.9 min=292 peak=435 | Noise mean=3858.8 | SNR-noise margin=-3494.9
     Geometry: L=16.1cm W=6.9cm H=2.9cm | points=15 density=47086.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 140 (radar 3125) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779048458] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=364.0 min=294 peak=433 | Noise mean=477.0 | SNR-noise margin=-113.0
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=43778.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 141 (radar 3127) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1779048714] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.022)m/s
     Sensor side info (raw): SNR mean=366.6 min=296 peak=436 | Noise mean=3873.3 | SNR-noise margin=-3506.7
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46929.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 142 (radar 3131) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1779049738] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.046)m/s
     Sensor side info (raw): SNR mean=362.7 min=291 peak=433 | Noise mean=477.9 | SNR-noise margin=-115.2
     Geometry: L=16.1cm W=8.1cm H=2.9cm | points=15 density=39954.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.1cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 143 (radar 3133) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1745494794] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.030)m/s
     Sensor side info (raw): SNR mean=368.5 min=296 peak=440 | Noise mean=3851.9 | SNR-noise margin=-3483.4
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45246.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 144 (radar 3139) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862933770] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.037)m/s
     Sensor side info (raw): SNR mean=367.3 min=295 peak=437 | Noise mean=473.7 | SNR-noise margin=-106.4
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=43972.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 145 (radar 3141) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1812603146] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.011)m/s
     Sensor side info (raw): SNR mean=355.9 min=283 peak=425 | Noise mean=485.3 | SNR-noise margin=-129.4
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41562.4/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 146 (radar 3143) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795822858] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.049)m/s
     Sensor side info (raw): SNR mean=356.3 min=286 peak=424 | Noise mean=484.7 | SNR-noise margin=-128.3
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50256.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 147 (radar 3145) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846152714] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.005)m/s
     Sensor side info (raw): SNR mean=357.7 min=285 peak=428 | Noise mean=483.1 | SNR-noise margin=-125.3
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45945.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 148 (radar 3147) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1913258762] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=358.7 min=286 peak=428 | Noise mean=3912.9 | SNR-noise margin=-3554.3
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47328.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 149 (radar 3157) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.029)m/s
     Sensor side info (raw): SNR mean=358.9 min=287 peak=427 | Noise mean=482.2 | SNR-noise margin=-123.3
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43311.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 150 (radar 3159) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=364.7 min=292 peak=435 | Noise mean=476.3 | SNR-noise margin=-111.6
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=42605.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 151 (radar 3161) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.032)m/s
     Sensor side info (raw): SNR mean=362.6 min=290 peak=434 | Noise mean=478.3 | SNR-noise margin=-115.7
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46911.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 152 (radar 3163) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1795827466] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=362.9 min=291 peak=432 | Noise mean=478.3 | SNR-noise margin=-115.4
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46718.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 153 (radar 3165) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=362.1 min=291 peak=431 | Noise mean=479.1 | SNR-noise margin=-117.1
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45803.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 154 (radar 3173) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=366.3 min=296 peak=435 | Noise mean=475.1 | SNR-noise margin=-108.9
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46755.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 155 (radar 3175) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=362.3 min=290 peak=431 | Noise mean=478.7 | SNR-noise margin=-116.4
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43139.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 156 (radar 3177) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,-0.000)m/s
     Sensor side info (raw): SNR mean=361.0 min=290 peak=432 | Noise mean=479.9 | SNR-noise margin=-118.9
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43340.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 157 (radar 3179) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.021)m/s
     Sensor side info (raw): SNR mean=364.2 min=292 peak=435 | Noise mean=477.4 | SNR-noise margin=-113.2
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46341.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 158 (radar 3181) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2604604005] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=369.1 min=296 peak=440 | Noise mean=472.3 | SNR-noise margin=-103.2
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44396.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 159 (radar 3183) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,1681857126] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=362.9 min=293 peak=433 | Noise mean=478.1 | SNR-noise margin=-115.2
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=45853.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 160 (radar 3189) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2369722986] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=362.7 min=292 peak=433 | Noise mean=478.3 | SNR-noise margin=-115.5
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46021.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 161 (radar 3191) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,3997112937] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.016)m/s
     Sensor side info (raw): SNR mean=363.1 min=294 peak=431 | Noise mean=478.2 | SNR-noise margin=-115.1
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47820.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 162 (radar 3193) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,4064221807] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=363.6 min=294 peak=434 | Noise mean=477.3 | SNR-noise margin=-113.7
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=46046.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 163 (radar 3195) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2285836914] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.026)m/s
     Sensor side info (raw): SNR mean=363.1 min=293 peak=432 | Noise mean=477.4 | SNR-noise margin=-114.3
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=42778.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 164 (radar 3197) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,3208583786] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=360.8 min=291 peak=429 | Noise mean=480.1 | SNR-noise margin=-119.3
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45275.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 165 (radar 3199) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2084510319] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.022)m/s
     Sensor side info (raw): SNR mean=362.8 min=292 peak=431 | Noise mean=478.1 | SNR-noise margin=-115.3
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49196.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 166 (radar 3205) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,2617362689] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.662m Z=-0.075m | Range=0.667m
     Radial velocity: mean=+0.017m/s peak=0.121m/s | Track velocity=(+0.020,-0.188,+0.038)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=7.6cm H=2.6cm | points=14 density=57755.4/m3
     Shape: planarity=0.744 flatness=0.216 thickness=7.6cm spread=7.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 167 (radar 3209) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846160394] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=358.2 min=288 peak=428 | Noise mean=482.4 | SNR-noise margin=-124.2
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45432.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 168 (radar 3211) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1913273098] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=358.8 min=289 peak=428 | Noise mean=482.1 | SNR-noise margin=-123.3
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45403.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 169 (radar 3213) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,910105203] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.035)m/s
     Sensor side info (raw): SNR mean=356.5 min=287 peak=425 | Noise mean=484.3 | SNR-noise margin=-127.9
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40377.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 170 (radar 3215) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,1866406501] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=368.8 min=296 peak=439 | Noise mean=472.3 | SNR-noise margin=-103.5
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43569.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 171 (radar 3229) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1896493322] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.025)m/s
     Sensor side info (raw): SNR mean=361.8 min=290 peak=433 | Noise mean=478.9 | SNR-noise margin=-117.1
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48624.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 172 (radar 3231) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1913271050] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.046)m/s
     Sensor side info (raw): SNR mean=361.8 min=289 peak=432 | Noise mean=479.0 | SNR-noise margin=-117.2
     Geometry: L=16.1cm W=8.1cm H=2.9cm | points=15 density=39932.7/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.1cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 173 (radar 3247) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1829383178] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.022)m/s
     Sensor side info (raw): SNR mean=369.1 min=297 peak=438 | Noise mean=747.9 | SNR-noise margin=-378.9
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44317.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 174 (radar 3249) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1812603146] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=363.1 min=291 peak=431 | Noise mean=651.9 | SNR-noise margin=-288.8
     Geometry: L=16.1cm W=8.0cm H=2.9cm | points=15 density=40802.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=8.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 175 (radar 3251) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1846161674] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=363.5 min=291 peak=433 | Noise mean=651.5 | SNR-noise margin=-288.0
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42257.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 176 (radar 3253) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1896497674] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.042)m/s
     Sensor side info (raw): SNR mean=359.5 min=288 peak=429 | Noise mean=481.4 | SNR-noise margin=-121.9
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46799.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 177 (radar 3259) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,88021607] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=364.1 min=293 peak=434 | Noise mean=477.2 | SNR-noise margin=-113.1
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49099.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 178 (radar 3265) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,1681857141] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.023)m/s
     Sensor side info (raw): SNR mean=358.9 min=287 peak=431 | Noise mean=481.9 | SNR-noise margin=-123.0
     Geometry: L=16.1cm W=7.3cm H=2.9cm | points=15 density=44809.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 179 (radar 3273) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1862940170] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.022)m/s
     Sensor side info (raw): SNR mean=360.9 min=290 peak=430 | Noise mean=480.1 | SNR-noise margin=-119.1
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45201.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 180 (radar 3281) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=34, TLVs=5 [1,7,1829386762] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.053)m/s
     Sensor side info (raw): SNR mean=366.3 min=295 peak=436 | Noise mean=4587.9 | SNR-noise margin=-4221.5
     Geometry: L=16.1cm W=7.9cm H=2.9cm | points=15 density=41252.5/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.9cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 181 (radar 3287) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1846155786] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.021)m/s
     Sensor side info (raw): SNR mean=356.6 min=285 peak=424 | Noise mean=757.6 | SNR-noise margin=-401.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45385.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 182 (radar 3289) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1846166026] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.007)m/s
     Sensor side info (raw): SNR mean=363.6 min=293 peak=433 | Noise mean=477.5 | SNR-noise margin=-113.9
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=43971.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 183 (radar 3297) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2554272364] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=365.1 min=295 peak=434 | Noise mean=475.9 | SNR-noise margin=-110.8
     Geometry: L=16.1cm W=7.1cm H=2.9cm | points=15 density=46038.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 184 (radar 3299) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2839485049] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.027)m/s
     Sensor side info (raw): SNR mean=366.7 min=297 peak=436 | Noise mean=474.4 | SNR-noise margin=-107.7
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43647.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 185 (radar 3301) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,3107920496] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=364.3 min=293 peak=433 | Noise mean=476.5 | SNR-noise margin=-112.2
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41960.4/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 186 (radar 3309) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,2503940714] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.005)m/s
     Sensor side info (raw): SNR mean=357.9 min=287 peak=427 | Noise mean=483.0 | SNR-noise margin=-125.1
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41577.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 187 (radar 3323) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,1846158346] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=357.5 min=286 peak=427 | Noise mean=636.8 | SNR-noise margin=-279.3
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47305.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 188 (radar 3325) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=32, TLVs=5 [1,7,1879716362] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.034)m/s
     Sensor side info (raw): SNR mean=22399.7 min=296 peak=53772 | Noise mean=30571.4 | SNR-noise margin=-8171.7
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41655.0/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 189 (radar 3337) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,1846162954] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.006)m/s
     Sensor side info (raw): SNR mean=360.5 min=288 peak=431 | Noise mean=480.5 | SNR-noise margin=-120.1
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47115.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 190 (radar 3347) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=43, filtered=42, TLVs=5 [1,2399245824] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.666m Z=-0.080m | Range=0.671m
     Radial velocity: mean=+0.013m/s peak=0.121m/s | Track velocity=(+0.015,-0.153,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=8.7cm H=2.6cm | points=18 density=63585.6/m3
     Shape: planarity=0.755 flatness=0.213 thickness=8.7cm spread=7.5cm
     Quality: 91% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 191 (radar 3349) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=44, filtered=42, TLVs=5 [1,2869019392] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.042,-0.052,-0.092)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.2cm H=2.6cm | points=16 density=68043.0/m3
     Shape: planarity=0.789 flatness=0.211 thickness=7.2cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 192 (radar 3351) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,436322560] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.031m Y=+0.662m Z=-0.073m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.018,+0.162)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.4cm H=2.6cm | points=16 density=66930.7/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.4cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 193 (radar 3353) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=42, filtered=42, TLVs=5 [1,2130814720] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.026m Y=+0.660m Z=-0.092m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.022,-0.189)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.6cm W=7.8cm H=2.6cm | points=16 density=61677.8/m3
     Shape: planarity=0.789 flatness=0.208 thickness=7.8cm spread=7.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 194 (radar 3355) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=32, TLVs=5 [1,7,1980386570] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.041,+0.208,+0.120)m/s
     Sensor side info (raw): SNR mean=25897.3 min=288 peak=64268 | Noise mean=22601.9 | SNR-noise margin=3295.4
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58700.2/m3
     Shape: planarity=0.793 flatness=0.179 thickness=5.6cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 195 (radar 3359) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,153225281] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.012)m/s
     Sensor side info (raw): SNR mean=20313.9 min=289 peak=62732 | Noise mean=35485.9 | SNR-noise margin=-15172.0
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56628.7/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 196 (radar 3361) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=43, filtered=42, TLVs=5 [1,2063711232] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.057,-0.206,-0.115)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.3cm H=2.6cm | points=16 density=66557.4/m3
     Shape: planarity=0.789 flatness=0.210 thickness=7.3cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 197 (radar 3363) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,2533478401] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.021,+0.192)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.7cm H=2.6cm | points=16 density=64157.6/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.7cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 198 (radar 3365) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,154208364] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.186,-0.071)m/s
     Sensor side info (raw): SNR mean=22199.9 min=294 peak=63752 | Noise mean=28434.2 | SNR-noise margin=-6234.3
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49371.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 199 (radar 3367) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2080509440] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52326.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

⚠️  No valid objects (filtering ghost points) - frame 20

=================================================
Frame 200 (radar 3443) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1745503242] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.004)m/s
     Sensor side info (raw): SNR mean=22775.5 min=297 peak=61709 | Noise mean=23505.7 | SNR-noise margin=-730.1
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46741.1/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 201 (radar 3445) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2097288960] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.023)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42022.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 202 (radar 3447) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164415744] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.026)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47777.4/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 203 (radar 3449) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1711945482] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.078m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,+0.001)m/s
     Sensor side info (raw): SNR mean=31458.6 min=2063 peak=61453 | Noise mean=32601.1 | SNR-noise margin=-1142.5
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=13 density=39618.9/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.1cm spread=9.2cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 204 (radar 3451) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2466406144] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.029,-0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49544.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 205 (radar 3453) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197949440] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45632.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3037 | threshold=0.25

=================================================
Frame 206 (radar 3455) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147619072] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47483.1/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3000 | threshold=0.25

=================================================
Frame 207 (radar 3457) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618304] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49263.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3003 | threshold=0.25

=================================================
Frame 208 (radar 3459) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818706688] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47454.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3007 | threshold=0.25

=================================================
Frame 209 (radar 3461) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130840576] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46970.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2966 | threshold=0.25

=================================================
Frame 210 (radar 3463) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1661619467] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][PLAS] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.075m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.028,+0.028)m/s
     Sensor side info (raw): SNR mean=30828.4 min=2063 peak=61709 | Noise mean=27087.2 | SNR-noise margin=3741.2
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=13 density=36541.4/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.7cm spread=9.4cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3008 | threshold=0.25

=================================================
Frame 211 (radar 3465) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1762283531] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.080m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.044)m/s
     Sensor side info (raw): SNR mean=30946.5 min=1807 peak=61709 | Noise mean=31970.8 | SNR-noise margin=-1024.3
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=13 density=44702.4/m3
     Shape: planarity=0.789 flatness=0.179 thickness=6.3cm spread=9.0cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3050 | threshold=0.25

=================================================
Frame 212 (radar 3467) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164416512] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.032,+0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47188.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 213 (radar 3471) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181192448] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=43928.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 214 (radar 3473) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2214746880] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48084.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 215 (radar 3475) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=31, TLVs=5 [1,7,1762284299] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.078m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.030,+0.011)m/s
     Sensor side info (raw): SNR mean=29095.6 min=2063 peak=61197 | Noise mean=30238.1 | SNR-noise margin=-1142.5
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=13 density=40200.3/m3
     Shape: planarity=0.789 flatness=0.178 thickness=7.0cm spread=9.2cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 216 (radar 3477) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164415744] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.030,-0.012)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49155.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 217 (radar 3479) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1779063307] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.075m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.027,+0.039)m/s
     Sensor side info (raw): SNR mean=27697.5 min=1551 peak=60941 | Noise mean=31203.0 | SNR-noise margin=-3505.5
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=13 density=36117.0/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.8cm spread=9.5cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3049 | threshold=0.25

=================================================
Frame 218 (radar 3481) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2214747136] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.030,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42119.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3043 | threshold=0.25

=================================================
Frame 219 (radar 3483) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567068928] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47109.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2981 | threshold=0.25

=================================================
Frame 220 (radar 3485) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567068416] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46632.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2986 | threshold=0.25

=================================================
Frame 221 (radar 3487) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181171712] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51770.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2989 | threshold=0.25

=================================================
Frame 222 (radar 3489) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2734822144] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.023)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47885.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2988 | threshold=0.25

=================================================
Frame 223 (radar 3491) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1594507786] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=22519.3 min=298 peak=51212 | Noise mean=34923.3 | SNR-noise margin=-12404.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48347.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3018 | threshold=0.25

=================================================
Frame 224 (radar 3493) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567069440] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47103.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3019 | threshold=0.25

=================================================
Frame 225 (radar 3495) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2281857280] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47666.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3019 | threshold=0.25

=================================================
Frame 226 (radar 3497) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1762281482] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.041)m/s
     Sensor side info (raw): SNR mean=22092.3 min=296 peak=54028 | Noise mean=31373.7 | SNR-noise margin=-9281.3
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42038.2/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3065 | threshold=0.25

=================================================
Frame 227 (radar 3499) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1628063754] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=22159.7 min=293 peak=53004 | Noise mean=31903.9 | SNR-noise margin=-9744.2
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46428.4/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3102 | threshold=0.25

=================================================
Frame 228 (radar 3501) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1611288331] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=22960.9 min=290 peak=54796 | Noise mean=31973.0 | SNR-noise margin=-9012.1
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47767.9/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3131 | threshold=0.25

=================================================
Frame 229 (radar 3503) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1611287818] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=23882.1 min=288 peak=57612 | Noise mean=31631.8 | SNR-noise margin=-7749.7
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47572.0/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3148 | threshold=0.25

=================================================
Frame 230 (radar 3505) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1611286794] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.036)m/s
     Sensor side info (raw): SNR mean=21939.5 min=300 peak=57612 | Noise mean=30929.2 | SNR-noise margin=-8989.7
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41966.7/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3149 | threshold=0.25

=================================================
Frame 231 (radar 3507) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2248303104] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.038)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49593.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 232 (radar 3509) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1544177163] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.011)m/s
     Sensor side info (raw): SNR mean=21769.3 min=301 peak=53260 | Noise mean=31816.2 | SNR-noise margin=-10046.9
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46501.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3148 | threshold=0.25

=================================================
Frame 233 (radar 3511) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2265058816] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47613.0/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 234 (radar 3515) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1594507018] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.012)m/s
     Sensor side info (raw): SNR mean=22450.9 min=296 peak=54284 | Noise mean=31680.8 | SNR-noise margin=-9229.9
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45293.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 235 (radar 3519) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1560955402] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=23115.1 min=292 peak=55564 | Noise mean=31545.7 | SNR-noise margin=-8430.7
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48536.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 236 (radar 3521) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1678395658] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.036)m/s
     Sensor side info (raw): SNR mean=23608.1 min=283 peak=54284 | Noise mean=32008.6 | SNR-noise margin=-8400.5
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=44097.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 237 (radar 3523) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2315411200] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42209.3/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 238 (radar 3525) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1577731594] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.041)m/s
     Sensor side info (raw): SNR mean=23798.7 min=295 peak=58124 | Noise mean=31783.8 | SNR-noise margin=-7985.1
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48692.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 239 (radar 3527) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2617400832] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44777.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 240 (radar 3529) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2265059840] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45300.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3204 | threshold=0.25

=================================================
Frame 241 (radar 3531) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1695176203] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=22810.3 min=300 peak=56332 | Noise mean=27703.3 | SNR-noise margin=-4893.0
     Geometry: L=16.0cm W=7.6cm H=2.9cm | points=15 density=42640.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3199 | threshold=0.25

=================================================
Frame 242 (radar 3533) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=43, filtered=42, TLVs=5 [1,1996589824] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.662m Z=-0.073m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.191,+0.019)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.5cm H=2.6cm | points=16 density=66035.7/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.5cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3207 | threshold=0.25

=================================================
Frame 243 (radar 3535) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1728708618] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.678m Z=-0.080m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.002,+0.156,-0.072)m/s
     Sensor side info (raw): SNR mean=32620.5 min=2831 peak=64781 | Noise mean=23916.7 | SNR-noise margin=8703.8
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=13 density=52787.7/m3
     Shape: planarity=0.797 flatness=0.180 thickness=5.4cm spread=8.7cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3218 | threshold=0.25

=================================================
Frame 244 (radar 3537) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=42, filtered=42, TLVs=5 [1,2416038145] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.002,-0.154,+0.085)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.3cm H=2.6cm | points=16 density=67878.4/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.3cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3224 | threshold=0.25

=================================================
Frame 245 (radar 3539) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=43, filtered=42, TLVs=5 [1,604081920] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.085m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.047,+0.026,-0.134)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.0cm H=2.6cm | points=15 density=78631.4/m3
     Shape: planarity=0.777 flatness=0.217 thickness=6.0cm spread=6.9cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3229 | threshold=0.25

=================================================
Frame 246 (radar 3541) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2231477760] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.044,-0.035)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.1cm H=2.6cm | points=16 density=69041.1/m3
     Shape: planarity=0.789 flatness=0.211 thickness=7.1cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3225 | threshold=0.25

=================================================
Frame 247 (radar 3543) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=43, filtered=42, TLVs=5 [1,2617363968] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.088m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.1cm H=2.6cm | points=16 density=68643.2/m3
     Shape: planarity=0.789 flatness=0.211 thickness=7.1cm spread=7.3cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3221 | threshold=0.25

=================================================
Frame 248 (radar 3545) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=44, filtered=42, TLVs=5 [1,1912713984] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.662m Z=-0.074m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.015,+0.145)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.9cm H=2.6cm | points=16 density=62170.7/m3
     Shape: planarity=0.755 flatness=0.213 thickness=7.9cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3236 | threshold=0.25

=================================================
Frame 249 (radar 3547) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,1895933952] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.017,-0.157)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.7cm H=2.6cm | points=16 density=62806.1/m3
     Shape: planarity=0.790 flatness=0.209 thickness=7.7cm spread=7.6cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 250 (radar 3551) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2181170432] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=44956.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 251 (radar 3553) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2852261376] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46696.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 252 (radar 3555) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1829387786] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.032)m/s
     Sensor side info (raw): SNR mean=21851.9 min=288 peak=60941 | Noise mean=28593.5 | SNR-noise margin=-6741.5
     Geometry: L=16.0cm W=7.6cm H=2.9cm | points=15 density=42791.2/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 253 (radar 3557) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567068672] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.5cm H=2.9cm | points=15 density=43462.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 254 (radar 3559) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2869038080] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43122.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3258 | threshold=0.25

=================================================
Frame 255 (radar 3561) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2248301568] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43169.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 256 (radar 3565) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1862948619] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.074m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,-0.004)m/s
     Sensor side info (raw): SNR mean=27874.7 min=1295 peak=61709 | Noise mean=31537.8 | SNR-noise margin=-3663.1
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=13 density=35976.6/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.8cm spread=9.5cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 257 (radar 3569) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2265078528] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.011,+0.057,+0.025)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44843.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 258 (radar 3571) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=43, filtered=42, TLVs=5 [1,2600582144] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.031m Y=+0.662m Z=-0.073m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.188,+0.043)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.3cm H=2.6cm | points=16 density=67394.1/m3
     Shape: planarity=0.754 flatness=0.214 thickness=7.3cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 259 (radar 3573) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,153356375] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.067m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.000,+0.005,+0.053)m/s
     Sensor side info (raw): SNR mean=20700.2 min=278 peak=54283 | Noise mean=25039.8 | SNR-noise margin=-4339.6
     Geometry: L=12.3cm W=8.3cm H=2.6cm | points=16 density=59653.4/m3
     Shape: planarity=0.755 flatness=0.214 thickness=8.3cm spread=7.6cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 260 (radar 3575) | Valid Objects: 1
UART: packet=1376 B, objects=48, raw=42, filtered=42, TLVs=5 [1,2734795520] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.023,-0.222)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.6cm H=2.6cm | points=16 density=74373.8/m3
     Shape: planarity=0.788 flatness=0.213 thickness=6.6cm spread=7.1cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 261 (radar 3577) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=42, filtered=42, TLVs=5 [1,2583794432] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,-0.001,-0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.5cm H=2.6cm | points=16 density=75660.1/m3
     Shape: planarity=0.788 flatness=0.213 thickness=6.5cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3141 | threshold=0.25

=================================================
Frame 262 (radar 3579) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2097307136] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.057,+0.205,+0.117)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47560.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3214 | threshold=0.25

=================================================
Frame 263 (radar 3581) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2483182848] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.028)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44421.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3183 | threshold=0.25

=================================================
Frame 264 (radar 3583) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130861312] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.042)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53813.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3159 | threshold=0.25

=================================================
Frame 265 (radar 3585) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841088] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46426.4/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3132 | threshold=0.25

=================================================
Frame 266 (radar 3587) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164396800] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.021)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46824.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3127 | threshold=0.25

=================================================
Frame 267 (radar 3589) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147617280] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.036)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43368.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3052 | threshold=0.25

=================================================
Frame 268 (radar 3591) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2516736768] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46019.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3053 | threshold=0.25

=================================================
Frame 269 (radar 3593) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1745499915] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.009)m/s
     Sensor side info (raw): SNR mean=22859.8 min=293 peak=61709 | Noise mean=22841.2 | SNR-noise margin=18.6
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47137.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3106 | threshold=0.25

=================================================
Frame 270 (radar 3595) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2214747136] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.016)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=50665.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3063 | threshold=0.25

=================================================
Frame 271 (radar 3597) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2734821632] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.012)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48154.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3067 | threshold=0.25

=================================================
Frame 272 (radar 3599) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181172992] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46281.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3070 | threshold=0.25

=================================================
Frame 273 (radar 3601) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1795834123] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.076m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,+0.006)m/s
     Sensor side info (raw): SNR mean=31202.5 min=1807 peak=63500 | Noise mean=30927.2 | SNR-noise margin=275.4
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=13 density=36592.5/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.7cm spread=9.4cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3104 | threshold=0.25

=================================================
Frame 274 (radar 3603) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,152963164] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.020,-0.156,+0.050)m/s
     Sensor side info (raw): SNR mean=29974.7 min=288 peak=61448 | Noise mean=27183.6 | SNR-noise margin=2791.1
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=16 density=63465.7/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.8cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3108 | threshold=0.25

=================================================
Frame 275 (radar 3605) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114083584] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.186,-0.071)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51821.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3081 | threshold=0.25

=================================================
Frame 276 (radar 3607) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=42, filtered=42, TLVs=5 [1,1996592896] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.070m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.184,+0.082)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.5cm H=2.6cm | points=16 density=66125.4/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.5cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3068 | threshold=0.25

=================================================
Frame 277 (radar 3609) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,153684070] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=31278.1 min=284 peak=65292 | Noise mean=26687.9 | SNR-noise margin=4590.2
     Geometry: L=12.3cm W=7.5cm H=2.6cm | points=16 density=65947.8/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.5cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3117 | threshold=0.25

=================================================
Frame 278 (radar 3611) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2231525120] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.183,-0.092)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60525.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 279 (radar 3615) | Valid Objects: 1
UART: packet=1216 B, objects=40, raw=40, filtered=38, TLVs=5 [1,7,153552981] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.668m Z=-0.073m | Range=0.673m
     Radial velocity: mean=+0.017m/s peak=0.121m/s | Track velocity=(+0.001,-0.132,+0.064)m/s
     Sensor side info (raw): SNR mean=27033.5 min=267 peak=62732 | Noise mean=23152.1 | SNR-noise margin=3881.4
     Geometry: L=12.2cm W=7.7cm H=2.6cm | points=14 density=56382.5/m3
     Shape: planarity=0.749 flatness=0.214 thickness=7.7cm spread=7.7cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 280 (radar 3619) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2684509952] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.045,+0.182,+0.056)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54550.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 281 (radar 3621) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1963624458] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.081m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.034,-0.033)m/s
     Sensor side info (raw): SNR mean=34609.5 min=2570 peak=63756 | Noise mean=28524.8 | SNR-noise margin=6084.7
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=13 density=54827.7/m3
     Shape: planarity=0.787 flatness=0.180 thickness=5.2cm spread=8.7cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 282 (radar 3623) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130861312] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.032,+0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58944.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 283 (radar 3625) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,2013956618] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,+0.004)m/s
     Sensor side info (raw): SNR mean=30237.8 min=2063 peak=58893 | Noise mean=27303.9 | SNR-noise margin=2933.9
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=13 density=47989.7/m3
     Shape: planarity=0.788 flatness=0.179 thickness=5.9cm spread=8.8cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 284 (radar 3627) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1963625738] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.081m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.018)m/s
     Sensor side info (raw): SNR mean=29666.7 min=2575 peak=58381 | Noise mean=27087.3 | SNR-noise margin=2579.4
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=13 density=51116.5/m3
     Shape: planarity=0.788 flatness=0.179 thickness=5.6cm spread=8.7cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3096 | threshold=0.25

=================================================
Frame 285 (radar 3629) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970432] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.029,-0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=60168.3/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3277 | threshold=0.25

=================================================
Frame 286 (radar 3631) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1963625226] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.027,+0.036)m/s
     Sensor side info (raw): SNR mean=30454.6 min=2319 peak=59149 | Noise mean=22380.9 | SNR-noise margin=8073.7
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=13 density=48553.7/m3
     Shape: planarity=0.788 flatness=0.179 thickness=5.8cm spread=8.8cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3294 | threshold=0.25

=================================================
Frame 287 (radar 3633) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2231524352] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.032,+0.011)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.9cm H=2.9cm | points=15 density=55267.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3282 | threshold=0.25

=================================================
Frame 288 (radar 3635) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970432] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.032)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62320.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3288 | threshold=0.25

=================================================
Frame 289 (radar 3637) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1963625482] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.080m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.029,+0.012)m/s
     Sensor side info (raw): SNR mean=28544.2 min=522 peak=58893 | Noise mean=28249.2 | SNR-noise margin=295.1
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=13 density=50366.3/m3
     Shape: planarity=0.788 flatness=0.180 thickness=5.6cm spread=8.8cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 290 (radar 3641) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=39, filtered=39, TLVs=5 [1,7,1862943498] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.031m Y=+0.666m Z=-0.071m | Range=0.671m
     Radial velocity: mean=+0.024m/s peak=0.121m/s | Track velocity=(-0.006,-0.150,+0.052)m/s
     Sensor side info (raw): SNR mean=21970.1 min=286 peak=61708 | Noise mean=23949.6 | SNR-noise margin=-1979.5
     Geometry: L=12.2cm W=7.6cm H=2.6cm | points=15 density=61391.9/m3
     Shape: planarity=0.744 flatness=0.214 thickness=7.6cm spread=7.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 291 (radar 3643) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=42, filtered=42, TLVs=5 [1,2416039425] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.088m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.043,-0.018,-0.173)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.7cm H=2.6cm | points=15 density=70262.6/m3
     Shape: planarity=0.776 flatness=0.217 thickness=6.7cm spread=6.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 292 (radar 3647) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=37, filtered=35, TLVs=5 [1,2248280064] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57714.4/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.7cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 293 (radar 3649) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1829395211] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.031m Y=+0.678m Z=-0.078m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.003,-0.023,+0.055)m/s
     Sensor side info (raw): SNR mean=30868.2 min=3343 peak=57613 | Noise mean=22814.2 | SNR-noise margin=8054.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=13 density=47435.6/m3
     Shape: planarity=0.798 flatness=0.179 thickness=6.0cm spread=8.8cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 294 (radar 3651) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2197918976] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.088m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.054,-0.174,-0.103)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.6cm H=2.6cm | points=16 density=75093.9/m3
     Shape: planarity=0.789 flatness=0.213 thickness=6.6cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 295 (radar 3653) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164415488] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.057,+0.202,+0.092)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54470.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 296 (radar 3655) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1779055883] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.030m Y=+0.682m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,+0.004,+0.033)m/s
     Sensor side info (raw): SNR mean=24685.3 min=287 peak=64012 | Noise mean=21424.7 | SNR-noise margin=3260.6
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=53047.2/m3
     Shape: planarity=0.794 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 297 (radar 3657) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1862942475] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.678m Z=-0.077m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.013,-0.032,-0.013)m/s
     Sensor side info (raw): SNR mean=26752.4 min=525 peak=57869 | Noise mean=23798.8 | SNR-noise margin=2953.6
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=13 density=42992.1/m3
     Shape: planarity=0.799 flatness=0.179 thickness=6.6cm spread=9.0cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3302 | threshold=0.25

=================================================
Frame 298 (radar 3659) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1846162954] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.083m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.018,-0.007,-0.061)m/s
     Sensor side info (raw): SNR mean=31045.3 min=3343 peak=57869 | Noise mean=23089.8 | SNR-noise margin=7955.5
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=13 density=51041.7/m3
     Shape: planarity=0.787 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3311 | threshold=0.25

=================================================
Frame 299 (radar 3661) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2734841344] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.036,+0.048)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=52055.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 300 (radar 3667) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2718063872] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.002,-0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60477.5/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 301 (radar 3671) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2734841088] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.001,-0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54863.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 302 (radar 3673) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2751617792] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=61132.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 303 (radar 3679) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1963616010] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.003,-0.021)m/s
     Sensor side info (raw): SNR mean=24446.5 min=288 peak=60172 | Noise mean=22209.5 | SNR-noise margin=2236.9
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58711.5/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 304 (radar 3683) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2281856256] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59589.3/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 305 (radar 3685) | Valid Objects: 1
UART: packet=1376 B, objects=48, raw=42, filtered=42, TLVs=5 [1,2768348160] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.057,-0.201,-0.072)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.9cm H=2.6cm | points=16 density=71577.2/m3
     Shape: planarity=0.788 flatness=0.213 thickness=6.9cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 306 (radar 3687) | Valid Objects: 1
UART: packet=1376 B, objects=48, raw=44, filtered=42, TLVs=5 [1,1845586176] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.019,+0.179)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=16 density=63190.5/m3
     Shape: planarity=0.755 flatness=0.213 thickness=7.8cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 307 (radar 3689) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2365705472] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.088m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.017,-0.164)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=6.8cm H=2.6cm | points=16 density=72632.5/m3
     Shape: planarity=0.789 flatness=0.212 thickness=6.8cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 308 (radar 3691) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=42, filtered=42, TLVs=5 [1,2214713345] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.018,+0.171)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.7cm H=2.6cm | points=16 density=64540.5/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.7cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 309 (radar 3693) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=39, TLVs=5 [1,7,153684055] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.089m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.047,+0.021,-0.172)m/s
     Sensor side info (raw): SNR mean=29182.5 min=295 peak=61708 | Noise mean=24426.1 | SNR-noise margin=4756.4
     Geometry: L=12.1cm W=6.9cm H=2.6cm | points=15 density=67733.2/m3
     Shape: planarity=0.776 flatness=0.217 thickness=6.9cm spread=6.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3346 | threshold=0.25

=================================================
Frame 310 (radar 3695) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2348945152] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.037,+0.167,+0.111)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53795.8/m3
     Shape: planarity=0.794 flatness=0.179 thickness=6.1cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3333 | threshold=0.25

=================================================
Frame 311 (radar 3697) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1812604682] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.019)m/s
     Sensor side info (raw): SNR mean=25146.6 min=289 peak=63244 | Noise mean=21645.9 | SNR-noise margin=3500.7
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58396.0/m3
     Shape: planarity=0.793 flatness=0.179 thickness=5.6cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3343 | threshold=0.25

=================================================
Frame 312 (radar 3699) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2164371712] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.041,-0.206,-0.108)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.0cm H=2.6cm | points=16 density=69865.8/m3
     Shape: planarity=0.788 flatness=0.211 thickness=7.0cm spread=7.3cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3356 | threshold=0.25

=================================================
Frame 313 (radar 3701) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=42, filtered=42, TLVs=5 [1,2634124032] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.091m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,-0.000,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=6.5cm H=2.6cm | points=16 density=76544.6/m3
     Shape: planarity=0.788 flatness=0.214 thickness=6.5cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3383 | threshold=0.25

=================================================
Frame 314 (radar 3703) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=35, filtered=34, TLVs=5 [1,2667701249] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.057,+0.204,+0.098)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=55948.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3362 | threshold=0.25

=================================================
Frame 315 (radar 3705) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2701266944] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.039)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46993.8/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3329 | threshold=0.25

=================================================
Frame 316 (radar 3707) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2097286144] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.028)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52526.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3325 | threshold=0.25

=================================================
Frame 317 (radar 3709) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=45, filtered=42, TLVs=5 [1,16864769] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.662m Z=-0.074m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.187,+0.057)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.3cm H=2.6cm | points=16 density=67507.6/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.3cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3313 | threshold=0.25

=================================================
Frame 318 (radar 3711) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2298584576] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.016,-0.149)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=6.8cm H=2.6cm | points=16 density=72743.6/m3
     Shape: planarity=0.789 flatness=0.212 thickness=6.8cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3337 | threshold=0.25

=================================================
Frame 319 (radar 3713) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=42, filtered=42, TLVs=5 [1,2382484225] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.018,+0.174)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.7cm H=2.6cm | points=16 density=64408.3/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.7cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 320 (radar 3717) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2751617024] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.011,+0.049,-0.053)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61585.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 321 (radar 3719) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1745495818] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.012)m/s
     Sensor side info (raw): SNR mean=25897.3 min=288 peak=61709 | Noise mean=22704.3 | SNR-noise margin=3192.9
     Geometry: L=16.0cm W=5.5cm H=2.9cm | points=15 density=59277.7/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 322 (radar 3721) | Valid Objects: 1
UART: packet=1216 B, objects=40, raw=40, filtered=35, TLVs=5 [1,805423361] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.031m Y=+0.666m Z=-0.075m | Range=0.671m
     Radial velocity: mean=+0.024m/s peak=0.121m/s | Track velocity=(+0.010,-0.147,+0.055)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.0cm H=2.6cm | points=15 density=77633.8/m3
     Shape: planarity=0.743 flatness=0.216 thickness=6.0cm spread=7.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 323 (radar 3723) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=42, filtered=42, TLVs=5 [1,2734802176] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.087m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.048,-0.052,-0.118)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.0cm H=2.6cm | points=16 density=70283.3/m3
     Shape: planarity=0.789 flatness=0.212 thickness=7.0cm spread=7.3cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 324 (radar 3725) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,2567018496] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.070m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.017,+0.171)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=16 density=63233.9/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.8cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3361 | threshold=0.25

=================================================
Frame 325 (radar 3727) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164414464] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.187,-0.058)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46941.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3251 | threshold=0.25

=================================================
Frame 326 (radar 3729) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,1963039744] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.088m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.057,-0.206,-0.127)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.2cm H=2.6cm | points=16 density=79462.6/m3
     Shape: planarity=0.789 flatness=0.214 thickness=6.2cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3253 | threshold=0.25

=================================================
Frame 327 (radar 3731) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=42, filtered=42, TLVs=5 [1,2046924032] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.017,+0.167)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=16 density=63187.4/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.8cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3253 | threshold=0.25

=================================================
Frame 328 (radar 3733) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2063751424] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.186,-0.063)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49427.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3273 | threshold=0.25

=================================================
Frame 329 (radar 3735) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130859776] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48613.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3270 | threshold=0.25

=================================================
Frame 330 (radar 3737) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=42, filtered=42, TLVs=5 [1,2080475136] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.186,+0.061)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=16 density=63733.6/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.8cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3363 | threshold=0.25

=================================================
Frame 331 (radar 3739) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147638016] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.182,-0.104)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62370.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3341 | threshold=0.25

=================================================
Frame 332 (radar 3741) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=42, filtered=42, TLVs=5 [1,453092608] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.663m Z=-0.070m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.181,+0.115)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.6cm H=2.6cm | points=16 density=65685.4/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.6cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3339 | threshold=0.25

=================================================
Frame 333 (radar 3743) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1829378570] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.011,+0.184,-0.092)m/s
     Sensor side info (raw): SNR mean=25266.3 min=290 peak=65293 | Noise mean=21935.9 | SNR-noise margin=3330.5
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59752.3/m3
     Shape: planarity=0.793 flatness=0.180 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3275 | threshold=0.25

=================================================
Frame 334 (radar 3745) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2332186368] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,-0.003,-0.016)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59062.4/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3283 | threshold=0.25

=================================================
Frame 335 (radar 3747) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1879717386] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.016,+0.003,+0.019)m/s
     Sensor side info (raw): SNR mean=25626.1 min=296 peak=62989 | Noise mean=23129.1 | SNR-noise margin=2496.9
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58617.1/m3
     Shape: planarity=0.793 flatness=0.180 thickness=5.6cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 336 (radar 3761) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1711948811] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.029)m/s
     Sensor side info (raw): SNR mean=24190.7 min=287 peak=61708 | Noise mean=23131.1 | SNR-noise margin=1059.5
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52979.6/m3
     Shape: planarity=0.793 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 337 (radar 3763) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1711942410] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.028)m/s
     Sensor side info (raw): SNR mean=28764.7 min=288 peak=65290 | Noise mean=21714.3 | SNR-noise margin=7050.4
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59721.7/m3
     Shape: planarity=0.793 flatness=0.180 thickness=5.5cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 338 (radar 3765) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,1762281995] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=24890.2 min=286 peak=63757 | Noise mean=21492.7 | SNR-noise margin=3397.5
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62192.5/m3
     Shape: planarity=0.793 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 339 (radar 3767) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=42, filtered=42, TLVs=5 [1,2449473543] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position: X=-0.027m Y=+0.665m Z=-0.085m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.037,-0.159,-0.045)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.2cm H=2.6cm | points=15 density=75592.0/m3
     Shape: planarity=0.777 flatness=0.217 thickness=6.2cm spread=6.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 340 (radar 3769) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2047511306] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position: X=-0.030m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.037,+0.161,+0.072)m/s
     Sensor side info (raw): SNR mean=27499.3 min=280 peak=64266 | Noise mean=22245.7 | SNR-noise margin=5253.7
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53577.8/m3
     Shape: planarity=0.793 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3250 | threshold=0.25

=================================================
Frame 341 (radar 3771) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1762267915] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.031m Y=+0.678m Z=-0.083m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.013,-0.036,-0.052)m/s
     Sensor side info (raw): SNR mean=30356.1 min=3087 peak=61965 | Noise mean=23247.3 | SNR-noise margin=7108.8
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=13 density=53169.0/m3
     Shape: planarity=0.797 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3353 | threshold=0.25

=================================================
Frame 342 (radar 3773) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1846167050] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.084m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.018,-0.002,-0.009)m/s
     Sensor side info (raw): SNR mean=30769.7 min=3087 peak=63501 | Noise mean=21297.8 | SNR-noise margin=9471.8
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=13 density=52148.9/m3
     Shape: planarity=0.787 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3362 | threshold=0.25

=================================================
Frame 343 (radar 3775) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=43, filtered=42, TLVs=5 [1,2164369920] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.088m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.072,-0.165,-0.040)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.6cm H=2.6cm | points=16 density=74136.2/m3
     Shape: planarity=0.789 flatness=0.213 thickness=6.6cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3368 | threshold=0.25

=================================================
Frame 344 (radar 3777) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=45, filtered=42, TLVs=5 [1,2265027840] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,-0.005,-0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.1cm H=2.6cm | points=16 density=69117.4/m3
     Shape: planarity=0.789 flatness=0.211 thickness=7.1cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3370 | threshold=0.25

=================================================
Frame 345 (radar 3779) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2550291712] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.057,+0.202,+0.078)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59717.8/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3369 | threshold=0.25

=================================================
Frame 346 (radar 3781) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147638016] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62411.8/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3377 | threshold=0.25

=================================================
Frame 347 (radar 3783) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2567068928] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60416.7/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3370 | threshold=0.25

=================================================
Frame 348 (radar 3785) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2432822273] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=63175.9/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3372 | threshold=0.25

=================================================
Frame 349 (radar 3787) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147638016] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62632.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3366 | threshold=0.25

=================================================
Frame 350 (radar 3789) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147636992] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61943.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3360 | threshold=0.25

=================================================
Frame 351 (radar 3791) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2181173248] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.032)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57338.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3347 | threshold=0.25

=================================================
Frame 352 (radar 3793) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2466375937] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56911.0/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3325 | threshold=0.25

=================================================
Frame 353 (radar 3795) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1980394762] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][CARD] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.033m Y=+0.678m Z=-0.083m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.034,-0.031)m/s
     Sensor side info (raw): SNR mean=26771.9 min=778 peak=59917 | Noise mean=27855.3 | SNR-noise margin=-1083.4
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=13 density=53182.6/m3
     Shape: planarity=0.787 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3321 | threshold=0.25
Radar frame 3797: 31 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 354 (radar 3799) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181191936] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.031,+0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60865.3/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3300 | threshold=0.25

=================================================
Frame 355 (radar 3801) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181191680] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.027)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57856.1/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.7cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3267 | threshold=0.25

=================================================
Frame 356 (radar 3803) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860288] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60176.4/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3229 | threshold=0.25

=================================================
Frame 357 (radar 3805) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130861056] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.021)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=63075.9/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3168 | threshold=0.25

=================================================
Frame 358 (radar 3807) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114083328] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57833.5/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3189 | threshold=0.25

=================================================
Frame 359 (radar 3809) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114083328] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=54021.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3188 | threshold=0.25

=================================================
Frame 360 (radar 3811) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860544] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.026)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=63416.4/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3269 | threshold=0.25

=================================================
Frame 361 (radar 3813) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860544] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62942.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3310 | threshold=0.25

=================================================
Frame 362 (radar 3815) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2550261505] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62955.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3302 | threshold=0.25

=================================================
Frame 363 (radar 3817) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2130842112] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.8cm H=2.9cm | points=15 density=56592.2/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3305 | threshold=0.25

=================================================
Frame 364 (radar 3819) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147637760] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.023)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62487.1/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3312 | threshold=0.25

=================================================
Frame 365 (radar 3821) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2533513984] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.046)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48508.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3305 | threshold=0.25

=================================================
Frame 366 (radar 3823) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=38, filtered=35, TLVs=5 [1,2550260737] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.044)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62718.1/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3305 | threshold=0.25

=================================================
Frame 367 (radar 3825) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2617369089] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58474.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3304 | threshold=0.25

=================================================
Frame 368 (radar 3827) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860544] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.032)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=52154.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3298 | threshold=0.25

=================================================
Frame 369 (radar 3829) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2483162368] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.682m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.021)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47540.9/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3288 | threshold=0.25

=================================================
Frame 370 (radar 3831) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147637760] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=51119.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3281 | threshold=0.25

=================================================
Frame 371 (radar 3833) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2533514240] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.043)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61893.8/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3283 | threshold=0.25

=================================================
Frame 372 (radar 3835) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=38, filtered=35, TLVs=5 [1,2466375425] points=yes sideInfo=no malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.042)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54705.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3282 | threshold=0.25

=================================================
Frame 373 (radar 3837) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2650934528] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=51301.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2438 | threshold=0.25

=================================================
Frame 374 (radar 3839) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2533494016] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59937.2/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2438 | threshold=0.25

=================================================
Frame 375 (radar 3841) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2650934784] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.005,-0.042)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=63207.9/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2441 | threshold=0.25

=================================================
Frame 376 (radar 3843) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164414720] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.046)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52954.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2436 | threshold=0.25

=================================================
Frame 377 (radar 3845) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2634156800] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.028)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46017.0/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2424 | threshold=0.25

=================================================
Frame 378 (radar 3847) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181191936] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.039)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.8cm H=2.9cm | points=15 density=56679.0/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2424 | threshold=0.25

=================================================
Frame 379 (radar 3849) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2650924033] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58619.7/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2427 | threshold=0.25

=================================================
Frame 380 (radar 3851) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=34, filtered=34, TLVs=5 [1,2114068224] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.043)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47561.0/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2416 | threshold=0.25

=================================================
Frame 381 (radar 3853) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=38, filtered=35, TLVs=5 [1,2499930113] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.016)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52977.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2409 | threshold=0.25

=================================================
Frame 382 (radar 3855) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147636992] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52861.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2403 | threshold=0.25

=================================================
Frame 383 (radar 3857) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.041)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=61192.3/m3
     Shape: planarity=0.779 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2405 | threshold=0.25

=================================================
Frame 384 (radar 3859) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2097287936] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.038)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54681.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2400 | threshold=0.25

=================================================
Frame 385 (radar 3861) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164414464] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.9cm H=2.9cm | points=15 density=55832.7/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2406 | threshold=0.25

=================================================
Frame 386 (radar 3863) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52475.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2399 | threshold=0.25

=================================================
Frame 387 (radar 3865) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2684489216] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54918.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2397 | threshold=0.25

=================================================
Frame 388 (radar 3867) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130842368] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52670.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2398 | threshold=0.25

=================================================
Frame 389 (radar 3869) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2181191424] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.024)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48614.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2399 | threshold=0.25

=================================================
Frame 390 (radar 3871) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114082816] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47122.4/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2395 | threshold=0.25

=================================================
Frame 391 (radar 3873) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567067648] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.023)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55658.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2391 | threshold=0.25

=================================================
Frame 392 (radar 3875) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2516707841] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53701.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2390 | threshold=0.25

=================================================
Frame 393 (radar 3877) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2567067648] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=50985.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2390 | threshold=0.25

=================================================
Frame 394 (radar 3879) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860288] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50153.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2383 | threshold=0.25

=================================================
Frame 395 (radar 3881) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147637504] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.034)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62792.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2382 | threshold=0.25

=================================================
Frame 396 (radar 3883) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2583815937] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.082m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.5cm H=2.9cm | points=15 density=59431.4/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2387 | threshold=0.25

=================================================
Frame 397 (radar 3885) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2097305856] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.030)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53989.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2394 | threshold=0.25

=================================================
Frame 398 (radar 3887) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181173504] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62113.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2398 | threshold=0.25

=================================================
Frame 399 (radar 3889) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2080528640] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55318.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2395 | threshold=0.25

=================================================
Frame 400 (radar 3891) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567067648] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59775.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2405 | threshold=0.25

=================================================
Frame 401 (radar 3893) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2617369857] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.035)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52446.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2404 | threshold=0.25

=================================================
Frame 402 (radar 3895) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147637504] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=60122.7/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2409 | threshold=0.25

=================================================
Frame 403 (radar 3897) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114083072] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54176.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2405 | threshold=0.25

=================================================
Frame 404 (radar 3899) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2567067904] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61399.9/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2409 | threshold=0.25

=================================================
Frame 405 (radar 3901) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58812.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2411 | threshold=0.25

=================================================
Frame 406 (radar 3903) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58051.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2415 | threshold=0.25

=================================================
Frame 407 (radar 3905) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147637504] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59278.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2418 | threshold=0.25

=================================================
Frame 408 (radar 3907) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2097306624] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.9cm H=2.9cm | points=15 density=55858.5/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2420 | threshold=0.25

=================================================
Frame 409 (radar 3909) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2533484289] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54971.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2425 | threshold=0.25

=================================================
Frame 410 (radar 3911) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2147618816] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.9cm H=2.9cm | points=15 density=55714.4/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2432 | threshold=0.25

=================================================
Frame 411 (radar 3913) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.029)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.4cm H=2.9cm | points=15 density=60155.7/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.4cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2434 | threshold=0.25

=================================================
Frame 412 (radar 3915) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=38, filtered=35, TLVs=5 [1,2634146817] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.8cm H=2.9cm | points=15 density=56835.3/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2436 | threshold=0.25

=================================================
Frame 413 (radar 3917) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2567038465] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53201.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2438 | threshold=0.25

=================================================
Frame 414 (radar 3919) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=35, filtered=34, TLVs=5 [1,2634147329] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54479.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2441 | threshold=0.25

=================================================
Frame 415 (radar 3921) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181191168] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47983.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2431 | threshold=0.25

=================================================
Frame 416 (radar 3923) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=43, filtered=42, TLVs=5 [1,1912704512] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.027m Y=+0.665m Z=-0.088m | Range=0.671m
     Radial velocity: mean=-0.024m/s peak=0.121m/s | Track velocity=(+0.052,-0.166,-0.114)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.7cm H=2.6cm | points=15 density=69948.3/m3
     Shape: planarity=0.776 flatness=0.217 thickness=6.7cm spread=6.8cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2426 | threshold=0.25

=================================================
Frame 417 (radar 3925) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=39, filtered=35, TLVs=5 [1,2281816577] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.052,+0.166,+0.119)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45191.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2419 | threshold=0.25

=================================================
Frame 418 (radar 3927) | Valid Objects: 1
UART: packet=1216 B, objects=40, raw=37, filtered=35, TLVs=5 [1,671207937] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.5cm H=2.9cm | points=15 density=43512.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2404 | threshold=0.25

=================================================
Frame 419 (radar 3929) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114064384] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.031)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47269.8/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2397 | threshold=0.25

=================================================
Frame 420 (radar 3931) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114064640] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45572.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2386 | threshold=0.25

=================================================
Frame 421 (radar 3933) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2114063616] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.011)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47020.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2383 | threshold=0.25

=================================================
Frame 422 (radar 3935) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2718043648] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.035)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.6cm H=2.9cm | points=15 density=42638.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2372 | threshold=0.25

=================================================
Frame 423 (radar 3937) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114064128] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.047)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53330.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2371 | threshold=0.25

=================================================
Frame 424 (radar 3939) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2701267200] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.026)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45042.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2361 | threshold=0.25

=================================================
Frame 425 (radar 3941) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114066432] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.037)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48786.0/m3
     Shape: planarity=0.781 flatness=0.178 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2355 | threshold=0.25

=================================================
Frame 426 (radar 3943) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130842112] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.006,+0.058)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.6cm H=2.9cm | points=15 density=42813.1/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.6cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2345 | threshold=0.25

=================================================
Frame 427 (radar 3945) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2818706176] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.038)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50268.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2339 | threshold=0.25

=================================================
Frame 428 (radar 3947) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841088] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.020)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.5cm H=2.9cm | points=15 density=43408.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2330 | threshold=0.25

=================================================
Frame 429 (radar 3949) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114063872] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48314.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2325 | threshold=0.25

=================================================
Frame 430 (radar 3951) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130861056] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.038)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.5cm H=2.9cm | points=15 density=43186.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2316 | threshold=0.25

=================================================
Frame 431 (radar 3953) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130842368] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.031)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49143.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2308 | threshold=0.25

=================================================
Frame 432 (radar 3955) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2751598336] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44379.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2299 | threshold=0.25

=================================================
Frame 433 (radar 3957) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841600] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45487.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2293 | threshold=0.25

=================================================
Frame 434 (radar 3959) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130842368] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.021)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=44090.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2284 | threshold=0.25

=================================================
Frame 435 (radar 3961) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841344] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.5cm H=2.9cm | points=15 density=43625.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.5cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2280 | threshold=0.25

=================================================
Frame 436 (radar 3963) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130840576] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.025)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47377.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2270 | threshold=0.25

=================================================
Frame 437 (radar 3965) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181171712] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46898.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2271 | threshold=0.25

=================================================
Frame 438 (radar 3967) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2147638528] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47486.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2275 | threshold=0.25

=================================================
Frame 439 (radar 3969) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2097306880] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.026)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.9cm H=2.9cm | points=15 density=41325.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.9cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2269 | threshold=0.25

=================================================
Frame 440 (radar 3971) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841088] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.035)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45836.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2269 | threshold=0.25

=================================================
Frame 441 (radar 3973) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2130841088] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46067.1/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2268 | threshold=0.25

=================================================
Frame 442 (radar 3975) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147617792] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48370.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2274 | threshold=0.25

=================================================
Frame 443 (radar 3977) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2516737024] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.043)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.9cm H=2.9cm | points=15 density=41394.8/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.9cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2263 | threshold=0.25

=================================================
Frame 444 (radar 3979) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164395008] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.006,-0.059)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=49935.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2267 | threshold=0.25

=================================================
Frame 445 (radar 3981) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114064384] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.031)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=44167.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2263 | threshold=0.25

=================================================
Frame 446 (radar 3983) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114063360] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.030)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50617.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2270 | threshold=0.25

=================================================
Frame 447 (radar 3985) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147619072] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.054)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.7cm H=2.9cm | points=15 density=42320.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2263 | threshold=0.25

=================================================
Frame 448 (radar 3987) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618560] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.040)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48622.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2268 | threshold=0.25

=================================================
Frame 449 (radar 3989) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164395264] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47122.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2267 | threshold=0.25

=================================================
Frame 450 (radar 3991) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618304] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49785.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2273 | threshold=0.25

=================================================
Frame 451 (radar 3993) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197949952] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.024)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46801.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2271 | threshold=0.25

=================================================
Frame 452 (radar 3995) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2483183104] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46931.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2273 | threshold=0.25

=================================================
Frame 453 (radar 3997) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618048] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45179.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2273 | threshold=0.25

=================================================
Frame 454 (radar 3999) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164397056] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46479.0/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2275 | threshold=0.25

=================================================
Frame 455 (radar 4001) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2852260864] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.019)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45071.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2277 | threshold=0.25

=================================================
Frame 456 (radar 4003) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2516737280] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.011)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46596.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2276 | threshold=0.25

=================================================
Frame 457 (radar 4005) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164395264] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45216.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2275 | threshold=0.25

=================================================
Frame 458 (radar 4007) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2852260864] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.007)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45795.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2273 | threshold=0.25

=================================================
Frame 459 (radar 4009) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197951232] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=46192.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2278 | threshold=0.25

=================================================
Frame 460 (radar 4011) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2650936832] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.7cm H=2.9cm | points=15 density=42455.2/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2275 | threshold=0.25

=================================================
Frame 461 (radar 4013) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181192704] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.045)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=49020.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2277 | threshold=0.25

=================================================
Frame 462 (radar 4015) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1829373962] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,+0.002)m/s
     Sensor side info (raw): SNR mean=31675.2 min=2319 peak=61708 | Noise mean=27658.2 | SNR-noise margin=4016.9
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=13 density=42320.8/m3
     Shape: planarity=0.789 flatness=0.179 thickness=6.7cm spread=9.1cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3150 | threshold=0.25

=================================================
Frame 463 (radar 4017) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2533514240] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.036,+0.049)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.7cm H=2.9cm | points=15 density=42304.2/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3151 | threshold=0.25

=================================================
Frame 464 (radar 4019) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164396032] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.682m Z=-0.074m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.7cm H=2.9cm | points=15 density=42443.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.7cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3144 | threshold=0.25

=================================================
Frame 465 (radar 4021) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970176] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.041)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46571.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3146 | threshold=0.25

=================================================
Frame 466 (radar 4023) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181172992] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=15 density=46450.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3143 | threshold=0.25

=================================================
Frame 467 (radar 4025) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2483183360] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47983.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3148 | threshold=0.25

=================================================
Frame 468 (radar 4027) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181172992] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49838.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3149 | threshold=0.25

=================================================
Frame 469 (radar 4029) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970688] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48024.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3150 | threshold=0.25

=================================================
Frame 470 (radar 4031) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2785153280] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47425.1/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3148 | threshold=0.25

=================================================
Frame 471 (radar 4033) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164395264] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49227.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3150 | threshold=0.25

=================================================
Frame 472 (radar 4035) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2768375808] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.016)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46310.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3150 | threshold=0.25

=================================================
Frame 473 (radar 4037) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818706944] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47810.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 474 (radar 4039) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197948672] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.3cm H=2.9cm | points=15 density=44562.6/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.3cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3150 | threshold=0.25

=================================================
Frame 475 (radar 4041) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818706944] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.021)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47275.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 476 (radar 4043) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970432] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48361.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3154 | threshold=0.25

=================================================
Frame 477 (radar 4045) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2852261888] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49761.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3158 | threshold=0.25

=================================================
Frame 478 (radar 4047) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2768375808] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47321.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3159 | threshold=0.25

=================================================
Frame 479 (radar 4049) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2197970432] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47265.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3160 | threshold=0.25

=================================================
Frame 480 (radar 4051) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2852261376] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50549.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3168 | threshold=0.25

=================================================
Frame 481 (radar 4053) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2231524352] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47889.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3167 | threshold=0.25

=================================================
Frame 482 (radar 4055) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818706688] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.008)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46365.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2292 | threshold=0.25

=================================================
Frame 483 (radar 4057) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618560] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47173.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2297 | threshold=0.25

=================================================
Frame 484 (radar 4059) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2214726656] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48166.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2302 | threshold=0.25

=================================================
Frame 485 (radar 4061) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197949952] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49511.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2305 | threshold=0.25

=================================================
Frame 486 (radar 4063) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2164395264] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45580.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2304 | threshold=0.25

=================================================
Frame 487 (radar 4065) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2667714048] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.4cm H=2.9cm | points=15 density=43943.5/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2301 | threshold=0.25

=================================================
Frame 488 (radar 4067) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164416256] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.014)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47166.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2298 | threshold=0.25

=================================================
Frame 489 (radar 4069) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2181193216] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45261.7/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2296 | threshold=0.25

=================================================
Frame 490 (radar 4071) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818706176] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.016)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48178.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2297 | threshold=0.25

=================================================
Frame 491 (radar 4073) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2181173248] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48642.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2296 | threshold=0.25

=================================================
Frame 492 (radar 4075) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2919369472] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49259.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2299 | threshold=0.25

=================================================
Frame 493 (radar 4077) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164416256] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47731.8/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2299 | threshold=0.25

=================================================
Frame 494 (radar 4079) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2197950976] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.023)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45089.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.2cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2299 | threshold=0.25

=================================================
Frame 495 (radar 4081) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2499960320] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46428.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2298 | threshold=0.25

=================================================
Frame 496 (radar 4083) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2533515008] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.019)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48702.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2298 | threshold=0.25

=================================================
Frame 497 (radar 4085) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2818707456] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47106.4/m3
     Shape: planarity=0.782 flatness=0.178 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2296 | threshold=0.25

=================================================
Frame 498 (radar 4087) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=37, filtered=34, TLVs=5 [1,1795265792] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.661m Z=-0.068m | Range=0.666m
     Radial velocity: mean=+0.037m/s peak=0.121m/s | Track velocity=(-0.004,-0.198,+0.103)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=8.0cm H=2.6cm | points=13 density=50320.8/m3
     Shape: planarity=0.742 flatness=0.214 thickness=8.0cm spread=7.6cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2298 | threshold=0.25

=================================================
Frame 499 (radar 4089) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=37, filtered=35, TLVs=5 [1,2348925441] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.004,+0.200,-0.083)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46980.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2298 | threshold=0.25

=================================================
Frame 500 (radar 4091) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=31, TLVs=5 [1,7,1846152458] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.077m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.031,+0.001)m/s
     Sensor side info (raw): SNR mean=31379.8 min=1807 peak=61197 | Noise mean=31616.4 | SNR-noise margin=-236.6
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=13 density=40752.7/m3
     Shape: planarity=0.789 flatness=0.179 thickness=6.9cm spread=9.2cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3166 | threshold=0.25

=================================================
Frame 501 (radar 4093) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147616512] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.027,-0.040)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53229.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3170 | threshold=0.25

=================================================
Frame 502 (radar 4095) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2718042368] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=50749.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3174 | threshold=0.25

=================================================
Frame 503 (radar 4097) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2818706432] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.018)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49753.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3176 | threshold=0.25

=================================================
Frame 504 (radar 4099) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2768375040] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.030)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45562.8/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3173 | threshold=0.25

=================================================
Frame 505 (radar 4101) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164415232] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47568.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3172 | threshold=0.25

=================================================
Frame 506 (radar 4103) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2147618304] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47887.9/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3174 | threshold=0.25

=================================================
Frame 507 (radar 4105) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2114064896] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48056.9/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3177 | threshold=0.25

=================================================
Frame 508 (radar 4107) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2634157312] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45792.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3176 | threshold=0.25

=================================================
Frame 509 (radar 4109) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2718044160] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=15 density=45202.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3176 | threshold=0.25

=================================================
Frame 510 (radar 4111) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=36, filtered=35, TLVs=5 [1,2650935552] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47731.4/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3176 | threshold=0.25

=================================================
Frame 511 (radar 4113) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2617380608] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47532.2/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3175 | threshold=0.25

=================================================
Frame 512 (radar 4115) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2684489728] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.1cm H=2.9cm | points=15 density=45760.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.1cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3172 | threshold=0.25

=================================================
Frame 513 (radar 4117) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2869038080] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.015)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47990.7/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3172 | threshold=0.25

=================================================
Frame 514 (radar 4119) | Valid Objects: 1
UART: packet=1248 B, objects=43, raw=43, filtered=43, TLVs=5 [1,2164362752] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.662m Z=-0.074m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.189,+0.034)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.3cm H=2.6cm | points=16 density=67431.9/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.3cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3183 | threshold=0.25

=================================================
Frame 515 (radar 4121) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=43, TLVs=5 [1,2265039872] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.015,-0.142)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=7.2cm H=2.6cm | points=16 density=67739.8/m3
     Shape: planarity=0.789 flatness=0.211 thickness=7.2cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3191 | threshold=0.25

=================================================
Frame 516 (radar 4123) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=45, filtered=43, TLVs=5 [1,1946257408] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.662m Z=-0.073m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.017,+0.157)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.6cm H=2.6cm | points=16 density=64746.9/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.6cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3196 | threshold=0.25

=================================================
Frame 517 (radar 4125) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=43, filtered=42, TLVs=5 [1,2382477056] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.052,-0.017,-0.164)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.3cm H=2.6cm | points=16 density=66936.0/m3
     Shape: planarity=0.789 flatness=0.210 thickness=7.3cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3204 | threshold=0.25

=================================================
Frame 518 (radar 4127) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1527390731] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.054,+0.175,+0.104)m/s
     Sensor side info (raw): SNR mean=27559.8 min=266 peak=57613 | Noise mean=24645.5 | SNR-noise margin=2914.2
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=13 density=47694.2/m3
     Shape: planarity=0.798 flatness=0.179 thickness=5.9cm spread=8.8cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3199 | threshold=0.25

=================================================
Frame 519 (radar 4129) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=41, filtered=38, TLVs=5 [1,7,153552988] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.666m Z=-0.073m | Range=0.671m
     Radial velocity: mean=+0.024m/s peak=0.121m/s | Track velocity=(+0.006,-0.118,+0.061)m/s
     Sensor side info (raw): SNR mean=25401.3 min=287 peak=61452 | Noise mean=31561.1 | SNR-noise margin=-6159.9
     Geometry: L=12.2cm W=7.1cm H=2.6cm | points=15 density=65244.6/m3
     Shape: planarity=0.743 flatness=0.215 thickness=7.1cm spread=7.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3149 | threshold=0.25

=================================================
Frame 520 (radar 4131) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=43, filtered=43, TLVs=5 [1,2701244928] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.660m Z=-0.092m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.048,-0.061,-0.190)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.6cm W=7.8cm H=2.6cm | points=16 density=62157.0/m3
     Shape: planarity=0.789 flatness=0.209 thickness=7.8cm spread=7.7cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3204 | threshold=0.25

=================================================
Frame 521 (radar 4133) | Valid Objects: 1
UART: packet=1376 B, objects=48, raw=43, filtered=43, TLVs=5 [1,2550244864] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.091m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,+0.003,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.7cm H=2.6cm | points=16 density=73435.3/m3
     Shape: planarity=0.788 flatness=0.214 thickness=6.7cm spread=7.2cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3231 | threshold=0.25

=================================================
Frame 522 (radar 4135) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2650924801] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.057,+0.207,+0.129)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=46926.1/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3228 | threshold=0.25

=================================================
Frame 523 (radar 4137) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=45, filtered=43, TLVs=5 [1,27983990] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.186,+0.057)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.2cm H=2.6cm | points=16 density=69246.9/m3
     Shape: planarity=0.754 flatness=0.215 thickness=7.2cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3257 | threshold=0.25

=================================================
Frame 524 (radar 4139) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=36, filtered=35, TLVs=5 [1,721539329] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.185,-0.076)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59538.5/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3267 | threshold=0.25

=================================================
Frame 525 (radar 4141) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=43, filtered=43, TLVs=5 [1,2667682816] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.057,-0.205,-0.107)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.4cm H=2.6cm | points=16 density=65833.3/m3
     Shape: planarity=0.789 flatness=0.210 thickness=7.4cm spread=7.6cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3292 | threshold=0.25

=================================================
Frame 526 (radar 4143) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=46, filtered=43, TLVs=5 [1,2248249600] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.660m Z=-0.091m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.4cm W=6.9cm H=2.6cm | points=16 density=71072.2/m3
     Shape: planarity=0.788 flatness=0.212 thickness=6.9cm spread=7.3cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3321 | threshold=0.25

=================================================
Frame 527 (radar 4145) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1795820810] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.077m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.072,+0.178,+0.145)m/s
     Sensor side info (raw): SNR mean=30651.2 min=1039 peak=60941 | Noise mean=26279.8 | SNR-noise margin=4371.4
     Geometry: L=16.0cm W=7.2cm H=2.9cm | points=13 density=39230.9/m3
     Shape: planarity=0.790 flatness=0.178 thickness=7.2cm spread=9.3cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3288 | threshold=0.25

=================================================
Frame 528 (radar 4147) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1779056138] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.024)m/s
     Sensor side info (raw): SNR mean=28682.1 min=1807 peak=61197 | Noise mean=36086.7 | SNR-noise margin=-7404.6
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=13 density=42817.8/m3
     Shape: planarity=0.789 flatness=0.179 thickness=6.6cm spread=9.1cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3245 | threshold=0.25

=================================================
Frame 529 (radar 4149) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1779042058] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.002)m/s
     Sensor side info (raw): SNR mean=30887.5 min=1807 peak=61453 | Noise mean=31754.2 | SNR-noise margin=-866.8
     Geometry: L=16.1cm W=7.0cm H=2.9cm | points=13 density=40096.4/m3
     Shape: planarity=0.789 flatness=0.178 thickness=7.0cm spread=9.2cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3198 | threshold=0.25

=================================================
Frame 530 (radar 4151) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=37, filtered=34, TLVs=5 [1,2550246656] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.034m Y=+0.659m Z=-0.064m | Range=0.663m
     Radial velocity: mean=+0.051m/s peak=0.121m/s | Track velocity=(-0.003,-0.192,+0.145)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.8cm H=2.6cm | points=13 density=51922.2/m3
     Shape: planarity=0.765 flatness=0.214 thickness=7.8cm spread=7.5cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3228 | threshold=0.25

=================================================
Frame 531 (radar 4153) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=45, filtered=42, TLVs=5 [1,2684473600] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.089m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.075,+0.019,-0.246)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.5cm W=7.7cm H=2.6cm | points=16 density=63064.0/m3
     Shape: planarity=0.789 flatness=0.209 thickness=7.7cm spread=7.7cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3257 | threshold=0.25

=================================================
Frame 532 (radar 4155) | Valid Objects: 1
UART: packet=1216 B, objects=40, raw=40, filtered=40, TLVs=5 [1,7,101375497] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.663m Z=-0.072m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.019,+0.167)m/s
     Sensor side info (raw): SNR mean=2147.9 min=300 peak=3271 | Noise mean=2096.1 | SNR-noise margin=51.8
     Geometry: L=12.2cm W=7.1cm H=2.6cm | points=16 density=69422.2/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.1cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3283 | threshold=0.25

=================================================
Frame 533 (radar 4157) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2231505152] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.186,-0.061)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47780.8/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3283 | threshold=0.25

=================================================
Frame 534 (radar 4159) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=45, filtered=43, TLVs=5 [1,1979810304] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.662m Z=-0.073m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.187,+0.054)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.4cm H=2.6cm | points=16 density=67145.0/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.4cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3283 | threshold=0.25

=================================================
Frame 535 (radar 4161) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=35, filtered=34, TLVs=5 [1,2567024640] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.030m Y=+0.680m Z=-0.087m | Range=0.686m
     Radial velocity: mean=-0.020m/s peak=0.121m/s | Track velocity=(+0.011,+0.175,-0.136)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.3cm W=7.9cm H=2.9cm | points=15 density=40488.4/m3
     Shape: planarity=0.792 flatness=0.175 thickness=7.9cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3243 | threshold=0.25

=================================================
Frame 536 (radar 4163) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=35, TLVs=5 [1,2164413952] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.016,+0.010,+0.067)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=50631.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3212 | threshold=0.25

=================================================
Frame 537 (radar 4165) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=34, filtered=34, TLVs=5 [1,2449628160] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.005)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52748.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3185 | threshold=0.25

=================================================
Frame 538 (radar 4167) | Valid Objects: 1
UART: packet=1216 B, objects=41, raw=37, filtered=35, TLVs=5 [1,2281817345] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.041)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.4cm H=2.9cm | points=15 density=43981.3/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.4cm spread=9.1cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3193 | threshold=0.25

=================================================
Frame 539 (radar 4169) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2516736512] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.6cm H=2.9cm | points=15 density=42684.8/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.6cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3228 | threshold=0.25

=================================================
Frame 540 (radar 4171) | Valid Objects: 1
UART: packet=1312 B, objects=45, raw=37, filtered=34, TLVs=5 [1,2046927616] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.657m Z=-0.069m | Range=0.662m
     Radial velocity: mean=+0.043m/s peak=0.121m/s | Track velocity=(-0.008,-0.240,+0.073)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.7cm H=2.6cm | points=14 density=56209.3/m3
     Shape: planarity=0.753 flatness=0.214 thickness=7.7cm spread=7.5cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3231 | threshold=0.25

=================================================
Frame 541 (radar 4173) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=39, filtered=34, TLVs=5 [1,2567019776] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.034m Y=+0.659m Z=-0.066m | Range=0.663m
     Radial velocity: mean=+0.051m/s peak=0.121m/s | Track velocity=(-0.009,+0.014,+0.032)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.3cm H=2.6cm | points=13 density=55241.9/m3
     Shape: planarity=0.764 flatness=0.214 thickness=7.3cm spread=7.5cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3226 | threshold=0.25

=================================================
Frame 542 (radar 4175) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=35, filtered=34, TLVs=5 [1,2516707073] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.018,+0.222,-0.154)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.2cm H=2.9cm | points=15 density=62636.9/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.2cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3237 | threshold=0.25

=================================================
Frame 543 (radar 4177) | Valid Objects: 1
UART: packet=1184 B, objects=39, raw=37, filtered=35, TLVs=5 [1,2634145537] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62013.3/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3216 | threshold=0.25

=================================================
Frame 544 (radar 4179) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2063752448] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.003)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59975.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3216 | threshold=0.25

=================================================
Frame 545 (radar 4181) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130859776] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.083m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.017)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=62325.0/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3200 | threshold=0.25

=================================================
Frame 546 (radar 4183) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=35, filtered=34, TLVs=5 [1,2567021568] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.679m Z=-0.089m | Range=0.686m
     Radial velocity: mean=-0.020m/s peak=0.121m/s | Track velocity=(+0.000,-0.013,-0.067)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.3cm W=9.0cm H=2.9cm | points=15 density=35605.8/m3
     Shape: planarity=0.779 flatness=0.175 thickness=9.0cm spread=9.3cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3156 | threshold=0.25

=================================================
Frame 547 (radar 4185) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,2516738048] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.017,+0.107)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49105.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3195 | threshold=0.25

=================================================
Frame 548 (radar 4187) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114082816] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50270.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3201 | threshold=0.25

=================================================
Frame 549 (radar 4189) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2130860544] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.011)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51999.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2178 | threshold=0.25

=================================================
Frame 550 (radar 4191) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=36, filtered=34, TLVs=5 [1,2046929920] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.658m Z=-0.066m | Range=0.662m
     Radial velocity: mean=+0.043m/s peak=0.121m/s | Track velocity=(-0.008,-0.234,+0.143)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.9cm H=2.6cm | points=14 density=54582.1/m3
     Shape: planarity=0.753 flatness=0.214 thickness=7.9cm spread=7.5cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2179 | threshold=0.25

=================================================
Frame 551 (radar 4193) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=37, filtered=34, TLVs=5 [1,587309056] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.027m Y=+0.661m Z=-0.087m | Range=0.667m
     Radial velocity: mean=-0.022m/s peak=0.121m/s | Track velocity=(+0.058,+0.034,-0.215)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.1cm W=6.7cm H=2.6cm | points=14 density=66008.1/m3
     Shape: planarity=0.764 flatness=0.217 thickness=6.7cm spread=6.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2175 | threshold=0.25

=================================================
Frame 552 (radar 4195) | Valid Objects: 1
UART: packet=1376 B, objects=49, raw=44, filtered=42, TLVs=5 [1,2701245696] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.026m Y=+0.661m Z=-0.090m | Range=0.667m
     Radial velocity: mean=-0.030m/s peak=0.121m/s | Track velocity=(+0.007,-0.003,-0.022)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.6cm H=2.6cm | points=16 density=74269.3/m3
     Shape: planarity=0.788 flatness=0.213 thickness=6.6cm spread=7.3cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2392 | threshold=0.25

=================================================
Frame 553 (radar 4197) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=44, filtered=42, TLVs=5 [1,2030145792] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.663m Z=-0.071m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(-0.052,+0.020,+0.187)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.6cm H=2.6cm | points=16 density=65408.5/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.6cm spread=7.5cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2423 | threshold=0.25

=================================================
Frame 554 (radar 4199) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=36, filtered=35, TLVs=5 [1,2265058560] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.075m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.005,+0.188,-0.036)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.8cm H=2.9cm | points=15 density=41592.6/m3
     Shape: planarity=0.783 flatness=0.178 thickness=7.8cm spread=9.2cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2386 | threshold=0.25

=================================================
Frame 555 (radar 4201) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1711941130] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.079m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.015,-0.035,-0.047)m/s
     Sensor side info (raw): SNR mean=28524.5 min=2063 peak=60941 | Noise mean=30828.8 | SNR-noise margin=-2304.4
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=13 density=44247.3/m3
     Shape: planarity=0.789 flatness=0.179 thickness=6.4cm spread=9.0cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3253 | threshold=0.25

=================================================
Frame 556 (radar 4203) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=37, filtered=35, TLVs=5 [1,2885815296] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.015,+0.032,+0.013)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.1cm W=7.2cm H=2.9cm | points=15 density=45330.9/m3
     Shape: planarity=0.782 flatness=0.178 thickness=7.2cm spread=9.0cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3249 | threshold=0.25

=================================================
Frame 557 (radar 4205) | Valid Objects: 1
UART: packet=1344 B, objects=47, raw=45, filtered=42, TLVs=5 [1,2181138688] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.662m Z=-0.074m | Range=0.667m
     Radial velocity: mean=+0.030m/s peak=0.121m/s | Track velocity=(+0.005,-0.188,+0.041)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=7.3cm H=2.6cm | points=16 density=67605.7/m3
     Shape: planarity=0.755 flatness=0.214 thickness=7.3cm spread=7.4cm
     Quality: 89% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3275 | threshold=0.25

=================================================
Frame 558 (radar 4207) | Valid Objects: 1
UART: packet=1280 B, objects=44, raw=40, filtered=34, TLVs=5 [1,2231480320] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.027m Y=+0.655m Z=-0.087m | Range=0.662m
     Radial velocity: mean=-0.026m/s peak=0.121m/s | Track velocity=(+0.046,-0.070,-0.133)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.3cm W=6.8cm H=2.6cm | points=14 density=63258.4/m3
     Shape: planarity=0.776 flatness=0.213 thickness=6.8cm spread=7.6cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3306 | threshold=0.25

=================================================
Frame 559 (radar 4209) | Valid Objects: 1
UART: packet=1248 B, objects=42, raw=37, filtered=35, TLVs=5 [1,2399261441] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.031m Y=+0.666m Z=-0.073m | Range=0.671m
     Radial velocity: mean=+0.024m/s peak=0.121m/s | Track velocity=(-0.042,+0.109,+0.139)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=12.2cm W=7.0cm H=2.6cm | points=15 density=66523.2/m3
     Shape: planarity=0.744 flatness=0.215 thickness=7.0cm spread=7.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 560 (radar 4211) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=32, TLVs=5 [1,7,1980403722] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][CARD] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.033m Y=+0.678m Z=-0.080m | Range=0.683m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(-0.025,+0.116,-0.068)m/s
     Sensor side info (raw): SNR mean=29784.9 min=1034 peak=58893 | Noise mean=21081.2 | SNR-noise margin=8703.8
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=13 density=50916.6/m3
     Shape: planarity=0.788 flatness=0.180 thickness=5.6cm spread=8.7cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3326 | threshold=0.25

=================================================
Frame 561 (radar 4213) | Valid Objects: 1
UART: packet=1312 B, objects=46, raw=35, filtered=34, TLVs=5 [1,2634130688] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.680m Z=-0.087m | Range=0.686m
     Radial velocity: mean=-0.020m/s peak=0.121m/s | Track velocity=(+0.015,+0.020,-0.064)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.4cm W=8.1cm H=2.9cm | points=15 density=39382.1/m3
     Shape: planarity=0.781 flatness=0.174 thickness=8.1cm spread=9.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3291 | threshold=0.25

=================================================
Frame 562 (radar 4215) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=35, filtered=34, TLVs=5 [1,2046955520] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.014,+0.093)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48059.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3282 | threshold=0.25

=================================================
Frame 563 (radar 4217) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2114083584] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.035)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=15.9cm W=5.3cm H=2.9cm | points=15 density=61978.9/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.3cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3282 | threshold=0.25

=================================================
Frame 564 (radar 4219) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2063751936] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.034)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48359.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3274 | threshold=0.25

=================================================
Frame 565 (radar 4221) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2143067209] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.032)m/s
     Sensor side info (raw): SNR mean=354.9 min=282 peak=424 | Noise mean=485.6 | SNR-noise margin=-130.7
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55422.9/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3254 | threshold=0.25

=================================================
Frame 566 (radar 4223) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=35, filtered=35, TLVs=5 [1,2080528896] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.005,+0.044)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=7.0cm H=2.9cm | points=15 density=46664.5/m3
     Shape: planarity=0.782 flatness=0.179 thickness=7.0cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3267 | threshold=0.25

=================================================
Frame 567 (radar 4225) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=34, filtered=34, TLVs=5 [1,2114083072] points=yes sideInfo=no malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=100.0 min=100 peak=100 | Noise mean=0.0 | SNR-noise margin=100.0
     Geometry: L=16.0cm W=6.9cm H=2.9cm | points=15 density=47252.3/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.9cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3265 | threshold=0.25

=================================================
Frame 568 (radar 4227) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,431791177] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.033)m/s
     Sensor side info (raw): SNR mean=363.7 min=293 peak=431 | Noise mean=476.9 | SNR-noise margin=-113.2
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56555.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3254 | threshold=0.25

=================================================
Frame 569 (radar 4229) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3938229321] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=363.5 min=292 peak=433 | Noise mean=477.1 | SNR-noise margin=-113.5
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55048.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3240 | threshold=0.25

=================================================
Frame 570 (radar 4231) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,566008905] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.019)m/s
     Sensor side info (raw): SNR mean=354.5 min=282 peak=423 | Noise mean=485.8 | SNR-noise margin=-131.3
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49823.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3201 | threshold=0.25

=================================================
Frame 571 (radar 4233) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,599563337] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.014)m/s
     Sensor side info (raw): SNR mean=364.5 min=294 peak=434 | Noise mean=475.9 | SNR-noise margin=-111.5
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=47992.9/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.9cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3154 | threshold=0.25

=================================================
Frame 572 (radar 4235) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1421646921] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.035)m/s
     Sensor side info (raw): SNR mean=367.5 min=297 peak=435 | Noise mean=473.3 | SNR-noise margin=-105.8
     Geometry: L=16.0cm W=5.7cm H=2.9cm | points=15 density=57034.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3131 | threshold=0.25

=================================================
Frame 573 (radar 4237) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,4156333129] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=359.1 min=289 peak=428 | Noise mean=481.3 | SNR-noise margin=-122.2
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=52514.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3113 | threshold=0.25

=================================================
Frame 574 (radar 4239) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2243730505] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.017)m/s
     Sensor side info (raw): SNR mean=358.1 min=288 peak=426 | Noise mean=482.5 | SNR-noise margin=-124.4
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55678.5/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3107 | threshold=0.25

=================================================
Frame 575 (radar 4241) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1404869705] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.030)m/s
     Sensor side info (raw): SNR mean=360.4 min=288 peak=432 | Noise mean=479.8 | SNR-noise margin=-119.4
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49680.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3093 | threshold=0.25

=================================================
Frame 576 (radar 4243) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,633117769] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.023)m/s
     Sensor side info (raw): SNR mean=357.5 min=286 peak=427 | Noise mean=482.9 | SNR-noise margin=-125.4
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56085.1/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3084 | threshold=0.25

=================================================
Frame 577 (radar 4245) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1270651977] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=360.2 min=288 peak=430 | Noise mean=480.5 | SNR-noise margin=-120.3
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57655.8/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.7cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3068 | threshold=0.25

=================================================
Frame 578 (radar 4247) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=37, filtered=37, TLVs=5 [1,7,2,16777216] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.007)m/s
     Sensor side info (raw): SNR mean=355.7 min=286 peak=424 | Noise mean=484.8 | SNR-noise margin=-129.1
     Geometry: L=15.9cm W=5.8cm H=2.9cm | points=15 density=56841.1/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.8cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3052 | threshold=0.25

=================================================
Frame 579 (radar 4249) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2864487497] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.006)m/s
     Sensor side info (raw): SNR mean=360.7 min=290 peak=431 | Noise mean=479.7 | SNR-noise margin=-119.0
     Geometry: L=16.0cm W=6.2cm H=2.9cm | points=15 density=53130.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.2cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3033 | threshold=0.25

=================================================
Frame 580 (radar 4251) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,180132937] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.010)m/s
     Sensor side info (raw): SNR mean=361.3 min=289 peak=429 | Noise mean=479.1 | SNR-noise margin=-117.7
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55671.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: BOX | distance=0.2138 | threshold=0.25

=================================================
Frame 581 (radar 4253) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,800889929] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=364.9 min=295 peak=434 | Noise mean=475.8 | SNR-noise margin=-110.9
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55710.6/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2222 | threshold=0.25

=================================================
Frame 582 (radar 4255) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=38, filtered=38, TLVs=5 [1,7,2,12433038] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.004,+0.039)m/s
     Sensor side info (raw): SNR mean=358.9 min=286 peak=430 | Noise mean=481.9 | SNR-noise margin=-123.0
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51699.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2298 | threshold=0.25

=================================================
Frame 583 (radar 4257) | Valid Objects: 1
UART: packet=1152 B, objects=38, raw=38, filtered=38, TLVs=5 [1,7,2,12432924] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.028)m/s
     Sensor side info (raw): SNR mean=360.1 min=289 peak=428 | Noise mean=481.5 | SNR-noise margin=-121.4
     Geometry: L=15.9cm W=5.9cm H=2.9cm | points=15 density=55935.5/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2374 | threshold=0.25

=================================================
Frame 584 (radar 4259) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2394725449] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.013)m/s
     Sensor side info (raw): SNR mean=362.1 min=292 peak=431 | Noise mean=478.7 | SNR-noise margin=-116.6
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58214.4/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2432 | threshold=0.25

=================================================
Frame 585 (radar 4261) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3300695113] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.013)m/s
     Sensor side info (raw): SNR mean=362.0 min=292 peak=431 | Noise mean=478.3 | SNR-noise margin=-116.3
     Geometry: L=16.0cm W=6.4cm H=2.9cm | points=15 density=51416.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.4cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2436 | threshold=0.25

=================================================
Frame 586 (radar 4263) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1690082377] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.016)m/s
     Sensor side info (raw): SNR mean=365.8 min=294 peak=436 | Noise mean=474.7 | SNR-noise margin=-108.9
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55232.2/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2480 | threshold=0.25

=================================================
Frame 587 (radar 4265) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1589419081] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.023)m/s
     Sensor side info (raw): SNR mean=361.3 min=292 peak=431 | Noise mean=479.7 | SNR-noise margin=-118.4
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51512.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2493 | threshold=0.25

=================================================
Frame 588 (radar 4267) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2629606473] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.004)m/s
     Sensor side info (raw): SNR mean=359.5 min=281 peak=434 | Noise mean=481.3 | SNR-noise margin=-121.8
     Geometry: L=16.0cm W=6.5cm H=2.9cm | points=15 density=50333.4/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.5cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2487 | threshold=0.25

=================================================
Frame 589 (radar 4269) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,113024073] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.000)m/s
     Sensor side info (raw): SNR mean=364.2 min=294 peak=434 | Noise mean=476.2 | SNR-noise margin=-112.0
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=49011.6/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2482 | threshold=0.25

=================================================
Frame 590 (radar 4271) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3988560969] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.037)m/s
     Sensor side info (raw): SNR mean=361.9 min=291 peak=431 | Noise mean=478.4 | SNR-noise margin=-116.5
     Geometry: L=16.0cm W=5.7cm H=2.9cm | points=15 density=57205.9/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2489 | threshold=0.25

=================================================
Frame 591 (radar 4273) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=37, filtered=37, TLVs=5 [1,7,2,16777216] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.076m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.006,+0.058)m/s
     Sensor side info (raw): SNR mean=363.9 min=290 peak=437 | Noise mean=476.8 | SNR-noise margin=-112.9
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48545.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2489 | threshold=0.25

=================================================
Frame 592 (radar 4275) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3183254601] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.042)m/s
     Sensor side info (raw): SNR mean=363.3 min=293 peak=432 | Noise mean=477.5 | SNR-noise margin=-114.2
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54714.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2487 | threshold=0.25

=================================================
Frame 593 (radar 4277) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3955006537] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.009)m/s
     Sensor side info (raw): SNR mean=365.5 min=292 peak=436 | Noise mean=474.7 | SNR-noise margin=-109.3
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51947.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2487 | threshold=0.25

=================================================
Frame 594 (radar 4279) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2411502665] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.001,-0.006)m/s
     Sensor side info (raw): SNR mean=362.5 min=292 peak=432 | Noise mean=477.7 | SNR-noise margin=-115.1
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54166.7/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2487 | threshold=0.25

=================================================
Frame 595 (radar 4281) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,4173110345] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.007)m/s
     Sensor side info (raw): SNR mean=360.7 min=289 peak=430 | Noise mean=479.5 | SNR-noise margin=-118.8
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54117.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2490 | threshold=0.25

=================================================
Frame 596 (radar 4283) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3149700169] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.017)m/s
     Sensor side info (raw): SNR mean=356.3 min=284 peak=425 | Noise mean=483.9 | SNR-noise margin=-127.5
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49494.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2485 | threshold=0.25

=================================================
Frame 597 (radar 4285) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1086102601] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.036)m/s
     Sensor side info (raw): SNR mean=362.8 min=290 peak=434 | Noise mean=477.8 | SNR-noise margin=-115.0
     Geometry: L=15.9cm W=5.6cm H=2.9cm | points=15 density=58621.5/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.6cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2486 | threshold=0.25

=================================================
Frame 598 (radar 4287) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3351026761] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,+0.001)m/s
     Sensor side info (raw): SNR mean=360.1 min=289 peak=429 | Noise mean=480.5 | SNR-noise margin=-120.4
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55358.2/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2486 | threshold=0.25

=================================================
Frame 599 (radar 4289) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3015482441] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.078m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.024)m/s
     Sensor side info (raw): SNR mean=365.9 min=294 peak=435 | Noise mean=474.5 | SNR-noise margin=-108.7
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51707.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2485 | threshold=0.25

=================================================
Frame 600 (radar 4291) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3837566025] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.012)m/s
     Sensor side info (raw): SNR mean=358.7 min=287 peak=429 | Noise mean=481.7 | SNR-noise margin=-122.9
     Geometry: L=16.0cm W=6.8cm H=2.9cm | points=15 density=48228.6/m3
     Shape: planarity=0.782 flatness=0.179 thickness=6.8cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2478 | threshold=0.25

=================================================
Frame 601 (radar 4293) | Valid Objects: 1
UART: packet=1152 B, objects=37, raw=37, filtered=37, TLVs=5 [1,7,2,16777216] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.034)m/s
     Sensor side info (raw): SNR mean=361.3 min=290 peak=431 | Noise mean=479.3 | SNR-noise margin=-117.9
     Geometry: L=16.0cm W=5.8cm H=2.9cm | points=15 density=56096.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=5.8cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2478 | threshold=0.25

=================================================
Frame 602 (radar 4295) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1589419081] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.015)m/s
     Sensor side info (raw): SNR mean=365.3 min=295 peak=434 | Noise mean=475.4 | SNR-noise margin=-110.1
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=52258.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2479 | threshold=0.25

=================================================
Frame 603 (radar 4297) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,96246857] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.002,-0.019)m/s
     Sensor side info (raw): SNR mean=360.9 min=290 peak=431 | Noise mean=479.7 | SNR-noise margin=-118.7
     Geometry: L=16.0cm W=5.7cm H=2.9cm | points=15 density=57340.3/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.7cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2480 | threshold=0.25

=================================================
Frame 604 (radar 4299) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3132922953] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.019)m/s
     Sensor side info (raw): SNR mean=361.7 min=291 peak=432 | Noise mean=478.9 | SNR-noise margin=-117.2
     Geometry: L=16.0cm W=6.1cm H=2.9cm | points=15 density=53451.3/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.1cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2477 | threshold=0.25

=================================================
Frame 605 (radar 4301) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1018993737] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.021)m/s
     Sensor side info (raw): SNR mean=357.9 min=286 peak=427 | Noise mean=482.5 | SNR-noise margin=-124.7
     Geometry: L=16.0cm W=6.7cm H=2.9cm | points=15 density=48792.0/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.7cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2474 | threshold=0.25

=================================================
Frame 606 (radar 4303) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,4273773641] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.004,-0.036)m/s
     Sensor side info (raw): SNR mean=358.7 min=288 peak=427 | Noise mean=481.9 | SNR-noise margin=-123.3
     Geometry: L=15.9cm W=5.5cm H=2.9cm | points=15 density=59149.6/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.5cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2476 | threshold=0.25

=================================================
Frame 607 (radar 4305) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3451690057] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.081m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.001)m/s
     Sensor side info (raw): SNR mean=361.8 min=291 peak=430 | Noise mean=478.8 | SNR-noise margin=-117.0
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55729.9/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2479 | threshold=0.25

=================================================
Frame 608 (radar 4307) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,2344393801] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.079m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.002,+0.021)m/s
     Sensor side info (raw): SNR mean=360.9 min=285 peak=432 | Noise mean=479.6 | SNR-noise margin=-118.7
     Geometry: L=16.0cm W=6.3cm H=2.9cm | points=15 density=51983.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.3cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2481 | threshold=0.25

=================================================
Frame 609 (radar 4309) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3720125513] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.001,+0.010)m/s
     Sensor side info (raw): SNR mean=358.1 min=286 peak=427 | Noise mean=482.5 | SNR-noise margin=-124.4
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49867.9/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2481 | threshold=0.25

=================================================
Frame 610 (radar 4311) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1086102601] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.003,-0.027)m/s
     Sensor side info (raw): SNR mean=368.0 min=297 peak=436 | Noise mean=472.7 | SNR-noise margin=-104.7
     Geometry: L=15.9cm W=5.7cm H=2.9cm | points=15 density=57640.5/m3
     Shape: planarity=0.780 flatness=0.180 thickness=5.7cm spread=8.6cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2482 | threshold=0.25

=================================================
Frame 611 (radar 4313) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1136434249] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.000,+0.005)m/s
     Sensor side info (raw): SNR mean=363.9 min=292 peak=433 | Noise mean=476.8 | SNR-noise margin=-112.9
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54955.1/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2487 | threshold=0.25

=================================================
Frame 612 (radar 4315) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,1673305161] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=359.4 min=290 peak=428 | Noise mean=481.3 | SNR-noise margin=-121.9
     Geometry: L=16.0cm W=6.0cm H=2.9cm | points=15 density=54494.5/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.0cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2486 | threshold=0.25

=================================================
Frame 613 (radar 4317) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,3669793865] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.080m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,-0.000,-0.002)m/s
     Sensor side info (raw): SNR mean=362.7 min=291 peak=433 | Noise mean=477.5 | SNR-noise margin=-114.9
     Geometry: L=16.0cm W=5.9cm H=2.9cm | points=15 density=55351.0/m3
     Shape: planarity=0.780 flatness=0.179 thickness=5.9cm spread=8.7cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2489 | threshold=0.25

=================================================
Frame 614 (radar 4319) | Valid Objects: 1
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,415013961] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position: X=-0.032m Y=+0.681m Z=-0.077m | Range=0.686m
     Radial velocity: mean=-0.000m/s peak=0.060m/s | Track velocity=(+0.000,+0.003,+0.033)m/s
     Sensor side info (raw): SNR mean=354.3 min=281 peak=425 | Noise mean=486.1 | SNR-noise margin=-131.7
     Geometry: L=16.0cm W=6.6cm H=2.9cm | points=15 density=49533.8/m3
     Shape: planarity=0.781 flatness=0.179 thickness=6.6cm spread=8.8cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2484 | threshold=0.25

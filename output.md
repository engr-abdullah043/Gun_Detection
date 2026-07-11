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
✓ Components initialized (Free heap: 299 KB)
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
Radar frame 65416: 14 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65426: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65428: 29 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65430: no points | packet=1600B objects=60 TLVs=5 pointsTLV=no sideInfo=no malformed=yes
Radar frame 65432: 33 raw points, all rejected by range/SNR filters
Radar frame 65434: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65435: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65436: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65437: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65438: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65439: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65440: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65441: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65443: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65444: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65445: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65447: 13 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 1 (radar 65448) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0750m Y=+1.2184m Z=-0.2131m | Range=1.2392m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=142.250 min=114 peak=181 | Noise mean=595.188
     Geometry estimate: L=15.19cm W=13.88cm H=4.05cm | points=16 density=18692.51/m3
     Shape: planarity=0.8032 flatness=0.2668 thickness=15.19cm spread=10.23cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 65450) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=-0.0750m Y=+1.2133m Z=-0.2380m | Range=1.2387m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0513,-0.2492)m/s
     Sensor side info (raw): SNR mean=140.188 min=113 peak=165 | Noise mean=598.688
     Geometry estimate: L=19.86cm W=14.79cm H=4.05cm | points=16 density=13422.96/m3
     Shape: planarity=0.8306 flatness=0.2041 thickness=19.86cm spread=13.58cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 65452) | Valid Objects: 1
UART: packet=992 B, objects=29, raw=29, filtered=29, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=-0.0724m Y=+1.2144m Z=-0.2332m | Range=1.2387m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,+0.0111,+0.0478)m/s
     Sensor side info (raw): SNR mean=141.125 min=109 peak=166 | Noise mean=601.812
     Geometry estimate: L=19.49cm W=14.74cm H=4.05cm | points=16 density=13726.48/m3
     Shape: planarity=0.7660 flatness=0.2080 thickness=19.49cm spread=13.38cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 65454) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=-0.0775m Y=+1.2175m Z=-0.2170m | Range=1.2391m
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(-0.0507,+0.0312,+0.1621)m/s
     Sensor side info (raw): SNR mean=145.214 min=115 peak=168 | Noise mean=618.857
     Geometry estimate: L=15.71cm W=13.94cm H=0.72cm | points=14 density=88758.16/m3
     Shape: planarity=0.9438 flatness=0.0455 thickness=15.71cm spread=10.95cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25
Radar frame 65456: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65458: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65460: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65462: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65464: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65466: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65468: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65470: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65472: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65474: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65476: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65478: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65480: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 5 (radar 65482) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=-0.0775m Y=+1.2173m Z=-0.2184m | Range=1.2392m
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0016,-0.0136)m/s
     Sensor side info (raw): SNR mean=140.286 min=114 peak=162 | Noise mean=622.000
     Geometry estimate: L=14.49cm W=13.66cm H=0.72cm | points=14 density=98173.77/m3
     Shape: planarity=0.9426 flatness=0.0494 thickness=14.49cm spread=10.11cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25
Radar frame 65484: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65486: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65487: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65489: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65490: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65492: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 6 (radar 65493) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0775m Y=+1.2133m Z=-0.2381m | Range=1.2388m
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0407,-0.1967)m/s
     Sensor side info (raw): SNR mean=141.571 min=112 peak=161 | Noise mean=621.500
     Geometry estimate: L=19.08cm W=13.79cm H=0.72cm | points=14 density=73974.84/m3
     Shape: planarity=0.9517 flatness=0.0375 thickness=19.08cm spread=12.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2140 | threshold=0.25

=================================================
Frame 7 (radar 65495) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0724m Y=+1.2131m Z=-0.2401m | Range=1.2387m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0507,-0.0017,-0.0202)m/s
     Sensor side info (raw): SNR mean=141.625 min=116 peak=165 | Noise mean=601.438
     Geometry estimate: L=18.84cm W=14.80cm H=4.05cm | points=16 density=14146.36/m3
     Shape: planarity=0.7608 flatness=0.2152 thickness=18.84cm spread=12.91cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2097 | threshold=0.25
Radar frame 65497: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65499: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65501: 13 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65502: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65504: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65506: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65508: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65510: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65512: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 8 (radar 65514) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position estimate: X=-0.0750m Y=+1.2186m Z=-0.2111m | Range=1.2390m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0550,+0.2902)m/s
     Sensor side info (raw): SNR mean=141.625 min=116 peak=167 | Noise mean=598.250
     Geometry estimate: L=16.39cm W=14.00cm H=4.05cm | points=16 density=17189.35/m3
     Shape: planarity=0.8046 flatness=0.2474 thickness=16.39cm spread=11.00cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2014 | threshold=0.25
Radar frame 65516: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 9 (radar 65517) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [3D][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position estimate: X=-0.0750m Y=+1.2131m Z=-0.2410m | Range=1.2390m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0555,-0.2994)m/s
     Sensor side info (raw): SNR mean=140.812 min=112 peak=164 | Noise mean=602.312
     Geometry estimate: L=16.87cm W=14.21cm H=4.05cm | points=16 density=16449.71/m3
     Shape: planarity=0.8050 flatness=0.2403 thickness=16.87cm spread=12.09cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.1951 | threshold=0.25
Radar frame 65519: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65521: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 10 (radar 65523) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ❌ [PLATE][MET] Object ID: 0
     ❓ UNKNOWN OBJECT
     Position estimate: X=-0.0775m Y=+1.2186m Z=-0.2087m | Range=1.2387m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0551,+0.3233)m/s
     Sensor side info (raw): SNR mean=142.562 min=117 peak=166 | Noise mean=599.125
     Geometry estimate: L=20.54cm W=14.36cm H=0.72cm | points=16 density=75489.82/m3
     Shape: planarity=0.9510 flatness=0.0348 thickness=20.54cm spread=14.15cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2031 | threshold=0.25
Radar frame 65525: 14 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 11 (radar 65526) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0750m Y=+1.2114m Z=-0.2484m | Range=1.2389m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0713,-0.3971)m/s
     Sensor side info (raw): SNR mean=140.562 min=116 peak=164 | Noise mean=599.000
     Geometry estimate: L=17.77cm W=14.73cm H=4.05cm | points=16 density=15062.36/m3
     Shape: planarity=0.8109 flatness=0.2281 thickness=17.77cm spread=11.95cm
     Quality: 87% | valid=yes | reason=Valid | score=0.1991
     Best calibration candidate: gun | distance=0.1991 | threshold=0.25

=================================================
Frame 12 (radar 65528) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [PLATE][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0775m Y=+1.2183m Z=-0.2108m | Range=1.2389m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0691,+0.3756)m/s
     Sensor side info (raw): SNR mean=140.500 min=114 peak=166 | Noise mean=602.125
     Geometry estimate: L=19.07cm W=14.24cm H=0.72cm | points=16 density=81924.94/m3
     Shape: planarity=0.9479 flatness=0.0375 thickness=19.07cm spread=13.15cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2055
     Best calibration candidate: gun | distance=0.2055 | threshold=0.25

=================================================
Frame 13 (radar 65530) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0750m Y=+1.2135m Z=-0.2378m | Range=1.2389m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0485,-0.2701)m/s
     Sensor side info (raw): SNR mean=141.250 min=116 peak=165 | Noise mean=598.000
     Geometry estimate: L=18.14cm W=14.82cm H=4.05cm | points=16 density=14664.17/m3
     Shape: planarity=0.8136 flatness=0.2235 thickness=18.14cm spread=12.79cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2023
     Best calibration candidate: gun | distance=0.2023 | threshold=0.25
Radar frame 65532: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65533: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65534: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 14 (radar 65535) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2141m Z=-0.2356m | Range=1.2388m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,+0.0058,+0.0224)m/s
     Sensor side info (raw): SNR mean=140.938 min=115 peak=165 | Noise mean=595.500
     Geometry estimate: L=18.32cm W=14.49cm H=4.05cm | points=16 density=14857.32/m3
     Shape: planarity=0.7514 flatness=0.2213 thickness=18.32cm spread=13.20cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1997
     Best calibration candidate: gun | distance=0.1997 | threshold=0.25
Radar frame 65537: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 15 (radar 65539) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [PLATE][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0775m Y=+1.2186m Z=-0.2091m | Range=1.2388m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0507,+0.0450,+0.2653)m/s
     Sensor side info (raw): SNR mean=142.688 min=117 peak=168 | Noise mean=594.562
     Geometry estimate: L=20.13cm W=14.23cm H=0.72cm | points=16 density=77718.55/m3
     Shape: planarity=0.9499 flatness=0.0355 thickness=20.13cm spread=13.93cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2048
     Best calibration candidate: gun | distance=0.2048 | threshold=0.25

=================================================
Frame 16 (radar 65541) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2124m Z=-0.2437m | Range=1.2388m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0507,-0.0617,-0.3463)m/s
     Sensor side info (raw): SNR mean=139.938 min=113 peak=167 | Noise mean=596.812
     Geometry estimate: L=18.56cm W=14.76cm H=4.05cm | points=16 density=14389.16/m3
     Shape: planarity=0.7590 flatness=0.2184 thickness=18.56cm spread=12.45cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2025
     Best calibration candidate: gun | distance=0.2025 | threshold=0.25
Radar frame 65543: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65545: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 17 (radar 65547) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0746m Y=+1.2181m Z=-0.2139m | Range=1.2390m
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(-0.0217,+0.0565,+0.2976)m/s
     Sensor side info (raw): SNR mean=141.857 min=112 peak=164 | Noise mean=621.643
     Geometry estimate: L=15.83cm W=13.91cm H=4.05cm | points=14 density=15664.03/m3
     Shape: planarity=0.7976 flatness=0.2560 thickness=15.83cm spread=10.82cm
     Quality: 85% | valid=yes | reason=Valid | score=0.1980
     Best calibration candidate: gun | distance=0.1980 | threshold=0.25
Radar frame 65549: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 18 (radar 65550) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2124m Z=-0.2440m | Range=1.2389m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0217,-0.0562,-0.3011)m/s
     Sensor side info (raw): SNR mean=142.812 min=115 peak=168 | Noise mean=595.250
     Geometry estimate: L=17.94cm W=14.31cm H=4.05cm | points=16 density=15360.42/m3
     Shape: planarity=0.7510 flatness=0.2260 thickness=17.94cm spread=12.82cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1957
     Best calibration candidate: gun | distance=0.1957 | threshold=0.25
Radar frame 65552: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65554: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65556: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65558: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65560: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65562: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65564: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65566: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65568: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65570: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65572: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65574: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65576: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65578: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65580: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65582: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65584: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65586: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65588: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65590: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65592: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65594: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65596: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65598: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65600: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65602: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65604: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65606: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65608: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65610: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65612: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65613: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65615: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65617: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65619: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65621: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65623: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65625: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65627: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65629: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65631: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65633: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65635: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65637: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65639: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65641: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65643: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65645: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65647: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65649: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65651: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65653: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65655: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65657: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65659: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65661: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65663: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65665: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65667: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65669: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65671: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65673: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65675: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65677: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65679: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65681: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65683: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65685: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65686: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65687: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65689: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65691: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65693: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65694: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65695: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65696: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65698: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65699: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65700: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65701: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65702: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65704: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65705: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65706: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65707: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65708: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65709: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65710: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65711: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65712: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65713: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65714: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65715: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65716: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65717: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65718: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65719: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65720: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65721: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65722: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65723: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65724: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65725: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65726: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65727: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65728: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65729: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65730: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65732: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65733: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65734: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65735: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65736: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65737: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65738: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65739: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65740: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65741: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65742: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65743: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65744: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65745: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65746: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65747: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65748: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65750: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65751: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65753: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65755: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65756: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65757: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65758: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65760: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65761: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 19 (radar 65762) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2193m Z=-0.2067m | Range=1.2388m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0686,+0.3732)m/s
     Sensor side info (raw): SNR mean=138.125 min=113 peak=162 | Noise mean=604.438
     Geometry estimate: L=18.83cm W=14.10cm H=4.05cm | points=16 density=14849.98/m3
     Shape: planarity=0.7585 flatness=0.2153 thickness=18.83cm spread=12.75cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1939
     Best calibration candidate: gun | distance=0.1939 | threshold=0.25
Radar frame 65764: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 20 (radar 65766) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [PLATE][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0775m Y=+1.2173m Z=-0.2177m | Range=1.2390m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0507,-0.0202,-0.1100)m/s
     Sensor side info (raw): SNR mean=137.375 min=114 peak=160 | Noise mean=601.500
     Geometry estimate: L=17.26cm W=14.06cm H=0.72cm | points=16 density=91636.25/m3
     Shape: planarity=0.9448 flatness=0.0415 thickness=17.26cm spread=11.92cm
     Quality: 87% | valid=yes | reason=Valid | score=0.1991
     Best calibration candidate: gun | distance=0.1991 | threshold=0.25
Radar frame 65768: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65769: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65770: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 21 (radar 65772) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2120m Z=-0.2467m | Range=1.2390m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0507,-0.0526,-0.2895)m/s
     Sensor side info (raw): SNR mean=137.812 min=113 peak=162 | Noise mean=601.875
     Geometry estimate: L=16.98cm W=14.18cm H=4.05cm | points=16 density=16375.24/m3
     Shape: planarity=0.7388 flatness=0.2388 thickness=16.98cm spread=12.18cm
     Quality: 87% | valid=yes | reason=Valid | score=0.2007
     Best calibration candidate: gun | distance=0.2007 | threshold=0.25
Radar frame 65774: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65775: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65776: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65777: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65778: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65779: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 22 (radar 65781) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0750m Y=+1.2177m Z=-0.2165m | Range=1.2390m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0564,+0.3017)m/s
     Sensor side info (raw): SNR mean=139.812 min=113 peak=168 | Noise mean=600.812
     Geometry estimate: L=16.21cm W=13.94cm H=4.05cm | points=16 density=17449.35/m3
     Shape: planarity=0.8043 flatness=0.2502 thickness=16.21cm spread=10.94cm
     Quality: 87% | valid=yes | reason=Valid | score=0.1989
     Best calibration candidate: gun | distance=0.1989 | threshold=0.25

=================================================
Frame 23 (radar 65783) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2107m Z=-0.2511m | Range=1.2386m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0691,-0.3457)m/s
     Sensor side info (raw): SNR mean=139.938 min=112 peak=171 | Noise mean=595.750
     Geometry estimate: L=19.36cm W=15.14cm H=4.05cm | points=16 density=13456.22/m3
     Shape: planarity=0.7748 flatness=0.2094 thickness=19.36cm spread=13.19cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1988
     Best calibration candidate: gun | distance=0.1988 | threshold=0.25
Radar frame 65785: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65786: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 24 (radar 65788) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2134m Z=-0.2397m | Range=1.2390m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0269,+0.1135)m/s
     Sensor side info (raw): SNR mean=141.312 min=113 peak=168 | Noise mean=595.812
     Geometry estimate: L=16.57cm W=14.07cm H=4.05cm | points=16 density=16910.59/m3
     Shape: planarity=0.7443 flatness=0.2447 thickness=16.57cm spread=12.21cm
     Quality: 87% | valid=yes | reason=Valid | score=0.1913
     Best calibration candidate: gun | distance=0.1913 | threshold=0.25
Radar frame 65790: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65792: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65793: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65795: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65796: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65797: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65798: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65799: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65800: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65801: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65802: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65803: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65804: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65805: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65806: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65807: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65808: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65809: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65811: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65812: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65813: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65815: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 25 (radar 65817) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0746m Y=+1.2169m Z=-0.2214m | Range=1.2392m
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(-0.0217,+0.0348,+0.1828)m/s
     Sensor side info (raw): SNR mean=140.000 min=111 peak=162 | Noise mean=623.714
     Geometry estimate: L=15.27cm W=13.90cm H=4.05cm | points=14 density=16252.18/m3
     Shape: planarity=0.7826 flatness=0.2656 thickness=15.27cm spread=10.82cm
     Quality: 85% | valid=yes | reason=Valid | score=0.1810
     Best calibration candidate: gun | distance=0.1810 | threshold=0.25
Radar frame 65819: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65820: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 26 (radar 65821) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [PLATE][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0773m Y=+1.2135m Z=-0.2177m | Range=1.2353m
     Radial velocity estimate: mean=+0.0241m/s peak=0.1207m/s | Track velocity=(-0.0266,-0.0338,+0.0369)m/s
     Sensor side info (raw): SNR mean=138.600 min=111 peak=163 | Noise mean=616.067
     Geometry estimate: L=14.74cm W=13.81cm H=0.72cm | points=15 density=102259.34/m3
     Shape: planarity=0.9429 flatness=0.0485 thickness=14.74cm spread=10.25cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1833
     Best calibration candidate: gun | distance=0.1833 | threshold=0.25

=================================================
Frame 27 (radar 65823) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0746m Y=+1.2134m Z=-0.2376m | Range=1.2387m
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(+0.0266,-0.0010,-0.1983)m/s
     Sensor side info (raw): SNR mean=140.357 min=114 peak=161 | Noise mean=623.286
     Geometry estimate: L=19.58cm W=13.73cm H=4.05cm | points=14 density=12833.85/m3
     Shape: planarity=0.8181 flatness=0.2070 thickness=19.58cm spread=12.52cm
     Quality: 84% | valid=yes | reason=Valid | score=0.1827
     Best calibration candidate: gun | distance=0.1827 | threshold=0.25
Radar frame 65825: 34 raw points, all rejected by range/SNR filters
Radar frame 65827: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65829: 35 raw points, all rejected by range/SNR filters
Radar frame 65831: no points | packet=1120B objects=36 TLVs=5 pointsTLV=no sideInfo=no malformed=yes
Radar frame 65833: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65835: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65836: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65837: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65839: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65841: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65843: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65845: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65847: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65848: 13 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65849: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65850: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65851: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65852: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65853: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65855: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65856: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65857: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65858: 13 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65859: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65860: 13 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65861: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 28 (radar 65862) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0750m Y=+1.2129m Z=-0.2415m | Range=1.2390m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(-0.0036,-0.0049,-0.0392)m/s
     Sensor side info (raw): SNR mean=141.438 min=115 peak=170 | Noise mean=596.375
     Geometry estimate: L=17.23cm W=13.92cm H=4.05cm | points=16 density=16441.16/m3
     Shape: planarity=0.8021 flatness=0.2353 thickness=17.23cm spread=12.53cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1830
     Best calibration candidate: gun | distance=0.1830 | threshold=0.25

=================================================
Frame 29 (radar 65864) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [PLATE][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0775m Y=+1.2159m Z=-0.2266m | Range=1.2393m
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0298,+0.1495)m/s
     Sensor side info (raw): SNR mean=141.071 min=113 peak=161 | Noise mean=622.571
     Geometry estimate: L=14.32cm W=13.69cm H=0.72cm | points=14 density=99135.66/m3
     Shape: planarity=0.9423 flatness=0.0500 thickness=14.32cm spread=10.27cm
     Quality: 85% | valid=yes | reason=Valid | score=0.1918
     Best calibration candidate: gun | distance=0.1918 | threshold=0.25
Radar frame 65866: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65867: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65869: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65871: 15 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65872: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65874: 12 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 30 (radar 65875) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0746m Y=+1.2134m Z=-0.2381m | Range=1.2388m
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(+0.0290,-0.0252,-0.1155)m/s
     Sensor side info (raw): SNR mean=141.000 min=115 peak=162 | Noise mean=622.000
     Geometry estimate: L=18.68cm W=13.83cm H=4.05cm | points=14 density=13356.26/m3
     Shape: planarity=0.8122 flatness=0.2170 thickness=18.68cm spread=12.60cm
     Quality: 84% | valid=yes | reason=Valid | score=0.1845
     Best calibration candidate: gun | distance=0.1845 | threshold=0.25

=================================================
Frame 31 (radar 65877) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2106m Z=-0.2519m | Range=1.2387m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0217,-0.0278,-0.1380)m/s
     Sensor side info (raw): SNR mean=138.625 min=112 peak=161 | Noise mean=598.875
     Geometry estimate: L=19.51cm W=14.52cm H=4.05cm | points=16 density=13923.57/m3
     Shape: planarity=0.7727 flatness=0.2078 thickness=19.51cm spread=13.05cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1852
     Best calibration candidate: gun | distance=0.1852 | threshold=0.25
Radar frame 65879: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65880: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65881: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65882: 25 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65883: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65884: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65885: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65887: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65888: 26 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65889: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65890: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 32 (radar 65891) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0743m Y=+1.2122m Z=-0.2375m | Range=1.2374m
     Radial velocity estimate: mean=-0.0093m/s peak=0.1207m/s | Track velocity=(-0.0186,+0.0154,+0.1440)m/s
     Sensor side info (raw): SNR mean=143.231 min=113 peak=174 | Noise mean=634.385
     Geometry estimate: L=18.33cm W=13.90cm H=4.05cm | points=13 density=12576.59/m3
     Shape: planarity=0.7911 flatness=0.2212 thickness=18.33cm spread=12.15cm
     Quality: 83% | valid=yes | reason=Valid | score=0.1843
     Best calibration candidate: gun | distance=0.1843 | threshold=0.25
Radar frame 65892: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 33 (radar 65893) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0750m Y=+1.2193m Z=-0.2044m | Range=1.2386m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0068,+0.0713,+0.3307)m/s
     Sensor side info (raw): SNR mean=140.438 min=110 peak=165 | Noise mean=598.250
     Geometry estimate: L=21.13cm W=14.43cm H=4.05cm | points=16 density=12932.88/m3
     Shape: planarity=0.8360 flatness=0.1919 thickness=21.13cm spread=14.40cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1832
     Best calibration candidate: gun | distance=0.1832 | threshold=0.25
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 34 (radar 65895) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0750m Y=+1.2187m Z=-0.2088m | Range=1.2388m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0056,-0.0432)m/s
     Sensor side info (raw): SNR mean=137.250 min=108 peak=160 | Noise mean=601.312
     Geometry estimate: L=19.92cm W=14.30cm H=4.05cm | points=16 density=13845.06/m3
     Shape: planarity=0.8261 flatness=0.2035 thickness=19.92cm spread=13.66cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1824
     Best calibration candidate: gun | distance=0.1824 | threshold=0.25
Radar frame 65897: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65898: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 35 (radar 65899) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0746m Y=+1.2117m Z=-0.2466m | Range=1.2388m
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(+0.0036,-0.0706,-0.3781)m/s
     Sensor side info (raw): SNR mean=143.357 min=117 peak=163 | Noise mean=621.286
     Geometry estimate: L=18.94cm W=13.72cm H=4.05cm | points=14 density=13278.74/m3
     Shape: planarity=0.8161 flatness=0.2141 thickness=18.94cm spread=12.12cm
     Quality: 85% | valid=yes | reason=Valid | score=0.1955
     Best calibration candidate: gun | distance=0.1955 | threshold=0.25

=================================================
Frame 36 (radar 65901) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: VERY_HIGH (95%)
     Position estimate: X=-0.0724m Y=+1.2124m Z=-0.2446m | Range=1.2389m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0217,+0.0071,+0.0200)m/s
     Sensor side info (raw): SNR mean=140.375 min=112 peak=164 | Noise mean=598.125
     Geometry estimate: L=17.45cm W=14.42cm H=4.05cm | points=16 density=15664.10/m3
     Shape: planarity=0.7441 flatness=0.2323 thickness=17.45cm spread=12.50cm
     Quality: 86% | valid=yes | reason=Valid | score=0.1959
     Best calibration candidate: gun | distance=0.1959 | threshold=0.25
Radar frame 65903: 26 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65904: 26 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 37 (radar 65906) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0773m Y=+1.2195m Z=-0.2036m | Range=1.2387m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0484,+0.0707,+0.4097)m/s
     Sensor side info (raw): SNR mean=138.812 min=115 peak=163 | Noise mean=599.375
     Geometry estimate: L=18.33cm W=14.11cm H=7.04cm | points=16 density=8788.79/m3
     Shape: planarity=0.7583 flatness=0.3839 thickness=18.33cm spread=12.11cm
     Quality: 87% | valid=yes | reason=Valid | score=0.2026
     Best calibration candidate: gun | distance=0.2026 | threshold=0.25

=================================================
Frame 38 (radar 65908) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2124m Z=-0.2433m | Range=1.2387m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0484,-0.0707,-0.3968)m/s
     Sensor side info (raw): SNR mean=139.562 min=114 peak=164 | Noise mean=602.438
     Geometry estimate: L=19.78cm W=14.82cm H=4.05cm | points=16 density=13453.18/m3
     Shape: planarity=0.7685 flatness=0.2049 thickness=19.78cm spread=13.53cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2022
     Best calibration candidate: gun | distance=0.2022 | threshold=0.25
Radar frame 65910: 28 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65911: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65912: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65914: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65915: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 39 (radar 65916) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2198m Z=-0.2031m | Range=1.2387m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0743,+0.4016)m/s
     Sensor side info (raw): SNR mean=140.562 min=114 peak=165 | Noise mean=601.188
     Geometry estimate: L=18.93cm W=14.20cm H=4.05cm | points=16 density=14672.47/m3
     Shape: planarity=0.7663 flatness=0.2142 thickness=18.93cm spread=12.57cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2022
     Best calibration candidate: gun | distance=0.2022 | threshold=0.25
Radar frame 65918: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65919: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65920: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65921: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65922: 16 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 40 (radar 65923) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0750m Y=+1.2179m Z=-0.2139m | Range=1.2388m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,-0.0195,-0.1079)m/s
     Sensor side info (raw): SNR mean=139.562 min=115 peak=165 | Noise mean=600.188
     Geometry estimate: L=19.64cm W=14.25cm H=4.05cm | points=16 density=14092.90/m3
     Shape: planarity=0.8263 flatness=0.2064 thickness=19.64cm spread=13.51cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2153
     Best calibration candidate: gun | distance=0.2153 | threshold=0.25

=================================================
Frame 41 (radar 65925) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2130m Z=-0.2411m | Range=1.2388m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0490,-0.2722)m/s
     Sensor side info (raw): SNR mean=138.188 min=112 peak=162 | Noise mean=601.875
     Geometry estimate: L=18.75cm W=14.36cm H=4.05cm | points=16 density=14644.03/m3
     Shape: planarity=0.7561 flatness=0.2162 thickness=18.75cm spread=13.00cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2147
     Best calibration candidate: gun | distance=0.2147 | threshold=0.25
Radar frame 65927: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65928: 33 raw points, all rejected by range/SNR filters
Radar frame 65930: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
⚠️  ALERT TRIGGERED - GUN DETECTED!

=================================================
Frame 42 (radar 65931) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2124m Z=-0.2452m | Range=1.2390m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0000,-0.0058,-0.0406)m/s
     Sensor side info (raw): SNR mean=141.625 min=115 peak=165 | Noise mean=597.562
     Geometry estimate: L=16.45cm W=14.10cm H=4.05cm | points=16 density=16996.08/m3
     Shape: planarity=0.7392 flatness=0.2464 thickness=16.45cm spread=12.12cm
     Quality: 87% | valid=yes | reason=Valid | score=0.2151
     Best calibration candidate: gun | distance=0.2151 | threshold=0.25

=================================================
Frame 43 (radar 65933) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0750m Y=+1.2171m Z=-0.2203m | Range=1.2391m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0472,+0.2484)m/s
     Sensor side info (raw): SNR mean=139.125 min=114 peak=163 | Noise mean=601.688
     Geometry estimate: L=15.26cm W=13.86cm H=4.05cm | points=16 density=18639.02/m3
     Shape: planarity=0.8022 flatness=0.2657 thickness=15.26cm spread=10.44cm
     Quality: 87% | valid=yes | reason=Valid | score=0.2160
     Best calibration candidate: gun | distance=0.2160 | threshold=0.25
Radar frame 65935: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 44 (radar 65936) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2132m Z=-0.2401m | Range=1.2389m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0390,-0.1979)m/s
     Sensor side info (raw): SNR mean=138.062 min=111 peak=161 | Noise mean=601.812
     Geometry estimate: L=17.85cm W=14.58cm H=4.05cm | points=16 density=15154.45/m3
     Shape: planarity=0.7493 flatness=0.2272 thickness=17.85cm spread=12.95cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2159
     Best calibration candidate: gun | distance=0.2159 | threshold=0.25
Radar frame 65938: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65939: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65940: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65942: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65943: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 45 (radar 65945) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0750m Y=+1.2185m Z=-0.2097m | Range=1.2387m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0253,+0.0530,+0.3038)m/s
     Sensor side info (raw): SNR mean=138.188 min=114 peak=161 | Noise mean=604.875
     Geometry estimate: L=19.48cm W=14.27cm H=4.05cm | points=16 density=14182.80/m3
     Shape: planarity=0.8319 flatness=0.2082 thickness=19.48cm spread=13.10cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2145
     Best calibration candidate: gun | distance=0.2145 | threshold=0.25

=================================================
Frame 46 (radar 65947) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0746m Y=+1.2094m Z=-0.2386m | Range=1.2350m
     Radial velocity estimate: mean=-0.0241m/s peak=0.1207m/s | Track velocity=(+0.0041,-0.0907,-0.2890)m/s
     Sensor side info (raw): SNR mean=138.733 min=111 peak=161 | Noise mean=614.200
     Geometry estimate: L=17.92cm W=14.75cm H=4.05cm | points=15 density=13983.51/m3
     Shape: planarity=0.8131 flatness=0.2263 thickness=17.92cm spread=12.78cm
     Quality: 85% | valid=yes | reason=Valid | score=0.2285
     Best calibration candidate: gun | distance=0.2285 | threshold=0.25

=================================================
Frame 47 (radar 65949) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0750m Y=+1.2190m Z=-0.2076m | Range=1.2388m
     Radial velocity estimate: mean=+0.0302m/s peak=0.1207m/s | Track velocity=(-0.0041,+0.0953,+0.3109)m/s
     Sensor side info (raw): SNR mean=137.438 min=113 peak=161 | Noise mean=604.938
     Geometry estimate: L=20.10cm W=14.26cm H=4.05cm | points=16 density=13754.47/m3
     Shape: planarity=0.8249 flatness=0.2017 thickness=20.10cm spread=13.84cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2286
     Best calibration candidate: gun | distance=0.2286 | threshold=0.25

=================================================
Frame 48 (radar 65951) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0724m Y=+1.2126m Z=-0.2430m | Range=1.2388m
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0253,-0.0637,-0.3543)m/s
     Sensor side info (raw): SNR mean=136.688 min=108 peak=161 | Noise mean=600.375
     Geometry estimate: L=18.51cm W=14.68cm H=4.05cm | points=16 density=14512.80/m3
     Shape: planarity=0.7566 flatness=0.2191 thickness=18.51cm spread=12.76cm
     Quality: 86% | valid=yes | reason=Valid | score=0.2288
     Best calibration candidate: gun | distance=0.2288 | threshold=0.25
Radar frame 65953: 17 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65955: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 49 (radar 65957) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2] points=yes sideInfo=yes malformed=yes
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0746m Y=+1.2136m Z=-0.2374m | Range=1.2388m
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(-0.0217,+0.0100,+0.0562)m/s
     Sensor side info (raw): SNR mean=143.071 min=117 peak=164 | Noise mean=621.000
     Geometry estimate: L=18.85cm W=13.78cm H=4.05cm | points=14 density=13277.84/m3
     Shape: planarity=0.8095 flatness=0.2151 thickness=18.85cm spread=12.45cm
     Quality: 84% | valid=yes | reason=Valid | score=0.2416
     Best calibration candidate: gun | distance=0.2416 | threshold=0.25

=================================================
Frame 50 (radar 65959) | Valid Objects: 1 | 🚨 ALERT ACTIVE
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  ✅ [3D][MET] Object ID: 0 🔴 GUN DETECTED!
     ✅ IDENTIFIED: 'gun'
     Match Confidence: HIGH (85%)
     Position estimate: X=-0.0743m Y=+1.2149m Z=-0.2243m | Range=1.2377m
     Radial velocity estimate: mean=+0.0093m/s peak=0.1207m/s | Track velocity=(+0.0031,+0.0136,+0.1305)m/s
     Sensor side info (raw): SNR mean=140.000 min=113 peak=163 | Noise mean=638.000
     Geometry estimate: L=15.46cm W=13.90cm H=4.05cm | points=13 density=14910.58/m3
     Shape: planarity=0.7813 flatness=0.2623 thickness=15.46cm spread=11.42cm
     Quality: 84% | valid=yes | reason=Valid | score=0.2428
     Best calibration candidate: gun | distance=0.2428 | threshold=0.25
Radar frame 65960: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65961: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65962: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65964: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65965: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65966: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65967: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65968: 27 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65969: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65970: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65971: 25 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65973: 26 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65975: 18 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65977: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65979: 23 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65981: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65983: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65984: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65986: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65988: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65989: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65991: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65992: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65993: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65994: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65995: 20 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65996: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65997: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65998: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 65999: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66000: 19 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66002: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66003: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66005: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66006: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66007: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66008: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66009: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66010: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66011: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66013: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66014: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66015: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66016: 22 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66017: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)
Radar frame 66019: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

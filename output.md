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
✓ Components initialized (Free heap: 267 KB)
Loaded 3 calibrated objects
✓ Calibration loaded successfully

=================================================
🔧 ENHANCED FEATURES:
   • Ghost Point Rejection (min 8 points)
   • Quality Validation (SNR, density, coherence)
   • Requires 6 consecutive valid detections
   • Requires 10 stable frames for confident ID
=================================================
READY - Press button on GPIO4 to START/STOP
System is OFF. Press button to begin detection.
=================================================


🟢 SYSTEM STARTED - Detection active

=================================================
Frame 1 (radar 3882) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0332m Y=+0.9428m Z=+0.3057m | Range=0.9917m
     Range-profile relative power: 101.03 dB at 0.9920m | raw=3798 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=267.067 min=146 peak=325 | Noise mean=539.800
     Geometry estimate: L=16.61cm W=9.46cm H=3.82cm | points=15 density=24993.23/m3
     Shape: planarity=0.8286 flatness=0.2298 thickness=9.46cm spread=8.54cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 3884) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0238m Y=+0.9343m Z=+0.2849m | Range=0.9771m
     Range-profile relative power: 101.10 dB at 0.9920m | raw=3800 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0722,-0.0876,-0.2010)m/s
     Sensor side info (raw): SNR mean=258.438 min=143 peak=322 | Noise mean=538.059
     Geometry estimate: L=21.21cm W=16.62cm H=3.34cm | points=16 density=13582.31/m3
     Shape: planarity=0.7775 flatness=0.1574 thickness=21.21cm spread=16.31cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 3885) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=-0.0240m Y=+0.9287m Z=+0.2830m | Range=0.9712m
     Range-profile relative power: 101.03 dB at 0.9920m | raw=3798 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0020,-0.0557,-0.0193)m/s
     Sensor side info (raw): SNR mean=255.765 min=143 peak=324 | Noise mean=531.389
     Geometry estimate: L=23.59cm W=16.67cm H=3.34cm | points=17 density=12941.49/m3
     Shape: planarity=0.7861 flatness=0.1415 thickness=23.59cm spread=16.15cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 3886) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=-0.0255m Y=+0.9286m Z=+0.2835m | Range=0.9713m
     Range-profile relative power: 101.06 dB at 0.9920m | raw=3799 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0152,-0.0014,+0.0057)m/s
     Sensor side info (raw): SNR mean=254.235 min=143 peak=322 | Noise mean=533.389
     Geometry estimate: L=22.06cm W=16.68cm H=3.34cm | points=17 density=13831.16/m3
     Shape: planarity=0.8196 flatness=0.1513 thickness=22.06cm spread=15.00cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 5 (radar 3887) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=-0.0270m Y=+0.9223m Z=+0.3033m | Range=0.9713m
     Range-profile relative power: 100.88 dB at 0.9920m | raw=3793 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0152,-0.0629,+0.1977)m/s
     Sensor side info (raw): SNR mean=246.500 min=134 peak=320 | Noise mean=531.722
     Geometry estimate: L=28.69cm W=15.25cm H=3.34cm | points=18 density=12313.28/m3
     Shape: planarity=0.8596 flatness=0.1164 thickness=28.69cm spread=16.17cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 6 (radar 3888) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=-0.0332m Y=+0.9366m Z=+0.3236m | Range=0.9914m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0620,+0.1425,+0.2026)m/s
     Sensor side info (raw): SNR mean=261.800 min=128 peak=321 | Noise mean=539.467
     Geometry estimate: L=15.21cm W=14.36cm H=3.82cm | points=15 density=17976.84/m3
     Shape: planarity=0.8049 flatness=0.2508 thickness=15.21cm spread=9.95cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 7 (radar 3889) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0308m Y=+0.9309m Z=+0.3230m | Range=0.9859m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(+0.0240,-0.0562,-0.0055)m/s
     Sensor side info (raw): SNR mean=269.500 min=130 peak=320 | Noise mean=540.143
     Geometry estimate: L=17.59cm W=13.29cm H=0.48cm | points=14 density=124459.90/m3
     Shape: planarity=0.9656 flatness=0.0271 thickness=17.59cm spread=11.94cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2549 | threshold=0.25

=================================================
Frame 8 (radar 3890) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0286m Y=+0.9187m Z=+0.2961m | Range=0.9657m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0221,-0.1219,-0.2695)m/s
     Sensor side info (raw): SNR mean=257.750 min=138 peak=322 | Noise mean=530.412
     Geometry estimate: L=24.47cm W=14.26cm H=0.60cm | points=16 density=76535.07/m3
     Shape: planarity=0.9682 flatness=0.0244 thickness=24.47cm spread=13.94cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2587 | threshold=0.25

=================================================
Frame 9 (radar 3891) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0360m Y=+0.9254m Z=+0.2942m | Range=0.9717m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0735,+0.0662,-0.0192)m/s
     Sensor side info (raw): SNR mean=246.611 min=127 peak=322 | Noise mean=531.167
     Geometry estimate: L=24.56cm W=16.28cm H=3.93cm | points=18 density=11436.90/m3
     Shape: planarity=0.7717 flatness=0.1602 thickness=24.56cm spread=14.97cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2604 | threshold=0.25

=================================================
Frame 10 (radar 3892) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0349m Y=+0.9293m Z=+0.2996m | Range=0.9771m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0111,+0.0397,+0.0547)m/s
     Sensor side info (raw): SNR mean=252.250 min=117 peak=322 | Noise mean=537.176
     Geometry estimate: L=22.22cm W=14.61cm H=3.93cm | points=16 density=12514.92/m3
     Shape: planarity=0.7180 flatness=0.1771 thickness=22.22cm spread=14.77cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2610 | threshold=0.25

=================================================
Frame 11 (radar 3893) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0360m Y=+0.9296m Z=+0.2788m | Range=0.9712m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0111,+0.0032,-0.2086)m/s
     Sensor side info (raw): SNR mean=236.722 min=123 peak=317 | Noise mean=542.444
     Geometry estimate: L=25.56cm W=18.53cm H=3.93cm | points=18 density=9651.32/m3
     Shape: planarity=0.7828 flatness=0.1540 thickness=25.56cm spread=15.24cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2633 | threshold=0.25

=================================================
Frame 12 (radar 3894) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0338m Y=+0.9436m Z=+0.3004m | Range=0.9908m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0219,+0.1394,+0.2161)m/s
     Sensor side info (raw): SNR mean=253.800 min=109 peak=325 | Noise mean=544.000
     Geometry estimate: L=19.14cm W=17.68cm H=6.68cm | points=15 density=6634.96/m3
     Shape: planarity=0.6568 flatness=0.3489 thickness=17.68cm spread=15.08cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2567 | threshold=0.25

=================================================
Frame 13 (radar 3895) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0228m Y=+0.9282m Z=+0.3092m | Range=0.9786m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1097,-0.1541,+0.0883)m/s
     Sensor side info (raw): SNR mean=266.600 min=137 peak=327 | Noise mean=533.000
     Geometry estimate: L=19.56cm W=15.87cm H=3.34cm | points=15 density=14464.54/m3
     Shape: planarity=0.7268 flatness=0.1707 thickness=19.56cm spread=13.15cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2578 | threshold=0.25

=================================================
Frame 14 (radar 3896) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0311m Y=+0.9269m Z=+0.2896m | Range=0.9716m
     Range-profile relative power: 100.94 dB at 0.9920m | raw=3795 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0825,-0.0130,-0.1960)m/s
     Sensor side info (raw): SNR mean=248.778 min=134 peak=325 | Noise mean=530.278
     Geometry estimate: L=23.26cm W=16.94cm H=6.68cm | points=18 density=6839.39/m3
     Shape: planarity=0.6712 flatness=0.2871 thickness=23.26cm spread=15.97cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2543 | threshold=0.25

=================================================
Frame 15 (radar 3897) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9398m Z=+0.3150m | Range=0.9916m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0158,+0.1289,+0.2537)m/s
     Sensor side info (raw): SNR mean=265.467 min=133 peak=327 | Noise mean=536.733
     Geometry estimate: L=15.45cm W=10.80cm H=6.68cm | points=15 density=13449.06/m3
     Shape: planarity=0.6278 flatness=0.4321 thickness=10.80cm spread=9.05cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2658 | threshold=0.25

=================================================
Frame 16 (radar 3898) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9391m Z=+0.3169m | Range=0.9916m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0068,+0.0194)m/s
     Sensor side info (raw): SNR mean=264.733 min=135 peak=327 | Noise mean=536.933
     Geometry estimate: L=15.43cm W=11.78cm H=6.68cm | points=15 density=12348.64/m3
     Shape: planarity=0.6247 flatness=0.4329 thickness=11.78cm spread=9.39cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2777 | threshold=0.25

=================================================
Frame 17 (radar 3899) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9404m Z=+0.3127m | Range=0.9915m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0223,+0.0127,-0.0425)m/s
     Sensor side info (raw): SNR mean=265.467 min=137 peak=327 | Noise mean=537.133
     Geometry estimate: L=16.49cm W=11.49cm H=6.68cm | points=15 density=11845.21/m3
     Shape: planarity=0.5918 flatness=0.4049 thickness=11.49cm spread=9.36cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2865 | threshold=0.25

=================================================
Frame 18 (radar 3900) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9263m Z=+0.2914m | Range=0.9715m
     Range-profile relative power: 100.88 dB at 0.9920m | raw=3793 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0376,-0.1405,-0.2129)m/s
     Sensor side info (raw): SNR mean=255.706 min=135 peak=327 | Noise mean=527.722
     Geometry estimate: L=21.28cm W=17.35cm H=6.68cm | points=17 density=6890.37/m3
     Shape: planarity=0.6177 flatness=0.3138 thickness=21.28cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2920 | threshold=0.25

=================================================
Frame 19 (radar 3901) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9401m Z=+0.3134m | Range=0.9915m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0376,+0.1379,+0.2206)m/s
     Sensor side info (raw): SNR mean=269.267 min=139 peak=330 | Noise mean=533.200
     Geometry estimate: L=16.52cm W=11.50cm H=6.68cm | points=15 density=11817.71/m3
     Shape: planarity=0.5923 flatness=0.4043 thickness=11.50cm spread=9.37cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.2984 | threshold=0.25

=================================================
Frame 20 (radar 3902) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3124m | Range=0.9915m
     Range-profile relative power: 100.88 dB at 0.9920m | raw=3793 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0037,-0.0106)m/s
     Sensor side info (raw): SNR mean=267.200 min=138 peak=328 | Noise mean=535.467
     Geometry estimate: L=16.60cm W=10.98cm H=6.68cm | points=15 density=12316.25/m3
     Shape: planarity=0.5948 flatness=0.4024 thickness=10.98cm spread=9.21cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3048 | threshold=0.25

=================================================
Frame 21 (radar 3903) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9402m Z=+0.3132m | Range=0.9915m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0030,+0.0086)m/s
     Sensor side info (raw): SNR mean=266.333 min=139 peak=328 | Noise mean=536.000
     Geometry estimate: L=16.84cm W=10.34cm H=6.68cm | points=15 density=12890.07/m3
     Shape: planarity=0.6004 flatness=0.3964 thickness=10.34cm spread=9.29cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3197 | threshold=0.25

=================================================
Frame 22 (radar 3904) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0282m Y=+0.9268m Z=+0.2939m | Range=0.9727m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0064m/s peak=0.1207m/s | Track velocity=(+0.0354,-0.1336,-0.1937)m/s
     Sensor side info (raw): SNR mean=246.632 min=134 peak=327 | Noise mean=524.000
     Geometry estimate: L=20.80cm W=17.30cm H=6.68cm | points=19 density=7906.73/m3
     Shape: planarity=0.6203 flatness=0.3211 thickness=20.80cm spread=15.05cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3242 | threshold=0.25

=================================================
Frame 23 (radar 3905) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3124m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0354,+0.1365,+0.1856)m/s
     Sensor side info (raw): SNR mean=265.867 min=136 peak=326 | Noise mean=536.800
     Geometry estimate: L=16.50cm W=11.17cm H=6.68cm | points=15 density=12176.62/m3
     Shape: planarity=0.5930 flatness=0.4047 thickness=11.17cm spread=9.29cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3301 | threshold=0.25

=================================================
Frame 24 (radar 3906) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0276m Y=+0.9344m Z=+0.3082m | Range=0.9843m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0038m/s peak=0.0604m/s | Track velocity=(+0.0407,-0.0607,-0.0422)m/s
     Sensor side info (raw): SNR mean=260.562 min=136 peak=326 | Noise mean=531.875
     Geometry estimate: L=16.26cm W=15.71cm H=6.68cm | points=16 density=9372.82/m3
     Shape: planarity=0.6369 flatness=0.4106 thickness=15.71cm spread=12.89cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3365 | threshold=0.25

=================================================
Frame 25 (radar 3907) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9269m Z=+0.2896m | Range=0.9715m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0122,-0.0745,-0.1865)m/s
     Sensor side info (raw): SNR mean=252.222 min=138 peak=326 | Noise mean=526.833
     Geometry estimate: L=23.28cm W=16.85cm H=6.68cm | points=18 density=6868.95/m3
     Shape: planarity=0.6203 flatness=0.2868 thickness=23.28cm spread=15.73cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3415 | threshold=0.25

=================================================
Frame 26 (radar 3908) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9408m Z=+0.3113m | Range=0.9915m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1389,+0.2175)m/s
     Sensor side info (raw): SNR mean=267.067 min=135 peak=328 | Noise mean=535.800
     Geometry estimate: L=16.70cm W=10.61cm H=6.68cm | points=15 density=12670.86/m3
     Shape: planarity=0.5977 flatness=0.3999 thickness=10.61cm spread=9.28cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3442 | threshold=0.25

=================================================
Frame 27 (radar 3909) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9408m Z=+0.3114m | Range=0.9915m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0007)m/s
     Sensor side info (raw): SNR mean=264.933 min=135 peak=325 | Noise mean=537.933
     Geometry estimate: L=16.82cm W=10.44cm H=6.68cm | points=15 density=12788.96/m3
     Shape: planarity=0.5999 flatness=0.3971 thickness=10.44cm spread=9.36cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3549 | threshold=0.25

=================================================
Frame 28 (radar 3910) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9408m Z=+0.3114m | Range=0.9915m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0004)m/s
     Sensor side info (raw): SNR mean=265.467 min=136 peak=325 | Noise mean=537.200
     Geometry estimate: L=16.82cm W=10.43cm H=6.68cm | points=15 density=12792.61/m3
     Shape: planarity=0.6002 flatness=0.3969 thickness=10.43cm spread=9.34cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3643 | threshold=0.25

=================================================
Frame 29 (radar 3911) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9398m Z=+0.3148m | Range=0.9916m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0223,-0.0095,+0.0336)m/s
     Sensor side info (raw): SNR mean=266.000 min=133 peak=326 | Noise mean=536.267
     Geometry estimate: L=15.74cm W=10.82cm H=6.68cm | points=15 density=13180.34/m3
     Shape: planarity=0.6315 flatness=0.4242 thickness=10.82cm spread=9.15cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3683 | threshold=0.25

=================================================
Frame 30 (radar 3912) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9256m Z=+0.2946m | Range=0.9717m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0492,-0.1418,-0.2015)m/s
     Sensor side info (raw): SNR mean=249.222 min=133 peak=325 | Noise mean=529.167
     Geometry estimate: L=22.44cm W=16.17cm H=6.68cm | points=18 density=7425.22/m3
     Shape: planarity=0.6380 flatness=0.2976 thickness=22.44cm spread=15.18cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3706 | threshold=0.25

=================================================
Frame 31 (radar 3913) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9407m Z=+0.3116m | Range=0.9915m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0714,+0.1508,+0.1697)m/s
     Sensor side info (raw): SNR mean=267.600 min=139 peak=326 | Noise mean=535.133
     Geometry estimate: L=16.62cm W=10.87cm H=6.68cm | points=15 density=12430.05/m3
     Shape: planarity=0.5957 flatness=0.4018 thickness=10.87cm spread=9.24cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 32 (radar 3914) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9408m Z=+0.3114m | Range=0.9915m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0008,-0.0023)m/s
     Sensor side info (raw): SNR mean=266.467 min=139 peak=326 | Noise mean=536.600
     Geometry estimate: L=16.69cm W=10.56cm H=6.68cm | points=15 density=12737.51/m3
     Shape: planarity=0.5975 flatness=0.4001 thickness=10.56cm spread=9.33cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3731 | threshold=0.25

=================================================
Frame 33 (radar 3915) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9396m Z=+0.3153m | Range=0.9916m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0223,-0.0116,+0.0396)m/s
     Sensor side info (raw): SNR mean=265.800 min=136 peak=325 | Noise mean=536.267
     Geometry estimate: L=15.57cm W=11.25cm H=6.68cm | points=15 density=12810.91/m3
     Shape: planarity=0.6278 flatness=0.4289 thickness=11.25cm spread=9.32cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3762 | threshold=0.25

=================================================
Frame 34 (radar 3916) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9257m Z=+0.2947m | Range=0.9718m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0492,-0.1393,-0.2068)m/s
     Sensor side info (raw): SNR mean=250.278 min=134 peak=324 | Noise mean=527.722
     Geometry estimate: L=21.17cm W=15.99cm H=6.68cm | points=18 density=7961.94/m3
     Shape: planarity=0.6319 flatness=0.3155 thickness=21.17cm spread=14.57cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 35 (radar 3917) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0261m Y=+0.9261m Z=+0.2929m | Range=0.9717m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0152,+0.0044,-0.0171)m/s
     Sensor side info (raw): SNR mean=249.444 min=133 peak=324 | Noise mean=529.333
     Geometry estimate: L=21.50cm W=16.37cm H=6.68cm | points=18 density=7653.93/m3
     Shape: planarity=0.6507 flatness=0.3105 thickness=21.50cm spread=15.41cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3758 | threshold=0.25

=================================================
Frame 36 (radar 3918) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9265m Z=+0.2913m | Range=0.9716m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0152,+0.0038,-0.0160)m/s
     Sensor side info (raw): SNR mean=250.444 min=133 peak=325 | Noise mean=529.167
     Geometry estimate: L=22.92cm W=16.06cm H=6.68cm | points=18 density=7318.47/m3
     Shape: planarity=0.6524 flatness=0.2913 thickness=22.92cm spread=15.99cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 37 (radar 3919) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0338m Y=+0.9408m Z=+0.3111m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0921,+0.1429,+0.1978)m/s
     Sensor side info (raw): SNR mean=265.733 min=136 peak=325 | Noise mean=537.000
     Geometry estimate: L=16.70cm W=10.58cm H=6.68cm | points=15 density=12694.40/m3
     Shape: planarity=0.6315 flatness=0.3997 thickness=10.58cm spread=9.14cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 38 (radar 3920) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9397m Z=+0.3152m | Range=0.9916m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0429,-0.0114,+0.0408)m/s
     Sensor side info (raw): SNR mean=265.600 min=135 peak=324 | Noise mean=536.733
     Geometry estimate: L=15.65cm W=10.91cm H=6.68cm | points=15 density=13137.24/m3
     Shape: planarity=0.6303 flatness=0.4266 thickness=10.91cm spread=9.19cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3741 | threshold=0.25

=================================================
Frame 39 (radar 3921) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9269m Z=+0.2899m | Range=0.9716m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0154,-0.1274,-0.2529)m/s
     Sensor side info (raw): SNR mean=252.167 min=135 peak=328 | Noise mean=527.056
     Geometry estimate: L=21.94cm W=17.37cm H=6.68cm | points=18 density=7070.26/m3
     Shape: planarity=0.6191 flatness=0.3043 thickness=21.94cm spread=15.39cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 40 (radar 3922) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9393m Z=+0.3163m | Range=0.9916m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0154,+0.1237,+0.2640)m/s
     Sensor side info (raw): SNR mean=266.000 min=135 peak=326 | Noise mean=535.667
     Geometry estimate: L=15.59cm W=11.05cm H=6.68cm | points=15 density=13019.39/m3
     Shape: planarity=0.6288 flatness=0.4282 thickness=11.05cm spread=9.24cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 41 (radar 3923) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9396m Z=+0.3154m | Range=0.9916m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0028,-0.0090)m/s
     Sensor side info (raw): SNR mean=267.400 min=137 peak=328 | Noise mean=534.800
     Geometry estimate: L=15.74cm W=11.51cm H=6.68cm | points=15 density=12390.46/m3
     Shape: planarity=0.6292 flatness=0.4242 thickness=11.51cm spread=9.43cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3742 | threshold=0.25

=================================================
Frame 42 (radar 3924) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9271m Z=+0.2892m | Range=0.9715m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0306,-0.1248,-0.2618)m/s
     Sensor side info (raw): SNR mean=248.278 min=131 peak=322 | Noise mean=531.111
     Geometry estimate: L=22.56cm W=17.04cm H=6.68cm | points=18 density=7009.70/m3
     Shape: planarity=0.6093 flatness=0.2960 thickness=22.56cm spread=15.55cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3740 | threshold=0.25

=================================================
Frame 43 (radar 3925) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9273m Z=+0.2883m | Range=0.9715m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0159,+0.0017,-0.0095)m/s
     Sensor side info (raw): SNR mean=256.059 min=138 peak=325 | Noise mean=527.611
     Geometry estimate: L=20.08cm W=17.12cm H=6.68cm | points=17 density=7402.68/m3
     Shape: planarity=0.6214 flatness=0.3326 thickness=20.08cm spread=14.57cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 44 (radar 3926) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9410m Z=+0.3107m | Range=0.9915m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0370,+0.1372,+0.2241)m/s
     Sensor side info (raw): SNR mean=267.267 min=139 peak=326 | Noise mean=535.733
     Geometry estimate: L=16.82cm W=10.69cm H=6.68cm | points=15 density=12484.08/m3
     Shape: planarity=0.5992 flatness=0.3971 thickness=10.69cm spread=9.46cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3729 | threshold=0.25

=================================================
Frame 45 (radar 3927) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9406m Z=+0.3119m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0039,+0.0122)m/s
     Sensor side info (raw): SNR mean=265.733 min=135 peak=326 | Noise mean=536.467
     Geometry estimate: L=16.69cm W=11.03cm H=6.68cm | points=15 density=12188.31/m3
     Shape: planarity=0.5960 flatness=0.4000 thickness=11.03cm spread=9.30cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 46 (radar 3928) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9271m Z=+0.2893m | Range=0.9715m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0529,-0.1351,-0.2260)m/s
     Sensor side info (raw): SNR mean=250.111 min=135 peak=325 | Noise mean=528.389
     Geometry estimate: L=22.27cm W=17.15cm H=6.68cm | points=18 density=7057.81/m3
     Shape: planarity=0.6062 flatness=0.2999 thickness=22.27cm spread=15.67cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3733 | threshold=0.25

=================================================
Frame 47 (radar 3929) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0316m Y=+0.9397m Z=+0.3150m | Range=0.9916m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0513,+0.1260,+0.2571)m/s
     Sensor side info (raw): SNR mean=265.333 min=135 peak=326 | Noise mean=536.400
     Geometry estimate: L=15.49cm W=10.93cm H=6.68cm | points=15 density=13252.88/m3
     Shape: planarity=0.6617 flatness=0.4309 thickness=10.93cm spread=9.14cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3735 | threshold=0.25

=================================================
Frame 48 (radar 3930) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9409m Z=+0.3110m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0016,+0.0124,-0.0400)m/s
     Sensor side info (raw): SNR mean=266.600 min=137 peak=325 | Noise mean=536.133
     Geometry estimate: L=16.76cm W=10.09cm H=6.68cm | points=15 density=13267.41/m3
     Shape: planarity=0.6001 flatness=0.3984 thickness=10.09cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3735 | threshold=0.25

=================================================
Frame 49 (radar 3931) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9266m Z=+0.2916m | Range=0.9717m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0714,-0.1435,-0.1946)m/s
     Sensor side info (raw): SNR mean=249.833 min=131 peak=324 | Noise mean=529.444
     Geometry estimate: L=21.48cm W=16.27cm H=6.68cm | points=18 density=7711.47/m3
     Shape: planarity=0.6370 flatness=0.3108 thickness=21.48cm spread=15.39cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3727 | threshold=0.25

=================================================
Frame 50 (radar 3932) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9263m Z=+0.2919m | Range=0.9716m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0311,-0.0030,+0.0034)m/s
     Sensor side info (raw): SNR mean=252.667 min=137 peak=328 | Noise mean=526.000
     Geometry estimate: L=23.51cm W=16.33cm H=6.68cm | points=18 density=7021.19/m3
     Shape: planarity=0.6871 flatness=0.2841 thickness=23.51cm spread=16.38cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3723 | threshold=0.25

=================================================
Frame 51 (radar 3933) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9409m Z=+0.3110m | Range=0.9915m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0403,+0.1462,+0.1909)m/s
     Sensor side info (raw): SNR mean=266.800 min=139 peak=326 | Noise mean=536.400
     Geometry estimate: L=16.86cm W=10.36cm H=6.68cm | points=15 density=12847.49/m3
     Shape: planarity=0.6007 flatness=0.3961 thickness=10.36cm spread=9.44cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3721 | threshold=0.25

=================================================
Frame 52 (radar 3934) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0260m Y=+0.9301m Z=+0.3001m | Range=0.9777m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(+0.0570,-0.1079,-0.1087)m/s
     Sensor side info (raw): SNR mean=254.412 min=133 peak=324 | Noise mean=531.706
     Geometry estimate: L=18.88cm W=16.32cm H=6.68cm | points=17 density=8257.56/m3
     Shape: planarity=0.6377 flatness=0.3536 thickness=18.88cm spread=14.18cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3722 | threshold=0.25

=================================================
Frame 53 (radar 3935) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9270m Z=+0.2898m | Range=0.9717m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0352,-0.0314,-0.1034)m/s
     Sensor side info (raw): SNR mean=251.444 min=138 peak=326 | Noise mean=527.167
     Geometry estimate: L=22.13cm W=17.60cm H=6.68cm | points=18 density=6917.24/m3
     Shape: planarity=0.6387 flatness=0.3018 thickness=22.13cm spread=15.51cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3712 | threshold=0.25

=================================================
Frame 54 (radar 3936) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9394m Z=+0.3159m | Range=0.9916m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0005,+0.1248,+0.2611)m/s
     Sensor side info (raw): SNR mean=263.200 min=131 peak=323 | Noise mean=538.667
     Geometry estimate: L=15.50cm W=10.87cm H=6.68cm | points=15 density=13323.06/m3
     Shape: planarity=0.6285 flatness=0.4309 thickness=10.87cm spread=9.17cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3723 | threshold=0.25

=================================================
Frame 55 (radar 3937) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0256m Y=+0.9338m Z=+0.3089m | Range=0.9839m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0393,-0.0567,-0.0698)m/s
     Sensor side info (raw): SNR mean=265.000 min=131 peak=325 | Noise mean=532.688
     Geometry estimate: L=15.66cm W=11.56cm H=6.68cm | points=15 density=12404.61/m3
     Shape: planarity=0.6752 flatness=0.4264 thickness=11.56cm spread=9.41cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3732 | threshold=0.25

=================================================
Frame 56 (radar 3938) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9267m Z=+0.2908m | Range=0.9717m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0246,-0.0708,-0.1810)m/s
     Sensor side info (raw): SNR mean=249.389 min=131 peak=323 | Noise mean=529.778
     Geometry estimate: L=22.09cm W=17.28cm H=6.68cm | points=18 density=7059.07/m3
     Shape: planarity=0.6182 flatness=0.3023 thickness=22.09cm spread=15.23cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3737 | threshold=0.25

=================================================
Frame 57 (radar 3939) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9268m Z=+0.2902m | Range=0.9717m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0152,+0.0014,-0.0067)m/s
     Sensor side info (raw): SNR mean=250.222 min=135 peak=325 | Noise mean=528.222
     Geometry estimate: L=22.76cm W=17.60cm H=6.68cm | points=18 density=6725.77/m3
     Shape: planarity=0.6381 flatness=0.2933 thickness=22.76cm spread=15.84cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3732 | threshold=0.25

=================================================
Frame 58 (radar 3940) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9251m Z=+0.2967m | Range=0.9718m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0497,-0.0172,+0.0652)m/s
     Sensor side info (raw): SNR mean=250.000 min=136 peak=326 | Noise mean=528.389
     Geometry estimate: L=21.56cm W=16.46cm H=6.68cm | points=18 density=7589.92/m3
     Shape: planarity=0.6347 flatness=0.3097 thickness=21.56cm spread=14.73cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3723 | threshold=0.25

=================================================
Frame 59 (radar 3941) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9271m Z=+0.2893m | Range=0.9716m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0344,+0.0197,-0.0742)m/s
     Sensor side info (raw): SNR mean=250.167 min=134 peak=326 | Noise mean=528.667
     Geometry estimate: L=22.67cm W=17.05cm H=6.68cm | points=18 density=6971.84/m3
     Shape: planarity=0.6227 flatness=0.2946 thickness=22.67cm spread=15.65cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3721 | threshold=0.25

=================================================
Frame 60 (radar 3942) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9314m Z=+0.2943m | Range=0.9772m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0004,+0.0429,+0.0503)m/s
     Sensor side info (raw): SNR mean=259.062 min=135 peak=324 | Noise mean=533.176
     Geometry estimate: L=20.04cm W=16.57cm H=6.68cm | points=16 density=7214.32/m3
     Shape: planarity=0.5959 flatness=0.3332 thickness=20.04cm spread=15.17cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3718 | threshold=0.25

=================================================
Frame 61 (radar 3943) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9298m Z=+0.3004m | Range=0.9775m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0028,-0.0159,+0.0614)m/s
     Sensor side info (raw): SNR mean=253.588 min=131 peak=326 | Noise mean=532.353
     Geometry estimate: L=20.93cm W=15.60cm H=6.68cm | points=17 density=7793.81/m3
     Shape: planarity=0.6479 flatness=0.3190 thickness=20.93cm spread=14.96cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3707 | threshold=0.25

=================================================
Frame 62 (radar 3944) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9404m Z=+0.3125m | Range=0.9915m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0401,+0.1063,+0.1204)m/s
     Sensor side info (raw): SNR mean=266.000 min=138 peak=326 | Noise mean=536.467
     Geometry estimate: L=16.73cm W=10.76cm H=6.68cm | points=15 density=12469.64/m3
     Shape: planarity=0.5976 flatness=0.3990 thickness=10.76cm spread=9.23cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3715 | threshold=0.25

=================================================
Frame 63 (radar 3945) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9407m Z=+0.3117m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0023,-0.0072)m/s
     Sensor side info (raw): SNR mean=265.600 min=137 peak=325 | Noise mean=537.200
     Geometry estimate: L=16.84cm W=10.54cm H=6.68cm | points=15 density=12649.79/m3
     Shape: planarity=0.5995 flatness=0.3966 thickness=10.54cm spread=9.39cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3715 | threshold=0.25

=================================================
Frame 64 (radar 3946) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9299m Z=+0.3000m | Range=0.9775m
     Range-profile relative power: 100.85 dB at 0.9920m | raw=3792 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0401,-0.1077,-0.1173)m/s
     Sensor side info (raw): SNR mean=255.882 min=134 peak=327 | Noise mean=530.529
     Geometry estimate: L=21.23cm W=15.63cm H=6.68cm | points=17 density=7668.32/m3
     Shape: planarity=0.6485 flatness=0.3145 thickness=21.23cm spread=15.27cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3709 | threshold=0.25

=================================================
Frame 65 (radar 3947) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9272m Z=+0.2891m | Range=0.9716m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0127,-0.0272,-0.1088)m/s
     Sensor side info (raw): SNR mean=251.056 min=137 peak=326 | Noise mean=527.833
     Geometry estimate: L=22.49cm W=17.09cm H=6.68cm | points=18 density=7011.42/m3
     Shape: planarity=0.6055 flatness=0.2969 thickness=22.49cm spread=15.34cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3700 | threshold=0.25

=================================================
Frame 66 (radar 3948) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0314m Y=+0.9350m Z=+0.3161m | Range=0.9875m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0254m/s peak=0.1207m/s | Track velocity=(-0.0501,+0.0781,+0.2702)m/s
     Sensor side info (raw): SNR mean=267.632 min=133 peak=326 | Noise mean=499.421
     Geometry estimate: L=16.88cm W=11.15cm H=6.68cm | points=19 density=15099.50/m3
     Shape: planarity=0.6360 flatness=0.3955 thickness=11.15cm spread=9.92cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3699 | threshold=0.25

=================================================
Frame 67 (radar 3949) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9273m Z=+0.2882m | Range=0.9715m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0190,-0.0769,-0.2797)m/s
     Sensor side info (raw): SNR mean=256.706 min=138 peak=326 | Noise mean=526.889
     Geometry estimate: L=20.31cm W=17.27cm H=6.68cm | points=17 density=7255.96/m3
     Shape: planarity=0.6446 flatness=0.3288 thickness=20.31cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3694 | threshold=0.25

=================================================
Frame 68 (radar 3950) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0269m Y=+0.9247m Z=+0.3128m | Range=0.9766m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0259m/s peak=0.1207m/s | Track velocity=(+0.0269,-0.0254,+0.2459)m/s
     Sensor side info (raw): SNR mean=257.381 min=131 peak=328 | Noise mean=495.810
     Geometry estimate: L=19.09cm W=16.42cm H=6.68cm | points=21 density=10029.51/m3
     Shape: planarity=0.6593 flatness=0.3498 thickness=19.09cm spread=14.18cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3734 | threshold=0.25

=================================================
Frame 69 (radar 3951) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0335m Y=+0.9358m Z=+0.3014m | Range=0.9837m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0660,+0.1108,-0.1137)m/s
     Sensor side info (raw): SNR mean=267.200 min=138 peak=326 | Noise mean=531.500
     Geometry estimate: L=16.54cm W=12.02cm H=6.68cm | points=15 density=11294.13/m3
     Shape: planarity=0.6666 flatness=0.4038 thickness=12.02cm spread=9.30cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 70 (radar 3952) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9273m Z=+0.2883m | Range=0.9715m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0544,-0.0852,-0.1305)m/s
     Sensor side info (raw): SNR mean=250.389 min=136 peak=326 | Noise mean=529.444
     Geometry estimate: L=22.83cm W=17.04cm H=6.68cm | points=18 density=6924.07/m3
     Shape: planarity=0.6306 flatness=0.2925 thickness=22.83cm spread=15.89cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3748 | threshold=0.25

=================================================
Frame 71 (radar 3953) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9252m Z=+0.2963m | Range=0.9718m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0344,-0.0211,+0.0797)m/s
     Sensor side info (raw): SNR mean=249.222 min=132 peak=325 | Noise mean=528.722
     Geometry estimate: L=22.14cm W=16.41cm H=6.68cm | points=18 density=7414.70/m3
     Shape: planarity=0.6320 flatness=0.3016 thickness=22.14cm spread=14.67cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 72 (radar 3954) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9358m Z=+0.3021m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0516,+0.1060,+0.0578)m/s
     Sensor side info (raw): SNR mean=265.933 min=139 peak=325 | Noise mean=533.000
     Geometry estimate: L=16.79cm W=10.62cm H=6.68cm | points=15 density=12582.33/m3
     Shape: planarity=0.5991 flatness=0.3977 thickness=10.62cm spread=9.34cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 73 (radar 3955) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9359m Z=+0.3018m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0194,+0.0006,-0.0033)m/s
     Sensor side info (raw): SNR mean=267.333 min=139 peak=325 | Noise mean=531.625
     Geometry estimate: L=16.59cm W=11.00cm H=6.68cm | points=15 density=12300.82/m3
     Shape: planarity=0.6285 flatness=0.4024 thickness=11.00cm spread=9.18cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3746 | threshold=0.25

=================================================
Frame 74 (radar 3956) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0262m Y=+0.9252m Z=+0.2962m | Range=0.9718m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0551,-0.1063,-0.0555)m/s
     Sensor side info (raw): SNR mean=249.333 min=131 peak=325 | Noise mean=528.833
     Geometry estimate: L=21.63cm W=16.39cm H=6.68cm | points=18 density=7604.38/m3
     Shape: planarity=0.6483 flatness=0.3088 thickness=21.63cm spread=14.71cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3734 | threshold=0.25

=================================================
Frame 75 (radar 3957) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9358m Z=+0.3019m | Range=0.9837m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0357,+0.1060,+0.0565)m/s
     Sensor side info (raw): SNR mean=266.667 min=136 peak=326 | Noise mean=531.875
     Geometry estimate: L=16.68cm W=11.06cm H=6.68cm | points=15 density=12165.64/m3
     Shape: planarity=0.5955 flatness=0.4004 thickness=11.06cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3732 | threshold=0.25

=================================================
Frame 76 (radar 3958) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9272m Z=+0.2888m | Range=0.9715m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0171,-0.0866,-0.1305)m/s
     Sensor side info (raw): SNR mean=252.167 min=138 peak=327 | Noise mean=527.333
     Geometry estimate: L=23.10cm W=17.12cm H=6.68cm | points=18 density=6812.78/m3
     Shape: planarity=0.6308 flatness=0.2890 thickness=23.10cm spread=15.93cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3729 | threshold=0.25

=================================================
Frame 77 (radar 3959) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0262m Y=+0.9255m Z=+0.2952m | Range=0.9717m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0185,-0.0171,+0.0639)m/s
     Sensor side info (raw): SNR mean=248.833 min=131 peak=324 | Noise mean=529.833
     Geometry estimate: L=22.03cm W=16.18cm H=6.68cm | points=18 density=7558.33/m3
     Shape: planarity=0.6504 flatness=0.3031 thickness=22.03cm spread=15.03cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3728 | threshold=0.25

=================================================
Frame 78 (radar 3960) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9359m Z=+0.3020m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0357,+0.1041,+0.0677)m/s
     Sensor side info (raw): SNR mean=268.467 min=142 peak=328 | Noise mean=530.625
     Geometry estimate: L=16.73cm W=10.68cm H=6.68cm | points=15 density=12558.21/m3
     Shape: planarity=0.5980 flatness=0.3991 thickness=10.68cm spread=9.29cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 79 (radar 3961) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0282m Y=+0.9271m Z=+0.2890m | Range=0.9715m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0158,-0.0874,-0.1296)m/s
     Sensor side info (raw): SNR mean=250.167 min=137 peak=325 | Noise mean=528.222
     Geometry estimate: L=22.64cm W=17.03cm H=6.68cm | points=18 density=6991.37/m3
     Shape: planarity=0.6264 flatness=0.2950 thickness=22.64cm spread=15.72cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 80 (radar 3962) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9299m Z=+0.2997m | Range=0.9774m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0045,+0.0282,+0.1070)m/s
     Sensor side info (raw): SNR mean=255.824 min=137 peak=327 | Noise mean=530.059
     Geometry estimate: L=21.68cm W=15.62cm H=6.68cm | points=17 density=7511.79/m3
     Shape: planarity=0.6474 flatness=0.3079 thickness=21.68cm spread=15.54cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3726 | threshold=0.25

=================================================
Frame 81 (radar 3963) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9272m Z=+0.2888m | Range=0.9715m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0127,-0.0276,-0.1089)m/s
     Sensor side info (raw): SNR mean=251.222 min=137 peak=328 | Noise mean=528.000
     Geometry estimate: L=22.85cm W=17.06cm H=6.68cm | points=18 density=6914.35/m3
     Shape: planarity=0.6132 flatness=0.2922 thickness=22.85cm spread=15.79cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3725 | threshold=0.25

=================================================
Frame 82 (radar 3964) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9404m Z=+0.3126m | Range=0.9915m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1319,+0.2379)m/s
     Sensor side info (raw): SNR mean=266.400 min=136 peak=327 | Noise mean=536.467
     Geometry estimate: L=16.67cm W=10.97cm H=6.68cm | points=15 density=12271.19/m3
     Shape: planarity=0.5959 flatness=0.4005 thickness=10.97cm spread=9.22cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3725 | threshold=0.25

=================================================
Frame 83 (radar 3965) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9266m Z=+0.2913m | Range=0.9717m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0370,-0.1378,-0.2136)m/s
     Sensor side info (raw): SNR mean=250.278 min=135 peak=327 | Noise mean=528.333
     Geometry estimate: L=21.66cm W=17.29cm H=6.68cm | points=18 density=7194.46/m3
     Shape: planarity=0.6185 flatness=0.3082 thickness=21.66cm spread=14.94cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3720 | threshold=0.25

=================================================
Frame 84 (radar 3966) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9358m Z=+0.3020m | Range=0.9838m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0171,+0.0919,+0.1079)m/s
     Sensor side info (raw): SNR mean=267.333 min=138 peak=326 | Noise mean=531.250
     Geometry estimate: L=16.70cm W=10.87cm H=6.68cm | points=15 density=12366.34/m3
     Shape: planarity=0.5966 flatness=0.3999 thickness=10.87cm spread=9.23cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3729 | threshold=0.25

=================================================
Frame 85 (radar 3967) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9357m Z=+0.3024m | Range=0.9838m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0008,+0.0034)m/s
     Sensor side info (raw): SNR mean=268.733 min=140 peak=330 | Noise mean=529.750
     Geometry estimate: L=16.71cm W=10.79cm H=6.68cm | points=15 density=12452.90/m3
     Shape: planarity=0.5970 flatness=0.3997 thickness=10.79cm spread=9.25cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 86 (radar 3968) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9271m Z=+0.2890m | Range=0.9715m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0171,-0.0856,-0.1342)m/s
     Sensor side info (raw): SNR mean=250.000 min=136 peak=325 | Noise mean=528.889
     Geometry estimate: L=22.74cm W=17.15cm H=6.68cm | points=18 density=6907.83/m3
     Shape: planarity=0.6265 flatness=0.2936 thickness=22.74cm spread=15.88cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 87 (radar 3969) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9308m Z=+0.2973m | Range=0.9775m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(+0.0004,+0.0367,+0.0831)m/s
     Sensor side info (raw): SNR mean=257.765 min=137 peak=328 | Noise mean=529.000
     Geometry estimate: L=19.97cm W=17.01cm H=6.68cm | points=17 density=7489.54/m3
     Shape: planarity=0.6011 flatness=0.3344 thickness=19.97cm spread=14.43cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 88 (radar 3970) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9404m Z=+0.3124m | Range=0.9915m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0373,+0.0962,+0.1516)m/s
     Sensor side info (raw): SNR mean=266.133 min=136 peak=325 | Noise mean=536.467
     Geometry estimate: L=16.64cm W=11.18cm H=6.68cm | points=15 density=12067.76/m3
     Shape: planarity=0.5950 flatness=0.4013 thickness=11.18cm spread=9.29cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3701 | threshold=0.25

=================================================
Frame 89 (radar 3971) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9271m Z=+0.2890m | Range=0.9715m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0370,-0.1331,-0.2344)m/s
     Sensor side info (raw): SNR mean=251.111 min=136 peak=327 | Noise mean=528.111
     Geometry estimate: L=22.97cm W=17.36cm H=6.68cm | points=18 density=6760.21/m3
     Shape: planarity=0.6272 flatness=0.2908 thickness=22.97cm spread=15.89cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3692 | threshold=0.25

=================================================
Frame 90 (radar 3972) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9273m Z=+0.2882m | Range=0.9715m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0159,+0.0023,-0.0076)m/s
     Sensor side info (raw): SNR mean=253.944 min=140 peak=330 | Noise mean=525.111
     Geometry estimate: L=22.94cm W=16.98cm H=6.68cm | points=18 density=6917.52/m3
     Shape: planarity=0.6166 flatness=0.2910 thickness=22.94cm spread=15.83cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3692 | threshold=0.25

=================================================
Frame 91 (radar 3973) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3123m | Range=0.9915m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1314,+0.2404)m/s
     Sensor side info (raw): SNR mean=265.800 min=136 peak=324 | Noise mean=536.533
     Geometry estimate: L=16.66cm W=10.91cm H=6.68cm | points=15 density=12357.82/m3
     Shape: planarity=0.5960 flatness=0.4009 thickness=10.91cm spread=9.22cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3702 | threshold=0.25

=================================================
Frame 92 (radar 3974) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9316m Z=+0.2933m | Range=0.9771m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0205,-0.0888,-0.1899)m/s
     Sensor side info (raw): SNR mean=260.125 min=135 peak=325 | Noise mean=531.765
     Geometry estimate: L=20.03cm W=16.77cm H=6.68cm | points=16 density=7130.66/m3
     Shape: planarity=0.6230 flatness=0.3334 thickness=20.03cm spread=15.28cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3702 | threshold=0.25

=================================================
Frame 93 (radar 3975) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9272m Z=+0.2892m | Range=0.9716m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0324,-0.0445,-0.0403)m/s
     Sensor side info (raw): SNR mean=251.056 min=137 peak=326 | Noise mean=527.889
     Geometry estimate: L=21.91cm W=17.11cm H=6.68cm | points=18 density=7187.40/m3
     Shape: planarity=0.6017 flatness=0.3048 thickness=21.91cm spread=15.24cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3696 | threshold=0.25

=================================================
Frame 94 (radar 3976) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3121m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1337,+0.2289)m/s
     Sensor side info (raw): SNR mean=267.600 min=140 peak=327 | Noise mean=535.067
     Geometry estimate: L=16.70cm W=10.67cm H=6.68cm | points=15 density=12591.57/m3
     Shape: planarity=0.5974 flatness=0.3998 thickness=10.67cm spread=9.25cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3706 | threshold=0.25

=================================================
Frame 95 (radar 3977) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9315m Z=+0.2937m | Range=0.9772m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0205,-0.0903,-0.1847)m/s
     Sensor side info (raw): SNR mean=261.125 min=137 peak=328 | Noise mean=530.588
     Geometry estimate: L=20.05cm W=16.79cm H=6.68cm | points=16 density=7114.26/m3
     Shape: planarity=0.6231 flatness=0.3331 thickness=20.05cm spread=15.19cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3704 | threshold=0.25

=================================================
Frame 96 (radar 3978) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9273m Z=+0.2890m | Range=0.9716m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0324,-0.0422,-0.0470)m/s
     Sensor side info (raw): SNR mean=251.333 min=139 peak=327 | Noise mean=527.722
     Geometry estimate: L=21.28cm W=17.12cm H=6.68cm | points=18 density=7396.59/m3
     Shape: planarity=0.6028 flatness=0.3137 thickness=21.28cm spread=15.06cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3709 | threshold=0.25

=================================================
Frame 97 (radar 3979) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3123m | Range=0.9915m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1321,+0.2329)m/s
     Sensor side info (raw): SNR mean=265.667 min=137 peak=326 | Noise mean=536.933
     Geometry estimate: L=16.66cm W=10.90cm H=6.68cm | points=15 density=12355.58/m3
     Shape: planarity=0.5962 flatness=0.4007 thickness=10.90cm spread=9.22cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3720 | threshold=0.25

=================================================
Frame 98 (radar 3980) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9359m Z=+0.3015m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0019,-0.0460,-0.1079)m/s
     Sensor side info (raw): SNR mean=266.467 min=136 peak=327 | Noise mean=532.250
     Geometry estimate: L=16.68cm W=11.53cm H=6.68cm | points=15 density=11671.36/m3
     Shape: planarity=0.6281 flatness=0.4004 thickness=11.53cm spread=9.18cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3721 | threshold=0.25

=================================================
Frame 99 (radar 3981) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9306m Z=+0.2983m | Range=0.9777m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(+0.0185,-0.0534,-0.0314)m/s
     Sensor side info (raw): SNR mean=255.882 min=137 peak=325 | Noise mean=530.882
     Geometry estimate: L=18.69cm W=17.32cm H=6.68cm | points=17 density=7861.09/m3
     Shape: planarity=0.6246 flatness=0.3573 thickness=18.69cm spread=13.79cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3733 | threshold=0.25

=================================================
Frame 100 (radar 3982) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9358m Z=+0.3022m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0007,+0.0521,+0.0386)m/s
     Sensor side info (raw): SNR mean=267.667 min=141 peak=326 | Noise mean=531.062
     Geometry estimate: L=16.71cm W=10.75cm H=6.68cm | points=15 density=12492.91/m3
     Shape: planarity=0.5973 flatness=0.3996 thickness=10.75cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3741 | threshold=0.25

=================================================
Frame 101 (radar 3983) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9357m Z=+0.3022m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,-0.0000)m/s
     Sensor side info (raw): SNR mean=265.067 min=133 peak=327 | Noise mean=533.312
     Geometry estimate: L=16.61cm W=11.00cm H=6.68cm | points=15 density=12290.87/m3
     Shape: planarity=0.5949 flatness=0.4021 thickness=11.00cm spread=9.21cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3750 | threshold=0.25

=================================================
Frame 102 (radar 3984) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0246m Y=+0.9254m Z=+0.2958m | Range=0.9718m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0516,-0.1037,-0.0640)m/s
     Sensor side info (raw): SNR mean=250.389 min=135 peak=326 | Noise mean=527.389
     Geometry estimate: L=21.87cm W=16.31cm H=6.68cm | points=18 density=7553.63/m3
     Shape: planarity=0.6324 flatness=0.3053 thickness=21.87cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3741 | threshold=0.25

=================================================
Frame 103 (radar 3985) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9355m Z=+0.3031m | Range=0.9839m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0710,+0.1017,+0.0726)m/s
     Sensor side info (raw): SNR mean=267.667 min=138 peak=328 | Noise mean=530.750
     Geometry estimate: L=16.66cm W=10.82cm H=6.68cm | points=15 density=12455.72/m3
     Shape: planarity=0.6299 flatness=0.4008 thickness=10.82cm spread=9.15cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 104 (radar 3986) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9359m Z=+0.3016m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0036,-0.0143)m/s
     Sensor side info (raw): SNR mean=265.733 min=135 peak=326 | Noise mean=532.688
     Geometry estimate: L=16.61cm W=10.94cm H=6.68cm | points=15 density=12355.52/m3
     Shape: planarity=0.6291 flatness=0.4019 thickness=10.94cm spread=9.18cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3744 | threshold=0.25

=================================================
Frame 105 (radar 3987) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9353m Z=+0.3037m | Range=0.9839m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0015,-0.0055,+0.0208)m/s
     Sensor side info (raw): SNR mean=267.000 min=136 peak=328 | Noise mean=531.438
     Geometry estimate: L=16.63cm W=11.64cm H=6.68cm | points=15 density=11594.85/m3
     Shape: planarity=0.6275 flatness=0.4015 thickness=11.64cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 106 (radar 3988) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9408m Z=+0.3113m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0019,+0.0546,+0.0762)m/s
     Sensor side info (raw): SNR mean=266.533 min=138 peak=326 | Noise mean=536.333
     Geometry estimate: L=16.85cm W=10.39cm H=6.68cm | points=15 density=12822.54/m3
     Shape: planarity=0.6004 flatness=0.3962 thickness=10.39cm spread=9.41cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3750 | threshold=0.25

=================================================
Frame 107 (radar 3989) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0338m Y=+0.9407m Z=+0.3114m | Range=0.9915m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0207,-0.0009,+0.0010)m/s
     Sensor side info (raw): SNR mean=265.600 min=136 peak=325 | Noise mean=537.000
     Geometry estimate: L=16.74cm W=10.78cm H=6.68cm | points=15 density=12433.29/m3
     Shape: planarity=0.6310 flatness=0.3988 thickness=10.78cm spread=9.21cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3747 | threshold=0.25

=================================================
Frame 108 (radar 3990) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0262m Y=+0.9255m Z=+0.2952m | Range=0.9718m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0762,-0.1521,-0.1621)m/s
     Sensor side info (raw): SNR mean=251.444 min=137 peak=327 | Noise mean=526.278
     Geometry estimate: L=21.77cm W=16.36cm H=6.68cm | points=18 density=7563.39/m3
     Shape: planarity=0.6484 flatness=0.3067 thickness=21.77cm spread=14.99cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 109 (radar 3991) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9406m Z=+0.3118m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0555,+0.1514,+0.1660)m/s
     Sensor side info (raw): SNR mean=267.600 min=139 peak=326 | Noise mean=535.067
     Geometry estimate: L=16.78cm W=10.65cm H=6.68cm | points=15 density=12559.53/m3
     Shape: planarity=0.5986 flatness=0.3979 thickness=10.65cm spread=9.32cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3744 | threshold=0.25

=================================================
Frame 110 (radar 3992) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0338m Y=+0.9406m Z=+0.3117m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0207,-0.0001,-0.0014)m/s
     Sensor side info (raw): SNR mean=266.133 min=136 peak=325 | Noise mean=536.600
     Geometry estimate: L=16.77cm W=10.77cm H=6.68cm | points=15 density=12427.45/m3
     Shape: planarity=0.6313 flatness=0.3982 thickness=10.77cm spread=9.23cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3748 | threshold=0.25

=================================================
Frame 111 (radar 3993) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9267m Z=+0.2907m | Range=0.9717m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0576,-0.1391,-0.2096)m/s
     Sensor side info (raw): SNR mean=249.278 min=134 peak=323 | Noise mean=529.611
     Geometry estimate: L=21.85cm W=17.27cm H=6.68cm | points=18 density=7141.45/m3
     Shape: planarity=0.6180 flatness=0.3056 thickness=21.85cm spread=15.00cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 112 (radar 3994) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9267m Z=+0.2910m | Range=0.9717m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0159,-0.0001,+0.0027)m/s
     Sensor side info (raw): SNR mean=252.000 min=137 peak=328 | Noise mean=526.611
     Geometry estimate: L=21.64cm W=17.41cm H=6.68cm | points=18 density=7153.27/m3
     Shape: planarity=0.6046 flatness=0.3086 thickness=21.64cm spread=15.10cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3740 | threshold=0.25

=================================================
Frame 113 (radar 3995) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3124m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0529,+0.1375,+0.2138)m/s
     Sensor side info (raw): SNR mean=266.533 min=138 peak=325 | Noise mean=535.933
     Geometry estimate: L=16.71cm W=10.70cm H=6.68cm | points=15 density=12555.75/m3
     Shape: planarity=0.5973 flatness=0.3997 thickness=10.70cm spread=9.25cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 114 (radar 3996) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9269m Z=+0.2899m | Range=0.9716m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0370,-0.1356,-0.2243)m/s
     Sensor side info (raw): SNR mean=250.611 min=135 peak=324 | Noise mean=528.167
     Geometry estimate: L=21.93cm W=17.09cm H=6.68cm | points=18 density=7190.19/m3
     Shape: planarity=0.6203 flatness=0.3045 thickness=21.93cm spread=15.12cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 115 (radar 3997) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9359m Z=+0.3016m | Range=0.9838m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0171,+0.0903,+0.1166)m/s
     Sensor side info (raw): SNR mean=267.533 min=136 peak=327 | Noise mean=531.250
     Geometry estimate: L=16.78cm W=10.80cm H=6.68cm | points=15 density=12388.75/m3
     Shape: planarity=0.5980 flatness=0.3980 thickness=10.80cm spread=9.33cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3737 | threshold=0.25

=================================================
Frame 116 (radar 3998) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9406m Z=+0.3120m | Range=0.9915m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0198,+0.0463,+0.1046)m/s
     Sensor side info (raw): SNR mean=268.267 min=139 peak=327 | Noise mean=534.000
     Geometry estimate: L=16.76cm W=10.73cm H=6.68cm | points=15 density=12484.90/m3
     Shape: planarity=0.5979 flatness=0.3984 thickness=10.73cm spread=9.33cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 117 (radar 3999) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9268m Z=+0.2902m | Range=0.9716m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0370,-0.1372,-0.2185)m/s
     Sensor side info (raw): SNR mean=251.056 min=136 peak=325 | Noise mean=527.833
     Geometry estimate: L=22.11cm W=17.26cm H=6.68cm | points=18 density=7060.24/m3
     Shape: planarity=0.6177 flatness=0.3020 thickness=22.11cm spread=15.28cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3734 | threshold=0.25

=================================================
Frame 118 (radar 4000) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9271m Z=+0.2895m | Range=0.9717m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0007,+0.0027,-0.0065)m/s
     Sensor side info (raw): SNR mean=251.556 min=137 peak=327 | Noise mean=527.500
     Geometry estimate: L=21.05cm W=17.25cm H=6.68cm | points=18 density=7420.34/m3
     Shape: planarity=0.6194 flatness=0.3172 thickness=21.05cm spread=14.87cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3732 | threshold=0.25

=================================================
Frame 119 (radar 4001) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9314m Z=+0.2948m | Range=0.9773m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(-0.0003,+0.0424,+0.0525)m/s
     Sensor side info (raw): SNR mean=254.118 min=139 peak=324 | Noise mean=532.235
     Geometry estimate: L=21.58cm W=16.79cm H=6.68cm | points=17 density=7024.16/m3
     Shape: planarity=0.6000 flatness=0.3094 thickness=21.58cm spread=15.82cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3725 | threshold=0.25

=================================================
Frame 120 (radar 4002) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0298m Y=+0.9316m Z=+0.2931m | Range=0.9771m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(-0.0182,+0.0029,-0.0167)m/s
     Sensor side info (raw): SNR mean=259.875 min=135 peak=325 | Noise mean=531.882
     Geometry estimate: L=20.27cm W=16.67cm H=6.68cm | points=16 density=7091.08/m3
     Shape: planarity=0.6227 flatness=0.3295 thickness=20.27cm spread=15.39cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3726 | threshold=0.25

=================================================
Frame 121 (radar 4003) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9270m Z=+0.2894m | Range=0.9716m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0026,-0.0462,-0.0374)m/s
     Sensor side info (raw): SNR mean=250.944 min=137 peak=326 | Noise mean=527.944
     Geometry estimate: L=22.37cm W=17.15cm H=6.68cm | points=18 density=7024.28/m3
     Shape: planarity=0.6422 flatness=0.2985 thickness=22.37cm spread=15.59cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3717 | threshold=0.25

=================================================
Frame 122 (radar 4004) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3121m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0217,+0.1351,+0.2275)m/s
     Sensor side info (raw): SNR mean=265.467 min=136 peak=324 | Noise mean=536.867
     Geometry estimate: L=16.71cm W=10.94cm H=6.68cm | points=15 density=12278.66/m3
     Shape: planarity=0.5965 flatness=0.3996 thickness=10.94cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3725 | threshold=0.25

=================================================
Frame 123 (radar 4005) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0282m Y=+0.9271m Z=+0.2893m | Range=0.9716m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0356,-0.1348,-0.2278)m/s
     Sensor side info (raw): SNR mean=252.333 min=136 peak=327 | Noise mean=526.333
     Geometry estimate: L=22.32cm W=17.06cm H=6.68cm | points=18 density=7075.21/m3
     Shape: planarity=0.6228 flatness=0.2992 thickness=22.32cm spread=15.45cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3719 | threshold=0.25

=================================================
Frame 124 (radar 4006) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9268m Z=+0.2904m | Range=0.9717m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0013,-0.0023,+0.0106)m/s
     Sensor side info (raw): SNR mean=250.000 min=135 peak=323 | Noise mean=528.944
     Geometry estimate: L=21.47cm W=17.26cm H=6.68cm | points=18 density=7271.22/m3
     Shape: planarity=0.6190 flatness=0.3110 thickness=21.47cm spread=15.00cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3715 | threshold=0.25

=================================================
Frame 125 (radar 4007) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3121m | Range=0.9915m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0370,+0.1372,+0.2172)m/s
     Sensor side info (raw): SNR mean=265.333 min=137 peak=324 | Noise mean=537.200
     Geometry estimate: L=16.62cm W=11.03cm H=6.68cm | points=15 density=12248.42/m3
     Shape: planarity=0.5951 flatness=0.4018 thickness=11.03cm spread=9.26cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3715 | threshold=0.25

=================================================
Frame 126 (radar 4008) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9406m Z=+0.3119m | Range=0.9915m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0009,-0.0027)m/s
     Sensor side info (raw): SNR mean=266.600 min=136 peak=326 | Noise mean=535.933
     Geometry estimate: L=16.78cm W=10.40cm H=6.68cm | points=15 density=12859.95/m3
     Shape: planarity=0.5994 flatness=0.3979 thickness=10.40cm spread=9.31cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3715 | threshold=0.25

=================================================
Frame 127 (radar 4009) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9405m Z=+0.3124m | Range=0.9915m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0018,+0.0052)m/s
     Sensor side info (raw): SNR mean=267.800 min=137 peak=327 | Noise mean=534.467
     Geometry estimate: L=16.75cm W=10.66cm H=6.68cm | points=15 density=12572.33/m3
     Shape: planarity=0.5982 flatness=0.3986 thickness=10.66cm spread=9.27cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3717 | threshold=0.25

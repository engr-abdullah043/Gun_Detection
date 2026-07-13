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
✓ Components initialized (Free heap: 265 KB)
Loaded 3 calibrated objects
✓ Calibration loaded successfully

=================================================
🔧 ENHANCED FEATURES:
   • Ghost Point Rejection (min 6 points)
   • Quality Validation (SNR, density, coherence)
   • Requires 6 consecutive valid detections
   • Requires 10 stable frames for confident ID
=================================================
READY - Press button on GPIO4 to START/STOP
System is OFF. Press button to begin detection.
=================================================


🟢 SYSTEM STARTED - Detection active

=================================================
Frame 1 (radar 4113) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0048m Y=+1.0251m Z=+0.2871m | Range=1.0645m
     Range-profile relative power: 92.79 dB at 1.0301m | raw=3535 (relative, not dBm)
     Radial velocity estimate: mean=+0.0075m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=127.133 min=111 peak=148 | Noise mean=635.625
     Geometry estimate: L=16.20cm W=14.06cm H=3.58cm | points=15 density=18383.04/m3
     Shape: planarity=0.6923 flatness=0.2208 thickness=14.06cm spread=9.72cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 4114) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0245m Z=+0.2999m | Range=1.0676m
     Range-profile relative power: 92.25 dB at 1.0301m | raw=3518 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0700,-0.0059,+0.1282)m/s
     Sensor side info (raw): SNR mean=124.200 min=107 peak=147 | Noise mean=645.533
     Geometry estimate: L=15.09cm W=14.17cm H=7.15cm | points=15 density=9798.05/m3
     Shape: planarity=0.5408 flatness=0.4742 thickness=15.09cm spread=10.18cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 4115) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0170m Z=+0.3238m | Range=1.0674m
     Range-profile relative power: 92.72 dB at 1.0301m | raw=3533 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0238,-0.0749,+0.2391)m/s
     Sensor side info (raw): SNR mean=121.200 min=105 peak=142 | Noise mean=651.800
     Geometry estimate: L=18.45cm W=14.92cm H=3.58cm | points=15 density=15220.59/m3
     Shape: planarity=0.6983 flatness=0.1939 thickness=18.45cm spread=11.34cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 4116) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0264m Z=+0.2944m | Range=1.0678m
     Range-profile relative power: 92.41 dB at 1.0301m | raw=3523 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0231,+0.0942,-0.2940)m/s
     Sensor side info (raw): SNR mean=120.200 min=108 peak=140 | Noise mean=649.533
     Geometry estimate: L=16.13cm W=13.55cm H=3.58cm | points=15 density=19172.21/m3
     Shape: planarity=0.7148 flatness=0.2218 thickness=13.55cm spread=9.33cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 5 (radar 4117) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0109m Y=+1.0383m Z=+0.2950m | Range=1.0794m
     Range-profile relative power: 92.22 dB at 1.0301m | raw=3517 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(+0.0376,+0.1185,+0.0061)m/s
     Sensor side info (raw): SNR mean=117.308 min=105 peak=133 | Noise mean=649.769
     Geometry estimate: L=14.70cm W=14.50cm H=3.58cm | points=13 density=17019.94/m3
     Shape: planarity=0.6222 flatness=0.2433 thickness=14.50cm spread=9.98cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 6 (radar 4118) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0208m Y=+1.0274m Z=+0.2899m | Range=1.0677m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0991,-0.1092,-0.0509)m/s
     Sensor side info (raw): SNR mean=122.267 min=109 peak=138 | Noise mean=646.200
     Geometry estimate: L=15.49cm W=15.36cm H=7.15cm | points=15 density=8807.16/m3
     Shape: planarity=0.5549 flatness=0.4617 thickness=15.36cm spread=10.61cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3218 | threshold=0.25

=================================================
Frame 7 (radar 4119) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0323m Z=+0.2731m | Range=1.0678m
     Range-profile relative power: 92.47 dB at 1.0301m | raw=3525 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.1367,+0.0489,-0.1681)m/s
     Sensor side info (raw): SNR mean=123.000 min=108 peak=141 | Noise mean=648.400
     Geometry estimate: L=16.65cm W=11.75cm H=3.58cm | points=15 density=21402.85/m3
     Shape: planarity=0.7303 flatness=0.2149 thickness=11.75cm spread=9.59cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3108 | threshold=0.25

=================================================
Frame 8 (radar 4120) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0049m Y=+1.0213m Z=+0.3120m | Range=1.0679m
     Range-profile relative power: 92.91 dB at 1.0301m | raw=3539 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0223,-0.1098,+0.3886)m/s
     Sensor side info (raw): SNR mean=126.600 min=110 peak=147 | Noise mean=646.467
     Geometry estimate: L=16.18cm W=12.14cm H=6.92cm | points=15 density=11032.32/m3
     Shape: planarity=0.6570 flatness=0.4273 thickness=12.14cm spread=8.92cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3174 | threshold=0.25

=================================================
Frame 9 (radar 4121) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0049m Y=+1.0209m Z=+0.3130m | Range=1.0678m
     Range-profile relative power: 92.91 dB at 1.0301m | raw=3539 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0042,+0.0101)m/s
     Sensor side info (raw): SNR mean=127.600 min=114 peak=145 | Noise mean=646.600
     Geometry estimate: L=15.78cm W=14.40cm H=6.92cm | points=15 density=9539.87/m3
     Shape: planarity=0.6466 flatness=0.4382 thickness=14.40cm spread=9.60cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3252 | threshold=0.25

=================================================
Frame 10 (radar 4122) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0049m Y=+1.0197m Z=+0.3168m | Range=1.0678m
     Range-profile relative power: 92.82 dB at 1.0301m | raw=3536 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0113,+0.0384)m/s
     Sensor side info (raw): SNR mean=123.867 min=108 peak=145 | Noise mean=648.667
     Geometry estimate: L=16.25cm W=12.38cm H=6.92cm | points=15 density=10771.45/m3
     Shape: planarity=0.6585 flatness=0.4256 thickness=12.38cm spread=9.41cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3286 | threshold=0.25

=================================================
Frame 11 (radar 4123) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0028m Y=+1.0100m Z=+0.3086m | Range=1.0560m
     Range-profile relative power: 92.69 dB at 1.0301m | raw=3532 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(-0.0218,-0.0977,-0.0825)m/s
     Sensor side info (raw): SNR mean=123.923 min=105 peak=141 | Noise mean=651.231
     Geometry estimate: L=14.08cm W=13.03cm H=3.58cm | points=13 density=19771.38/m3
     Shape: planarity=0.7864 flatness=0.2541 thickness=13.03cm spread=9.76cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3233 | threshold=0.25

=================================================
Frame 12 (radar 4124) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0353m Z=+0.2616m | Range=1.0679m
     Range-profile relative power: 92.54 dB at 1.0301m | raw=3527 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1132,+0.2532,-0.4698)m/s
     Sensor side info (raw): SNR mean=124.133 min=107 peak=144 | Noise mean=644.933
     Geometry estimate: L=16.54cm W=9.10cm H=3.58cm | points=15 density=27818.62/m3
     Shape: planarity=0.6782 flatness=0.2163 thickness=9.10cm spread=8.78cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

=================================================
Frame 13 (radar 4125) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0367m Z=+0.2555m | Range=1.0678m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0144,-0.0607)m/s
     Sensor side info (raw): SNR mean=121.000 min=106 peak=139 | Noise mean=644.067
     Geometry estimate: L=16.63cm W=10.58cm H=3.58cm | points=15 density=23791.18/m3
     Shape: planarity=0.6752 flatness=0.2151 thickness=10.58cm spread=9.13cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 14 (radar 4127) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0030m Y=+1.0050m Z=+0.2813m | Range=1.0437m
     Range-profile relative power: 92.22 dB at 1.0301m | raw=3517 (relative, not dBm)
     Radial velocity estimate: mean=+0.0055m/s peak=0.0604m/s | Track velocity=(-0.0304,+0.0861,+0.2124)m/s
     Sensor side info (raw): SNR mean=125.636 min=105 peak=143 | Noise mean=652.636
     Geometry estimate: L=12.32cm W=9.33cm H=3.34cm | points=11 density=28584.35/m3
     Shape: planarity=0.7559 flatness=0.2709 thickness=9.33cm spread=6.74cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 15 (radar 4128) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0047m Y=+1.0245m Z=+0.2762m | Range=1.0611m
     Range-profile relative power: 92.35 dB at 1.0301m | raw=3521 (relative, not dBm)
     Radial velocity estimate: mean=-0.0079m/s peak=0.1207m/s | Track velocity=(+0.0770,+0.1949,-0.0514)m/s
     Sensor side info (raw): SNR mean=131.174 min=107 peak=167 | Noise mean=588.826
     Geometry estimate: L=16.22cm W=11.26cm H=3.58cm | points=23 density=35143.18/m3
     Shape: planarity=0.7640 flatness=0.2206 thickness=11.26cm spread=9.63cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 16 (radar 4129) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0027m Y=+1.0204m Z=+0.3065m | Range=1.0654m
     Range-profile relative power: 92.60 dB at 1.0301m | raw=3529 (relative, not dBm)
     Radial velocity estimate: mean=-0.0075m/s peak=0.1207m/s | Track velocity=(-0.0198,-0.0417,+0.3032)m/s
     Sensor side info (raw): SNR mean=126.938 min=107 peak=152 | Noise mean=632.812
     Geometry estimate: L=16.08cm W=10.33cm H=10.02cm | points=16 density=9611.16/m3
     Shape: planarity=0.5860 flatness=0.6228 thickness=10.33cm spread=10.49cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 17 (radar 4130) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0307m Z=+0.2780m | Range=1.0676m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0916,+0.1035,-0.2855)m/s
     Sensor side info (raw): SNR mean=125.667 min=105 peak=146 | Noise mean=642.600
     Geometry estimate: L=15.97cm W=15.83cm H=7.15cm | points=15 density=8287.31/m3
     Shape: planarity=0.5811 flatness=0.4480 thickness=15.83cm spread=10.70cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 18 (radar 4131) | Valid Objects: 1
UART: packet=928 B, objects=27, raw=27, filtered=27, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0051m Y=+1.0302m Z=+0.2598m | Range=1.0624m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(-0.0673,-0.0056,-0.1812)m/s
     Sensor side info (raw): SNR mean=125.143 min=106 peak=145 | Noise mean=645.714
     Geometry estimate: L=15.25cm W=11.69cm H=3.58cm | points=14 density=21911.02/m3
     Shape: planarity=0.7430 flatness=0.2345 thickness=11.69cm spread=9.70cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3094 | threshold=0.25

=================================================
Frame 19 (radar 4132) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0087m Y=+1.0154m Z=+0.2750m | Range=1.0520m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0101m/s peak=0.0604m/s | Track velocity=(+0.0363,-0.1472,+0.1512)m/s
     Sensor side info (raw): SNR mean=120.083 min=105 peak=138 | Noise mean=653.250
     Geometry estimate: L=13.61cm W=12.84cm H=3.58cm | points=12 density=19166.44/m3
     Shape: planarity=0.6521 flatness=0.2629 thickness=12.84cm spread=11.25cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3334 | threshold=0.25

=================================================
Frame 20 (radar 4133) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0199m Z=+0.2737m | Range=1.0560m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0046m/s peak=0.0604m/s | Track velocity=(+0.0474,+0.0442,-0.0124)m/s
     Sensor side info (raw): SNR mean=122.308 min=105 peak=140 | Noise mean=647.385
     Geometry estimate: L=15.68cm W=9.69cm H=7.15cm | points=13 density=11951.41/m3
     Shape: planarity=0.5346 flatness=0.4563 thickness=9.69cm spread=10.43cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3375 | threshold=0.25

=================================================
Frame 21 (radar 4134) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0101m Y=+1.0249m Z=+0.2795m | Range=1.0623m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.0343,+0.0500,+0.0578)m/s
     Sensor side info (raw): SNR mean=122.643 min=105 peak=142 | Noise mean=647.000
     Geometry estimate: L=15.08cm W=12.79cm H=3.58cm | points=14 density=20262.55/m3
     Shape: planarity=0.6746 flatness=0.2372 thickness=12.79cm spread=10.13cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3310 | threshold=0.25

=================================================
Frame 22 (radar 4135) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0165m Y=+1.0293m Z=+0.2831m | Range=1.0677m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0640,+0.0447,+0.0355)m/s
     Sensor side info (raw): SNR mean=124.267 min=110 peak=143 | Noise mean=641.200
     Geometry estimate: L=15.55cm W=13.00cm H=7.15cm | points=15 density=10363.34/m3
     Shape: planarity=0.5667 flatness=0.4600 thickness=13.00cm spread=9.56cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3364 | threshold=0.25

=================================================
Frame 23 (radar 4136) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0165m Y=+1.0290m Z=+0.2844m | Range=1.0677m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0029,+0.0131)m/s
     Sensor side info (raw): SNR mean=126.000 min=111 peak=144 | Noise mean=640.800
     Geometry estimate: L=15.62cm W=12.73cm H=7.15cm | points=15 density=10536.60/m3
     Shape: planarity=0.5699 flatness=0.4581 thickness=12.73cm spread=9.60cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3418 | threshold=0.25

=================================================
Frame 24 (radar 4137) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0188m Y=+1.0285m Z=+0.2857m | Range=1.0676m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0238,-0.0054,+0.0131)m/s
     Sensor side info (raw): SNR mean=129.267 min=113 peak=149 | Noise mean=636.400
     Geometry estimate: L=15.41cm W=13.44cm H=7.15cm | points=15 density=10113.96/m3
     Shape: planarity=0.4880 flatness=0.4642 thickness=13.44cm spread=9.77cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3465 | threshold=0.25

=================================================
Frame 25 (radar 4138) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0188m Y=+1.0282m Z=+0.2866m | Range=1.0676m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0032,+0.0097)m/s
     Sensor side info (raw): SNR mean=126.333 min=107 peak=146 | Noise mean=639.533
     Geometry estimate: L=15.39cm W=14.07cm H=7.15cm | points=15 density=9672.17/m3
     Shape: planarity=0.4852 flatness=0.4648 thickness=14.07cm spread=10.10cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3460 | threshold=0.25

=================================================
Frame 26 (radar 4139) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0276m Z=+0.2894m | Range=1.0676m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0469,-0.0063,+0.0272)m/s
     Sensor side info (raw): SNR mean=126.867 min=111 peak=146 | Noise mean=638.200
     Geometry estimate: L=15.20cm W=15.15cm H=7.15cm | points=15 density=9097.80/m3
     Shape: planarity=0.5581 flatness=0.4707 thickness=15.15cm spread=10.69cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3530 | threshold=0.25

=================================================
Frame 27 (radar 4140) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0151m Y=+1.0214m Z=+0.2905m | Range=1.0620m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(+0.0093,-0.0614,+0.0118)m/s
     Sensor side info (raw): SNR mean=128.000 min=107 peak=147 | Noise mean=640.214
     Geometry estimate: L=16.56cm W=13.82cm H=7.15cm | points=14 density=8548.63/m3
     Shape: planarity=0.5121 flatness=0.4321 thickness=16.56cm spread=11.62cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3546 | threshold=0.25

=================================================
Frame 28 (radar 4141) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0278m Z=+0.2890m | Range=1.0677m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0331,+0.0639,-0.0157)m/s
     Sensor side info (raw): SNR mean=128.467 min=113 peak=146 | Noise mean=636.400
     Geometry estimate: L=15.37cm W=15.17cm H=3.58cm | points=15 density=17964.83/m3
     Shape: planarity=0.6598 flatness=0.2328 thickness=15.17cm spread=10.84cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3510 | threshold=0.25

=================================================
Frame 29 (radar 4142) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0101m Y=+1.0221m Z=+0.2890m | Range=1.0623m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.0171,-0.0566,+0.0007)m/s
     Sensor side info (raw): SNR mean=123.071 min=106 peak=142 | Noise mean=645.643
     Geometry estimate: L=15.25cm W=14.47cm H=3.58cm | points=14 density=17717.00/m3
     Shape: planarity=0.6593 flatness=0.2345 thickness=15.25cm spread=11.08cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3479 | threshold=0.25

=================================================
Frame 30 (radar 4143) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0297m Z=+0.2825m | Range=1.0678m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0059,+0.0752,-0.0658)m/s
     Sensor side info (raw): SNR mean=124.067 min=109 peak=145 | Noise mean=641.800
     Geometry estimate: L=16.16cm W=13.69cm H=3.58cm | points=15 density=18931.67/m3
     Shape: planarity=0.6961 flatness=0.2213 thickness=13.69cm spread=10.52cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3481 | threshold=0.25

=================================================
Frame 31 (radar 4144) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0170m Z=+0.2841m | Range=1.0560m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0402,-0.1268,+0.0160)m/s
     Sensor side info (raw): SNR mean=123.846 min=107 peak=143 | Noise mean=647.000
     Geometry estimate: L=13.80cm W=12.03cm H=7.15cm | points=13 density=10942.19/m3
     Shape: planarity=0.4979 flatness=0.5185 thickness=12.03cm spread=11.42cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3552 | threshold=0.25

=================================================
Frame 32 (radar 4145) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0176m Y=+1.0218m Z=+0.2894m | Range=1.0622m
     Range-profile relative power: 91.81 dB at 1.0301m | raw=3504 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(+0.0415,+0.0484,+0.0537)m/s
     Sensor side info (raw): SNR mean=121.643 min=105 peak=142 | Noise mean=645.714
     Geometry estimate: L=14.79cm W=13.52cm H=7.15cm | points=14 density=9781.87/m3
     Shape: planarity=0.4400 flatness=0.4837 thickness=13.52cm spread=10.92cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3619 | threshold=0.25

=================================================
Frame 33 (radar 4146) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0288m Z=+0.2838m | Range=1.0674m
     Range-profile relative power: 91.85 dB at 1.0301m | raw=3505 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0359,+0.0697,-0.0563)m/s
     Sensor side info (raw): SNR mean=120.133 min=106 peak=142 | Noise mean=644.600
     Geometry estimate: L=16.08cm W=14.98cm H=7.15cm | points=15 density=8698.20/m3
     Shape: planarity=0.4079 flatness=0.4448 thickness=16.08cm spread=11.96cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3488 | threshold=0.25

=================================================
Frame 34 (radar 4147) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0176m Y=+1.0240m Z=+0.2815m | Range=1.0621m
     Range-profile relative power: 91.81 dB at 1.0301m | raw=3504 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.0359,-0.0482,-0.0230)m/s
     Sensor side info (raw): SNR mean=121.714 min=105 peak=145 | Noise mean=645.429
     Geometry estimate: L=14.36cm W=13.83cm H=7.15cm | points=14 density=9846.75/m3
     Shape: planarity=0.4519 flatness=0.4982 thickness=13.83cm spread=11.68cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3569 | threshold=0.25

=================================================
Frame 35 (radar 4148) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0163m Y=+1.0181m Z=+0.2899m | Range=1.0587m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=+0.0093m/s peak=0.0604m/s | Track velocity=(-0.0130,-0.0588,+0.0843)m/s
     Sensor side info (raw): SNR mean=126.846 min=105 peak=147 | Noise mean=644.231
     Geometry estimate: L=15.66cm W=14.10cm H=7.15cm | points=13 density=8223.63/m3
     Shape: planarity=0.4106 flatness=0.4568 thickness=15.66cm spread=12.18cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3599 | threshold=0.25

=================================================
Frame 36 (radar 4149) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0188m Y=+1.0287m Z=+0.2851m | Range=1.0677m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0251,+0.1064,-0.0480)m/s
     Sensor side info (raw): SNR mean=123.200 min=109 peak=143 | Noise mean=641.733
     Geometry estimate: L=15.56cm W=12.30cm H=7.15cm | points=15 density=10945.99/m3
     Shape: planarity=0.4918 flatness=0.4598 thickness=12.30cm spread=9.58cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3584 | threshold=0.25

=================================================
Frame 37 (radar 4150) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0314m Z=+0.2760m | Range=1.0678m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0469,+0.0267,-0.0912)m/s
     Sensor side info (raw): SNR mean=122.000 min=108 peak=138 | Noise mean=643.133
     Geometry estimate: L=15.65cm W=12.31cm H=7.15cm | points=15 density=10874.89/m3
     Shape: planarity=0.5801 flatness=0.4571 thickness=12.31cm spread=9.47cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3572 | threshold=0.25

=================================================
Frame 38 (radar 4151) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0293m Z=+0.2837m | Range=1.0678m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0213,+0.0773)m/s
     Sensor side info (raw): SNR mean=126.200 min=108 peak=147 | Noise mean=638.733
     Geometry estimate: L=15.20cm W=13.23cm H=7.15cm | points=15 density=10422.49/m3
     Shape: planarity=0.5690 flatness=0.4708 thickness=13.23cm spread=9.83cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3629 | threshold=0.25

=================================================
Frame 39 (radar 4152) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0313m Z=+0.2766m | Range=1.0678m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0231,+0.0204,-0.0711)m/s
     Sensor side info (raw): SNR mean=125.067 min=111 peak=143 | Noise mean=640.133
     Geometry estimate: L=15.31cm W=12.15cm H=7.15cm | points=15 density=11258.96/m3
     Shape: planarity=0.5847 flatness=0.4671 thickness=12.15cm spread=9.56cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3667 | threshold=0.25

=================================================
Frame 40 (radar 4153) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0274m Z=+0.2887m | Range=1.0674m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0938,-0.0386,+0.1207)m/s
     Sensor side info (raw): SNR mean=124.533 min=108 peak=145 | Noise mean=639.133
     Geometry estimate: L=15.89cm W=15.19cm H=7.15cm | points=15 density=8679.98/m3
     Shape: planarity=0.4117 flatness=0.4503 thickness=15.89cm spread=11.55cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 41 (radar 4155) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0163m Y=+1.0191m Z=+0.2863m | Range=1.0587m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0093m/s peak=0.0604m/s | Track velocity=(+0.1633,+0.2390,+0.2155)m/s
     Sensor side info (raw): SNR mean=122.923 min=108 peak=141 | Noise mean=648.692
     Geometry estimate: L=15.31cm W=14.42cm H=7.15cm | points=13 density=8223.15/m3
     Shape: planarity=0.4184 flatness=0.4673 thickness=15.31cm spread=12.10cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 42 (radar 4156) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0145m Z=+0.2914m | Range=1.0556m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(-0.0284,-0.0463,+0.0516)m/s
     Sensor side info (raw): SNR mean=123.615 min=106 peak=141 | Noise mean=643.538
     Geometry estimate: L=16.93cm W=12.43cm H=7.15cm | points=13 density=8627.15/m3
     Shape: planarity=0.5401 flatness=0.4225 thickness=16.93cm spread=12.88cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 43 (radar 4157) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0301m Z=+0.2792m | Range=1.0674m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0774,+0.1554,-0.1222)m/s
     Sensor side info (raw): SNR mean=124.067 min=107 peak=146 | Noise mean=641.533
     Geometry estimate: L=15.37cm W=15.30cm H=7.15cm | points=15 density=8908.88/m3
     Shape: planarity=0.4184 flatness=0.4655 thickness=15.37cm spread=11.61cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 44 (radar 4158) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0067m Y=+1.0384m Z=+0.2768m | Range=1.0746m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0038m/s peak=0.0604m/s | Track velocity=(-0.1452,+0.0830,-0.0241)m/s
     Sensor side info (raw): SNR mean=123.562 min=106 peak=147 | Noise mean=637.625
     Geometry estimate: L=18.32cm W=16.95cm H=3.58cm | points=16 density=14392.64/m3
     Shape: planarity=0.7521 flatness=0.1953 thickness=18.32cm spread=13.38cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 45 (radar 4159) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0117m Y=+1.0096m Z=+0.2938m | Range=1.0516m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0101m/s peak=0.0604m/s | Track velocity=(+0.0502,-0.2871,+0.1698)m/s
     Sensor side info (raw): SNR mean=127.500 min=106 peak=148 | Noise mean=642.167
     Geometry estimate: L=17.10cm W=12.27cm H=7.15cm | points=12 density=7987.09/m3
     Shape: planarity=0.5258 flatness=0.4184 thickness=17.10cm spread=13.33cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3694 | threshold=0.25

=================================================
Frame 46 (radar 4160) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0165m Y=+1.0305m Z=+0.2789m | Range=1.0677m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0481,+0.2083,-0.1487)m/s
     Sensor side info (raw): SNR mean=120.667 min=106 peak=142 | Noise mean=645.267
     Geometry estimate: L=15.74cm W=11.50cm H=7.15cm | points=15 density=11573.87/m3
     Shape: planarity=0.5057 flatness=0.4546 thickness=11.50cm spread=9.75cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3787 | threshold=0.25

=================================================
Frame 47 (radar 4161) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0311m Z=+0.2776m | Range=1.0679m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0477,+0.0059,-0.0126)m/s
     Sensor side info (raw): SNR mean=122.867 min=107 peak=143 | Noise mean=642.333
     Geometry estimate: L=16.18cm W=12.54cm H=3.58cm | points=15 density=20637.37/m3
     Shape: planarity=0.6770 flatness=0.2211 thickness=12.54cm spread=9.41cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3773 | threshold=0.25

=================================================
Frame 48 (radar 4162) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0317m Z=+0.2753m | Range=1.0678m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0231,+0.0062,-0.0229)m/s
     Sensor side info (raw): SNR mean=122.333 min=105 peak=144 | Noise mean=643.200
     Geometry estimate: L=16.75cm W=10.08cm H=3.58cm | points=15 density=24808.87/m3
     Shape: planarity=0.7080 flatness=0.2136 thickness=10.08cm spread=9.25cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3752 | threshold=0.25

=================================================
Frame 49 (radar 4163) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0055m Y=+1.0280m Z=+0.2535m | Range=1.0588m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0093m/s peak=0.0604m/s | Track velocity=(-0.0396,-0.0374,-0.2182)m/s
     Sensor side info (raw): SNR mean=125.923 min=109 peak=142 | Noise mean=646.000
     Geometry estimate: L=17.17cm W=11.56cm H=3.58cm | points=13 density=18279.55/m3
     Shape: planarity=0.7713 flatness=0.2083 thickness=11.56cm spread=10.12cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3739 | threshold=0.25

=================================================
Frame 50 (radar 4164) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0178m Y=+1.0311m Z=+0.2768m | Range=1.0677m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0129m/s peak=0.0604m/s | Track velocity=(+0.1230,+0.0312,+0.2329)m/s
     Sensor side info (raw): SNR mean=127.000 min=107 peak=151 | Noise mean=639.000
     Geometry estimate: L=19.23cm W=9.62cm H=7.15cm | points=14 density=10570.56/m3
     Shape: planarity=0.5491 flatness=0.3721 thickness=9.62cm spread=11.63cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3713 | threshold=0.25

=================================================
Frame 51 (radar 4165) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0163m Y=+1.0221m Z=+0.2762m | Range=1.0589m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0093m/s peak=0.0604m/s | Track velocity=(-0.0147,-0.0893,-0.0061)m/s
     Sensor side info (raw): SNR mean=125.923 min=111 peak=146 | Noise mean=644.308
     Geometry estimate: L=15.61cm W=10.01cm H=7.15cm | points=13 density=11618.46/m3
     Shape: planarity=0.4739 flatness=0.4584 thickness=10.01cm spread=10.45cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3697 | threshold=0.25

=================================================
Frame 52 (radar 4166) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0152m Y=+1.0295m Z=+0.2831m | Range=1.0678m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0129m/s peak=0.0604m/s | Track velocity=(-0.0108,+0.0734,+0.0686)m/s
     Sensor side info (raw): SNR mean=122.429 min=105 peak=143 | Noise mean=642.714
     Geometry estimate: L=18.66cm W=10.55cm H=7.15cm | points=14 density=9932.38/m3
     Shape: planarity=0.6078 flatness=0.3834 thickness=10.55cm spread=11.82cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3664 | threshold=0.25

=================================================
Frame 53 (radar 4167) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0096m Y=+1.0123m Z=+0.2668m | Range=1.0469m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=-0.0110m/s peak=0.0604m/s | Track velocity=(-0.0560,-0.1717,-0.1629)m/s
     Sensor side info (raw): SNR mean=125.182 min=108 peak=141 | Noise mean=646.909
     Geometry estimate: L=15.91cm W=8.19cm H=7.15cm | points=11 density=11792.28/m3
     Shape: planarity=0.5453 flatness=0.4497 thickness=8.19cm spread=11.43cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3634 | threshold=0.25

=================================================
Frame 54 (radar 4168) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0165m Y=+1.0303m Z=+0.2799m | Range=1.0677m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0681,+0.1795,+0.1312)m/s
     Sensor side info (raw): SNR mean=119.667 min=105 peak=138 | Noise mean=645.400
     Geometry estimate: L=15.92cm W=11.70cm H=7.15cm | points=15 density=11245.36/m3
     Shape: planarity=0.5795 flatness=0.4493 thickness=11.70cm spread=9.46cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3619 | threshold=0.25

=================================================
Frame 55 (radar 4169) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0151m Y=+1.0220m Z=+0.2895m | Range=1.0623m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.0138,-0.0830,+0.0958)m/s
     Sensor side info (raw): SNR mean=120.143 min=105 peak=138 | Noise mean=647.786
     Geometry estimate: L=14.59cm W=12.98cm H=7.15cm | points=14 density=10321.72/m3
     Shape: planarity=0.5345 flatness=0.4902 thickness=12.98cm spread=10.02cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3622 | threshold=0.25

=================================================
Frame 56 (radar 4170) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0076m Y=+1.0265m Z=+0.2740m | Range=1.0624m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(-0.0750,+0.0451,-0.1546)m/s
     Sensor side info (raw): SNR mean=118.929 min=105 peak=138 | Noise mean=650.000
     Geometry estimate: L=16.46cm W=8.70cm H=3.58cm | points=14 density=27266.94/m3
     Shape: planarity=0.7220 flatness=0.2173 thickness=8.70cm spread=9.08cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3560 | threshold=0.25

=================================================
Frame 57 (radar 4171) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0331m Z=+0.2699m | Range=1.0678m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0188,+0.0660,-0.0413)m/s
     Sensor side info (raw): SNR mean=117.800 min=106 peak=136 | Noise mean=649.000
     Geometry estimate: L=16.73cm W=10.96cm H=3.58cm | points=15 density=22838.99/m3
     Shape: planarity=0.7102 flatness=0.2138 thickness=10.96cm spread=9.26cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3502 | threshold=0.25

=================================================
Frame 58 (radar 4172) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0151m Y=+1.0254m Z=+0.2771m | Range=1.0623m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(+0.0562,-0.0772,+0.0724)m/s
     Sensor side info (raw): SNR mean=118.714 min=105 peak=136 | Noise mean=650.714
     Geometry estimate: L=14.93cm W=10.79cm H=7.15cm | points=14 density=12130.16/m3
     Shape: planarity=0.5543 flatness=0.4791 thickness=10.79cm spread=10.01cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 59 (radar 4177) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0163m Y=+1.0230m Z=+0.2728m | Range=1.0589m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=-0.0093m/s peak=0.0604m/s | Track velocity=(+0.1633,+0.2929,+0.0248)m/s
     Sensor side info (raw): SNR mean=122.692 min=105 peak=142 | Noise mean=648.154
     Geometry estimate: L=15.55cm W=10.47cm H=7.15cm | points=13 density=11148.18/m3
     Shape: planarity=0.4746 flatness=0.4600 thickness=10.47cm spread=10.59cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 60 (radar 4178) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0096m Y=+1.0120m Z=+0.2683m | Range=1.0470m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0110m/s peak=0.0604m/s | Track velocity=(-0.0668,-0.1105,-0.0454)m/s
     Sensor side info (raw): SNR mean=126.636 min=107 peak=142 | Noise mean=645.000
     Geometry estimate: L=15.74cm W=9.12cm H=7.15cm | points=11 density=10697.64/m3
     Shape: planarity=0.5365 flatness=0.4546 thickness=9.12cm spread=11.42cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 61 (radar 4179) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0035m Y=+1.0023m Z=+0.2675m | Range=1.0374m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=-0.0060m/s peak=0.0604m/s | Track velocity=(-0.0619,-0.0964,-0.0081)m/s
     Sensor side info (raw): SNR mean=129.300 min=107 peak=143 | Noise mean=647.800
     Geometry estimate: L=12.73cm W=9.06cm H=3.46cm | points=10 density=25009.57/m3
     Shape: planarity=0.7279 flatness=0.2717 thickness=9.06cm spread=8.18cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 62 (radar 4180) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0127m Y=+1.0329m Z=+0.2708m | Range=1.0679m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=-0.0129m/s peak=0.0604m/s | Track velocity=(+0.0923,+0.3057,+0.0339)m/s
     Sensor side info (raw): SNR mean=125.929 min=105 peak=143 | Noise mean=641.000
     Geometry estimate: L=19.70cm W=8.94cm H=3.70cm | points=14 density=21467.88/m3
     Shape: planarity=0.7150 flatness=0.1876 thickness=8.94cm spread=11.75cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 63 (radar 4181) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0288m Z=+0.2839m | Range=1.0675m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0853,-0.0406,+0.1308)m/s
     Sensor side info (raw): SNR mean=126.133 min=109 peak=147 | Noise mean=639.533
     Geometry estimate: L=15.32cm W=15.11cm H=7.15cm | points=15 density=9050.78/m3
     Shape: planarity=0.4182 flatness=0.4670 thickness=15.11cm spread=11.39cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3498 | threshold=0.25

=================================================
Frame 64 (radar 4182) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0316m Z=+0.2754m | Range=1.0678m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0707,+0.0274,-0.0855)m/s
     Sensor side info (raw): SNR mean=131.067 min=116 peak=153 | Noise mean=634.800
     Geometry estimate: L=15.44cm W=12.27cm H=7.15cm | points=15 density=11056.30/m3
     Shape: planarity=0.5784 flatness=0.4633 thickness=12.27cm spread=9.43cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 65 (radar 4184) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0342m Z=+0.2652m | Range=1.0677m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0715,+0.2363,+0.0454)m/s
     Sensor side info (raw): SNR mean=127.200 min=111 peak=149 | Noise mean=639.933
     Geometry estimate: L=16.44cm W=13.26cm H=3.58cm | points=15 density=19212.76/m3
     Shape: planarity=0.7362 flatness=0.2176 thickness=13.26cm spread=9.52cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 66 (radar 4185) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0294m Z=+0.2831m | Range=1.0677m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0700,-0.0483,+0.1794)m/s
     Sensor side info (raw): SNR mean=125.600 min=109 peak=148 | Noise mean=639.200
     Geometry estimate: L=15.20cm W=14.35cm H=7.15cm | points=15 density=9607.05/m3
     Shape: planarity=0.5632 flatness=0.4707 thickness=14.35cm spread=10.11cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 67 (radar 4186) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0130m Z=+0.2713m | Range=1.0488m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0550,-0.1636,-0.1182)m/s
     Sensor side info (raw): SNR mean=124.083 min=106 peak=142 | Noise mean=648.083
     Geometry estimate: L=12.95cm W=9.90cm H=3.46cm | points=12 density=27021.87/m3
     Shape: planarity=0.6439 flatness=0.2671 thickness=9.90cm spread=7.57cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 68 (radar 4187) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0303m Z=+0.2806m | Range=1.0678m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0081,+0.1721,+0.0929)m/s
     Sensor side info (raw): SNR mean=121.800 min=106 peak=145 | Noise mean=643.333
     Geometry estimate: L=15.84cm W=13.81cm H=3.58cm | points=15 density=19147.73/m3
     Shape: planarity=0.6909 flatness=0.2258 thickness=13.81cm spread=9.98cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 69 (radar 4189) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0286m Z=+0.2863m | Range=1.0678m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1407,+0.3374,+0.2012)m/s
     Sensor side info (raw): SNR mean=125.067 min=108 peak=147 | Noise mean=640.267
     Geometry estimate: L=15.42cm W=14.82cm H=3.58cm | points=15 density=18328.22/m3
     Shape: planarity=0.6475 flatness=0.2320 thickness=14.82cm spread=10.10cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 70 (radar 4190) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0063m Y=+1.0076m Z=+0.2719m | Range=1.0437m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0055m/s peak=0.0604m/s | Track velocity=(-0.0778,-0.2100,-0.1433)m/s
     Sensor side info (raw): SNR mean=130.182 min=107 peak=147 | Noise mean=647.727
     Geometry estimate: L=12.15cm W=9.15cm H=3.46cm | points=11 density=28537.40/m3
     Shape: planarity=0.6607 flatness=0.2846 thickness=9.15cm spread=7.39cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 71 (radar 4191) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0138m Z=+0.2685m | Range=1.0488m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0236,+0.0622,-0.0344)m/s
     Sensor side info (raw): SNR mean=127.833 min=108 peak=147 | Noise mean=645.083
     Geometry estimate: L=12.95cm W=9.54cm H=3.46cm | points=12 density=28034.61/m3
     Shape: planarity=0.6452 flatness=0.2671 thickness=9.54cm spread=7.64cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 72 (radar 4192) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0296m Z=+0.2810m | Range=1.0675m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1258,+0.1582,+0.1251)m/s
     Sensor side info (raw): SNR mean=125.200 min=108 peak=145 | Noise mean=640.000
     Geometry estimate: L=15.34cm W=15.09cm H=7.15cm | points=15 density=9056.79/m3
     Shape: planarity=0.4201 flatness=0.4665 thickness=15.09cm spread=11.53cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 73 (radar 4193) | Valid Objects: 1
UART: packet=608 B, objects=10, raw=10, filtered=10, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0035m Y=+1.0005m Z=+0.2740m | Range=1.0374m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0060m/s peak=0.0604m/s | Track velocity=(-0.1777,-0.2910,-0.0703)m/s
     Sensor side info (raw): SNR mean=130.200 min=106 peak=145 | Noise mean=647.100
     Geometry estimate: L=10.94cm W=10.55cm H=3.46cm | points=10 density=24997.37/m3
     Shape: planarity=0.6967 flatness=0.3161 thickness=10.94cm spread=8.50cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3241 | threshold=0.25

=================================================
Frame 74 (radar 4194) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0138m Z=+0.2685m | Range=1.0488m
     Range-profile relative power: 92.19 dB at 1.0301m | raw=3516 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0519,+0.1325,-0.0549)m/s
     Sensor side info (raw): SNR mean=127.833 min=105 peak=146 | Noise mean=646.000
     Geometry estimate: L=13.09cm W=9.34cm H=3.46cm | points=12 density=28320.87/m3
     Shape: planarity=0.6486 flatness=0.2642 thickness=9.34cm spread=7.84cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 75 (radar 4198) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0063m Y=+1.0090m Z=+0.2665m | Range=1.0436m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=-0.0055m/s peak=0.0604m/s | Track velocity=(+0.0629,+0.1376,+0.0184)m/s
     Sensor side info (raw): SNR mean=128.091 min=106 peak=145 | Noise mean=649.545
     Geometry estimate: L=12.96cm W=8.54cm H=3.46cm | points=11 density=28676.09/m3
     Shape: planarity=0.6803 flatness=0.2669 thickness=8.54cm spread=7.82cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 76 (radar 4199) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0063m Y=+1.0086m Z=+0.2682m | Range=1.0436m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=-0.0055m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0044,+0.0170)m/s
     Sensor side info (raw): SNR mean=128.273 min=106 peak=145 | Noise mean=649.545
     Geometry estimate: L=12.81cm W=8.98cm H=3.46cm | points=11 density=27593.57/m3
     Shape: planarity=0.6758 flatness=0.2699 thickness=8.98cm spread=7.71cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 77 (radar 4200) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0063m Y=+1.0080m Z=+0.2705m | Range=1.0437m
     Range-profile relative power: 92.22 dB at 1.0301m | raw=3517 (relative, not dBm)
     Radial velocity estimate: mean=-0.0055m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0061,+0.0236)m/s
     Sensor side info (raw): SNR mean=127.545 min=105 peak=145 | Noise mean=650.091
     Geometry estimate: L=12.62cm W=9.08cm H=3.46cm | points=11 density=27707.93/m3
     Shape: planarity=0.6709 flatness=0.2741 thickness=9.08cm spread=7.42cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 78 (radar 4201) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0123m Z=+0.2740m | Range=1.0488m
     Range-profile relative power: 92.19 dB at 1.0301m | raw=3516 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0236,+0.0434,+0.0349)m/s
     Sensor side info (raw): SNR mean=127.833 min=108 peak=147 | Noise mean=645.833
     Geometry estimate: L=12.65cm W=10.96cm H=3.46cm | points=12 density=24974.34/m3
     Shape: planarity=0.6345 flatness=0.2733 thickness=10.96cm spread=7.65cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 79 (radar 4202) | Valid Objects: 1
UART: packet=608 B, objects=10, raw=10, filtered=10, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0035m Y=+1.0029m Z=+0.2653m | Range=1.0374m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=-0.0060m/s peak=0.0604m/s | Track velocity=(-0.0519,-0.0938,-0.0878)m/s
     Sensor side info (raw): SNR mean=129.300 min=105 peak=143 | Noise mean=648.500
     Geometry estimate: L=12.59cm W=9.03cm H=3.46cm | points=10 density=25393.34/m3
     Shape: planarity=0.7260 flatness=0.2748 thickness=9.03cm spread=8.01cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3015 | threshold=0.25

=================================================
Frame 80 (radar 4203) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0116m Z=+0.2765m | Range=1.0488m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0519,+0.0870,+0.1122)m/s
     Sensor side info (raw): SNR mean=127.083 min=108 peak=144 | Noise mean=646.250
     Geometry estimate: L=12.63cm W=11.22cm H=3.46cm | points=12 density=24436.36/m3
     Shape: planarity=0.6325 flatness=0.2738 thickness=11.22cm spread=7.72cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2689 | threshold=0.25

=================================================
Frame 81 (radar 4204) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0124m Z=+0.2736m | Range=1.0488m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0081,-0.0289)m/s
     Sensor side info (raw): SNR mean=126.500 min=109 peak=143 | Noise mean=646.750
     Geometry estimate: L=12.47cm W=11.28cm H=3.46cm | points=12 density=24601.04/m3
     Shape: planarity=0.6299 flatness=0.2772 thickness=11.28cm spread=7.72cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2685 | threshold=0.25

=================================================
Frame 82 (radar 4205) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0086m Y=+1.0114m Z=+0.2774m | Range=1.0488m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0105,+0.0381)m/s
     Sensor side info (raw): SNR mean=127.083 min=106 peak=145 | Noise mean=645.833
     Geometry estimate: L=12.54cm W=11.46cm H=3.46cm | points=12 density=24115.92/m3
     Shape: planarity=0.6297 flatness=0.2759 thickness=11.46cm spread=7.79cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2552 | threshold=0.25

=================================================
Frame 83 (radar 4206) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0177m Z=+0.2817m | Range=1.0560m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0046m/s peak=0.0604m/s | Track velocity=(+0.0484,+0.0629,+0.0428)m/s
     Sensor side info (raw): SNR mean=126.308 min=108 peak=145 | Noise mean=641.846
     Geometry estimate: L=14.96cm W=11.82cm H=7.15cm | points=13 density=10268.22/m3
     Shape: planarity=0.5093 flatness=0.4782 thickness=11.82cm spread=10.45cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2676 | threshold=0.25

=================================================
Frame 84 (radar 4207) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0267m Z=+0.2913m | Range=1.0674m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0774,+0.0904,+0.0962)m/s
     Sensor side info (raw): SNR mean=126.533 min=108 peak=149 | Noise mean=637.000
     Geometry estimate: L=16.16cm W=15.02cm H=7.15cm | points=15 density=8629.98/m3
     Shape: planarity=0.3990 flatness=0.4427 thickness=16.16cm spread=11.72cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2800 | threshold=0.25

=================================================
Frame 85 (radar 4208) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0188m Y=+1.0275m Z=+0.2888m | Range=1.0675m
     Range-profile relative power: 92.19 dB at 1.0301m | raw=3516 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0238,+0.0081,-0.0249)m/s
     Sensor side info (raw): SNR mean=125.867 min=107 peak=148 | Noise mean=638.267
     Geometry estimate: L=16.13cm W=15.11cm H=7.15cm | points=15 density=8596.33/m3
     Shape: planarity=0.4658 flatness=0.4435 thickness=16.13cm spread=10.82cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2982 | threshold=0.25

=================================================
Frame 86 (radar 4209) | Valid Objects: 1
UART: packet=608 B, objects=11, raw=11, filtered=11, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0096m Y=+1.0105m Z=+0.2737m | Range=1.0470m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0919,-0.1702,-0.1507)m/s
     Sensor side info (raw): SNR mean=128.000 min=106 peak=142 | Noise mean=654.273
     Geometry estimate: L=11.66cm W=8.85cm H=3.46cm | points=10 density=27935.60/m3
     Shape: planarity=0.7138 flatness=0.2966 thickness=8.85cm spread=7.55cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2949 | threshold=0.25

=================================================
Frame 87 (radar 4210) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0147m Y=+1.0426m Z=+0.2860m | Range=1.0812m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0508,+0.3205,+0.1231)m/s
     Sensor side info (raw): SNR mean=128.824 min=108 peak=152 | Noise mean=630.824
     Geometry estimate: L=18.35cm W=15.80cm H=3.70cm | points=17 density=15841.14/m3
     Shape: planarity=0.6910 flatness=0.2014 thickness=15.80cm spread=12.19cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2984 | threshold=0.25

=================================================
Frame 88 (radar 4211) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0189m Y=+1.0330m Z=+0.2793m | Range=1.0702m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0080m/s peak=0.0604m/s | Track velocity=(+0.0419,-0.0956,-0.0677)m/s
     Sensor side info (raw): SNR mean=126.600 min=105 peak=148 | Noise mean=637.200
     Geometry estimate: L=18.79cm W=11.08cm H=7.15cm | points=15 density=10063.79/m3
     Shape: planarity=0.5346 flatness=0.3808 thickness=11.08cm spread=11.45cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3057 | threshold=0.25

=================================================
Frame 89 (radar 4212) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0117m Y=+1.0145m Z=+0.2780m | Range=1.0519m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=-0.0101m/s peak=0.0604m/s | Track velocity=(-0.0719,-0.1854,-0.0124)m/s
     Sensor side info (raw): SNR mean=126.000 min=107 peak=147 | Noise mean=644.667
     Geometry estimate: L=15.40cm W=9.20cm H=7.15cm | points=12 density=11824.85/m3
     Shape: planarity=0.5283 flatness=0.4646 thickness=9.20cm spread=10.86cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3008 | threshold=0.25

=================================================
Frame 90 (radar 4213) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0176m Y=+1.0234m Z=+0.2840m | Range=1.0622m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(+0.0591,+0.0896,+0.0596)m/s
     Sensor side info (raw): SNR mean=127.929 min=105 peak=154 | Noise mean=639.071
     Geometry estimate: L=15.04cm W=12.07cm H=7.15cm | points=14 density=10771.51/m3
     Shape: planarity=0.4542 flatness=0.4756 thickness=12.07cm spread=10.57cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3082 | threshold=0.25

=================================================
Frame 91 (radar 4214) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0210m Y=+1.0358m Z=+0.3080m | Range=1.0808m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0334,+0.1242,+0.2397)m/s
     Sensor side info (raw): SNR mean=127.118 min=106 peak=150 | Noise mean=631.353
     Geometry estimate: L=19.00cm W=17.07cm H=7.15cm | points=17 density=7322.69/m3
     Shape: planarity=0.5300 flatness=0.3765 thickness=19.00cm spread=12.93cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3191 | threshold=0.25

=================================================
Frame 92 (radar 4215) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0145m Y=+1.0437m Z=+0.2820m | Range=1.0812m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(-0.0645,+0.0784,-0.2599)m/s
     Sensor side info (raw): SNR mean=128.647 min=105 peak=154 | Noise mean=632.941
     Geometry estimate: L=19.85cm W=12.96cm H=7.15cm | points=17 density=9229.53/m3
     Shape: planarity=0.6435 flatness=0.3603 thickness=12.96cm spread=10.67cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3276 | threshold=0.25

=================================================
Frame 93 (radar 4216) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0189m Y=+1.0307m Z=+0.2875m | Range=1.0702m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=-0.0080m/s peak=0.0604m/s | Track velocity=(+0.0440,-0.1295,+0.0549)m/s
     Sensor side info (raw): SNR mean=125.933 min=105 peak=147 | Noise mean=638.067
     Geometry estimate: L=18.41cm W=11.50cm H=7.15cm | points=15 density=9902.77/m3
     Shape: planarity=0.5293 flatness=0.3887 thickness=11.50cm spread=11.64cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3336 | threshold=0.25

=================================================
Frame 94 (radar 4217) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0096m Y=+1.0096m Z=+0.2770m | Range=1.0470m
     Range-profile relative power: 92.07 dB at 1.0301m | raw=3512 (relative, not dBm)
     Radial velocity estimate: mean=-0.0110m/s peak=0.0604m/s | Track velocity=(-0.0927,-0.2110,-0.1045)m/s
     Sensor side info (raw): SNR mean=124.000 min=105 peak=145 | Noise mean=646.909
     Geometry estimate: L=15.38cm W=10.43cm H=7.15cm | points=11 density=9578.72/m3
     Shape: planarity=0.5173 flatness=0.4651 thickness=10.43cm spread=11.38cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3157 | threshold=0.25

=================================================
Frame 95 (radar 4218) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0055m Y=+1.0263m Z=+0.2598m | Range=1.0587m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0093m/s peak=0.0604m/s | Track velocity=(-0.0414,+0.1671,-0.1725)m/s
     Sensor side info (raw): SNR mean=126.538 min=106 peak=148 | Noise mean=647.000
     Geometry estimate: L=17.04cm W=12.71cm H=3.58cm | points=13 density=16758.32/m3
     Shape: planarity=0.7688 flatness=0.2099 thickness=12.71cm spread=9.88cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3171 | threshold=0.25

=================================================
Frame 96 (radar 4219) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0295m Y=+1.0382m Z=+0.2995m | Range=1.0809m
     Range-profile relative power: 91.85 dB at 1.0301m | raw=3505 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.2396,+0.1183,+0.3978)m/s
     Sensor side info (raw): SNR mean=125.000 min=107 peak=150 | Noise mean=632.941
     Geometry estimate: L=18.21cm W=14.70cm H=7.39cm | points=17 density=8587.72/m3
     Shape: planarity=0.4005 flatness=0.4060 thickness=14.70cm spread=11.85cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3256 | threshold=0.25

=================================================
Frame 97 (radar 4220) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0176m Y=+1.0209m Z=+0.2929m | Range=1.0623m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(-0.1183,-0.1724,-0.0662)m/s
     Sensor side info (raw): SNR mean=124.786 min=105 peak=147 | Noise mean=642.214
     Geometry estimate: L=15.18cm W=11.95cm H=7.15cm | points=14 density=10779.78/m3
     Shape: planarity=0.4456 flatness=0.4713 thickness=11.95cm spread=10.16cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3328 | threshold=0.25

=================================================
Frame 98 (radar 4221) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0078m Y=+1.0347m Z=+0.2633m | Range=1.0677m
     Range-profile relative power: 91.85 dB at 1.0301m | raw=3505 (relative, not dBm)
     Radial velocity estimate: mean=-0.0129m/s peak=0.0604m/s | Track velocity=(-0.0988,+0.1381,-0.2960)m/s
     Sensor side info (raw): SNR mean=121.214 min=105 peak=144 | Noise mean=645.357
     Geometry estimate: L=19.35cm W=10.60cm H=3.70cm | points=14 density=18433.01/m3
     Shape: planarity=0.7544 flatness=0.1910 thickness=10.60cm spread=11.86cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3316 | threshold=0.25

=================================================
Frame 99 (radar 4222) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0033m Y=+1.0140m Z=+0.2608m | Range=1.0470m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=-0.0110m/s peak=0.0604m/s | Track velocity=(-0.0450,-0.2079,-0.0254)m/s
     Sensor side info (raw): SNR mean=123.182 min=107 peak=143 | Noise mean=650.273
     Geometry estimate: L=16.60cm W=9.12cm H=3.58cm | points=11 density=20280.65/m3
     Shape: planarity=0.7950 flatness=0.2155 thickness=9.12cm spread=10.59cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3307 | threshold=0.25

=================================================
Frame 100 (radar 4223) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0130m Y=+1.0151m Z=+0.2697m | Range=1.0504m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=-0.0055m/s peak=0.0604m/s | Track velocity=(+0.0976,+0.0110,+0.0891)m/s
     Sensor side info (raw): SNR mean=123.182 min=106 peak=143 | Noise mean=651.364
     Geometry estimate: L=15.53cm W=10.40cm H=7.15cm | points=11 density=9514.81/m3
     Shape: planarity=0.4425 flatness=0.4606 thickness=10.40cm spread=11.39cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3355 | threshold=0.25

=================================================
Frame 101 (radar 4224) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0125m Y=+1.0262m Z=+0.2746m | Range=1.0624m
     Range-profile relative power: 91.85 dB at 1.0301m | raw=3505 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(-0.0049,+0.1112,+0.0492)m/s
     Sensor side info (raw): SNR mean=121.857 min=105 peak=143 | Noise mean=646.500
     Geometry estimate: L=16.60cm W=8.82cm H=3.58cm | points=14 density=26673.40/m3
     Shape: planarity=0.6807 flatness=0.2154 thickness=8.82cm spread=9.15cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3332 | threshold=0.25

=================================================
Frame 102 (radar 4225) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0141m Y=+1.0302m Z=+0.2806m | Range=1.0678m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0163,+0.0399,+0.0603)m/s
     Sensor side info (raw): SNR mean=127.333 min=107 peak=153 | Noise mean=638.133
     Geometry estimate: L=15.90cm W=10.91cm H=7.15cm | points=15 density=12078.19/m3
     Shape: planarity=0.5886 flatness=0.4500 thickness=10.91cm spread=9.47cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3370 | threshold=0.25

=================================================
Frame 103 (radar 4226) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0101m Y=+1.0248m Z=+0.2800m | Range=1.0624m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.0410,-0.0541,-0.0062)m/s
     Sensor side info (raw): SNR mean=125.071 min=108 peak=145 | Noise mean=644.714
     Geometry estimate: L=16.29cm W=9.07cm H=3.58cm | points=14 density=26447.46/m3
     Shape: planarity=0.6985 flatness=0.2195 thickness=9.07cm spread=8.87cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3296 | threshold=0.25

=================================================
Frame 104 (radar 4227) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0170m Z=+0.2836m | Range=1.0559m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(+0.0343,-0.0778,+0.0361)m/s
     Sensor side info (raw): SNR mean=125.846 min=106 peak=146 | Noise mean=642.769
     Geometry estimate: L=14.29cm W=11.86cm H=7.15cm | points=13 density=10712.57/m3
     Shape: planarity=0.5340 flatness=0.5007 thickness=11.86cm spread=11.37cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3281 | threshold=0.25

=================================================
Frame 105 (radar 4228) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0243m Z=+0.2996m | Range=1.0674m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0774,+0.0731,+0.1597)m/s
     Sensor side info (raw): SNR mean=121.600 min=105 peak=143 | Noise mean=642.067
     Geometry estimate: L=16.06cm W=15.13cm H=7.15cm | points=15 density=8621.34/m3
     Shape: planarity=0.4078 flatness=0.4454 thickness=16.06cm spread=11.88cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3284 | threshold=0.25

=================================================
Frame 106 (radar 4229) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0074m Y=+1.0076m Z=+0.2904m | Range=1.0487m
     Range-profile relative power: 91.75 dB at 1.0301m | raw=3502 (relative, not dBm)
     Radial velocity estimate: mean=+0.0172m/s peak=0.1207m/s | Track velocity=(-0.1381,-0.1666,-0.0922)m/s
     Sensor side info (raw): SNR mean=130.857 min=110 peak=146 | Noise mean=609.071
     Geometry estimate: L=12.43cm W=11.43cm H=3.46cm | points=14 density=28446.83/m3
     Shape: planarity=0.6307 flatness=0.2783 thickness=11.43cm spread=7.52cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3300 | threshold=0.25

=================================================
Frame 107 (radar 4230) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0357m Z=+0.2584m | Range=1.0675m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0026,+0.2809,-0.3198)m/s
     Sensor side info (raw): SNR mean=124.400 min=113 peak=142 | Noise mean=643.400
     Geometry estimate: L=17.44cm W=12.84cm H=3.58cm | points=15 density=18699.72/m3
     Shape: planarity=0.7526 flatness=0.2051 thickness=12.84cm spread=9.64cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3285 | threshold=0.25

=================================================
Frame 108 (radar 4231) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0188m Y=+1.0256m Z=+0.2961m | Range=1.0677m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1169,-0.1011,+0.3769)m/s
     Sensor side info (raw): SNR mean=127.200 min=108 peak=147 | Noise mean=637.200
     Geometry estimate: L=14.98cm W=13.42cm H=7.15cm | points=15 density=10420.55/m3
     Shape: planarity=0.4750 flatness=0.4776 thickness=13.42cm spread=9.83cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3309 | threshold=0.25

=================================================
Frame 109 (radar 4232) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0121m Y=+1.0526m Z=+0.2687m | Range=1.0864m
     Range-profile relative power: 92.16 dB at 1.0301m | raw=3515 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0672,+0.2699,-0.2742)m/s
     Sensor side info (raw): SNR mean=126.722 min=109 peak=146 | Noise mean=635.000
     Geometry estimate: L=20.86cm W=18.36cm H=3.70cm | points=18 density=12708.38/m3
     Shape: planarity=0.7392 flatness=0.1772 thickness=18.36cm spread=11.66cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3289 | threshold=0.25

=================================================
Frame 110 (radar 4233) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0118m Y=+1.0246m Z=+0.3006m | Range=1.0678m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0036,-0.2803,+0.3189)m/s
     Sensor side info (raw): SNR mean=123.667 min=106 peak=144 | Noise mean=641.267
     Geometry estimate: L=15.11cm W=15.05cm H=3.58cm | points=15 density=18416.48/m3
     Shape: planarity=0.6527 flatness=0.2367 thickness=15.11cm spread=10.25cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3248 | threshold=0.25

=================================================
Frame 111 (radar 4234) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0095m Y=+1.0270m Z=+0.2927m | Range=1.0680m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0231,+0.0246,-0.0780)m/s
     Sensor side info (raw): SNR mean=125.000 min=106 peak=147 | Noise mean=640.867
     Geometry estimate: L=15.52cm W=12.27cm H=3.58cm | points=15 density=21984.86/m3
     Shape: planarity=0.6893 flatness=0.2304 thickness=12.27cm spread=9.15cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3175 | threshold=0.25

=================================================
Frame 112 (radar 4235) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [PLATE][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0043m Y=+1.0494m Z=+0.2356m | Range=1.0755m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0075m/s peak=0.0604m/s | Track velocity=(-0.1378,+0.2233,-0.5718)m/s
     Sensor side info (raw): SNR mean=130.750 min=106 peak=153 | Noise mean=633.688
     Geometry estimate: L=25.36cm W=21.41cm H=3.46cm | points=16 density=8515.66/m3
     Shape: planarity=0.8347 flatness=0.1363 thickness=25.36cm spread=18.94cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3154 | threshold=0.25

=================================================
Frame 113 (radar 4236) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0200m Y=+1.0378m Z=+0.2780m | Range=1.0746m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0038m/s peak=0.0604m/s | Track velocity=(+0.2437,-0.1155,+0.4244)m/s
     Sensor side info (raw): SNR mean=128.750 min=110 peak=152 | Noise mean=632.812
     Geometry estimate: L=18.01cm W=14.04cm H=7.15cm | points=16 density=8836.07/m3
     Shape: planarity=0.5081 flatness=0.3971 thickness=14.04cm spread=12.05cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3166 | threshold=0.25

=================================================
Frame 114 (radar 4237) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0236m Z=+0.3027m | Range=1.0674m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.1289,-0.1421,+0.2469)m/s
     Sensor side info (raw): SNR mean=126.467 min=111 peak=148 | Noise mean=637.800
     Geometry estimate: L=18.82cm W=14.42cm H=3.58cm | points=15 density=15439.28/m3
     Shape: planarity=0.7218 flatness=0.1901 thickness=18.82cm spread=12.56cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3118 | threshold=0.25

=================================================
Frame 115 (radar 4238) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+1.0433m Z=+0.2822m | Range=1.0808m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(-0.0295,+0.1973,-0.2054)m/s
     Sensor side info (raw): SNR mean=127.647 min=105 peak=150 | Noise mean=634.941
     Geometry estimate: L=19.87cm W=18.42cm H=3.58cm | points=17 density=12978.02/m3
     Shape: planarity=0.8067 flatness=0.1800 thickness=19.87cm spread=13.39cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3138 | threshold=0.25

=================================================
Frame 116 (radar 4239) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0292m Z=+0.2847m | Range=1.0679m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0295,-0.1414,+0.0255)m/s
     Sensor side info (raw): SNR mean=129.333 min=117 peak=148 | Noise mean=637.267
     Geometry estimate: L=15.90cm W=12.82cm H=3.58cm | points=15 density=20531.55/m3
     Shape: planarity=0.7220 flatness=0.2249 thickness=12.82cm spread=9.70cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3064 | threshold=0.25

=================================================
Frame 117 (radar 4240) | Valid Objects: 1
UART: packet=640 B, objects=12, raw=12, filtered=12, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0059m Y=+1.0155m Z=+0.2750m | Range=1.0521m
     Range-profile relative power: 92.10 dB at 1.0301m | raw=3513 (relative, not dBm)
     Radial velocity estimate: mean=-0.0101m/s peak=0.0604m/s | Track velocity=(-0.0129,-0.1372,-0.0968)m/s
     Sensor side info (raw): SNR mean=123.250 min=105 peak=143 | Noise mean=649.500
     Geometry estimate: L=15.11cm W=9.84cm H=3.58cm | points=12 density=22512.55/m3
     Shape: planarity=0.7135 flatness=0.2367 thickness=9.84cm spread=9.74cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2981 | threshold=0.25

=================================================
Frame 118 (radar 4241) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0212m Y=+1.0293m Z=+0.2822m | Range=1.0675m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1536,+0.1385,+0.0719)m/s
     Sensor side info (raw): SNR mean=121.600 min=111 peak=141 | Noise mean=643.867
     Geometry estimate: L=15.81cm W=13.58cm H=7.15cm | points=15 density=9764.96/m3
     Shape: planarity=0.4409 flatness=0.4526 thickness=13.58cm spread=11.13cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3073 | threshold=0.25

=================================================
Frame 119 (radar 4242) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0331m Z=+0.2696m | Range=1.0677m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.1407,+0.0382,-0.1263)m/s
     Sensor side info (raw): SNR mean=121.867 min=109 peak=143 | Noise mean=644.867
     Geometry estimate: L=16.72cm W=11.87cm H=3.58cm | points=15 density=21088.72/m3
     Shape: planarity=0.7398 flatness=0.2139 thickness=11.87cm spread=9.03cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3088 | threshold=0.25

=================================================
Frame 120 (radar 4243) | Valid Objects: 1
UART: packet=672 B, objects=13, raw=13, filtered=13, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0135m Y=+1.0203m Z=+0.2720m | Range=1.0560m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=-0.0046m/s peak=0.0604m/s | Track velocity=(+0.0633,-0.1280,+0.0242)m/s
     Sensor side info (raw): SNR mean=127.462 min=105 peak=151 | Noise mean=641.615
     Geometry estimate: L=15.48cm W=9.58cm H=7.15cm | points=13 density=12236.98/m3
     Shape: planarity=0.5325 flatness=0.4622 thickness=9.58cm spread=10.42cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 121 (radar 4245) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0165m Y=+1.0294m Z=+0.2825m | Range=1.0676m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1653,+0.3450,+0.1657)m/s
     Sensor side info (raw): SNR mean=124.200 min=110 peak=145 | Noise mean=642.133
     Geometry estimate: L=15.78cm W=13.83cm H=7.15cm | points=15 density=9597.82/m3
     Shape: planarity=0.4974 flatness=0.4533 thickness=13.83cm spread=10.45cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 122 (radar 4246) | Valid Objects: 1
UART: packet=704 B, objects=15, raw=15, filtered=15, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0354m Z=+0.2598m | Range=1.0675m
     Range-profile relative power: 92.03 dB at 1.0301m | raw=3511 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0938,+0.0605,-0.2271)m/s
     Sensor side info (raw): SNR mean=129.067 min=115 peak=145 | Noise mean=639.467
     Geometry estimate: L=16.91cm W=14.25cm H=3.58cm | points=15 density=17383.13/m3
     Shape: planarity=0.7452 flatness=0.2115 thickness=14.25cm spread=9.58cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 123 (radar 4247) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0067m Y=+1.0439m Z=+0.2551m | Range=1.0747m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0045,+0.0851,-0.0469)m/s
     Sensor side info (raw): SNR mean=128.688 min=106 peak=147 | Noise mean=633.250
     Geometry estimate: L=21.19cm W=12.34cm H=3.58cm | points=16 density=17084.40/m3
     Shape: planarity=0.7797 flatness=0.1688 thickness=12.34cm spread=11.74cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 124 (radar 4248) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0060m Y=+1.0555m Z=+0.2583m | Range=1.0867m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0075,+0.1157,+0.0312)m/s
     Sensor side info (raw): SNR mean=125.722 min=105 peak=146 | Noise mean=632.167
     Geometry estimate: L=21.51cm W=11.68cm H=3.58cm | points=18 density=19996.72/m3
     Shape: planarity=0.8064 flatness=0.1663 thickness=11.68cm spread=11.57cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 125 (radar 4249) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0040m Y=+1.0551m Z=+0.2603m | Range=1.0867m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0199,-0.0044,+0.0203)m/s
     Sensor side info (raw): SNR mean=126.111 min=109 peak=145 | Noise mean=632.111
     Geometry estimate: L=21.61cm W=10.85cm H=3.58cm | points=18 density=21432.85/m3
     Shape: planarity=0.8382 flatness=0.1655 thickness=10.85cm spread=11.84cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3079 | threshold=0.25

=================================================
Frame 126 (radar 4250) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0060m Y=+1.0552m Z=+0.2592m | Range=1.0866m
     Range-profile relative power: 91.88 dB at 1.0301m | raw=3506 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0199,+0.0017,-0.0113)m/s
     Sensor side info (raw): SNR mean=125.889 min=108 peak=145 | Noise mean=632.056
     Geometry estimate: L=21.69cm W=11.57cm H=3.58cm | points=18 density=20021.55/m3
     Shape: planarity=0.8076 flatness=0.1649 thickness=11.57cm spread=12.07cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3099 | threshold=0.25

=================================================
Frame 127 (radar 4251) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0080m Y=+1.0549m Z=+0.2607m | Range=1.0867m
     Range-profile relative power: 92.00 dB at 1.0301m | raw=3510 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0205,-0.0031,+0.0149)m/s
     Sensor side info (raw): SNR mean=126.167 min=106 peak=145 | Noise mean=630.944
     Geometry estimate: L=20.84cm W=12.14cm H=3.70cm | points=18 density=19232.15/m3
     Shape: planarity=0.7802 flatness=0.1774 thickness=12.14cm spread=11.31cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2998 | threshold=0.25

=================================================
Frame 128 (radar 4252) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0101m Y=+1.0545m Z=+0.2626m | Range=1.0867m
     Range-profile relative power: 91.94 dB at 1.0301m | raw=3508 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0205,-0.0044,+0.0193)m/s
     Sensor side info (raw): SNR mean=126.000 min=106 peak=145 | Noise mean=630.611
     Geometry estimate: L=20.40cm W=12.42cm H=3.70cm | points=18 density=19190.11/m3
     Shape: planarity=0.7547 flatness=0.1812 thickness=12.42cm spread=10.95cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2975 | threshold=0.25

=================================================
Frame 129 (radar 4253) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0121m Y=+1.0529m Z=+0.2683m | Range=1.0866m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0205,-0.0153,+0.0567)m/s
     Sensor side info (raw): SNR mean=125.833 min=107 peak=145 | Noise mean=631.333
     Geometry estimate: L=20.29cm W=16.29cm H=3.70cm | points=18 density=14722.01/m3
     Shape: planarity=0.7355 flatness=0.1821 thickness=16.29cm spread=11.46cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2962 | threshold=0.25

=================================================
Frame 130 (radar 4254) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0121m Y=+1.0529m Z=+0.2686m | Range=1.0867m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0006,+0.0030)m/s
     Sensor side info (raw): SNR mean=125.944 min=108 peak=145 | Noise mean=631.056
     Geometry estimate: L=20.27cm W=16.20cm H=3.70cm | points=18 density=14822.12/m3
     Shape: planarity=0.7355 flatness=0.1824 thickness=16.20cm spread=11.47cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2963 | threshold=0.25

=================================================
Frame 131 (radar 4255) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0121m Y=+1.0536m Z=+0.2655m | Range=1.0866m
     Range-profile relative power: 91.91 dB at 1.0301m | raw=3507 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0073,-0.0302)m/s
     Sensor side info (raw): SNR mean=126.556 min=108 peak=145 | Noise mean=630.444
     Geometry estimate: L=20.38cm W=16.10cm H=3.70cm | points=18 density=14827.91/m3
     Shape: planarity=0.7381 flatness=0.1814 thickness=16.10cm spread=11.35cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2961 | threshold=0.25

=================================================
Frame 132 (radar 4256) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0080m Y=+1.0554m Z=+0.2590m | Range=1.0868m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0411,+0.0180,-0.0656)m/s
     Sensor side info (raw): SNR mean=126.056 min=105 peak=146 | Noise mean=629.889
     Geometry estimate: L=20.54cm W=11.76cm H=3.70cm | points=18 density=20140.68/m3
     Shape: planarity=0.7777 flatness=0.1799 thickness=11.76cm spread=11.07cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2868 | threshold=0.25

=================================================
Frame 133 (radar 4257) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0063m Y=+1.0478m Z=+0.2667m | Range=1.0813m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(-0.0170,-0.0757,+0.0774)m/s
     Sensor side info (raw): SNR mean=129.118 min=105 peak=148 | Noise mean=631.294
     Geometry estimate: L=20.32cm W=10.32cm H=3.58cm | points=17 density=22633.96/m3
     Shape: planarity=0.7872 flatness=0.1760 thickness=10.32cm spread=10.48cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2845 | threshold=0.25

=================================================
Frame 134 (radar 4258) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0120m Y=+1.0498m Z=+0.2815m | Range=1.0869m
     Range-profile relative power: 91.97 dB at 1.0301m | raw=3509 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0568,+0.0193,+0.1483)m/s
     Sensor side info (raw): SNR mean=128.833 min=114 peak=147 | Noise mean=630.222
     Geometry estimate: L=19.38cm W=11.35cm H=3.70cm | points=18 density=22104.69/m3
     Shape: planarity=0.7280 flatness=0.1907 thickness=11.35cm spread=10.40cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2826 | threshold=0.25

=================================================
Frame 135 (radar 4259) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0145m Y=+1.0386m Z=+0.3001m | Range=1.0812m
     Range-profile relative power: 92.13 dB at 1.0301m | raw=3514 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0253,-0.1119,+0.1858)m/s
     Sensor side info (raw): SNR mean=131.000 min=106 peak=153 | Noise mean=628.235
     Geometry estimate: L=18.18cm W=15.42cm H=7.15cm | points=17 density=8474.04/m3
     Shape: planarity=0.6295 flatness=0.3935 thickness=15.42cm spread=11.85cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2902 | threshold=0.25

=================================================
Frame 136 (radar 4260) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0214m Y=+1.0289m Z=+0.2937m | Range=1.0702m
     Range-profile relative power: 92.19 dB at 1.0301m | raw=3516 (relative, not dBm)
     Radial velocity estimate: mean=-0.0080m/s peak=0.0604m/s | Track velocity=(+0.0686,-0.0969,-0.0643)m/s
     Sensor side info (raw): SNR mean=130.400 min=105 peak=157 | Noise mean=629.733
     Geometry estimate: L=19.85cm W=10.45cm H=7.39cm | points=15 density=9769.99/m3
     Shape: planarity=0.4876 flatness=0.3724 thickness=10.45cm spread=12.49cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2964 | threshold=0.25

=================================================
Frame 137 (radar 4261) | Valid Objects: 1
UART: packet=928 B, objects=27, raw=27, filtered=27, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0280m Y=+1.0464m Z=+0.2909m | Range=1.0864m
     Range-profile relative power: 92.35 dB at 1.0301m | raw=3521 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0657,+0.1748,-0.0279)m/s
     Sensor side info (raw): SNR mean=137.611 min=117 peak=160 | Noise mean=626.056
     Geometry estimate: L=21.81cm W=12.57cm H=7.39cm | points=18 density=8876.78/m3
     Shape: planarity=0.5335 flatness=0.3390 thickness=12.57cm spread=14.15cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2934 | threshold=0.25

=================================================
Frame 138 (radar 4262) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0151m Y=+1.0575m Z=+0.2770m | Range=1.0933m
     Range-profile relative power: 92.47 dB at 1.0301m | raw=3525 (relative, not dBm)
     Radial velocity estimate: mean=-0.0032m/s peak=0.0604m/s | Track velocity=(-0.1283,+0.1112,-0.1389)m/s
     Sensor side info (raw): SNR mean=140.611 min=121 peak=160 | Noise mean=625.158
     Geometry estimate: L=21.98cm W=11.04cm H=3.70cm | points=18 density=20048.74/m3
     Shape: planarity=0.7397 flatness=0.1682 thickness=11.04cm spread=13.14cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

=================================================
Frame 139 (radar 4265) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0021m Y=+1.0551m Z=+0.2577m | Range=1.0861m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0205,+0.2070,-0.0593)m/s
     Sensor side info (raw): SNR mean=138.000 min=117 peak=156 | Noise mean=630.611
     Geometry estimate: L=22.55cm W=14.38cm H=3.70cm | points=18 density=15007.56/m3
     Shape: planarity=0.8842 flatness=0.1639 thickness=14.38cm spread=13.15cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

=================================================
Frame 140 (radar 4266) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0081m Y=+1.0529m Z=+0.2673m | Range=1.0863m
     Range-profile relative power: 92.57 dB at 1.0301m | raw=3528 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0603,-0.0221,+0.0963)m/s
     Sensor side info (raw): SNR mean=140.333 min=118 peak=154 | Noise mean=631.278
     Geometry estimate: L=22.68cm W=12.57cm H=3.70cm | points=18 density=17064.46/m3
     Shape: planarity=0.7905 flatness=0.1630 thickness=12.57cm spread=13.45cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

=================================================
Frame 141 (radar 4267) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0000m Y=+1.0461m Z=+0.2952m | Range=1.0869m
     Range-profile relative power: 92.50 dB at 1.0301m | raw=3526 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0808,-0.0683,+0.2788)m/s
     Sensor side info (raw): SNR mean=135.333 min=109 peak=153 | Noise mean=630.944
     Geometry estimate: L=20.35cm W=9.31cm H=7.39cm | points=18 density=12838.98/m3
     Shape: planarity=0.8147 flatness=0.3633 thickness=9.31cm spread=10.93cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

=================================================
Frame 142 (radar 4268) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0238m Y=+1.0582m Z=+0.2711m | Range=1.0926m
     Range-profile relative power: 92.47 dB at 1.0301m | raw=3525 (relative, not dBm)
     Radial velocity estimate: mean=-0.0121m/s peak=0.1207m/s | Track velocity=(+0.2379,+0.1209,-0.2404)m/s
     Sensor side info (raw): SNR mean=134.684 min=114 peak=154 | Noise mean=613.700
     Geometry estimate: L=22.39cm W=17.77cm H=15.97cm | points=19 density=2991.32/m3
     Shape: planarity=0.3832 flatness=0.7132 thickness=15.97cm spread=17.27cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

=================================================
Frame 143 (radar 4269) | Valid Objects: 2
UART: packet=1120 B, objects=36, raw=36, filtered=36, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=-0.0302m Y=+1.0150m Z=+0.2968m | Range=1.0579m
     Range-profile relative power: 92.47 dB at 1.0301m | raw=3525 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(-0.5396,-0.4321,+0.2570)m/s
     Sensor side info (raw): SNR mean=134.917 min=105 peak=156 | Noise mean=636.769
     Geometry estimate: L=13.01cm W=11.01cm H=6.92cm | points=12 density=12101.57/m3
     Shape: planarity=0.2836 flatness=0.5315 thickness=11.01cm spread=9.29cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.2922 | threshold=0.25

  🔍 [3D][MET] Object ID: 3
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.1305m Y=+1.1596m Z=+0.1680m | Range=1.1790m
     Range-profile relative power: 86.20 dB at 1.1446m | raw=3325 (relative, not dBm)
     Radial velocity estimate: mean=-0.0658m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=153.000 min=115 peak=202 | Noise mean=544.727
     Geometry estimate: L=15.83cm W=10.37cm H=4.53cm | points=11 density=14772.46/m3
     Shape: planarity=0.5735 flatness=0.2863 thickness=10.37cm spread=8.40cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 144 (radar 4270) | Valid Objects: 1
UART: packet=1088 B, objects=35, raw=35, filtered=35, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0173m Y=+1.0153m Z=+0.2548m | Range=1.0469m
     Range-profile relative power: 92.41 dB at 1.0301m | raw=3523 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1289,+0.0030,-0.4201)m/s
     Sensor side info (raw): SNR mean=137.833 min=116 peak=160 | Noise mean=635.000
     Geometry estimate: L=18.87cm W=15.62cm H=6.92cm | points=12 density=5882.48/m3
     Shape: planarity=0.4706 flatness=0.3664 thickness=18.87cm spread=15.72cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3154 | threshold=0.25

=================================================
Frame 145 (radar 4271) | Valid Objects: 4
UART: packet=1216 B, objects=40, raw=40, filtered=40, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0028m Y=+1.0281m Z=+0.2469m | Range=1.0574m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(+0.2013,+0.1288,-0.0792)m/s
     Sensor side info (raw): SNR mean=134.077 min=106 peak=154 | Noise mean=633.154
     Geometry estimate: L=23.35cm W=16.52cm H=3.70cm | points=13 density=9108.92/m3
     Shape: planarity=0.8521 flatness=0.1583 thickness=16.52cm spread=16.32cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3152 | threshold=0.25

  🔍 [3D][MET] Object ID: 2
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0764m Y=+0.3917m Z=+0.0294m | Range=0.4002m
     Range-profile relative power: 71.31 dB at 0.4197m | raw=2850 (relative, not dBm)
     Radial velocity estimate: mean=+0.2535m/s peak=0.3018m/s | Track velocity=(+0.1061,+0.4751,+0.1046)m/s
     Sensor side info (raw): SNR mean=198.000 min=122 peak=250 | Noise mean=472.200
     Geometry estimate: L=11.43cm W=6.48cm H=2.74cm | points=10 density=49021.04/m3
     Shape: planarity=0.7702 flatness=0.2400 thickness=6.48cm spread=5.91cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

  🔍 [3D][MET] Object ID: 4
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0850m Y=+0.5295m Z=+0.2883m | Range=0.6088m
     Range-profile relative power: 80.87 dB at 0.6104m | raw=3155 (relative, not dBm)
     Radial velocity estimate: mean=+0.0776m/s peak=0.1207m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=145.143 min=106 peak=205 | Noise mean=540.571
     Geometry estimate: L=12.56cm W=9.43cm H=4.77cm | points=7 density=12370.34/m3
     Shape: planarity=0.0000 flatness=0.3798 thickness=0.00cm spread=9.11cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

  🔍 [3D][MET] Object ID: 5
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.2604m Y=+0.4238m Z=-0.2467m | Range=0.5552m
     Range-profile relative power: 80.87 dB at 0.6104m | raw=3155 (relative, not dBm)
     Radial velocity estimate: mean=+0.1132m/s peak=0.1811m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=167.750 min=116 peak=210 | Noise mean=474.625
     Geometry estimate: L=16.69cm W=15.65cm H=15.54cm | points=8 density=1970.70/m3
     Shape: planarity=0.0000 flatness=0.9307 thickness=0.00cm spread=14.15cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 146 (radar 4272) | Valid Objects: 2
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0236m Y=+1.0454m Z=+0.2689m | Range=1.0797m
     Range-profile relative power: 92.32 dB at 1.0301m | raw=3520 (relative, not dBm)
     Radial velocity estimate: mean=+0.0036m/s peak=0.0604m/s | Track velocity=(+0.2072,+0.1728,+0.2196)m/s
     Sensor side info (raw): SNR mean=126.938 min=107 peak=151 | Noise mean=634.000
     Geometry estimate: L=22.24cm W=13.45cm H=11.09cm | points=16 density=4820.52/m3
     Shape: planarity=0.4619 flatness=0.4986 thickness=13.45cm spread=17.57cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3252 | threshold=0.25

  🔍 [3D][DPLA] Object ID: 2
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0879m Y=+0.5216m Z=+0.2361m | Range=0.5793m
     Range-profile relative power: 78.33 dB at 0.5341m | raw=3074 (relative, not dBm)
     Radial velocity estimate: mean=+0.1056m/s peak=0.1207m/s | Track velocity=(+0.1151,+1.2987,+2.0673)m/s
     Sensor side info (raw): SNR mean=202.250 min=119 peak=295 | Noise mean=485.000
     Geometry estimate: L=20.11cm W=11.59cm H=6.68cm | points=8 density=5137.66/m3
     Shape: planarity=0.0000 flatness=0.3321 thickness=0.00cm spread=11.10cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 147 (radar 4273) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0103m Y=+1.0332m Z=+0.2669m | Range=1.0672m
     Range-profile relative power: 92.25 dB at 1.0301m | raw=3518 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(-0.1326,-0.1219,-0.0194)m/s
     Sensor side info (raw): SNR mean=126.571 min=106 peak=148 | Noise mean=638.714
     Geometry estimate: L=21.54cm W=12.09cm H=7.15cm | points=14 density=7510.91/m3
     Shape: planarity=0.6780 flatness=0.3321 thickness=12.09cm spread=13.05cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3277 | threshold=0.25

=================================================
Frame 148 (radar 4274) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0156m Y=+1.0081m Z=+0.2617m | Range=1.0416m
     Range-profile relative power: 92.22 dB at 1.0301m | raw=3517 (relative, not dBm)
     Radial velocity estimate: mean=+0.0055m/s peak=0.0604m/s | Track velocity=(-0.2592,-0.2515,-0.0521)m/s
     Sensor side info (raw): SNR mean=144.222 min=127 peak=157 | Noise mean=636.636
     Geometry estimate: L=10.16cm W=7.82cm H=3.34cm | points=9 density=33811.99/m3
     Shape: planarity=0.0000 flatness=0.3287 thickness=0.00cm spread=6.46cm
     Quality: 91% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3312 | threshold=0.25

=================================================
Frame 149 (radar 4275) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0132m Z=+0.2663m | Range=1.0476m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0696,+0.0510,+0.0456)m/s
     Sensor side info (raw): SNR mean=134.667 min=109 peak=158 | Noise mean=637.750
     Geometry estimate: L=17.08cm W=15.75cm H=3.46cm | points=12 density=12885.63/m3
     Shape: planarity=0.7112 flatness=0.2025 thickness=17.08cm spread=13.96cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3311 | threshold=0.25

=================================================
Frame 150 (radar 4276) | Valid Objects: 3
UART: packet=1152 B, objects=38, raw=38, filtered=38, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0058m Y=+1.0071m Z=+0.2929m | Range=1.0489m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0288,-0.0604,+0.2660)m/s
     Sensor side info (raw): SNR mean=135.250 min=105 peak=158 | Noise mean=636.500
     Geometry estimate: L=12.34cm W=8.71cm H=3.46cm | points=12 density=32212.30/m3
     Shape: planarity=0.6875 flatness=0.2803 thickness=8.71cm spread=7.00cm
     Quality: 97% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3321 | threshold=0.25

  🔍 [3D][MET] Object ID: 2
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0892m Y=+0.5173m Z=+0.2304m | Range=0.5732m
     Range-profile relative power: 83.72 dB at 0.6104m | raw=3246 (relative, not dBm)
     Radial velocity estimate: mean=-0.0805m/s peak=0.1207m/s | Track velocity=(+0.0123,-0.0435,-0.0570)m/s
     Sensor side info (raw): SNR mean=128.429 min=111 peak=147 | Noise mean=558.444
     Geometry estimate: L=7.85cm W=6.16cm H=2.86cm | points=7 density=50196.47/m3
     Shape: planarity=0.0000 flatness=0.3644 thickness=0.00cm spread=5.61cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

  🔍 [3D][MET] Object ID: 6
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.4176m Y=+0.5137m Z=-0.2230m | Range=0.6986m
     Range-profile relative power: 83.72 dB at 0.6104m | raw=3246 (relative, not dBm)
     Radial velocity estimate: mean=-0.1744m/s peak=0.2414m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=147.889 min=109 peak=186 | Noise mean=494.000
     Geometry estimate: L=13.89cm W=6.80cm H=4.91cm | points=9 density=19354.74/m3
     Shape: planarity=0.0000 flatness=0.3537 thickness=0.00cm spread=8.14cm
     Quality: 90% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 151 (radar 4277) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0063m Y=+1.0003m Z=+0.2971m | Range=1.0435m
     Range-profile relative power: 92.41 dB at 1.0301m | raw=3523 (relative, not dBm)
     Radial velocity estimate: mean=+0.0055m/s peak=0.0604m/s | Track velocity=(-0.0052,-0.0683,+0.0423)m/s
     Sensor side info (raw): SNR mean=136.545 min=111 peak=157 | Noise mean=639.000
     Geometry estimate: L=12.60cm W=10.86cm H=3.46cm | points=11 density=23191.97/m3
     Shape: planarity=0.6668 flatness=0.2744 thickness=10.86cm spread=8.16cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 152 (radar 4282) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0148m Z=+0.2585m | Range=1.0473m
     Range-profile relative power: 92.41 dB at 1.0301m | raw=3523 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0864,+0.2748,-0.3443)m/s
     Sensor side info (raw): SNR mean=144.250 min=121 peak=164 | Noise mean=628.667
     Geometry estimate: L=17.87cm W=15.70cm H=3.46cm | points=12 density=12361.11/m3
     Shape: planarity=0.7270 flatness=0.1935 thickness=17.87cm spread=14.03cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 153 (radar 4283) | Valid Objects: 1
UART: packet=672 B, objects=14, raw=14, filtered=14, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0147m Z=+0.2586m | Range=1.0471m
     Range-profile relative power: 92.41 dB at 1.0301m | raw=3523 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0018,+0.0007)m/s
     Sensor side info (raw): SNR mean=147.167 min=123 peak=168 | Noise mean=626.083
     Geometry estimate: L=18.38cm W=15.96cm H=3.46cm | points=12 density=11816.68/m3
     Shape: planarity=0.7376 flatness=0.1882 thickness=18.38cm spread=14.49cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 154 (radar 4284) | Valid Objects: 1
UART: packet=736 B, objects=16, raw=16, filtered=16, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0110m Z=+0.2771m | Range=1.0483m
     Range-profile relative power: 92.50 dB at 1.0301m | raw=3526 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0365,+0.1851)m/s
     Sensor side info (raw): SNR mean=144.000 min=117 peak=164 | Noise mean=628.250
     Geometry estimate: L=14.82cm W=12.06cm H=3.46cm | points=12 density=19376.45/m3
     Shape: planarity=0.6949 flatness=0.2333 thickness=12.06cm spread=10.90cm
     Quality: 95% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 155 (radar 4285) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=-0.0173m Y=+1.0115m Z=+0.2739m | Range=1.0481m
     Range-profile relative power: 92.44 dB at 1.0301m | raw=3524 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0864,+0.0052,-0.0326)m/s
     Sensor side info (raw): SNR mean=139.833 min=112 peak=160 | Noise mean=632.333
     Geometry estimate: L=14.48cm W=10.98cm H=6.92cm | points=12 density=10904.74/m3
     Shape: planarity=0.3848 flatness=0.4775 thickness=10.98cm spread=10.79cm
     Quality: 96% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 156 (radar 4287) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0094m Y=+1.0026m Z=+0.2884m | Range=1.0433m
     Range-profile relative power: 92.50 dB at 1.0301m | raw=3526 (relative, not dBm)
     Radial velocity estimate: mean=+0.0055m/s peak=0.0604m/s | Track velocity=(-0.0943,+0.0290,-0.1103)m/s
     Sensor side info (raw): SNR mean=140.364 min=105 peak=164 | Noise mean=634.273
     Geometry estimate: L=13.92cm W=9.69cm H=6.92cm | points=11 density=11782.35/m3
     Shape: planarity=0.5129 flatness=0.4968 thickness=9.69cm spread=10.79cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 157 (radar 4288) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=-0.0103m Y=+1.0012m Z=+0.2666m | Range=1.0361m
     Range-profile relative power: 92.35 dB at 1.0301m | raw=3521 (relative, not dBm)
     Radial velocity estimate: mean=+0.0060m/s peak=0.0604m/s | Track velocity=(-0.0082,-0.0147,-0.2176)m/s
     Sensor side info (raw): SNR mean=150.333 min=134 peak=165 | Noise mean=629.300
     Geometry estimate: L=10.10cm W=7.98cm H=3.34cm | points=9 density=33329.60/m3
     Shape: planarity=0.0000 flatness=0.3305 thickness=0.00cm spread=6.49cm
     Quality: 91% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 158 (radar 4289) | Valid Objects: 1
UART: packet=768 B, objects=18, raw=18, filtered=18, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0157m Z=+0.2560m | Range=1.0475m
     Range-profile relative power: 92.32 dB at 1.0301m | raw=3520 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0161,+0.1456,-0.1057)m/s
     Sensor side info (raw): SNR mean=138.417 min=110 peak=160 | Noise mean=631.167
     Geometry estimate: L=17.75cm W=15.56cm H=3.46cm | points=12 density=12552.73/m3
     Shape: planarity=0.7116 flatness=0.1948 thickness=17.75cm spread=14.38cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 159 (radar 4290) | Valid Objects: 1
UART: packet=736 B, objects=17, raw=17, filtered=17, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=-0.0086m Y=+1.0151m Z=+0.2588m | Range=1.0476m
     Range-profile relative power: 92.32 dB at 1.0301m | raw=3520 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0063,+0.0271)m/s
     Sensor side info (raw): SNR mean=142.917 min=109 peak=165 | Noise mean=626.917
     Geometry estimate: L=18.39cm W=15.61cm H=3.46cm | points=12 density=12073.86/m3
     Shape: planarity=0.7091 flatness=0.1880 thickness=18.39cm spread=15.36cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3344 | threshold=0.25

=================================================
Frame 160 (radar 4291) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0072m Y=+1.0306m Z=+0.2745m | Range=1.0666m
     Range-profile relative power: 92.38 dB at 1.0301m | raw=3522 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1580,+0.1554,+0.1575)m/s
     Sensor side info (raw): SNR mean=141.667 min=115 peak=167 | Noise mean=621.867
     Geometry estimate: L=19.24cm W=18.18cm H=3.58cm | points=15 density=11978.5

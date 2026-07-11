x□x�x□xxx��x��x��x��x�x�xx�������x��xx���□����x�□����������x□�x�□xxx��x�x�x��x�x□x�x�������□����□����x�x□�x��x�x�x��□�□x□�□�□x□x��xxxxx�x��x�x�x□x�□x�x�x�x��□�□x�□�□x��x□xx�xx�□x□x�x□xxx�□x�x□x�x□�xx�□x�x�xxx�xx□�x��x□xx�xxxx���□�□xxxxx�□�xx�x�x�xxx��□□x��x�xx□��□x�x�x□xxx�□�x��x�x��x�x□�x□�x�x□x�x��□�□x����x□xxx��□����□�□x□�xxx�x��□�□x□�□��□x□x�□�x□�x�x□x�x��□�□x��□�����□x����□�□�□x□�xxx�x��□�□x□x���□x�□�x□�x�x□x�x��□�□x��□�����□x□x��□�□�□x□�xxx�x��□�□x��□��□x�x□�xx�x�x�x�x�x�□�□x��□�����□x�□��□x�x□�x=================================================
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
   • Ghost Point Rejection (min 12 points)
   • Quality Validation (SNR, density, coherence)
   • Requires 6 consecutive valid detections
   • Requires 10 stable frames for confident ID
=================================================
READY - Press button on GPIO4 to START/STOP
System is OFF. Press button to begin detection.
=================================================


🟢 SYSTEM STARTED - Detection active

=================================================
Frame 1 (radar 19581) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2920m | Range=0.9903m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=272.429 min=138 peak=326 | Noise mean=539.600
     Geometry estimate: L=18.59cm W=12.84cm H=6.68cm | points=14 density=8779.08/m3
     Shape: planarity=0.6555 flatness=0.3591 thickness=12.84cm spread=13.66cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 19582) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=-0.0483m Y=+0.9490m Z=+0.2842m | Range=0.9918m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=-0.0142m/s peak=0.1207m/s | Track velocity=(-0.1661,+0.0318,-0.0781)m/s
     Sensor side info (raw): SNR mean=256.647 min=138 peak=325 | Noise mean=533.941
     Geometry estimate: L=19.50cm W=18.45cm H=16.10cm | points=17 density=2934.28/m3
     Shape: planarity=0.3450 flatness=0.8253 thickness=19.50cm spread=18.22cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 19583) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=-0.0286m Y=+0.9357m Z=+0.3100m | Range=0.9862m
     Range-profile relative power: 100.88 dB at 0.9920m | raw=3793 (relative, not dBm)
     Radial velocity estimate: mean=+0.0043m/s peak=0.0604m/s | Track velocity=(+0.1971,-0.1324,+0.2580)m/s
     Sensor side info (raw): SNR mean=269.929 min=136 peak=323 | Noise mean=541.143
     Geometry estimate: L=17.09cm W=8.79cm H=3.34cm | points=14 density=27870.62/m3
     Shape: planarity=0.8482 flatness=0.1954 thickness=8.79cm spread=9.17cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 19584) | Valid Objects: 1
UART: packet=1024 B, objects=31, raw=31, filtered=31, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=-0.0339m Y=+0.9460m Z=+0.2721m | Range=0.9850m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.1811m/s | Track velocity=(-0.0533,+0.1028,-0.3788)m/s
     Sensor side info (raw): SNR mean=259.294 min=110 peak=330 | Noise mean=522.059
     Geometry estimate: L=22.15cm W=17.40cm H=13.83cm | points=17 density=3188.53/m3
     Shape: planarity=0.4882 flatness=0.6245 thickness=17.40cm spread=18.42cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 5 (radar 19585) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=-0.0332m Y=+0.9378m Z=+0.2945m | Range=0.9835m
     Range-profile relative power: 101.00 dB at 0.9920m | raw=3797 (relative, not dBm)
     Radial velocity estimate: mean=-0.0075m/s peak=0.1207m/s | Track velocity=(+0.0078,-0.0826,+0.2235)m/s
     Sensor side info (raw): SNR mean=261.812 min=124 peak=337 | Noise mean=532.875
     Geometry estimate: L=18.74cm W=18.13cm H=6.68cm | points=16 density=7048.76/m3
     Shape: planarity=0.6518 flatness=0.3562 thickness=18.13cm spread=14.18cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 6 (radar 19586) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0272m Y=+0.9424m Z=+0.2824m | Range=0.9842m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(+0.0599,+0.0469,-0.1204)m/s
     Sensor side info (raw): SNR mean=303.500 min=260 peak=340 | Noise mean=528.714
     Geometry estimate: L=13.34cm W=8.76cm H=3.22cm | points=12 density=31818.40/m3
     Shape: planarity=0.6654 flatness=0.2413 thickness=8.76cm spread=7.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3917 | threshold=0.25

=================================================
Frame 7 (radar 19587) | Valid Objects: 1
UART: packet=1088 B, objects=34, raw=34, filtered=34, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0195m Y=+0.9203m Z=+0.2931m | Range=0.9660m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=-0.0249m/s peak=0.1207m/s | Track velocity=(+0.0767,-0.2214,+0.1066)m/s
     Sensor side info (raw): SNR mean=264.765 min=135 peak=338 | Noise mean=495.647
     Geometry estimate: L=21.17cm W=14.63cm H=3.22cm | points=17 density=17036.28/m3
     Shape: planarity=0.7215 flatness=0.1521 thickness=21.17cm spread=13.02cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3800 | threshold=0.25

=================================================
Frame 8 (radar 19588) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0256m Y=+0.9417m Z=+0.2912m | Range=0.9861m
     Range-profile relative power: 100.91 dB at 0.9920m | raw=3794 (relative, not dBm)
     Radial velocity estimate: mean=+0.0213m/s peak=0.1207m/s | Track velocity=(-0.0610,+0.2143,-0.0184)m/s
     Sensor side info (raw): SNR mean=268.438 min=138 peak=334 | Noise mean=515.529
     Geometry estimate: L=18.10cm W=10.66cm H=3.34cm | points=16 density=24800.49/m3
     Shape: planarity=0.7514 flatness=0.1844 thickness=10.66cm spread=11.96cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3691 | threshold=0.25

=================================================
Frame 9 (radar 19589) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0291m Y=+0.9433m Z=+0.3043m | Range=0.9916m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0349,+0.0157,+0.1302)m/s
     Sensor side info (raw): SNR mean=271.733 min=145 peak=333 | Noise mean=532.800
     Geometry estimate: L=17.45cm W=8.91cm H=3.34cm | points=15 density=28846.08/m3
     Shape: planarity=0.8558 flatness=0.1913 thickness=8.91cm spread=9.75cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3588 | threshold=0.25
Radar frame 19590: 24 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 10 (radar 19591) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0332m Y=+0.9333m Z=+0.2961m | Range=0.9797m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0046m/s peak=0.0604m/s | Track velocity=(-0.0411,-0.0999,-0.0820)m/s
     Sensor side info (raw): SNR mean=284.462 min=146 peak=325 | Noise mean=532.154
     Geometry estimate: L=17.10cm W=9.61cm H=3.82cm | points=13 density=20704.79/m3
     Shape: planarity=0.8051 flatness=0.2231 thickness=9.61cm spread=10.92cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3522 | threshold=0.25

=================================================
Frame 11 (radar 19592) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0335m Y=+0.9482m Z=+0.2851m | Range=0.9907m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0034,+0.1485,-0.1095)m/s
     Sensor side info (raw): SNR mean=267.400 min=138 peak=330 | Noise mean=537.467
     Geometry estimate: L=19.04cm W=14.56cm H=6.68cm | points=15 density=8098.91/m3
     Shape: planarity=0.7525 flatness=0.3507 thickness=14.56cm spread=13.41cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3534 | threshold=0.25

=================================================
Frame 12 (radar 19593) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0377m Y=+0.9514m Z=+0.2716m | Range=0.9902m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0413,+0.0326,-0.1347)m/s
     Sensor side info (raw): SNR mean=279.429 min=151 peak=331 | Noise mean=535.867
     Geometry estimate: L=19.01cm W=14.40cm H=3.82cm | points=14 density=13397.15/m3
     Shape: planarity=0.7855 flatness=0.2008 thickness=14.40cm spread=14.38cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3498 | threshold=0.25

=================================================
Frame 13 (radar 19594) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9452m Z=+0.2962m | Range=0.9911m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0596,-0.0618,+0.2456)m/s
     Sensor side info (raw): SNR mean=269.733 min=139 peak=330 | Noise mean=535.600
     Geometry estimate: L=18.06cm W=11.17cm H=6.68cm | points=15 density=11124.55/m3
     Shape: planarity=0.6399 flatness=0.3697 thickness=11.17cm spread=12.14cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3511 | threshold=0.25
Radar frame 19595: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 14 (radar 19596) | Valid Objects: 1
UART: packet=800 B, objects=20, raw=20, filtered=20, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9476m Z=+0.2845m | Range=0.9899m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0233,-0.1170)m/s
     Sensor side info (raw): SNR mean=262.714 min=133 peak=316 | Noise mean=549.600
     Geometry estimate: L=18.97cm W=15.20cm H=6.68cm | points=14 density=7270.87/m3
     Shape: planarity=0.6603 flatness=0.3521 thickness=15.20cm spread=15.11cm
     Quality: 83% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3529 | threshold=0.25

=================================================
Frame 15 (radar 19597) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9316m Z=+0.2716m | Range=0.9708m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0217,-0.1595,-0.1296)m/s
     Sensor side info (raw): SNR mean=238.167 min=137 peak=317 | Noise mean=542.222
     Geometry estimate: L=23.57cm W=18.06cm H=6.68cm | points=18 density=6330.79/m3
     Shape: planarity=0.7362 flatness=0.2833 thickness=23.57cm spread=16.99cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3530 | threshold=0.25

=================================================
Frame 16 (radar 19598) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0403m Y=+0.9476m Z=+0.2821m | Range=0.9895m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.1076,+0.1600,+0.1051)m/s
     Sensor side info (raw): SNR mean=253.467 min=120 peak=321 | Noise mean=548.200
     Geometry estimate: L=19.08cm W=18.23cm H=10.02cm | points=15 density=4303.06/m3
     Shape: planarity=0.4934 flatness=0.5249 thickness=18.23cm spread=16.54cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3597 | threshold=0.25
Radar frame 19599: 21 filtered points, no DBSCAN cluster (eps=0.15m minPts=12)

=================================================
Frame 17 (radar 19600) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0263m Y=+0.9327m Z=+0.2952m | Range=0.9787m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=-0.0046m/s peak=0.0604m/s | Track velocity=(+0.1398,-0.1489,+0.1317)m/s
     Sensor side info (raw): SNR mean=292.083 min=262 peak=321 | Noise mean=535.538
     Geometry estimate: L=13.28cm W=8.63cm H=3.22cm | points=12 density=32422.40/m3
     Shape: planarity=0.6881 flatness=0.2424 thickness=8.63cm spread=7.60cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3561 | threshold=0.25

=================================================
Frame 18 (radar 19601) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0394m Y=+0.9638m Z=+0.2728m | Range=1.0024m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0201m/s peak=0.1207m/s | Track velocity=(-0.1309,+0.3105,-0.2245)m/s
     Sensor side info (raw): SNR mean=247.278 min=119 peak=324 | Noise mean=519.556
     Geometry estimate: L=19.36cm W=18.02cm H=10.37cm | points=18 density=4972.73/m3
     Shape: planarity=0.5319 flatness=0.5359 thickness=18.02cm spread=14.26cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3616 | threshold=0.25

=================================================
Frame 19 (radar 19602) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0362m Y=+0.9417m Z=+0.3100m | Range=0.9921m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0040m/s peak=0.1207m/s | Track velocity=(+0.0317,-0.2208,+0.3724)m/s
     Sensor side info (raw): SNR mean=269.467 min=111 peak=334 | Noise mean=521.667
     Geometry estimate: L=22.44cm W=21.88cm H=13.35cm | points=15 density=2287.67/m3
     Shape: planarity=0.4626 flatness=0.5953 thickness=22.44cm spread=16.11cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3685 | threshold=0.25

=================================================
Frame 20 (radar 19603) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0151m Y=+0.9076m Z=+0.3036m | Range=0.9572m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0043m/s peak=0.0604m/s | Track velocity=(+0.2117,-0.3406,-0.0640)m/s
     Sensor side info (raw): SNR mean=298.750 min=259 peak=332 | Noise mean=521.143
     Geometry estimate: L=13.54cm W=11.08cm H=3.22cm | points=12 density=24802.66/m3
     Shape: planarity=0.6117 flatness=0.2378 thickness=13.54cm spread=7.86cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3665 | threshold=0.25

=================================================
Frame 21 (radar 19604) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0260m Y=+0.9310m Z=+0.2921m | Range=0.9761m
     Range-profile relative power: 100.81 dB at 0.9920m | raw=3791 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(-0.1095,+0.2341,-0.1148)m/s
     Sensor side info (raw): SNR mean=269.375 min=141 peak=339 | Noise mean=523.353
     Geometry estimate: L=27.20cm W=18.24cm H=6.68cm | points=16 density=4826.17/m3
     Shape: planarity=0.6670 flatness=0.2455 thickness=27.20cm spread=16.85cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3658 | threshold=0.25

=================================================
Frame 22 (radar 19605) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9467m Z=+0.2877m | Range=0.9900m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0570,+0.1568,-0.0447)m/s
     Sensor side info (raw): SNR mean=265.067 min=138 peak=327 | Noise mean=538.467
     Geometry estimate: L=19.45cm W=18.30cm H=6.68cm | points=15 density=6306.91/m3
     Shape: planarity=0.6635 flatness=0.3432 thickness=18.30cm spread=16.15cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3574 | threshold=0.25

=================================================
Frame 23 (radar 19606) | Valid Objects: 1
UART: packet=992 B, objects=29, raw=29, filtered=29, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9456m Z=+0.2929m | Range=0.9905m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0109,+0.0519)m/s
     Sensor side info (raw): SNR mean=267.067 min=138 peak=331 | Noise mean=536.133
     Geometry estimate: L=19.19cm W=16.67cm H=6.68cm | points=15 density=7019.88/m3
     Shape: planarity=0.6541 flatness=0.3479 thickness=16.67cm spread=15.39cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3627 | threshold=0.25

=================================================
Frame 24 (radar 19607) | Valid Objects: 2
UART: packet=1280 B, objects=44, raw=44, filtered=44, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2924m | Range=0.9904m
     Range-profile relative power: 100.53 dB at 0.9920m | raw=3782 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0012,-0.0045)m/s
     Sensor side info (raw): SNR mean=262.733 min=129 peak=326 | Noise mean=539.200
     Geometry estimate: L=19.20cm W=16.54cm H=6.68cm | points=15 density=7070.04/m3
     Shape: planarity=0.6547 flatness=0.3477 thickness=16.54cm spread=15.37cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3576 | threshold=0.25

  🔍 [3D][MET] Object ID: 1
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=-0.1405m Y=+0.3185m Z=+0.0503m | Range=0.3517m
     Range-profile relative power: 51.30 dB at 0.3815m | raw=2212 (relative, not dBm)
     Radial velocity estimate: mean=+0.6639m/s peak=0.7846m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=278.200 min=231 peak=343 | Noise mean=372.500
     Geometry estimate: L=23.35cm W=12.46cm H=7.87cm | points=20 density=8732.17/m3
     Shape: planarity=0.7755 flatness=0.3371 thickness=23.35cm spread=14.17cm
     Quality: 90% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 25 (radar 19608) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2927m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0007,+0.0027)m/s
     Sensor side info (raw): SNR mean=275.357 min=140 peak=327 | Noise mean=536.267
     Geometry estimate: L=18.44cm W=12.87cm H=6.68cm | points=14 density=8830.93/m3
     Shape: planarity=0.6274 flatness=0.3621 thickness=12.87cm spread=13.71cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3567 | threshold=0.25

=================================================
Frame 26 (radar 19609) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0215,+0.0025,-0.0112)m/s
     Sensor side info (raw): SNR mean=264.000 min=134 peak=326 | Noise mean=538.400
     Geometry estimate: L=19.27cm W=17.06cm H=6.68cm | points=15 density=6830.68/m3
     Shape: planarity=0.6562 flatness=0.3465 thickness=17.06cm spread=15.73cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3607 | threshold=0.25

=================================================
Frame 27 (radar 19610) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9402m Z=+0.2858m | Range=0.9831m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0038m/s peak=0.0604m/s | Track velocity=(+0.0399,-0.0569,-0.0579)m/s
     Sensor side info (raw): SNR mean=254.875 min=128 peak=325 | Noise mean=537.812
     Geometry estimate: L=19.27cm W=16.87cm H=6.68cm | points=16 density=7367.68/m3
     Shape: planarity=0.6341 flatness=0.3466 thickness=16.87cm spread=15.68cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3652 | threshold=0.25

=================================================
Frame 28 (radar 19611) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2922m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0399,+0.0556,+0.0641)m/s
     Sensor side info (raw): SNR mean=260.533 min=130 peak=327 | Noise mean=541.400
     Geometry estimate: L=19.17cm W=16.78cm H=6.68cm | points=15 density=6982.76/m3
     Shape: planarity=0.6544 flatness=0.3484 thickness=16.78cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3701 | threshold=0.25

=================================================
Frame 29 (radar 19612) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9454m Z=+0.2938m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0041,+0.0159)m/s
     Sensor side info (raw): SNR mean=264.500 min=134 peak=321 | Noise mean=546.800
     Geometry estimate: L=18.42cm W=12.53cm H=6.68cm | points=14 density=9080.73/m3
     Shape: planarity=0.6262 flatness=0.3625 thickness=12.53cm spread=13.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3748 | threshold=0.25

=================================================
Frame 30 (radar 19613) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2936m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0020)m/s
     Sensor side info (raw): SNR mean=262.500 min=132 peak=320 | Noise mean=548.200
     Geometry estimate: L=18.40cm W=12.57cm H=6.68cm | points=14 density=9060.81/m3
     Shape: planarity=0.6260 flatness=0.3629 thickness=12.57cm spread=13.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3786 | threshold=0.25

=================================================
Frame 31 (radar 19614) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0277m Y=+0.9404m Z=+0.2842m | Range=0.9828m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0185,-0.0505,-0.0935)m/s
     Sensor side info (raw): SNR mean=249.625 min=134 peak=319 | Noise mean=543.125
     Geometry estimate: L=21.54cm W=19.18cm H=6.68cm | points=16 density=5798.77/m3
     Shape: planarity=0.6293 flatness=0.3100 thickness=21.54cm spread=16.78cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3793 | threshold=0.25

=================================================
Frame 32 (radar 19615) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2931m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0185,+0.0515,+0.0894)m/s
     Sensor side info (raw): SNR mean=266.571 min=135 peak=322 | Noise mean=544.867
     Geometry estimate: L=18.44cm W=12.62cm H=6.68cm | points=14 density=9003.86/m3
     Shape: planarity=0.6269 flatness=0.3621 thickness=12.62cm spread=13.57cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3822 | threshold=0.25

=================================================
Frame 33 (radar 19616) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2932m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0002,+0.0005)m/s
     Sensor side info (raw): SNR mean=270.143 min=137 peak=323 | Noise mean=541.200
     Geometry estimate: L=18.45cm W=12.76cm H=6.68cm | points=14 density=8899.56/m3
     Shape: planarity=0.6269 flatness=0.3619 thickness=12.76cm spread=13.63cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3824 | threshold=0.25

=================================================
Frame 34 (radar 19617) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0215,+0.0034,-0.0126)m/s
     Sensor side info (raw): SNR mean=259.200 min=134 peak=321 | Noise mean=543.067
     Geometry estimate: L=19.23cm W=16.77cm H=6.68cm | points=15 density=6962.11/m3
     Shape: planarity=0.6548 flatness=0.3473 thickness=16.77cm spread=15.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3827 | threshold=0.25

=================================================
Frame 35 (radar 19618) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2926m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0019,+0.0070)m/s
     Sensor side info (raw): SNR mean=273.714 min=136 peak=324 | Noise mean=537.933
     Geometry estimate: L=18.47cm W=12.86cm H=6.68cm | points=14 density=8820.83/m3
     Shape: planarity=0.6273 flatness=0.3614 thickness=12.86cm spread=13.70cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3837 | threshold=0.25

=================================================
Frame 36 (radar 19619) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0215,+0.0032,-0.0125)m/s
     Sensor side info (raw): SNR mean=259.733 min=135 peak=321 | Noise mean=542.800
     Geometry estimate: L=19.26cm W=16.84cm H=6.68cm | points=15 density=6921.11/m3
     Shape: planarity=0.6559 flatness=0.3467 thickness=16.84cm spread=15.60cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3802 | threshold=0.25

=================================================
Frame 37 (radar 19620) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0017,+0.0064)m/s
     Sensor side info (raw): SNR mean=255.533 min=134 peak=323 | Noise mean=546.800
     Geometry estimate: L=19.22cm W=16.80cm H=6.68cm | points=15 density=6952.81/m3
     Shape: planarity=0.6551 flatness=0.3473 thickness=16.80cm spread=15.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3840 | threshold=0.25

=================================================
Frame 38 (radar 19621) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2935m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0036,+0.0147)m/s
     Sensor side info (raw): SNR mean=265.143 min=133 peak=320 | Noise mean=546.267
     Geometry estimate: L=18.40cm W=12.59cm H=6.68cm | points=14 density=9046.14/m3
     Shape: planarity=0.6260 flatness=0.3629 thickness=12.59cm spread=13.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3802 | threshold=0.25

=================================================
Frame 39 (radar 19622) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2934m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0000,-0.0009)m/s
     Sensor side info (raw): SNR mean=265.857 min=136 peak=318 | Noise mean=545.467
     Geometry estimate: L=18.44cm W=12.68cm H=6.68cm | points=14 density=8960.36/m3
     Shape: planarity=0.6270 flatness=0.3622 thickness=12.68cm spread=13.59cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3742 | threshold=0.25

=================================================
Frame 40 (radar 19623) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2930m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0013,-0.0044)m/s
     Sensor side info (raw): SNR mean=266.929 min=132 peak=319 | Noise mean=544.400
     Geometry estimate: L=18.43cm W=12.78cm H=6.68cm | points=14 density=8897.10/m3
     Shape: planarity=0.6266 flatness=0.3623 thickness=12.78cm spread=13.63cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3764 | threshold=0.25

=================================================
Frame 41 (radar 19624) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2931m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0016)m/s
     Sensor side info (raw): SNR mean=270.000 min=132 peak=323 | Noise mean=540.867
     Geometry estimate: L=18.45cm W=12.77cm H=6.68cm | points=14 density=8894.03/m3
     Shape: planarity=0.6270 flatness=0.3618 thickness=12.77cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3773 | threshold=0.25

=================================================
Frame 42 (radar 19625) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0405,+0.0031,-0.0134)m/s
     Sensor side info (raw): SNR mean=262.933 min=136 peak=322 | Noise mean=539.267
     Geometry estimate: L=19.28cm W=16.76cm H=6.68cm | points=15 density=6947.17/m3
     Shape: planarity=0.6838 flatness=0.3462 thickness=16.76cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 43 (radar 19626) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,+0.0007,-0.0011)m/s
     Sensor side info (raw): SNR mean=257.133 min=131 peak=317 | Noise mean=545.467
     Geometry estimate: L=19.25cm W=16.85cm H=6.68cm | points=15 density=6922.11/m3
     Shape: planarity=0.6555 flatness=0.3468 thickness=16.85cm spread=15.58cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 44 (radar 19627) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2922m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0011,+0.0049)m/s
     Sensor side info (raw): SNR mean=265.333 min=136 peak=326 | Noise mean=537.067
     Geometry estimate: L=19.18cm W=16.55cm H=6.68cm | points=15 density=7074.79/m3
     Shape: planarity=0.6548 flatness=0.3482 thickness=16.55cm spread=15.37cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 45 (radar 19628) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9454m Z=+0.2936m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0024,-0.0042,+0.0141)m/s
     Sensor side info (raw): SNR mean=263.600 min=133 peak=326 | Noise mean=538.400
     Geometry estimate: L=19.20cm W=16.67cm H=6.68cm | points=15 density=7013.68/m3
     Shape: planarity=0.6527 flatness=0.3477 thickness=16.67cm spread=15.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3774 | threshold=0.25

=================================================
Frame 46 (radar 19629) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2934m | Range=0.9905m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,+0.0014,-0.0021)m/s
     Sensor side info (raw): SNR mean=263.667 min=135 peak=325 | Noise mean=538.600
     Geometry estimate: L=19.12cm W=16.58cm H=6.68cm | points=15 density=7083.56/m3
     Shape: planarity=0.6282 flatness=0.3493 thickness=16.58cm spread=15.46cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3774 | threshold=0.25

=================================================
Frame 47 (radar 19630) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2936m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0009,+0.0021)m/s
     Sensor side info (raw): SNR mean=273.571 min=139 peak=324 | Noise mean=538.067
     Geometry estimate: L=18.40cm W=12.59cm H=6.68cm | points=14 density=9041.68/m3
     Shape: planarity=0.6261 flatness=0.3628 thickness=12.59cm spread=13.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 48 (radar 19631) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9318m Z=+0.2710m | Range=0.9708m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0155,-0.1368,-0.2259)m/s
     Sensor side info (raw): SNR mean=245.444 min=136 peak=322 | Noise mean=532.944
     Geometry estimate: L=21.08cm W=19.39cm H=6.68cm | points=18 density=6593.96/m3
     Shape: planarity=0.6614 flatness=0.3168 thickness=21.08cm spread=15.13cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 49 (radar 19632) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0262m Y=+0.9315m Z=+0.2722m | Range=0.9708m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0179,-0.0031,+0.0121)m/s
     Sensor side info (raw): SNR mean=246.333 min=136 peak=322 | Noise mean=532.333
     Geometry estimate: L=21.03cm W=19.45cm H=6.68cm | points=18 density=6585.90/m3
     Shape: planarity=0.6472 flatness=0.3175 thickness=21.03cm spread=15.33cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 50 (radar 19633) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0548,+0.1439,+0.1980)m/s
     Sensor side info (raw): SNR mean=263.467 min=136 peak=323 | Noise mean=538.933
     Geometry estimate: L=19.23cm W=16.67cm H=6.68cm | points=15 density=7005.51/m3
     Shape: planarity=0.6551 flatness=0.3473 thickness=16.67cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3772 | threshold=0.25

=================================================
Frame 51 (radar 19634) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2919m | Range=0.9905m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,-0.0001,-0.0006)m/s
     Sensor side info (raw): SNR mean=261.933 min=134 peak=322 | Noise mean=540.667
     Geometry estimate: L=19.22cm W=16.69cm H=6.68cm | points=15 density=6999.78/m3
     Shape: planarity=0.6825 flatness=0.3474 thickness=16.69cm spread=15.40cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3771 | threshold=0.25

=================================================
Frame 52 (radar 19635) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9905m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0016,-0.0050)m/s
     Sensor side info (raw): SNR mean=262.667 min=135 peak=322 | Noise mean=539.867
     Geometry estimate: L=19.19cm W=16.63cm H=6.68cm | points=15 density=7036.37/m3
     Shape: planarity=0.6823 flatness=0.3480 thickness=16.63cm spread=15.37cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3775 | threshold=0.25

=================================================
Frame 53 (radar 19636) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0005,+0.0025)m/s
     Sensor side info (raw): SNR mean=262.867 min=135 peak=322 | Noise mean=539.533
     Geometry estimate: L=19.19cm W=16.59cm H=6.68cm | points=15 density=7054.25/m3
     Shape: planarity=0.6547 flatness=0.3480 thickness=16.59cm spread=15.39cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3779 | threshold=0.25

=================================================
Frame 54 (radar 19637) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9461m Z=+0.2912m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0008,-0.0050)m/s
     Sensor side info (raw): SNR mean=263.133 min=135 peak=323 | Noise mean=539.333
     Geometry estimate: L=19.24cm W=16.80cm H=6.68cm | points=15 density=6944.59/m3
     Shape: planarity=0.6834 flatness=0.3470 thickness=16.80cm spread=15.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 55 (radar 19638) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9905m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0021,+0.0077)m/s
     Sensor side info (raw): SNR mean=264.533 min=136 peak=324 | Noise mean=538.067
     Geometry estimate: L=19.25cm W=16.77cm H=6.68cm | points=15 density=6958.06/m3
     Shape: planarity=0.6827 flatness=0.3469 thickness=16.77cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3781 | threshold=0.25

=================================================
Frame 56 (radar 19639) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0000)m/s
     Sensor side info (raw): SNR mean=263.067 min=137 peak=322 | Noise mean=539.133
     Geometry estimate: L=19.23cm W=16.70cm H=6.68cm | points=15 density=6989.17/m3
     Shape: planarity=0.6829 flatness=0.3471 thickness=16.70cm spread=15.43cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3780 | threshold=0.25

=================================================
Frame 57 (radar 19640) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2921m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0011)m/s
     Sensor side info (raw): SNR mean=264.667 min=136 peak=324 | Noise mean=537.733
     Geometry estimate: L=19.25cm W=16.70cm H=6.68cm | points=15 density=6983.86/m3
     Shape: planarity=0.6830 flatness=0.3468 thickness=16.70cm spread=15.43cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 58 (radar 19641) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2922m | Range=0.9905m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0010)m/s
     Sensor side info (raw): SNR mean=265.000 min=135 peak=327 | Noise mean=537.467
     Geometry estimate: L=19.20cm W=16.59cm H=6.68cm | points=15 density=7051.78/m3
     Shape: planarity=0.6825 flatness=0.3478 thickness=16.59cm spread=15.32cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3781 | threshold=0.25

=================================================
Frame 59 (radar 19642) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0022,-0.0078)m/s
     Sensor side info (raw): SNR mean=263.467 min=134 peak=325 | Noise mean=539.067
     Geometry estimate: L=19.22cm W=16.63cm H=6.68cm | points=15 density=7026.10/m3
     Shape: planarity=0.6830 flatness=0.3475 thickness=16.63cm spread=15.37cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3785 | threshold=0.25

=================================================
Frame 60 (radar 19643) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2913m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0000,-0.0005)m/s
     Sensor side info (raw): SNR mean=263.200 min=134 peak=323 | Noise mean=539.067
     Geometry estimate: L=19.24cm W=16.78cm H=6.68cm | points=15 density=6956.26/m3
     Shape: planarity=0.6833 flatness=0.3471 thickness=16.78cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3788 | threshold=0.25

=================================================
Frame 61 (radar 19644) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0003,+0.0017)m/s
     Sensor side info (raw): SNR mean=262.267 min=134 peak=322 | Noise mean=540.133
     Geometry estimate: L=19.27cm W=16.84cm H=6.68cm | points=15 density=6921.24/m3
     Shape: planarity=0.6561 flatness=0.3466 thickness=16.84cm spread=15.60cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3792 | threshold=0.25

=================================================
Frame 62 (radar 19645) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2921m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,-0.0019,+0.0061)m/s
     Sensor side info (raw): SNR mean=261.933 min=133 peak=321 | Noise mean=540.333
     Geometry estimate: L=19.24cm W=16.67cm H=6.68cm | points=15 density=7002.60/m3
     Shape: planarity=0.6832 flatness=0.3471 thickness=16.67cm spread=15.41cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3792 | threshold=0.25

=================================================
Frame 63 (radar 19646) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9405m Z=+0.2839m | Range=0.9829m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0389,-0.0524,-0.0826)m/s
     Sensor side info (raw): SNR mean=257.312 min=136 peak=322 | Noise mean=535.188
     Geometry estimate: L=19.80cm W=19.32cm H=6.68cm | points=16 density=6261.05/m3
     Shape: planarity=0.6523 flatness=0.3372 thickness=19.80cm spread=15.54cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3794 | threshold=0.25

=================================================
Frame 64 (radar 19647) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2912m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0389,+0.0548,+0.0730)m/s
     Sensor side info (raw): SNR mean=271.429 min=136 peak=321 | Noise mean=540.333
     Geometry estimate: L=18.59cm W=12.84cm H=6.68cm | points=14 density=8777.41/m3
     Shape: planarity=0.6852 flatness=0.3591 thickness=12.84cm spread=13.57cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3787 | threshold=0.25

=================================================
Frame 65 (radar 19648) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0015,+0.0060)m/s
     Sensor side info (raw): SNR mean=273.429 min=138 peak=322 | Noise mean=538.400
     Geometry estimate: L=18.57cm W=12.87cm H=6.68cm | points=14 density=8764.99/m3
     Shape: planarity=0.6546 flatness=0.3595 thickness=12.87cm spread=13.64cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3781 | threshold=0.25

=================================================
Frame 66 (radar 19649) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0007)m/s
     Sensor side info (raw): SNR mean=271.714 min=137 peak=320 | Noise mean=539.800
     Geometry estimate: L=18.59cm W=12.83cm H=6.68cm | points=14 density=8784.98/m3
     Shape: planarity=0.6554 flatness=0.3592 thickness=12.83cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3773 | threshold=0.25

=================================================
Frame 67 (radar 19650) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0003,-0.0012)m/s
     Sensor side info (raw): SNR mean=271.857 min=135 peak=322 | Noise mean=539.667
     Geometry estimate: L=18.58cm W=12.75cm H=6.68cm | points=14 density=8845.27/m3
     Shape: planarity=0.6849 flatness=0.3593 thickness=12.75cm spread=13.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3770 | threshold=0.25

=================================================
Frame 68 (radar 19651) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0001,-0.0012)m/s
     Sensor side info (raw): SNR mean=271.429 min=136 peak=320 | Noise mean=540.133
     Geometry estimate: L=18.59cm W=12.82cm H=6.68cm | points=14 density=8791.61/m3
     Shape: planarity=0.6849 flatness=0.3593 thickness=12.82cm spread=13.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3766 | threshold=0.25

=================================================
Frame 69 (radar 19652) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9461m Z=+0.2909m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0017,-0.0055)m/s
     Sensor side info (raw): SNR mean=270.714 min=135 peak=321 | Noise mean=541.133
     Geometry estimate: L=18.54cm W=12.83cm H=6.68cm | points=14 density=8808.38/m3
     Shape: planarity=0.6846 flatness=0.3601 thickness=12.83cm spread=13.54cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3761 | threshold=0.25

=================================================
Frame 70 (radar 19653) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2912m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0010,+0.0030)m/s
     Sensor side info (raw): SNR mean=269.357 min=134 peak=319 | Noise mean=542.133
     Geometry estimate: L=18.57cm W=12.84cm H=6.68cm | points=14 density=8786.64/m3
     Shape: planarity=0.6847 flatness=0.3596 thickness=12.84cm spread=13.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3754 | threshold=0.25

=================================================
Frame 71 (radar 19654) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0016)m/s
     Sensor side info (raw): SNR mean=269.714 min=134 peak=319 | Noise mean=541.800
     Geometry estimate: L=18.57cm W=12.79cm H=6.68cm | points=14 density=8822.83/m3
     Shape: planarity=0.6849 flatness=0.3595 thickness=12.79cm spread=13.53cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3747 | threshold=0.25

=================================================
Frame 72 (radar 19655) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0009)m/s
     Sensor side info (raw): SNR mean=272.000 min=136 peak=322 | Noise mean=539.667
     Geometry estimate: L=18.57cm W=12.82cm H=6.68cm | points=14 density=8800.75/m3
     Shape: planarity=0.6849 flatness=0.3596 thickness=12.82cm spread=13.54cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3740 | threshold=0.25

=================================================
Frame 73 (radar 19656) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9409m Z=+0.2824m | Range=0.9829m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0210,-0.0506,-0.0904)m/s
     Sensor side info (raw): SNR mean=255.500 min=135 peak=321 | Noise mean=536.938
     Geometry estimate: L=20.86cm W=19.29cm H=6.68cm | points=16 density=5952.82/m3
     Shape: planarity=0.6724 flatness=0.3201 thickness=20.86cm spread=16.30cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3740 | threshold=0.25

=================================================
Frame 74 (radar 19657) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9457m Z=+0.2923m | Range=0.9905m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0210,+0.0486,+0.0987)m/s
     Sensor side info (raw): SNR mean=261.867 min=135 peak=321 | Noise mean=540.400
     Geometry estimate: L=19.27cm W=16.53cm H=6.68cm | points=15 density=7049.04/m3
     Shape: planarity=0.6836 flatness=0.3466 thickness=16.53cm spread=15.36cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 75 (radar 19658) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0017,-0.0067)m/s
     Sensor side info (raw): SNR mean=260.000 min=134 peak=318 | Noise mean=542.467
     Geometry estimate: L=19.30cm W=16.85cm H=6.68cm | points=15 density=6902.17/m3
     Shape: planarity=0.6840 flatness=0.3459 thickness=16.85cm spread=15.57cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 76 (radar 19659) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0001,-0.0005)m/s
     Sensor side info (raw): SNR mean=261.733 min=134 peak=321 | Noise mean=540.600
     Geometry estimate: L=19.33cm W=16.81cm H=6.68cm | points=15 density=6910.90/m3
     Shape: planarity=0.6844 flatness=0.3455 thickness=16.81cm spread=15.56cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 77 (radar 19660) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2913m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0010,-0.0030)m/s
     Sensor side info (raw): SNR mean=261.133 min=134 peak=320 | Noise mean=541.467
     Geometry estimate: L=19.29cm W=16.81cm H=6.68cm | points=15 density=6923.11/m3
     Shape: planarity=0.6842 flatness=0.3461 thickness=16.81cm spread=15.56cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 78 (radar 19661) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0005,+0.0019)m/s
     Sensor side info (raw): SNR mean=262.267 min=135 peak=321 | Noise mean=540.200
     Geometry estimate: L=19.30cm W=16.69cm H=6.68cm | points=15 density=6972.36/m3
     Shape: planarity=0.6843 flatness=0.3460 thickness=16.69cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 79 (radar 19662) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0007,+0.0028)m/s
     Sensor side info (raw): SNR mean=262.533 min=134 peak=322 | Noise mean=540.067
     Geometry estimate: L=19.29cm W=16.72cm H=6.68cm | points=15 density=6963.99/m3
     Shape: planarity=0.6836 flatness=0.3462 thickness=16.72cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 80 (radar 19663) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0007,+0.0017)m/s
     Sensor side info (raw): SNR mean=262.533 min=135 peak=321 | Noise mean=540.000
     Geometry estimate: L=19.31cm W=16.67cm H=6.68cm | points=15 density=6977.02/m3
     Shape: planarity=0.6843 flatness=0.3458 thickness=16.67cm spread=15.46cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3737 | threshold=0.25

=================================================
Frame 81 (radar 19664) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9457m Z=+0.2923m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0010,+0.0041)m/s
     Sensor side info (raw): SNR mean=262.933 min=136 peak=322 | Noise mean=539.667
     Geometry estimate: L=19.28cm W=16.60cm H=6.68cm | points=15 density=7012.17/m3
     Shape: planarity=0.6835 flatness=0.3463 thickness=16.60cm spread=15.40cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3735 | threshold=0.25

=================================================
Frame 82 (radar 19665) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0009,-0.0035)m/s
     Sensor side info (raw): SNR mean=264.267 min=137 peak=323 | Noise mean=538.333
     Geometry estimate: L=19.30cm W=16.74cm H=6.68cm | points=15 density=6947.21/m3
     Shape: planarity=0.6837 flatness=0.3459 thickness=16.74cm spread=15.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3735 | threshold=0.25

=================================================
Frame 83 (radar 19666) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0010)m/s
     Sensor side info (raw): SNR mean=264.667 min=136 peak=324 | Noise mean=537.933
     Geometry estimate: L=19.25cm W=16.60cm H=6.68cm | points=15 density=7025.85/m3
     Shape: planarity=0.6833 flatness=0.3468 thickness=16.60cm spread=15.40cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3731 | threshold=0.25

=================================================
Frame 84 (radar 19667) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0004,-0.0024)m/s
     Sensor side info (raw): SNR mean=262.667 min=135 peak=322 | Noise mean=539.733
     Geometry estimate: L=19.30cm W=16.80cm H=6.68cm | points=15 density=6924.14/m3
     Shape: planarity=0.6842 flatness=0.3459 thickness=16.80cm spread=15.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3737 | threshold=0.25

=================================================
Frame 85 (radar 19668) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0002,+0.0011)m/s
     Sensor side info (raw): SNR mean=263.667 min=135 peak=322 | Noise mean=539.000
     Geometry estimate: L=19.29cm W=16.73cm H=6.68cm | points=15 density=6955.43/m3
     Shape: planarity=0.6838 flatness=0.3461 thickness=16.73cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3742 | threshold=0.25

=================================================
Frame 86 (radar 19669) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0006)m/s
     Sensor side info (raw): SNR mean=263.733 min=135 peak=322 | Noise mean=538.933
     Geometry estimate: L=19.29cm W=16.72cm H=6.68cm | points=15 density=6964.41/m3
     Shape: planarity=0.6839 flatness=0.3462 thickness=16.72cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3747 | threshold=0.25

=================================================
Frame 87 (radar 19670) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0006,-0.0022)m/s
     Sensor side info (raw): SNR mean=263.667 min=135 peak=322 | Noise mean=538.867
     Geometry estimate: L=19.30cm W=16.71cm H=6.68cm | points=15 density=6963.16/m3
     Shape: planarity=0.6841 flatness=0.3459 thickness=16.71cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3753 | threshold=0.25

=================================================
Frame 88 (radar 19671) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0009,+0.0031)m/s
     Sensor side info (raw): SNR mean=263.533 min=135 peak=322 | Noise mean=539.067
     Geometry estimate: L=19.30cm W=16.70cm H=6.68cm | points=15 density=6965.74/m3
     Shape: planarity=0.6842 flatness=0.3460 thickness=16.70cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3760 | threshold=0.25

=================================================
Frame 89 (radar 19672) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0016)m/s
     Sensor side info (raw): SNR mean=262.400 min=135 peak=321 | Noise mean=539.933
     Geometry estimate: L=19.28cm W=16.74cm H=6.68cm | points=15 density=6953.89/m3
     Shape: planarity=0.6839 flatness=0.3463 thickness=16.74cm spread=15.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 90 (radar 19673) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9410m Z=+0.2821m | Range=0.9828m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0210,-0.0495,-0.0954)m/s
     Sensor side info (raw): SNR mean=256.938 min=135 peak=321 | Noise mean=535.562
     Geometry estimate: L=20.79cm W=19.31cm H=6.68cm | points=16 density=5966.86/m3
     Shape: planarity=0.6728 flatness=0.3211 thickness=20.79cm spread=16.23cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3772 | threshold=0.25

=================================================
Frame 91 (radar 19674) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9408m Z=+0.2828m | Range=0.9829m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0020,+0.0075)m/s
     Sensor side info (raw): SNR mean=257.938 min=137 peak=322 | Noise mean=534.500
     Geometry estimate: L=20.60cm W=19.32cm H=6.68cm | points=16 density=6019.14/m3
     Shape: planarity=0.6727 flatness=0.3242 thickness=20.60cm spread=16.08cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 92 (radar 19675) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0210,+0.0507,+0.0909)m/s
     Sensor side info (raw): SNR mean=265.600 min=137 peak=326 | Noise mean=536.933
     Geometry estimate: L=19.29cm W=16.75cm H=6.68cm | points=15 density=6950.90/m3
     Shape: planarity=0.6836 flatness=0.3461 thickness=16.75cm spread=15.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 93 (radar 19676) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0010,-0.0035)m/s
     Sensor side info (raw): SNR mean=263.867 min=136 peak=322 | Noise mean=538.667
     Geometry estimate: L=19.26cm W=16.64cm H=6.68cm | points=15 density=7006.63/m3
     Shape: planarity=0.6838 flatness=0.3467 thickness=16.64cm spread=15.42cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 94 (radar 19677) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0011)m/s
     Sensor side info (raw): SNR mean=262.667 min=135 peak=322 | Noise mean=540.000
     Geometry estimate: L=19.30cm W=16.79cm H=6.68cm | points=15 density=6930.83/m3
     Shape: planarity=0.6838 flatness=0.3460 thickness=16.79cm spread=15.53cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 95 (radar 19678) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0007)m/s
     Sensor side info (raw): SNR mean=263.667 min=135 peak=322 | Noise mean=538.867
     Geometry estimate: L=19.29cm W=16.70cm H=6.68cm | points=15 density=6970.46/m3
     Shape: planarity=0.6840 flatness=0.3462 thickness=16.70cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 96 (radar 19679) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2912m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0015)m/s
     Sensor side info (raw): SNR mean=264.000 min=136 peak=324 | Noise mean=538.600
     Geometry estimate: L=19.30cm W=16.83cm H=6.68cm | points=15 density=6911.08/m3
     Shape: planarity=0.6842 flatness=0.3459 thickness=16.83cm spread=15.56cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 97 (radar 19680) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0019,+0.0073)m/s
     Sensor side info (raw): SNR mean=263.267 min=135 peak=321 | Noise mean=539.200
     Geometry estimate: L=19.28cm W=16.64cm H=6.68cm | points=15 density=7001.97/m3
     Shape: planarity=0.6835 flatness=0.3464 thickness=16.64cm spread=15.42cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3784 | threshold=0.25

=================================================
Frame 98 (radar 19681) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9408m Z=+0.2827m | Range=0.9829m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0210,-0.0504,-0.0927)m/s
     Sensor side info (raw): SNR mean=256.062 min=135 peak=321 | Noise mean=536.500
     Geometry estimate: L=21.10cm W=19.28cm H=6.68cm | points=16 density=5886.95/m3
     Shape: planarity=0.6720 flatness=0.3165 thickness=21.10cm spread=16.47cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3783 | threshold=0.25

=================================================
Frame 99 (radar 19682) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0210,+0.0510,+0.0903)m/s
     Sensor side info (raw): SNR mean=263.133 min=136 peak=321 | Noise mean=539.267
     Geometry estimate: L=19.30cm W=16.67cm H=6.68cm | points=15 density=6979.55/m3
     Shape: planarity=0.6840 flatness=0.3460 thickness=16.67cm spread=15.46cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3783 | threshold=0.25

=================================================
Frame 100 (radar 19683) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0007,+0.0026)m/s
     Sensor side info (raw): SNR mean=263.067 min=136 peak=322 | Noise mean=539.333
     Geometry estimate: L=19.29cm W=16.56cm H=6.68cm | points=15 density=7030.12/m3
     Shape: planarity=0.6839 flatness=0.3462 thickness=16.56cm spread=15.37cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3783 | threshold=0.25

=================================================
Frame 101 (radar 19684) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0010,-0.0035)m/s
     Sensor side info (raw): SNR mean=262.733 min=135 peak=321 | Noise mean=539.933
     Geometry estimate: L=19.29cm W=16.80cm H=6.68cm | points=15 density=6928.50/m3
     Shape: planarity=0.6835 flatness=0.3462 thickness=16.80cm spread=15.54cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3783 | threshold=0.25

=================================================
Frame 102 (radar 19685) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0013)m/s
     Sensor side info (raw): SNR mean=263.333 min=135 peak=323 | Noise mean=539.133
     Geometry estimate: L=19.28cm W=16.67cm H=6.68cm | points=15 density=6983.74/m3
     Shape: planarity=0.6840 flatness=0.3463 thickness=16.67cm spread=15.46cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3783 | threshold=0.25

=================================================
Frame 103 (radar 19686) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0011)m/s
     Sensor side info (raw): SNR mean=271.786 min=136 peak=321 | Noise mean=539.733
     Geometry estimate: L=18.53cm W=12.78cm H=6.68cm | points=14 density=8848.75/m3
     Shape: planarity=0.6840 flatness=0.3603 thickness=12.78cm spread=13.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 104 (radar 19687) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0011,+0.0042)m/s
     Sensor side info (raw): SNR mean=263.933 min=136 peak=322 | Noise mean=538.600
     Geometry estimate: L=19.31cm W=16.73cm H=6.68cm | points=15 density=6951.54/m3
     Shape: planarity=0.6840 flatness=0.3459 thickness=16.73cm spread=15.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 105 (radar 19688) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0010,-0.0035)m/s
     Sensor side info (raw): SNR mean=262.867 min=135 peak=321 | Noise mean=539.667
     Geometry estimate: L=19.29cm W=16.81cm H=6.68cm | points=15 density=6924.86/m3
     Shape: planarity=0.6838 flatness=0.3461 thickness=16.81cm spread=15.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3778 | threshold=0.25

=================================================
Frame 106 (radar 19689) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0007,+0.0021)m/s
     Sensor side info (raw): SNR mean=271.429 min=135 peak=321 | Noise mean=540.267
     Geometry estimate: L=18.51cm W=12.74cm H=6.68cm | points=14 density=8883.78/m3
     Shape: planarity=0.6839 flatness=0.3608 thickness=12.74cm spread=13.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3772 | threshold=0.25

=================================================
Frame 107 (radar 19690) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9905m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0007,+0.0036)m/s
     Sensor side info (raw): SNR mean=262.667 min=136 peak=322 | Noise mean=539.933
     Geometry estimate: L=19.25cm W=16.54cm H=6.68cm | points=15 density=7050.98/m3
     Shape: planarity=0.6834 flatness=0.3468 thickness=16.54cm spread=15.35cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3772 | threshold=0.25

=================================================
Frame 108 (radar 19691) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9409m Z=+0.2821m | Range=0.9828m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0210,-0.0490,-0.0991)m/s
     Sensor side info (raw): SNR mean=257.562 min=136 peak=322 | Noise mean=535.062
     Geometry estimate: L=21.62cm W=19.25cm H=6.68cm | points=16 density=5756.80/m3
     Shape: planarity=0.6715 flatness=0.3089 thickness=21.62cm spread=16.88cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3770 | threshold=0.25

=================================================
Frame 109 (radar 19692) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0210,+0.0491,+0.0984)m/s
     Sensor side info (raw): SNR mean=263.733 min=137 peak=322 | Noise mean=538.800
     Geometry estimate: L=19.27cm W=16.69cm H=6.68cm | points=15 density=6980.99/m3
     Shape: planarity=0.6836 flatness=0.3464 thickness=16.69cm spread=15.45cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3770 | threshold=0.25

=================================================
Frame 110 (radar 19693) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0000,+0.0002)m/s
     Sensor side info (raw): SNR mean=264.667 min=137 peak=323 | Noise mean=537.600
     Geometry estimate: L=19.27cm W=16.67cm H=6.68cm | points=15 density=6987.23/m3
     Shape: planarity=0.6835 flatness=0.3464 thickness=16.67cm spread=15.45cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3770 | threshold=0.25

=================================================
Frame 111 (radar 19694) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2912m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0020,-0.0078)m/s
     Sensor side info (raw): SNR mean=261.867 min=135 peak=320 | Noise mean=540.600
     Geometry estimate: L=19.29cm W=16.74cm H=6.68cm | points=15 density=6954.53/m3
     Shape: planarity=0.6844 flatness=0.3461 thickness=16.74cm spread=15.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 112 (radar 19695) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0014,+0.0051)m/s
     Sensor side info (raw): SNR mean=272.500 min=136 peak=322 | Noise mean=539.067
     Geometry estimate: L=18.53cm W=12.74cm H=6.68cm | points=14 density=8873.87/m3
     Shape: planarity=0.6841 flatness=0.3603 thickness=12.74cm spread=13.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 113 (radar 19696) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0006)m/s
     Sensor side info (raw): SNR mean=261.667 min=134 peak=320 | Noise mean=540.800
     Geometry estimate: L=19.28cm W=16.73cm H=6.68cm | points=15 density=6962.58/m3
     Shape: planarity=0.6837 flatness=0.3464 thickness=16.73cm spread=15.48cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 114 (radar 19697) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0002)m/s
     Sensor side info (raw): SNR mean=262.667 min=135 peak=321 | Noise mean=539.667
     Geometry estimate: L=19.29cm W=16.73cm H=6.68cm | points=15 density=6957.58/m3
     Shape: planarity=0.6839 flatness=0.3461 thickness=16.73cm spread=15.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 115 (radar 19698) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0011,+0.0039)m/s
     Sensor side info (raw): SNR mean=264.000 min=136 peak=323 | Noise mean=538.400
     Geometry estimate: L=19.30cm W=16.80cm H=6.68cm | points=15 density=6925.81/m3
     Shape: planarity=0.6834 flatness=0.3460 thickness=16.80cm spread=15.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 116 (radar 19699) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2922m | Range=0.9905m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0012)m/s
     Sensor side info (raw): SNR mean=263.133 min=136 peak=321 | Noise mean=539.400
     Geometry estimate: L=19.23cm W=16.54cm H=6.68cm | points=15 density=7056.41/m3
     Shape: planarity=0.6830 flatness=0.3472 thickness=16.54cm spread=15.34cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 117 (radar 19700) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9457m Z=+0.2925m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0009,+0.0033)m/s
     Sensor side info (raw): SNR mean=262.267 min=135 peak=321 | Noise mean=540.133
     Geometry estimate: L=19.30cm W=16.58cm H=6.68cm | points=15 density=7018.63/m3
     Shape: planarity=0.6562 flatness=0.3460 thickness=16.58cm spread=15.45cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3764 | threshold=0.25

=================================================
Frame 118 (radar 19701) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0012,-0.0049)m/s
     Sensor side info (raw): SNR mean=262.067 min=135 peak=320 | Noise mean=540.600
     Geometry estimate: L=19.29cm W=16.71cm H=6.68cm | points=15 density=6968.50/m3
     Shape: planarity=0.6836 flatness=0.3462 thickness=16.71cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3764 | threshold=0.25

=================================================
Frame 119 (radar 19702) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0012,-0.0040)m/s
     Sensor side info (raw): SNR mean=262.267 min=134 peak=322 | Noise mean=540.200
     Geometry estimate: L=19.27cm W=16.71cm H=6.68cm | points=15 density=6970.69/m3
     Shape: planarity=0.6837 flatness=0.3465 thickness=16.71cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 120 (radar 19703) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0018)m/s
     Sensor side info (raw): SNR mean=261.267 min=134 peak=320 | Noise mean=541.333
     Geometry estimate: L=19.25cm W=16.64cm H=6.68cm | points=15 density=7008.38/m3
     Shape: planarity=0.6835 flatness=0.3468 thickness=16.64cm spread=15.42cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 121 (radar 19704) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0001,-0.0010)m/s
     Sensor side info (raw): SNR mean=261.933 min=134 peak=320 | Noise mean=540.733
     Geometry estimate: L=19.30cm W=16.80cm H=6.68cm | points=15 density=6925.19/m3
     Shape: planarity=0.6839 flatness=0.3460 thickness=16.80cm spread=15.53cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 122 (radar 19705) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0005)m/s
     Sensor side info (raw): SNR mean=262.733 min=136 peak=322 | Noise mean=540.133
     Geometry estimate: L=19.26cm W=16.68cm H=6.68cm | points=15 density=6990.93/m3
     Shape: planarity=0.6836 flatness=0.3467 thickness=16.68cm spread=15.44cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3765 | threshold=0.25

=================================================
Frame 123 (radar 19706) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0008,+0.0041)m/s
     Sensor side info (raw): SNR mean=264.267 min=136 peak=323 | Noise mean=538.467
     Geometry estimate: L=19.25cm W=16.60cm H=6.68cm | points=15 density=7024.05/m3
     Shape: planarity=0.6557 flatness=0.3468 thickness=16.60cm spread=15.45cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3772 | threshold=0.25

=================================================
Frame 124 (radar 19707) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2922m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0012)m/s
     Sensor side info (raw): SNR mean=272.214 min=138 peak=322 | Noise mean=539.667
     Geometry estimate: L=18.50cm W=12.69cm H=6.68cm | points=14 density=8927.96/m3
     Shape: planarity=0.6538 flatness=0.3610 thickness=12.69cm spread=13.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 125 (radar 19708) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.59 dB at 0.9920m | raw=3784 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0003,-0.0025)m/s
     Sensor side info (raw): SNR mean=262.867 min=135 peak=322 | Noise mean=539.933
     Geometry estimate: L=19.29cm W=16.78cm H=6.68cm | points=15 density=6935.99/m3
     Shape: planarity=0.6838 flatness=0.3461 thickness=16.78cm spread=15.52cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 126 (radar 19709) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0001,-0.0001)m/s
     Sensor side info (raw): SNR mean=262.400 min=136 peak=321 | Noise mean=540.400
     Geometry estimate: L=19.30cm W=16.72cm H=6.68cm | points=15 density=6960.19/m3
     Shape: planarity=0.6838 flatness=0.3460 thickness=16.72cm spread=15.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3773 | threshold=0.25

=================================================
Frame 127 (radar 19710) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2922m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0006,+0.0029)m/s
     Sensor side info (raw): SNR mean=270.500 min=135 peak=320 | Noise mean=541.333
     Geometry estimate: L=18.50cm W=12.70cm H=6.68cm | points=14 density=8914.93/m3
     Shape: planarity=0.6537 flatness=0.3609 thickness=12.70cm spread=13.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3769 | threshold=0.25

=================================================
Frame 128 (radar 19711) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0017,-0.0069)m/s
     Sensor side info (raw): SNR mean=262.467 min=135 peak=321 | Noise mean=540.400
     Geometry estimate: L=19.29cm W=16.77cm H=6.68cm | points=15 density=6941.38/m3
     Shape: planarity=0.6838 flatness=0.3462 thickness=16.77cm spread=15.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3771 | threshold=0.25

=================================================
Frame 129 (radar 19712) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0007)m/s
     Sensor side info (raw): SNR mean=262.133 min=136 peak=321 | Noise mean=540.667
     Geometry estimate: L=19.27cm W=16.73cm H=6.68cm | points=15 density=6964.52/m3
     Shape: planarity=0.6837 flatness=0.3465 thickness=16.73cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3771 | threshold=0.25

=================================================
Frame 130 (radar 19713) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0007)m/s
     Sensor side info (raw): SNR mean=263.400 min=136 peak=322 | Noise mean=539.467
     Geometry estimate: L=19.26cm W=16.72cm H=6.68cm | points=15 density=6973.96/m3
     Shape: planarity=0.6837 flatness=0.3468 thickness=16.72cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3771 | threshold=0.25

=================================================
Frame 131 (radar 19714) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2922m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0021,+0.0081)m/s
     Sensor side info (raw): SNR mean=271.143 min=137 peak=321 | Noise mean=540.733
     Geometry estimate: L=18.50cm W=12.69cm H=6.68cm | points=14 density=8921.61/m3
     Shape: planarity=0.6534 flatness=0.3609 thickness=12.69cm spread=13.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3766 | threshold=0.25

=================================================
Frame 132 (radar 19715) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0018)m/s
     Sensor side info (raw): SNR mean=271.786 min=138 peak=321 | Noise mean=539.933
     Geometry estimate: L=18.49cm W=12.72cm H=6.68cm | points=14 density=8909.06/m3
     Shape: planarity=0.6534 flatness=0.3612 thickness=12.72cm spread=13.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 133 (radar 19716) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2920m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,-0.0004,+0.0006)m/s
     Sensor side info (raw): SNR mean=261.133 min=135 peak=320 | Noise mean=541.467
     Geometry estimate: L=19.28cm W=16.70cm H=6.68cm | points=15 density=6975.18/m3
     Shape: planarity=0.6834 flatness=0.3464 thickness=16.70cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 134 (radar 19717) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0017)m/s
     Sensor side info (raw): SNR mean=261.133 min=135 peak=319 | Noise mean=541.600
     Geometry estimate: L=19.27cm W=16.69cm H=6.68cm | points=15 density=6979.39/m3
     Shape: planarity=0.6834 flatness=0.3465 thickness=16.69cm spread=15.43cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 135 (radar 19718) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0004,-0.0018)m/s
     Sensor side info (raw): SNR mean=262.533 min=136 peak=322 | Noise mean=540.333
     Geometry estimate: L=19.31cm W=16.74cm H=6.68cm | points=15 density=6945.24/m3
     Shape: planarity=0.6841 flatness=0.3458 thickness=16.74cm spread=15.50cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 136 (radar 19719) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0011)m/s
     Sensor side info (raw): SNR mean=261.733 min=136 peak=321 | Noise mean=541.133
     Geometry estimate: L=19.30cm W=16.76cm H=6.68cm | points=15 density=6939.49/m3
     Shape: planarity=0.6840 flatness=0.3460 thickness=16.76cm spread=15.53cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 137 (radar 19720) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2913m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0006,-0.0025)m/s
     Sensor side info (raw): SNR mean=260.800 min=135 peak=319 | Noise mean=542.000
     Geometry estimate: L=19.31cm W=16.91cm H=6.68cm | points=15 density=6873.57/m3
     Shape: planarity=0.6841 flatness=0.3457 thickness=16.91cm spread=15.62cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 138 (radar 19721) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,+0.0004)m/s
     Sensor side info (raw): SNR mean=261.133 min=135 peak=320 | Noise mean=541.400
     Geometry estimate: L=19.26cm W=16.65cm H=6.68cm | points=15 density=7004.43/m3
     Shape: planarity=0.6835 flatness=0.3467 thickness=16.65cm spread=15.41cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3767 | threshold=0.25

=================================================
Frame 139 (radar 19722) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2921m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,-0.0018,+0.0067)m/s
     Sensor side info (raw): SNR mean=272.286 min=137 peak=323 | Noise mean=539.533
     Geometry estimate: L=18.50cm W=12.77cm H=6.68cm | points=14 density=8869.59/m3
     Shape: planarity=0.6537 flatness=0.3610 thickness=12.77cm spread=13.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3762 | threshold=0.25

=================================================
Frame 140 (radar 19723) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9457m Z=+0.2924m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0009,+0.0035)m/s
     Sensor side info (raw): SNR mean=265.067 min=138 peak=324 | Noise mean=537.533
     Geometry estimate: L=19.24cm W=16.61cm H=6.68cm | points=15 density=7026.59/m3
     Shape: planarity=0.6557 flatness=0.3470 thickness=16.61cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3763 | threshold=0.25

=================================================
Frame 141 (radar 19724) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0010,-0.0054)m/s
     Sensor side info (raw): SNR mean=272.071 min=137 peak=322 | Noise mean=539.533
     Geometry estimate: L=18.56cm W=12.72cm H=6.68cm | points=14 density=8875.98/m3
     Shape: planarity=0.6851 flatness=0.3597 thickness=12.72cm spread=13.49cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3757 | threshold=0.25

=================================================
Frame 142 (radar 19725) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2918m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0191,+0.0005,-0.0010)m/s
     Sensor side info (raw): SNR mean=273.357 min=138 peak=323 | Noise mean=538.000
     Geometry estimate: L=18.58cm W=12.80cm H=6.68cm | points=14 density=8812.34/m3
     Shape: planarity=0.6551 flatness=0.3593 thickness=12.80cm spread=13.62cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3752 | threshold=0.25

=================================================
Frame 143 (radar 19726) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0280m Y=+0.9315m Z=+0.2721m | Range=0.9709m
     Range-profile relative power: 100.66 dB at 0.9920m | raw=3786 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0370,-0.1436,-0.1968)m/s
     Sensor side info (raw): SNR mean=247.722 min=138 peak=323 | Noise mean=530.833
     Geometry estimate: L=20.55cm W=19.75cm H=6.68cm | points=18 density=6636.89/m3
     Shape: planarity=0.6649 flatness=0.3249 thickness=20.55cm spread=15.52cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3750 | threshold=0.25

=================================================
Frame 144 (radar 19727) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9354m Z=+0.2802m | Range=0.9769m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0034m/s peak=0.1207m/s | Track velocity=(-0.0172,+0.0386,+0.0815)m/s
     Sensor side info (raw): SNR mean=251.722 min=136 peak=322 | Noise mean=525.722
     Geometry estimate: L=24.21cm W=19.27cm H=6.68cm | points=18 density=5777.30/m3
     Shape: planarity=0.6816 flatness=0.2758 thickness=24.21cm spread=16.33cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 145 (radar 19728) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9457m Z=+0.2925m | Range=0.9904m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0197,+0.1032,+0.1224)m/s
     Sensor side info (raw): SNR mean=272.286 min=134 peak=324 | Noise mean=539.400
     Geometry estimate: L=18.48cm W=12.63cm H=6.68cm | points=14 density=8973.37/m3
     Shape: planarity=0.6532 flatness=0.3612 thickness=12.63cm spread=13.46cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3740 | threshold=0.25

=================================================
Frame 146 (radar 19729) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9457m Z=+0.2925m | Range=0.9904m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0001)m/s
     Sensor side info (raw): SNR mean=271.857 min=136 peak=325 | Noise mean=540.133
     Geometry estimate: L=18.50cm W=12.75cm H=6.68cm | points=14 density=8883.25/m3
     Shape: planarity=0.6536 flatness=0.3609 thickness=12.75cm spread=13.53cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 147 (radar 19730) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9458m Z=+0.2921m | Range=0.9904m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0013,-0.0038)m/s
     Sensor side info (raw): SNR mean=258.800 min=135 peak=323 | Noise mean=544.000
     Geometry estimate: L=19.27cm W=16.75cm H=6.68cm | points=15 density=6958.61/m3
     Shape: planarity=0.6559 flatness=0.3465 thickness=16.75cm spread=15.55cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3742 | threshold=0.25

=================================================
Frame 148 (radar 19731) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9406m Z=+0.2832m | Range=0.9828m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0198,-0.0517,-0.0887)m/s
     Sensor side info (raw): SNR mean=242.875 min=129 peak=320 | Noise mean=549.938
     Geometry estimate: L=20.98cm W=19.31cm H=6.68cm | points=16 density=5911.37/m3
     Shape: planarity=0.6509 flatness=0.3182 thickness=20.98cm spread=16.33cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3744 | threshold=0.25

=================================================
Frame 149 (radar 19732) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0297m Y=+0.9409m Z=+0.2824m | Range=0.9828m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0022,-0.0087)m/s
     Sensor side info (raw): SNR mean=247.500 min=130 peak=322 | Noise mean=544.500
     Geometry estimate: L=21.28cm W=19.29cm H=6.68cm | points=16 density=5835.16/m3
     Shape: planarity=0.6511 flatness=0.3138 thickness=21.28cm spread=16.54cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 150 (radar 19733) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9456m Z=+0.2930m | Range=0.9904m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0198,+0.0470,+0.1060)m/s
     Sensor side info (raw): SNR mean=246.000 min=134 peak=311 | Noise mean=557.133
     Geometry estimate: L=19.23cm W=16.69cm H=6.68cm | points=15 density=6997.28/m3
     Shape: planarity=0.6556 flatness=0.3472 thickness=16.69cm spread=15.47cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3746 | threshold=0.25

=================================================
Frame 151 (radar 19734) | Valid Objects: 1
UART: packet=768 B, objects=19, raw=19, filtered=19, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0336m Y=+0.9458m Z=+0.2919m | Range=0.9904m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0191,+0.0025,-0.0103)m/s
     Sensor side info (raw): SNR mean=255.429 min=138 peak=324 | Noise mean=555.400
     Geometry estimate: L=18.54cm W=12.79cm H=6.68cm | points=14 density=8835.62/m3
     Shape: planarity=0.6843 flatness=0.3602 thickness=12.79cm spread=13.51cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3745 | threshold=0.25

=================================================
Frame 152 (radar 19735) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2931m | Range=0.9904m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0405,-0.0025,+0.0114)m/s
     Sensor side info (raw): SNR mean=259.786 min=135 peak=323 | Noise mean=551.467
     Geometry estimate: L=18.47cm W=12.82cm H=6.68cm | points=14 density=8848.96/m3
     Shape: planarity=0.6271 flatness=0.3614 thickness=12.82cm spread=13.69cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3747 | threshold=0.25

=================================================
Frame 153 (radar 19736) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0261m Y=+0.9440m Z=+0.2912m | Range=0.9883m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0142m/s peak=0.1207m/s | Track velocity=(+0.0348,-0.0151,-0.0190)m/s
     Sensor side info (raw): SNR mean=263.750 min=136 peak=324 | Noise mean=525.235
     Geometry estimate: L=18.51cm W=12.91cm H=6.68cm | points=16 density=10026.63/m3
     Shape: planarity=0.5952 flatness=0.3608 thickness=12.91cm spread=13.66cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 154 (radar 19737) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0264m Y=+0.9464m Z=+0.2914m | Range=0.9906m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0201m/s peak=0.1207m/s | Track velocity=(-0.0034,+0.0235,+0.0022)m/s
     Sensor side info (raw): SNR mean=253.500 min=131 peak=325 | Noise mean=518.722
     Geometry estimate: L=19.22cm W=16.65cm H=6.68cm | points=18 density=8417.64/m3
     Shape: planarity=0.6054 flatness=0.3474 thickness=16.65cm spread=15.39cm
     Quality: 87% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 155 (radar 19738) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0249m Y=+0.9426m Z=+0.2821m | Range=0.9842m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0222m/s peak=0.1207m/s | Track velocity=(+0.0158,-0.0385,-0.0933)m/s
     Sensor side info (raw): SNR mean=252.000 min=135 peak=325 | Noise mean=512.895
     Geometry estimate: L=21.20cm W=19.31cm H=6.68cm | points=19 density=6949.33/m3
     Shape: planarity=0.6128 flatness=0.3150 thickness=21.20cm spread=16.40cm
     Quality: 88% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3742 | threshold=0.25

=================================================
Frame 156 (radar 19739) | Valid Objects: 1
UART: packet=832 B, objects=22, raw=22, filtered=22, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2929m | Range=0.9904m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0472,+0.0303,+0.1087)m/s
     Sensor side info (raw): SNR mean=268.429 min=135 peak=322 | Noise mean=543.467
     Geometry estimate: L=18.50cm W=12.86cm H=6.68cm | points=14 density=8803.66/m3
     Shape: planarity=0.6281 flatness=0.3608 thickness=12.86cm spread=13.73cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 157 (radar 19740) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2932m | Range=0.9904m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0006,+0.0030)m/s
     Sensor side info (raw): SNR mean=269.429 min=136 peak=324 | Noise mean=542.533
     Geometry estimate: L=18.43cm W=12.73cm H=6.68cm | points=14 density=8930.46/m3
     Shape: planarity=0.6266 flatness=0.3623 thickness=12.73cm spread=13.61cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 158 (radar 19741) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0261m Y=+0.9359m Z=+0.2769m | Range=0.9763m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=-0.0036m/s peak=0.0604m/s | Track velocity=(+0.0348,-0.0965,-0.1639)m/s
     Sensor side info (raw): SNR mean=250.647 min=137 peak=323 | Noise mean=536.176
     Geometry estimate: L=21.56cm W=19.21cm H=6.68cm | points=17 density=6144.59/m3
     Shape: planarity=0.6309 flatness=0.3097 thickness=21.56cm spread=15.92cm
     Quality: 86% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3735 | threshold=0.25

=================================================
Frame 159 (radar 19742) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9455m Z=+0.2936m | Range=0.9904m
     Range-profile relative power: 100.75 dB at 0.9920m | raw=3789 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0348,+0.0958,+0.1670)m/s
     Sensor side info (raw): SNR mean=273.286 min=138 peak=326 | Noise mean=538.533
     Geometry estimate: L=18.44cm W=12.65cm H=6.68cm | points=14 density=8982.27/m3
     Shape: planarity=0.6266 flatness=0.3622 thickness=12.65cm spread=13.57cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3736 | threshold=0.25

=================================================
Frame 160 (radar 19743) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2928m | Range=0.9904m
     Range-profile relative power: 100.78 dB at 0.9920m | raw=3790 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0021,-0.0079)m/s
     Sensor side info (raw): SNR mean=272.071 min=136 peak=325 | Noise mean=539.467
     Geometry estimate: L=18.47cm W=12.72cm H=6.68cm | points=14 density=8914.60/m3
     Shape: planarity=0.6271 flatness=0.3615 thickness=12.72cm spread=13.63cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3732 | threshold=0.25

=================================================
Frame 161 (radar 19744) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0295m Y=+0.9405m Z=+0.2837m | Range=0.9828m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(+0.0006,-0.0518,-0.0903)m/s
     Sensor side info (raw): SNR mean=259.000 min=138 peak=326 | Noise mean=533.938
     Geometry estimate: L=21.19cm W=19.29cm H=6.68cm | points=16 density=5859.96/m3
     Shape: planarity=0.6495 flatness=0.3150 thickness=21.19cm spread=16.50cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 162 (radar 19745) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0315m Y=+0.9410m Z=+0.2819m | Range=0.9828m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=-0.0038m/s peak=0.0604m/s | Track velocity=(-0.0201,+0.0052,-0.0183)m/s
     Sensor side info (raw): SNR mean=257.500 min=136 peak=323 | Noise mean=535.312
     Geometry estimate: L=21.09cm W=19.27cm H=6.68cm | points=16 density=5894.44/m3
     Shape: planarity=0.6722 flatness=0.3166 thickness=21.09cm spread=16.43cm
     Quality: 85% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 163 (radar 19746) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2917m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0019,+0.0491,+0.0983)m/s
     Sensor side info (raw): SNR mean=272.643 min=138 peak=322 | Noise mean=539.333
     Geometry estimate: L=18.54cm W=12.83cm H=6.68cm | points=14 density=8809.54/m3
     Shape: planarity=0.6543 flatness=0.3602 thickness=12.83cm spread=13.60cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3739 | threshold=0.25

=================================================
Frame 164 (radar 19747) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2925m | Range=0.9904m
     Range-profile relative power: 100.69 dB at 0.9920m | raw=3787 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0017,+0.0079)m/s
     Sensor side info (raw): SNR mean=270.000 min=136 peak=321 | Noise mean=542.067
     Geometry estimate: L=18.46cm W=12.79cm H=6.68cm | points=14 density=8870.42/m3
     Shape: planarity=0.6274 flatness=0.3617 thickness=12.79cm spread=13.68cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3746 | threshold=0.25

=================================================
Frame 165 (radar 19748) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2925m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,-0.0007)m/s
     Sensor side info (raw): SNR mean=272.643 min=137 peak=323 | Noise mean=539.067
     Geometry estimate: L=18.53cm W=12.93cm H=6.68cm | points=14 density=8743.59/m3
     Shape: planarity=0.6290 flatness=0.3604 thickness=12.93cm spread=13.81cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3747 | threshold=0.25

=================================================
Frame 166 (radar 19749) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9457m Z=+0.2923m | Range=0.9903m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0002,-0.0012)m/s
     Sensor side info (raw): SNR mean=271.000 min=136 peak=321 | Noise mean=540.933
     Geometry estimate: L=18.56cm W=12.94cm H=6.68cm | points=14 density=8728.26/m3
     Shape: planarity=0.6291 flatness=0.3598 thickness=12.94cm spread=13.81cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3749 | threshold=0.25

=================================================
Frame 167 (radar 19750) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2928m | Range=0.9904m
     Range-profile relative power: 100.72 dB at 0.9920m | raw=3788 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0011,+0.0048)m/s
     Sensor side info (raw): SNR mean=269.429 min=135 peak=319 | Noise mean=542.333
     Geometry estimate: L=18.54cm W=12.84cm H=6.68cm | points=14 density=8800.84/m3
     Shape: planarity=0.6288 flatness=0.3602 thickness=12.84cm spread=13.75cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3743 | threshold=0.25

=================================================
Frame 168 (radar 19751) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2928m | Range=0.9903m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0003)m/s
     Sensor side info (raw): SNR mean=271.071 min=137 peak=320 | Noise mean=540.933
     Geometry estimate: L=18.55cm W=12.84cm H=6.68cm | points=14 density=8794.85/m3
     Shape: planarity=0.6292 flatness=0.3599 thickness=12.84cm spread=13.77cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3738 | threshold=0.25

=================================================
Frame 169 (radar 19752) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0215,+0.0035,-0.0135)m/s
     Sensor side info (raw): SNR mean=270.857 min=136 peak=321 | Noise mean=540.867
     Geometry estimate: L=18.59cm W=12.87cm H=6.68cm | points=14 density=8759.98/m3
     Shape: planarity=0.6552 flatness=0.3592 thickness=12.87cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3731 | threshold=0.25

=================================================
Frame 170 (radar 19753) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0296m Y=+0.9456m Z=+0.2927m | Range=0.9903m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0215,-0.0032,+0.0120)m/s
     Sensor side info (raw): SNR mean=271.214 min=136 peak=321 | Noise mean=540.467
     Geometry estimate: L=18.59cm W=12.89cm H=6.68cm | points=14 density=8745.41/m3
     Shape: planarity=0.6298 flatness=0.3592 thickness=12.89cm spread=13.81cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3726 | threshold=0.25

=================================================
Frame 171 (radar 19754) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9459m Z=+0.2916m | Range=0.9904m
     Range-profile relative power: 100.63 dB at 0.9920m | raw=3785 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0215,+0.0027,-0.0104)m/s
     Sensor side info (raw): SNR mean=270.357 min=135 peak=320 | Noise mean=541.467
     Geometry estimate: L=18.59cm W=12.87cm H=6.68cm | points=14 density=8755.86/m3
     Shape: planarity=0.6548 flatness=0.3592 thickness=12.87cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3727 | threshold=0.25

=================================================
Frame 172 (radar 19755) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0009,-0.0029)m/s
     Sensor side info (raw): SNR mean=271.571 min=136 peak=322 | Noise mean=540.067
     Geometry estimate: L=18.57cm W=12.94cm H=6.68cm | points=14 density=8718.06/m3
     Shape: planarity=0.6552 flatness=0.3595 thickness=12.94cm spread=13.70cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3725 | threshold=0.25

=================================================
Frame 173 (radar 19756) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2915m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0010)m/s
     Sensor side info (raw): SNR mean=271.500 min=137 peak=322 | Noise mean=540.067
     Geometry estimate: L=18.55cm W=12.91cm H=6.68cm | points=14 density=8748.22/m3
     Shape: planarity=0.6546 flatness=0.3599 thickness=12.91cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3724 | threshold=0.25

=================================================
Frame 174 (radar 19757) | Valid Objects: 1
UART: packet=832 B, objects=21, raw=21, filtered=21, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0317m Y=+0.9460m Z=+0.2914m | Range=0.9904m
     Range-profile relative power: 100.56 dB at 0.9920m | raw=3783 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0003,-0.0009)m/s
     Sensor side info (raw): SNR mean=274.000 min=138 peak=324 | Noise mean=537.600
     Geometry estimate: L=18.58cm W=12.84cm H=6.68cm | points=14 density=8784.93/m3
     Shape: planarity=0.6554 flatness=0.3595 thickness=12.84cm spread=13.65cm
     Quality: 84% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.3719 | threshold=0.25

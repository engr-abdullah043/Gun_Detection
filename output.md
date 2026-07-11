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
Frame 1 (radar 29232) | Valid Objects: 1
UART: packet=864 B, objects=23, raw=23, filtered=23, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 5 more valid frames)
     Position estimate: X=+0.0046m Y=+0.9611m Z=+0.1799m | Range=0.9778m
     Range-profile relative power: 51.55 dB at 1.0682m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0026m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0000,+0.0000)m/s
     Sensor side info (raw): SNR mean=163.217 min=125 peak=214 | Noise mean=595.304
     Geometry estimate: L=26.50cm W=12.88cm H=6.44cm | points=23 density=10462.64/m3
     Shape: planarity=0.6605 flatness=0.2430 thickness=12.88cm spread=14.70cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 2 (radar 29233) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 4 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9555m Z=+0.1781m | Range=0.9720m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0019,-0.0555,-0.0189)m/s
     Sensor side info (raw): SNR mean=189.500 min=138 peak=262 | Noise mean=565.708
     Geometry estimate: L=26.27cm W=14.92cm H=6.44cm | points=24 density=9504.54/m3
     Shape: planarity=0.6730 flatness=0.2451 thickness=14.92cm spread=15.15cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 3 (radar 29234) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 3 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9563m Z=+0.1742m | Range=0.9721m
     Range-profile relative power: 51.27 dB at 1.0301m | raw=3460 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0080,-0.0382)m/s
     Sensor side info (raw): SNR mean=184.000 min=132 peak=258 | Noise mean=570.833
     Geometry estimate: L=26.78cm W=13.83cm H=6.44cm | points=24 density=10061.95/m3
     Shape: planarity=0.6743 flatness=0.2405 thickness=13.83cm spread=14.56cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 4 (radar 29235) | Valid Objects: 1
UART: packet=928 B, objects=27, raw=27, filtered=27, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 2 more valid frames)
     Position estimate: X=+0.0057m Y=+0.9569m Z=+0.1712m | Range=0.9721m
     Range-profile relative power: 51.48 dB at 1.0301m | raw=3469 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0129,+0.0059,-0.0304)m/s
     Sensor side info (raw): SNR mean=169.667 min=122 peak=243 | Noise mean=584.958
     Geometry estimate: L=26.61cm W=13.74cm H=6.44cm | points=24 density=10188.53/m3
     Shape: planarity=0.6673 flatness=0.2420 thickness=13.74cm spread=14.76cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 5 (radar 29236) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 1 more valid frames)
     Position estimate: X=+0.0057m Y=+0.9561m Z=+0.1745m | Range=0.9720m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0078,+0.0329)m/s
     Sensor side info (raw): SNR mean=169.917 min=128 peak=226 | Noise mean=584.708
     Geometry estimate: L=26.58cm W=15.56cm H=6.44cm | points=24 density=9011.67/m3
     Shape: planarity=0.6690 flatness=0.2422 thickness=15.56cm spread=15.02cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: none | distance=999999.0000 | threshold=0.25

=================================================
Frame 6 (radar 29237) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0055m Y=+0.9555m Z=+0.1779m | Range=0.9719m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0015,-0.0065,+0.0342)m/s
     Sensor side info (raw): SNR mean=174.750 min=135 peak=223 | Noise mean=582.417
     Geometry estimate: L=26.72cm W=14.97cm H=6.44cm | points=24 density=9312.54/m3
     Shape: planarity=0.6851 flatness=0.2410 thickness=14.97cm spread=14.77cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3875 | threshold=0.25

=================================================
Frame 7 (radar 29238) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0031m Y=+0.9572m Z=+0.1695m | Range=0.9721m
     Range-profile relative power: 51.25 dB at 1.0301m | raw=3459 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0243,+0.0170,-0.0839)m/s
     Sensor side info (raw): SNR mean=172.542 min=131 peak=221 | Noise mean=583.417
     Geometry estimate: L=26.70cm W=13.53cm H=6.44cm | points=24 density=10311.36/m3
     Shape: planarity=0.6816 flatness=0.2411 thickness=13.53cm spread=14.51cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3892 | threshold=0.25

=================================================
Frame 8 (radar 29239) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0043m Y=+0.9540m Z=+0.1847m | Range=0.9717m
     Range-profile relative power: 51.62 dB at 1.0301m | raw=3475 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0119,-0.0324,+0.1519)m/s
     Sensor side info (raw): SNR mean=179.750 min=133 peak=239 | Noise mean=575.917
     Geometry estimate: L=26.53cm W=17.88cm H=6.44cm | points=24 density=7852.80/m3
     Shape: planarity=0.6783 flatness=0.2427 thickness=17.88cm spread=15.19cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3944 | threshold=0.25

=================================================
Frame 9 (radar 29240) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0043m Y=+0.9538m Z=+0.1846m | Range=0.9715m
     Range-profile relative power: 51.65 dB at 1.0301m | raw=3476 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0012,-0.0010)m/s
     Sensor side info (raw): SNR mean=181.042 min=136 peak=238 | Noise mean=574.500
     Geometry estimate: L=26.61cm W=19.97cm H=6.44cm | points=24 density=7013.22/m3
     Shape: planarity=0.6806 flatness=0.2420 thickness=19.97cm spread=15.33cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3995 | threshold=0.25

=================================================
Frame 10 (radar 29241) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0003m Y=+0.9545m Z=+0.1830m | Range=0.9719m
     Range-profile relative power: 51.18 dB at 1.0301m | raw=3456 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0392,+0.0069,-0.0161)m/s
     Sensor side info (raw): SNR mean=187.000 min=137 peak=250 | Noise mean=566.917
     Geometry estimate: L=26.64cm W=16.53cm H=6.44cm | points=24 density=8463.13/m3
     Shape: planarity=0.6991 flatness=0.2417 thickness=16.53cm spread=15.21cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4024 | threshold=0.25

=================================================
Frame 11 (radar 29242) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0046m Y=+0.9555m Z=+0.1780m | Range=0.9720m
     Range-profile relative power: 51.65 dB at 1.0301m | raw=3476 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0422,+0.0098,-0.0500)m/s
     Sensor side info (raw): SNR mean=175.167 min=121 peak=247 | Noise mean=581.250
     Geometry estimate: L=26.88cm W=15.42cm H=6.44cm | points=24 density=8991.21/m3
     Shape: planarity=0.6596 flatness=0.2396 thickness=15.42cm spread=15.29cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3999 | threshold=0.25

=================================================
Frame 12 (radar 29243) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0055m Y=+0.9559m Z=+0.1763m | Range=0.9720m
     Range-profile relative power: 51.62 dB at 1.0301m | raw=3475 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0094,+0.0040,-0.0170)m/s
     Sensor side info (raw): SNR mean=180.667 min=139 peak=241 | Noise mean=577.083
     Geometry estimate: L=26.68cm W=13.56cm H=6.44cm | points=24 density=10302.12/m3
     Shape: planarity=0.6848 flatness=0.2414 thickness=13.56cm spread=14.43cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4005 | threshold=0.25

=================================================
Frame 13 (radar 29244) | Valid Objects: 1
UART: packet=928 B, objects=27, raw=27, filtered=27, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0033m Y=+0.9553m Z=+0.1793m | Range=0.9720m
     Range-profile relative power: 51.57 dB at 1.0301m | raw=3473 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0224,-0.0061,+0.0298)m/s
     Sensor side info (raw): SNR mean=180.625 min=140 peak=253 | Noise mean=574.833
     Geometry estimate: L=27.31cm W=14.87cm H=6.44cm | points=24 density=9175.59/m3
     Shape: planarity=0.6668 flatness=0.2357 thickness=14.87cm spread=14.99cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.3982 | threshold=0.25

=================================================
Frame 14 (radar 29245) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0030m Y=+0.9561m Z=+0.1755m | Range=0.9720m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0030,+0.0077,-0.0383)m/s
     Sensor side info (raw): SNR mean=193.083 min=136 peak=279 | Noise mean=561.917
     Geometry estimate: L=26.83cm W=14.69cm H=6.44cm | points=24 density=9455.46/m3
     Shape: planarity=0.6841 flatness=0.2400 thickness=14.69cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4006 | threshold=0.25

=================================================
Frame 15 (radar 29246) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9564m Z=+0.1738m | Range=0.9721m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0139,+0.0034,-0.0167)m/s
     Sensor side info (raw): SNR mean=207.958 min=140 peak=281 | Noise mean=547.625
     Geometry estimate: L=26.67cm W=13.84cm H=6.44cm | points=24 density=10093.74/m3
     Shape: planarity=0.6741 flatness=0.2414 thickness=13.84cm spread=14.72cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4029 | threshold=0.25

=================================================
Frame 16 (radar 29247) | Valid Objects: 1
UART: packet=1056 B, objects=33, raw=33, filtered=33, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9560m Z=+0.1756m | Range=0.9720m
     Range-profile relative power: 51.60 dB at 1.0301m | raw=3474 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0040,+0.0186)m/s
     Sensor side info (raw): SNR mean=212.708 min=141 peak=283 | Noise mean=542.792
     Geometry estimate: L=26.73cm W=14.30cm H=6.44cm | points=24 density=9744.68/m3
     Shape: planarity=0.6756 flatness=0.2408 thickness=14.30cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4052 | threshold=0.25

=================================================
Frame 17 (radar 29248) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9562m Z=+0.1748m | Range=0.9720m
     Range-profile relative power: 51.57 dB at 1.0301m | raw=3473 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0017,-0.0089)m/s
     Sensor side info (raw): SNR mean=217.083 min=140 peak=285 | Noise mean=538.417
     Geometry estimate: L=26.60cm W=14.44cm H=6.44cm | points=24 density=9703.45/m3
     Shape: planarity=0.6735 flatness=0.2421 thickness=14.44cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4074 | threshold=0.25

=================================================
Frame 18 (radar 29249) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0021m Y=+0.9503m Z=+0.1742m | Range=0.9661m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0169m/s peak=0.4225m/s | Track velocity=(-0.0647,-0.0588,-0.0057)m/s
     Sensor side info (raw): SNR mean=214.120 min=141 peak=282 | Noise mean=532.720
     Geometry estimate: L=28.57cm W=19.20cm H=14.25cm | points=25 density=3198.84/m3
     Shape: planarity=0.6031 flatness=0.4988 thickness=14.25cm spread=21.03cm
     Quality: 91% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: gun | distance=0.4162 | threshold=0.25

=================================================
Frame 19 (radar 29250) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9560m Z=+0.1760m | Range=0.9720m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0647,+0.0568,+0.0179)m/s
     Sensor side info (raw): SNR mean=214.417 min=142 peak=284 | Noise mean=541.417
     Geometry estimate: L=26.75cm W=14.11cm H=6.44cm | points=24 density=9872.59/m3
     Shape: planarity=0.6753 flatness=0.2407 thickness=14.11cm spread=14.66cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4164 | threshold=0.25

=================================================
Frame 20 (radar 29251) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0030m Y=+0.9563m Z=+0.1743m | Range=0.9720m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0139,+0.0032,-0.0168)m/s
     Sensor side info (raw): SNR mean=215.167 min=142 peak=283 | Noise mean=540.583
     Geometry estimate: L=26.67cm W=14.65cm H=6.44cm | points=24 density=9540.13/m3
     Shape: planarity=0.6810 flatness=0.2415 thickness=14.65cm spread=14.97cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4155 | threshold=0.25

=================================================
Frame 21 (radar 29252) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9567m Z=+0.1720m | Range=0.9720m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0139,+0.0041,-0.0231)m/s
     Sensor side info (raw): SNR mean=212.458 min=142 peak=280 | Noise mean=542.875
     Geometry estimate: L=26.65cm W=14.21cm H=6.44cm | points=24 density=9834.94/m3
     Shape: planarity=0.6736 flatness=0.2416 thickness=14.21cm spread=14.90cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4133 | threshold=0.25

=================================================
Frame 22 (radar 29253) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0041m Y=+0.9567m Z=+0.1722m | Range=0.9721m
     Range-profile relative power: 51.48 dB at 1.0301m | raw=3469 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0025,+0.0000,+0.0021)m/s
     Sensor side info (raw): SNR mean=214.167 min=140 peak=282 | Noise mean=540.583
     Geometry estimate: L=26.65cm W=13.86cm H=6.44cm | points=24 density=10090.98/m3
     Shape: planarity=0.6896 flatness=0.2417 thickness=13.86cm spread=14.75cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4120 | threshold=0.25

=================================================
Frame 23 (radar 29254) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0067m Y=+0.9499m Z=+0.1723m | Range=0.9654m
     Range-profile relative power: 51.60 dB at 1.0301m | raw=3474 (relative, not dBm)
     Radial velocity estimate: mean=+0.0093m/s peak=0.1207m/s | Track velocity=(-0.1087,-0.0683,+0.0010)m/s
     Sensor side info (raw): SNR mean=215.538 min=143 peak=285 | Noise mean=525.923
     Geometry estimate: L=26.64cm W=17.77cm H=13.83cm | points=26 density=3970.72/m3
     Shape: planarity=0.5990 flatness=0.5193 thickness=13.83cm spread=16.95cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4195 | threshold=0.25

=================================================
Frame 24 (radar 29255) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0044m Y=+0.9567m Z=+0.1719m | Range=0.9721m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1111,+0.0687,-0.0041)m/s
     Sensor side info (raw): SNR mean=215.417 min=140 peak=287 | Noise mean=540.292
     Geometry estimate: L=26.69cm W=14.02cm H=6.44cm | points=24 density=9956.67/m3
     Shape: planarity=0.6739 flatness=0.2412 thickness=14.02cm spread=14.83cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4176 | threshold=0.25

=================================================
Frame 25 (radar 29256) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0030m Y=+0.9567m Z=+0.1718m | Range=0.9720m
     Range-profile relative power: 51.57 dB at 1.0301m | raw=3473 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0139,+0.0001,-0.0012)m/s
     Sensor side info (raw): SNR mean=216.167 min=140 peak=286 | Noise mean=539.708
     Geometry estimate: L=26.58cm W=14.25cm H=6.44cm | points=24 density=9837.79/m3
     Shape: planarity=0.6807 flatness=0.2422 thickness=14.25cm spread=14.90cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4199 | threshold=0.25

=================================================
Frame 26 (radar 29257) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0030m Y=+0.9564m Z=+0.1740m | Range=0.9721m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0038,+0.0226)m/s
     Sensor side info (raw): SNR mean=212.125 min=137 peak=282 | Noise mean=543.583
     Geometry estimate: L=26.60cm W=13.91cm H=6.44cm | points=24 density=10069.24/m3
     Shape: planarity=0.6809 flatness=0.2421 thickness=13.91cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4190 | threshold=0.25

=================================================
Frame 27 (radar 29258) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0052m Y=+0.9567m Z=+0.1714m | Range=0.9719m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0224,+0.0034,-0.0266)m/s
     Sensor side info (raw): SNR mean=216.875 min=138 peak=284 | Noise mean=538.875
     Geometry estimate: L=26.66cm W=17.03cm H=6.44cm | points=24 density=8207.45/m3
     Shape: planarity=0.6857 flatness=0.2415 thickness=17.03cm spread=16.77cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4164 | threshold=0.25

=================================================
Frame 28 (radar 29259) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0030m Y=+0.9565m Z=+0.1730m | Range=0.9720m
     Range-profile relative power: 51.48 dB at 1.0301m | raw=3469 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0224,-0.0018,+0.0161)m/s
     Sensor side info (raw): SNR mean=213.042 min=140 peak=282 | Noise mean=542.042
     Geometry estimate: L=26.73cm W=13.94cm H=6.44cm | points=24 density=9997.14/m3
     Shape: planarity=0.6827 flatness=0.2409 thickness=13.94cm spread=14.74cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4150 | threshold=0.25

=================================================
Frame 29 (radar 29260) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0033m Y=+0.9563m Z=+0.1739m | Range=0.9720m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0030,-0.0023,+0.0091)m/s
     Sensor side info (raw): SNR mean=217.792 min=141 peak=285 | Noise mean=537.792
     Geometry estimate: L=27.17cm W=14.43cm H=6.44cm | points=24 density=9506.19/m3
     Shape: planarity=0.6687 flatness=0.2370 thickness=14.43cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4110 | threshold=0.25

=================================================
Frame 30 (radar 29261) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0041m Y=+0.9579m Z=+0.1635m | Range=0.9718m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=-0.0172m/s peak=0.1207m/s | Track velocity=(+0.0085,+0.0159,-0.1037)m/s
     Sensor side info (raw): SNR mean=208.821 min=139 peak=286 | Noise mean=516.643
     Geometry estimate: L=27.16cm W=15.36cm H=6.44cm | points=28 density=10422.31/m3
     Shape: planarity=0.6681 flatness=0.2371 thickness=15.36cm spread=14.45cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4101 | threshold=0.25

=================================================
Frame 31 (radar 29262) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0055m Y=+0.9570m Z=+0.1708m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0138,-0.0090,+0.0726)m/s
     Sensor side info (raw): SNR mean=215.750 min=144 peak=282 | Noise mean=540.333
     Geometry estimate: L=26.62cm W=13.79cm H=6.44cm | points=24 density=10150.33/m3
     Shape: planarity=0.6815 flatness=0.2419 thickness=13.79cm spread=14.66cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4110 | threshold=0.25

=================================================
Frame 32 (radar 29263) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0033m Y=+0.9567m Z=+0.1716m | Range=0.9720m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0224,-0.0028,+0.0087)m/s
     Sensor side info (raw): SNR mean=217.125 min=142 peak=286 | Noise mean=537.833
     Geometry estimate: L=27.12cm W=14.56cm H=6.44cm | points=24 density=9436.70/m3
     Shape: planarity=0.6680 flatness=0.2374 thickness=14.56cm spread=14.99cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4103 | threshold=0.25

=================================================
Frame 33 (radar 29264) | Valid Objects: 1
UART: packet=992 B, objects=30, raw=30, filtered=30, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0039m Y=+0.9635m Z=+0.1613m | Range=0.9769m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=-0.0241m/s peak=0.1207m/s | Track velocity=(+0.0058,+0.0679,-0.1037)m/s
     Sensor side info (raw): SNR mean=207.067 min=127 peak=293 | Noise mean=506.667
     Geometry estimate: L=27.07cm W=14.31cm H=6.44cm | points=30 density=12024.02/m3
     Shape: planarity=0.6811 flatness=0.2379 thickness=14.31cm spread=14.76cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4735 | threshold=0.25

=================================================
Frame 34 (radar 29265) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0011m Y=+0.9560m Z=+0.1761m | Range=0.9720m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0276,-0.0754,+0.1478)m/s
     Sensor side info (raw): SNR mean=214.750 min=143 peak=286 | Noise mean=541.208
     Geometry estimate: L=27.09cm W=12.59cm H=6.44cm | points=24 density=10920.84/m3
     Shape: planarity=0.6564 flatness=0.2377 thickness=12.59cm spread=14.55cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4726 | threshold=0.25

=================================================
Frame 35 (radar 29266) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0010m Y=+0.9583m Z=+0.1755m | Range=0.9743m
     Range-profile relative power: 51.57 dB at 1.0682m | raw=3473 (relative, not dBm)
     Radial velocity estimate: mean=-0.0048m/s peak=0.1207m/s | Track velocity=(-0.0009,+0.0238,-0.0058)m/s
     Sensor side info (raw): SNR mean=211.920 min=143 peak=279 | Noise mean=536.440
     Geometry estimate: L=27.10cm W=12.88cm H=6.44cm | points=25 density=11116.59/m3
     Shape: planarity=0.6616 flatness=0.2376 thickness=12.88cm spread=14.47cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4722 | threshold=0.25

=================================================
Frame 36 (radar 29267) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0019m Y=+0.9565m Z=+0.1731m | Range=0.9720m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0089,-0.0188,-0.0241)m/s
     Sensor side info (raw): SNR mean=216.917 min=140 peak=287 | Noise mean=539.417
     Geometry estimate: L=27.09cm W=15.05cm H=6.44cm | points=24 density=9140.11/m3
     Shape: planarity=0.6762 flatness=0.2377 thickness=15.05cm spread=15.03cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4675 | threshold=0.25

=================================================
Frame 37 (radar 29268) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0008m Y=+0.9559m Z=+0.1760m | Range=0.9720m
     Range-profile relative power: 51.57 dB at 1.0301m | raw=3473 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0109,-0.0054,+0.0296)m/s
     Sensor side info (raw): SNR mean=215.375 min=140 peak=286 | Noise mean=540.417
     Geometry estimate: L=27.08cm W=15.19cm H=6.44cm | points=24 density=9059.24/m3
     Shape: planarity=0.6706 flatness=0.2378 thickness=15.19cm spread=15.02cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4629 | threshold=0.25

=================================================
Frame 38 (radar 29269) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0003m Y=+0.9558m Z=+0.1771m | Range=0.9720m
     Range-profile relative power: 51.55 dB at 1.0301m | raw=3472 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0109,-0.0015,+0.0108)m/s
     Sensor side info (raw): SNR mean=216.583 min=139 peak=289 | Noise mean=538.958
     Geometry estimate: L=27.10cm W=12.68cm H=6.44cm | points=24 density=10839.81/m3
     Shape: planarity=0.6653 flatness=0.2376 thickness=12.68cm spread=14.56cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4585 | threshold=0.25

=================================================
Frame 39 (radar 29270) | Valid Objects: 1
UART: packet=1024 B, objects=31, raw=31, filtered=31, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0038m Y=+0.9628m Z=+0.1603m | Range=0.9760m
     Range-profile relative power: 51.46 dB at 1.0682m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=-0.0273m/s peak=0.1207m/s | Track velocity=(+0.0407,+0.0702,-0.1684)m/s
     Sensor side info (raw): SNR mean=206.355 min=125 peak=286 | Noise mean=502.226
     Geometry estimate: L=27.02cm W=14.75cm H=6.44cm | points=31 density=12076.06/m3
     Shape: planarity=0.6672 flatness=0.2383 thickness=14.75cm spread=14.83cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4584 | threshold=0.25

=================================================
Frame 40 (radar 29271) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0045m Y=+0.9582m Z=+0.1628m | Range=0.9719m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(+0.0074,-0.0461,+0.0254)m/s
     Sensor side info (raw): SNR mean=209.438 min=137 peak=288 | Noise mean=499.281
     Geometry estimate: L=26.65cm W=16.19cm H=6.44cm | points=32 density=11516.12/m3
     Shape: planarity=0.6830 flatness=0.2417 thickness=16.19cm spread=14.97cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4581 | threshold=0.25

=================================================
Frame 41 (radar 29272) | Valid Objects: 1
UART: packet=1056 B, objects=32, raw=32, filtered=32, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0034m Y=+0.9569m Z=+0.1700m | Range=0.9719m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=-0.0302m/s peak=0.1207m/s | Track velocity=(-0.0112,-0.0127,+0.0722)m/s
     Sensor side info (raw): SNR mean=206.719 min=127 peak=297 | Noise mean=498.500
     Geometry estimate: L=26.53cm W=18.17cm H=6.44cm | points=32 density=10305.44/m3
     Shape: planarity=0.6985 flatness=0.2427 thickness=18.17cm spread=15.45cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4584 | threshold=0.25

=================================================
Frame 42 (radar 29273) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0010m Y=+0.9540m Z=+0.1866m | Range=0.9721m
     Range-profile relative power: 51.27 dB at 1.0301m | raw=3460 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0443,-0.0294,+0.1657)m/s
     Sensor side info (raw): SNR mean=211.875 min=124 peak=294 | Noise mean=544.458
     Geometry estimate: L=26.18cm W=17.04cm H=9.42cm | points=24 density=5708.61/m3
     Shape: planarity=0.6842 flatness=0.3598 thickness=17.04cm spread=14.93cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4619 | threshold=0.25

=================================================
Frame 43 (radar 29274) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0022m Y=+0.9548m Z=+0.1825m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0114,+0.0080,-0.0412)m/s
     Sensor side info (raw): SNR mean=212.542 min=124 peak=287 | Noise mean=543.833
     Geometry estimate: L=26.22cm W=16.54cm H=9.42cm | points=24 density=5872.47/m3
     Shape: planarity=0.6796 flatness=0.3593 thickness=16.54cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4585 | threshold=0.25

=================================================
Frame 44 (radar 29275) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0010m Y=+0.9549m Z=+0.1818m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0114,+0.0014,-0.0067)m/s
     Sensor side info (raw): SNR mean=214.250 min=123 peak=292 | Noise mean=541.750
     Geometry estimate: L=26.21cm W=16.37cm H=9.42cm | points=24 density=5937.21/m3
     Shape: planarity=0.6851 flatness=0.3594 thickness=16.37cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4618 | threshold=0.25

=================================================
Frame 45 (radar 29276) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0003m Y=+0.9538m Z=+0.1873m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0139,-0.0108,+0.0552)m/s
     Sensor side info (raw): SNR mean=212.708 min=124 peak=288 | Noise mean=543.958
     Geometry estimate: L=26.18cm W=16.99cm H=6.44cm | points=24 density=8374.85/m3
     Shape: planarity=0.6938 flatness=0.2459 thickness=16.99cm spread=15.01cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4625 | threshold=0.25

=================================================
Frame 46 (radar 29277) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9542m Z=+0.1858m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0114,+0.0032,-0.0155)m/s
     Sensor side info (raw): SNR mean=213.417 min=124 peak=291 | Noise mean=542.458
     Geometry estimate: L=26.20cm W=16.69cm H=6.44cm | points=24 density=8520.99/m3
     Shape: planarity=0.7014 flatness=0.2457 thickness=16.69cm spread=14.95cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4631 | threshold=0.25

=================================================
Frame 47 (radar 29278) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9544m Z=+0.1847m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0027,-0.0111)m/s
     Sensor side info (raw): SNR mean=210.333 min=123 peak=288 | Noise mean=545.250
     Geometry estimate: L=26.22cm W=16.69cm H=6.44cm | points=24 density=8513.10/m3
     Shape: planarity=0.7006 flatness=0.2456 thickness=16.69cm spread=14.89cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4658 | threshold=0.25

=================================================
Frame 48 (radar 29279) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9545m Z=+0.1843m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0007,-0.0033)m/s
     Sensor side info (raw): SNR mean=211.542 min=123 peak=288 | Noise mean=544.375
     Geometry estimate: L=26.25cm W=16.46cm H=6.44cm | points=24 density=8622.69/m3
     Shape: planarity=0.7011 flatness=0.2453 thickness=16.46cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4664 | threshold=0.25

=================================================
Frame 49 (radar 29280) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9543m Z=+0.1851m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0015,+0.0075)m/s
     Sensor side info (raw): SNR mean=211.375 min=124 peak=286 | Noise mean=544.667
     Geometry estimate: L=26.24cm W=16.41cm H=6.44cm | points=24 density=8651.82/m3
     Shape: planarity=0.7012 flatness=0.2454 thickness=16.41cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4694 | threshold=0.25

=================================================
Frame 50 (radar 29281) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0003m Y=+0.9540m Z=+0.1870m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0114,-0.0039,+0.0188)m/s
     Sensor side info (raw): SNR mean=213.333 min=124 peak=289 | Noise mean=543.083
     Geometry estimate: L=26.21cm W=16.44cm H=6.44cm | points=24 density=8646.38/m3
     Shape: planarity=0.6939 flatness=0.2456 thickness=16.44cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4700 | threshold=0.25

=================================================
Frame 51 (radar 29282) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9541m Z=+0.1861m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0114,+0.0015,-0.0089)m/s
     Sensor side info (raw): SNR mean=212.833 min=123 peak=288 | Noise mean=543.292
     Geometry estimate: L=26.24cm W=16.62cm H=6.44cm | points=24 density=8545.94/m3
     Shape: planarity=0.7015 flatness=0.2454 thickness=16.62cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4708 | threshold=0.25

=================================================
Frame 52 (radar 29283) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9541m Z=+0.1862m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0000,+0.0007)m/s
     Sensor side info (raw): SNR mean=212.917 min=124 peak=290 | Noise mean=543.167
     Geometry estimate: L=26.23cm W=16.57cm H=6.44cm | points=24 density=8573.74/m3
     Shape: planarity=0.7016 flatness=0.2455 thickness=16.57cm spread=14.87cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4714 | threshold=0.25

=================================================
Frame 53 (radar 29284) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9542m Z=+0.1854m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0014,-0.0076)m/s
     Sensor side info (raw): SNR mean=213.167 min=126 peak=287 | Noise mean=542.958
     Geometry estimate: L=26.23cm W=16.59cm H=6.44cm | points=24 density=8559.82/m3
     Shape: planarity=0.7018 flatness=0.2454 thickness=16.59cm spread=15.01cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4721 | threshold=0.25

=================================================
Frame 54 (radar 29285) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9541m Z=+0.1863m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,-0.0018,+0.0094)m/s
     Sensor side info (raw): SNR mean=212.250 min=124 peak=286 | Noise mean=543.917
     Geometry estimate: L=26.21cm W=16.61cm H=6.44cm | points=24 density=8558.03/m3
     Shape: planarity=0.7107 flatness=0.2456 thickness=16.61cm spread=14.96cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4729 | threshold=0.25

=================================================
Frame 55 (radar 29286) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9541m Z=+0.1862m | Range=0.9721m
     Range-profile relative power: 51.29 dB at 1.0301m | raw=3461 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0007,-0.0014)m/s
     Sensor side info (raw): SNR mean=212.125 min=123 peak=286 | Noise mean=543.875
     Geometry estimate: L=26.15cm W=16.71cm H=6.44cm | points=24 density=8527.11/m3
     Shape: planarity=0.7096 flatness=0.2462 thickness=16.71cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4737 | threshold=0.25

=================================================
Frame 56 (radar 29287) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9543m Z=+0.1854m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0129,+0.0017,-0.0082)m/s
     Sensor side info (raw): SNR mean=212.542 min=123 peak=290 | Noise mean=543.917
     Geometry estimate: L=26.17cm W=16.63cm H=6.44cm | points=24 density=8563.17/m3
     Shape: planarity=0.7005 flatness=0.2461 thickness=16.63cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4789 | threshold=0.25

=================================================
Frame 57 (radar 29288) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0028m Y=+0.9544m Z=+0.1849m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,+0.0006,-0.0043)m/s
     Sensor side info (raw): SNR mean=211.833 min=123 peak=287 | Noise mean=544.750
     Geometry estimate: L=26.23cm W=16.57cm H=6.44cm | points=24 density=8573.84/m3
     Shape: planarity=0.6920 flatness=0.2455 thickness=16.57cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4841 | threshold=0.25

=================================================
Frame 58 (radar 29289) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9542m Z=+0.1860m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0134,-0.0017,+0.0103)m/s
     Sensor side info (raw): SNR mean=213.583 min=123 peak=291 | Noise mean=543.042
     Geometry estimate: L=26.18cm W=16.42cm H=6.44cm | points=24 density=8665.28/m3
     Shape: planarity=0.7006 flatness=0.2459 thickness=16.42cm spread=14.74cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4849 | threshold=0.25

=================================================
Frame 59 (radar 29290) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9538m Z=+0.1879m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0042,+0.0196)m/s
     Sensor side info (raw): SNR mean=212.583 min=122 peak=288 | Noise mean=543.792
     Geometry estimate: L=26.13cm W=16.95cm H=6.44cm | points=24 density=8410.07/m3
     Shape: planarity=0.7005 flatness=0.2464 thickness=16.95cm spread=14.90cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4858 | threshold=0.25

=================================================
Frame 60 (radar 29291) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9539m Z=+0.1875m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,+0.0012,-0.0048)m/s
     Sensor side info (raw): SNR mean=212.958 min=123 peak=287 | Noise mean=543.667
     Geometry estimate: L=26.22cm W=16.58cm H=6.44cm | points=24 density=8568.72/m3
     Shape: planarity=0.7102 flatness=0.2456 thickness=16.58cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4865 | threshold=0.25

=================================================
Frame 61 (radar 29292) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0009m Y=+0.9541m Z=+0.1863m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0114,+0.0022,-0.0117)m/s
     Sensor side info (raw): SNR mean=212.708 min=123 peak=286 | Noise mean=543.875
     Geometry estimate: L=26.20cm W=16.64cm H=6.44cm | points=24 density=8544.57/m3
     Shape: planarity=0.7032 flatness=0.2457 thickness=16.64cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4249 | threshold=0.25

=================================================
Frame 62 (radar 29293) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0009m Y=+0.9540m Z=+0.1867m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0010,+0.0039)m/s
     Sensor side info (raw): SNR mean=212.750 min=124 peak=287 | Noise mean=544.042
     Geometry estimate: L=26.22cm W=16.62cm H=6.44cm | points=24 density=8552.79/m3
     Shape: planarity=0.7034 flatness=0.2456 thickness=16.62cm spread=14.83cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4221 | threshold=0.25

=================================================
Frame 63 (radar 29294) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9537m Z=+0.1883m | Range=0.9721m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0383,-0.0034,+0.0162)m/s
     Sensor side info (raw): SNR mean=212.708 min=123 peak=288 | Noise mean=543.833
     Geometry estimate: L=26.12cm W=17.07cm H=6.44cm | points=24 density=8357.51/m3
     Shape: planarity=0.6909 flatness=0.2465 thickness=17.07cm spread=14.89cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4196 | threshold=0.25

=================================================
Frame 64 (radar 29295) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9541m Z=+0.1862m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,+0.0041,-0.0209)m/s
     Sensor side info (raw): SNR mean=211.000 min=123 peak=286 | Noise mean=545.583
     Geometry estimate: L=26.14cm W=17.09cm H=6.44cm | points=24 density=8342.18/m3
     Shape: planarity=0.6829 flatness=0.2464 thickness=17.09cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4171 | threshold=0.25

=================================================
Frame 65 (radar 29296) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9542m Z=+0.1859m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0009,-0.0035)m/s
     Sensor side info (raw): SNR mean=211.042 min=121 peak=285 | Noise mean=545.167
     Geometry estimate: L=26.17cm W=16.87cm H=6.44cm | points=24 density=8441.97/m3
     Shape: planarity=0.6828 flatness=0.2461 thickness=16.87cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4149 | threshold=0.25

=================================================
Frame 66 (radar 29297) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1871m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0025,+0.0122)m/s
     Sensor side info (raw): SNR mean=212.125 min=121 peak=286 | Noise mean=544.000
     Geometry estimate: L=26.16cm W=16.88cm H=6.44cm | points=24 density=8436.52/m3
     Shape: planarity=0.6829 flatness=0.2461 thickness=16.88cm spread=14.80cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4150 | threshold=0.25

=================================================
Frame 67 (radar 29298) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9536m Z=+0.1884m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0029,+0.0133)m/s
     Sensor side info (raw): SNR mean=212.250 min=122 peak=286 | Noise mean=543.750
     Geometry estimate: L=26.16cm W=16.99cm H=6.44cm | points=24 density=8382.95/m3
     Shape: planarity=0.6834 flatness=0.2462 thickness=16.99cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4151 | threshold=0.25

=================================================
Frame 68 (radar 29299) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9538m Z=+0.1876m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0263,+0.0017,-0.0076)m/s
     Sensor side info (raw): SNR mean=212.750 min=121 peak=288 | Noise mean=543.208
     Geometry estimate: L=26.15cm W=16.97cm H=6.44cm | points=24 density=8394.22/m3
     Shape: planarity=0.6992 flatness=0.2462 thickness=16.97cm spread=14.88cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4152 | threshold=0.25

=================================================
Frame 69 (radar 29300) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9538m Z=+0.1875m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0263,+0.0002,-0.0018)m/s
     Sensor side info (raw): SNR mean=212.125 min=123 peak=286 | Noise mean=543.958
     Geometry estimate: L=26.16cm W=16.72cm H=6.44cm | points=24 density=8521.09/m3
     Shape: planarity=0.6840 flatness=0.2462 thickness=16.72cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4153 | threshold=0.25

=================================================
Frame 70 (radar 29301) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9538m Z=+0.1876m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0273,+0.0002,+0.0016)m/s
     Sensor side info (raw): SNR mean=211.375 min=122 peak=286 | Noise mean=544.833
     Geometry estimate: L=26.19cm W=16.57cm H=6.44cm | points=24 density=8588.17/m3
     Shape: planarity=0.7010 flatness=0.2459 thickness=16.57cm spread=14.77cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4153 | threshold=0.25

=================================================
Frame 71 (radar 29302) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9536m Z=+0.1884m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0273,-0.0022,+0.0078)m/s
     Sensor side info (raw): SNR mean=211.708 min=122 peak=287 | Noise mean=544.375
     Geometry estimate: L=26.15cm W=16.99cm H=6.44cm | points=24 density=8383.51/m3
     Shape: planarity=0.6836 flatness=0.2462 thickness=16.99cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4155 | threshold=0.25

=================================================
Frame 72 (radar 29303) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1877m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0134,+0.0017,-0.0067)m/s
     Sensor side info (raw): SNR mean=211.000 min=122 peak=285 | Noise mean=545.208
     Geometry estimate: L=26.16cm W=17.04cm H=6.44cm | points=24 density=8357.33/m3
     Shape: planarity=0.6908 flatness=0.2461 thickness=17.04cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4157 | threshold=0.25

=================================================
Frame 73 (radar 29304) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9540m Z=+0.1865m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0027,-0.0125)m/s
     Sensor side info (raw): SNR mean=210.708 min=120 peak=285 | Noise mean=545.333
     Geometry estimate: L=26.10cm W=16.97cm H=6.44cm | points=24 density=8410.69/m3
     Shape: planarity=0.6902 flatness=0.2467 thickness=16.97cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4160 | threshold=0.25

=================================================
Frame 74 (radar 29305) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9540m Z=+0.1866m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0002,+0.0010)m/s
     Sensor side info (raw): SNR mean=211.792 min=121 peak=287 | Noise mean=544.292
     Geometry estimate: L=26.18cm W=16.83cm H=6.44cm | points=24 density=8457.31/m3
     Shape: planarity=0.6907 flatness=0.2460 thickness=16.83cm spread=14.83cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4161 | threshold=0.25

=================================================
Frame 75 (radar 29306) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9537m Z=+0.1880m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,-0.0031,+0.0142)m/s
     Sensor side info (raw): SNR mean=211.875 min=121 peak=286 | Noise mean=544.167
     Geometry estimate: L=26.09cm W=17.06cm H=6.44cm | points=24 density=8373.36/m3
     Shape: planarity=0.6827 flatness=0.2468 thickness=17.06cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4163 | threshold=0.25

=================================================
Frame 76 (radar 29307) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0015m Y=+0.9537m Z=+0.1885m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0273,-0.0007,+0.0048)m/s
     Sensor side info (raw): SNR mean=212.083 min=121 peak=288 | Noise mean=544.125
     Geometry estimate: L=26.13cm W=16.99cm H=6.44cm | points=24 density=8392.75/m3
     Shape: planarity=0.7004 flatness=0.2464 thickness=16.99cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4164 | threshold=0.25

=================================================
Frame 77 (radar 29308) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1876m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0139,+0.0017,-0.0092)m/s
     Sensor side info (raw): SNR mean=212.000 min=122 peak=286 | Noise mean=544.292
     Geometry estimate: L=26.18cm W=16.67cm H=6.44cm | points=24 density=8540.26/m3
     Shape: planarity=0.6915 flatness=0.2460 thickness=16.67cm spread=14.78cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4164 | threshold=0.25

=================================================
Frame 78 (radar 29309) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9539m Z=+0.1870m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0005,+0.0009,-0.0053)m/s
     Sensor side info (raw): SNR mean=211.583 min=123 peak=285 | Noise mean=544.875
     Geometry estimate: L=26.21cm W=16.69cm H=6.44cm | points=24 density=8518.25/m3
     Shape: planarity=0.6911 flatness=0.2457 thickness=16.69cm spread=14.77cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4165 | threshold=0.25

=================================================
Frame 79 (radar 29310) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9537m Z=+0.1879m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0129,-0.0017,+0.0082)m/s
     Sensor side info (raw): SNR mean=212.250 min=122 peak=287 | Noise mean=543.792
     Geometry estimate: L=26.18cm W=16.60cm H=6.44cm | points=24 density=8573.15/m3
     Shape: planarity=0.6841 flatness=0.2459 thickness=16.60cm spread=14.75cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4165 | threshold=0.25

=================================================
Frame 80 (radar 29311) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9537m Z=+0.1879m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0134,-0.0001,+0.0006)m/s
     Sensor side info (raw): SNR mean=211.458 min=122 peak=287 | Noise mean=544.583
     Geometry estimate: L=26.14cm W=17.15cm H=6.44cm | points=24 density=8310.92/m3
     Shape: planarity=0.6908 flatness=0.2463 thickness=17.15cm spread=14.88cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4168 | threshold=0.25

=================================================
Frame 81 (radar 29312) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9540m Z=+0.1866m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,+0.0026,-0.0132)m/s
     Sensor side info (raw): SNR mean=211.375 min=122 peak=285 | Noise mean=544.625
     Geometry estimate: L=26.14cm W=17.08cm H=6.44cm | points=24 density=8346.21/m3
     Shape: planarity=0.6826 flatness=0.2464 thickness=17.08cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4170 | threshold=0.25

=================================================
Frame 82 (radar 29313) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1869m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0005,+0.0028)m/s
     Sensor side info (raw): SNR mean=211.458 min=121 peak=287 | Noise mean=544.583
     Geometry estimate: L=26.13cm W=17.00cm H=6.44cm | points=24 density=8385.43/m3
     Shape: planarity=0.6825 flatness=0.2464 thickness=17.00cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4149 | threshold=0.25

=================================================
Frame 83 (radar 29314) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1873m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0008,+0.0039)m/s
     Sensor side info (raw): SNR mean=212.583 min=121 peak=288 | Noise mean=543.250
     Geometry estimate: L=26.14cm W=17.00cm H=6.44cm | points=24 density=8388.32/m3
     Shape: planarity=0.6827 flatness=0.2464 thickness=17.00cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4150 | threshold=0.25

=================================================
Frame 84 (radar 29315) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9536m Z=+0.1883m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0023,+0.0107)m/s
     Sensor side info (raw): SNR mean=211.292 min=121 peak=285 | Noise mean=544.708
     Geometry estimate: L=26.13cm W=16.97cm H=6.44cm | points=24 density=8404.13/m3
     Shape: planarity=0.6832 flatness=0.2464 thickness=16.97cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4149 | threshold=0.25

=================================================
Frame 85 (radar 29316) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1877m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,+0.0013,-0.0062)m/s
     Sensor side info (raw): SNR mean=212.000 min=121 peak=286 | Noise mean=544.167
     Geometry estimate: L=26.13cm W=16.98cm H=6.44cm | points=24 density=8399.80/m3
     Shape: planarity=0.6904 flatness=0.2464 thickness=16.98cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4172 | threshold=0.25

=================================================
Frame 86 (radar 29317) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1874m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0007,-0.0033)m/s
     Sensor side info (raw): SNR mean=212.125 min=122 peak=286 | Noise mean=544.208
     Geometry estimate: L=26.17cm W=16.82cm H=6.44cm | points=24 density=8464.61/m3
     Shape: planarity=0.6908 flatness=0.2461 thickness=16.82cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4172 | threshold=0.25

=================================================
Frame 87 (radar 29318) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9538m Z=+0.1877m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0129,-0.0008,+0.0034)m/s
     Sensor side info (raw): SNR mean=211.292 min=121 peak=285 | Noise mean=545.000
     Geometry estimate: L=26.17cm W=16.79cm H=6.44cm | points=24 density=8480.47/m3
     Shape: planarity=0.6838 flatness=0.2460 thickness=16.79cm spread=14.81cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4172 | threshold=0.25

=================================================
Frame 88 (radar 29319) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9537m Z=+0.1879m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0020)m/s
     Sensor side info (raw): SNR mean=210.500 min=122 peak=285 | Noise mean=545.750
     Geometry estimate: L=26.16cm W=16.82cm H=6.44cm | points=24 density=8465.93/m3
     Shape: planarity=0.6837 flatness=0.2461 thickness=16.82cm spread=14.78cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4173 | threshold=0.25

=================================================
Frame 89 (radar 29320) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9538m Z=+0.1875m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0009,-0.0042)m/s
     Sensor side info (raw): SNR mean=211.583 min=121 peak=289 | Noise mean=544.708
     Geometry estimate: L=26.13cm W=16.95cm H=6.44cm | points=24 density=8412.20/m3
     Shape: planarity=0.6830 flatness=0.2464 thickness=16.95cm spread=14.82cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4174 | threshold=0.25

=================================================
Frame 90 (radar 29321) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9539m Z=+0.1870m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0134,+0.0012,-0.0047)m/s
     Sensor side info (raw): SNR mean=211.583 min=121 peak=287 | Noise mean=544.417
     Geometry estimate: L=26.11cm W=17.07cm H=6.44cm | points=24 density=8361.92/m3
     Shape: planarity=0.6902 flatness=0.2466 thickness=17.07cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4175 | threshold=0.25

=================================================
Frame 91 (radar 29322) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1872m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,-0.0006,+0.0018)m/s
     Sensor side info (raw): SNR mean=211.583 min=121 peak=287 | Noise mean=544.542
     Geometry estimate: L=26.12cm W=17.09cm H=6.44cm | points=24 density=8346.48/m3
     Shape: planarity=0.6826 flatness=0.2465 thickness=17.09cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4175 | threshold=0.25

=================================================
Frame 92 (radar 29323) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9536m Z=+0.1889m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0032,+0.0165)m/s
     Sensor side info (raw): SNR mean=211.792 min=121 peak=286 | Noise mean=544.250
     Geometry estimate: L=26.11cm W=16.81cm H=6.44cm | points=24 density=8487.99/m3
     Shape: planarity=0.6831 flatness=0.2466 thickness=16.81cm spread=14.84cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4175 | threshold=0.25

=================================================
Frame 93 (radar 29324) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9535m Z=+0.1889m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0002)m/s
     Sensor side info (raw): SNR mean=211.583 min=120 peak=286 | Noise mean=544.542
     Geometry estimate: L=26.09cm W=17.25cm H=6.44cm | points=24 density=8280.30/m3
     Shape: planarity=0.6829 flatness=0.2468 thickness=17.25cm spread=14.92cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4176 | threshold=0.25

=================================================
Frame 94 (radar 29325) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9536m Z=+0.1884m | Range=0.9721m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,+0.0011,-0.0050)m/s
     Sensor side info (raw): SNR mean=211.417 min=120 peak=285 | Noise mean=544.667
     Geometry estimate: L=26.13cm W=17.21cm H=6.44cm | points=24 density=8285.92/m3
     Shape: planarity=0.6901 flatness=0.2465 thickness=17.21cm spread=14.88cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4177 | threshold=0.25

=================================================
Frame 95 (radar 29326) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1876m | Range=0.9721m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0018,-0.0083)m/s
     Sensor side info (raw): SNR mean=210.875 min=121 peak=286 | Noise mean=545.625
     Geometry estimate: L=26.15cm W=16.97cm H=6.44cm | points=24 density=8397.25/m3
     Shape: planarity=0.6903 flatness=0.2462 thickness=16.97cm spread=14.88cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4176 | threshold=0.25

=================================================
Frame 96 (radar 29327) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1877m | Range=0.9721m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0004,+0.0019)m/s
     Sensor side info (raw): SNR mean=211.083 min=121 peak=285 | Noise mean=545.250
     Geometry estimate: L=26.17cm W=16.88cm H=6.44cm | points=24 density=8437.22/m3
     Shape: planarity=0.6906 flatness=0.2461 thickness=16.88cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4177 | threshold=0.25

=================================================
Frame 97 (radar 29328) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9538m Z=+0.1878m | Range=0.9721m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0005,+0.0001,+0.0002)m/s
     Sensor side info (raw): SNR mean=209.792 min=120 peak=284 | Noise mean=546.500
     Geometry estimate: L=26.18cm W=16.93cm H=6.44cm | points=24 density=8405.59/m3
     Shape: planarity=0.6909 flatness=0.2460 thickness=16.93cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4178 | threshold=0.25

=================================================
Frame 98 (radar 29329) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0017m Y=+0.9539m Z=+0.1874m | Range=0.9721m
     Range-profile relative power: 51.48 dB at 1.0301m | raw=3469 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0114,+0.0008,-0.0034)m/s
     Sensor side info (raw): SNR mean=210.333 min=120 peak=283 | Noise mean=546.042
     Geometry estimate: L=26.11cm W=17.07cm H=6.44cm | points=24 density=8361.91/m3
     Shape: planarity=0.6821 flatness=0.2466 thickness=17.07cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4180 | threshold=0.25

=================================================
Frame 99 (radar 29330) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9539m Z=+0.1873m | Range=0.9721m
     Range-profile relative power: 51.50 dB at 1.0301m | raw=3470 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0015,+0.0004,-0.0010)m/s
     Sensor side info (raw): SNR mean=212.250 min=119 peak=288 | Noise mean=543.667
     Geometry estimate: L=26.10cm W=17.12cm H=6.44cm | points=24 density=8338.47/m3
     Shape: planarity=0.6976 flatness=0.2467 thickness=17.12cm spread=14.99cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4157 | threshold=0.25

=================================================
Frame 100 (radar 29331) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9537m Z=+0.1884m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0022,+0.0111)m/s
     Sensor side info (raw): SNR mean=211.708 min=118 peak=288 | Noise mean=544.000
     Geometry estimate: L=26.04cm W=17.39cm H=6.44cm | points=24 density=8228.38/m3
     Shape: planarity=0.6970 flatness=0.2473 thickness=17.39cm spread=15.06cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4158 | threshold=0.25

=================================================
Frame 101 (radar 29332) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9536m Z=+0.1890m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0012,+0.0054)m/s
     Sensor side info (raw): SNR mean=211.750 min=120 peak=287 | Noise mean=544.375
     Geometry estimate: L=26.09cm W=17.28cm H=6.44cm | points=24 density=8267.75/m3
     Shape: planarity=0.6977 flatness=0.2468 thickness=17.28cm spread=15.00cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4157 | threshold=0.25

=================================================
Frame 102 (radar 29333) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0017m Y=+0.9536m Z=+0.1884m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0010,+0.0006,-0.0058)m/s
     Sensor side info (raw): SNR mean=212.792 min=119 peak=289 | Noise mean=543.375
     Geometry estimate: L=26.14cm W=16.78cm H=9.42cm | points=24 density=5807.31/m3
     Shape: planarity=0.6644 flatness=0.3603 thickness=16.78cm spread=14.96cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4184 | threshold=0.25

=================================================
Frame 103 (radar 29334) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9537m Z=+0.1882m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0010,+0.0010,-0.0016)m/s
     Sensor side info (raw): SNR mean=210.042 min=119 peak=284 | Noise mean=546.125
     Geometry estimate: L=26.10cm W=17.07cm H=6.44cm | points=24 density=8364.26/m3
     Shape: planarity=0.6977 flatness=0.2467 thickness=17.07cm spread=15.11cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4185 | threshold=0.25

=================================================
Frame 104 (radar 29335) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9537m Z=+0.1883m | Range=0.9721m
     Range-profile relative power: 51.48 dB at 1.0301m | raw=3469 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0003,+0.0010)m/s
     Sensor side info (raw): SNR mean=212.667 min=119 peak=288 | Noise mean=543.500
     Geometry estimate: L=26.14cm W=16.93cm H=6.44cm | points=24 density=8420.60/m3
     Shape: planarity=0.6985 flatness=0.2463 thickness=16.93cm spread=14.97cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4160 | threshold=0.25

=================================================
Frame 105 (radar 29336) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9534m Z=+0.1897m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0263,-0.0031,+0.0134)m/s
     Sensor side info (raw): SNR mean=210.500 min=119 peak=285 | Noise mean=545.125
     Geometry estimate: L=26.10cm W=17.32cm H=6.44cm | points=24 density=8242.99/m3
     Shape: planarity=0.6824 flatness=0.2467 thickness=17.32cm spread=14.96cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4139 | threshold=0.25

=================================================
Frame 106 (radar 29337) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9535m Z=+0.1893m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0134,+0.0011,-0.0038)m/s
     Sensor side info (raw): SNR mean=210.250 min=118 peak=285 | Noise mean=545.583
     Geometry estimate: L=26.05cm W=17.24cm H=6.44cm | points=24 density=8296.64/m3
     Shape: planarity=0.6895 flatness=0.2471 thickness=17.24cm spread=14.97cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4141 | threshold=0.25

=================================================
Frame 107 (radar 29338) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9537m Z=+0.1885m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,+0.0017,-0.0079)m/s
     Sensor side info (raw): SNR mean=209.542 min=119 peak=285 | Noise mean=546.375
     Geometry estimate: L=26.09cm W=17.42cm H=6.44cm | points=24 density=8201.69/m3
     Shape: planarity=0.6971 flatness=0.2468 thickness=17.42cm spread=15.03cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4142 | threshold=0.25

=================================================
Frame 108 (radar 29339) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9535m Z=+0.1893m | Range=0.9721m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0016,+0.0078)m/s
     Sensor side info (raw): SNR mean=210.333 min=119 peak=286 | Noise mean=545.583
     Geometry estimate: L=26.04cm W=17.49cm H=6.44cm | points=24 density=8181.73/m3
     Shape: planarity=0.6969 flatness=0.2472 thickness=17.49cm spread=15.09cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4096 | threshold=0.25

=================================================
Frame 109 (radar 29340) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9533m Z=+0.1901m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,-0.0018,+0.0079)m/s
     Sensor side info (raw): SNR mean=211.208 min=117 peak=287 | Noise mean=544.542
     Geometry estimate: L=26.05cm W=17.54cm H=6.44cm | points=24 density=8154.42/m3
     Shape: planarity=0.6881 flatness=0.2472 thickness=17.54cm spread=15.09cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4051 | threshold=0.25

=================================================
Frame 110 (radar 29341) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0065m Y=+0.9533m Z=+0.1901m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0353,-0.0007,+0.0005)m/s
     Sensor side info (raw): SNR mean=210.208 min=117 peak=284 | Noise mean=544.917
     Geometry estimate: L=26.10cm W=19.09cm H=6.44cm | points=24 density=7480.13/m3
     Shape: planarity=0.6872 flatness=0.2467 thickness=19.09cm spread=15.73cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4055 | threshold=0.25

=================================================
Frame 111 (radar 29342) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9534m Z=+0.1895m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0224,+0.0018,-0.0065)m/s
     Sensor side info (raw): SNR mean=211.333 min=119 peak=287 | Noise mean=544.417
     Geometry estimate: L=26.18cm W=16.72cm H=6.44cm | points=24 density=8512.77/m3
     Shape: planarity=0.6836 flatness=0.2459 thickness=16.72cm spread=14.83cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4054 | threshold=0.25

=================================================
Frame 112 (radar 29343) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9535m Z=+0.1893m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0129,+0.0004,-0.0015)m/s
     Sensor side info (raw): SNR mean=210.250 min=120 peak=285 | Noise mean=545.875
     Geometry estimate: L=26.21cm W=16.75cm H=6.44cm | points=24 density=8486.92/m3
     Shape: planarity=0.6904 flatness=0.2457 thickness=16.75cm spread=14.85cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4054 | threshold=0.25

=================================================
Frame 113 (radar 29344) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0029m Y=+0.9539m Z=+0.1875m | Range=0.9721m
     Range-profile relative power: 51.53 dB at 1.0301m | raw=3471 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0038,-0.0185)m/s
     Sensor side info (raw): SNR mean=212.083 min=118 peak=287 | Noise mean=544.042
     Geometry estimate: L=26.17cm W=16.67cm H=6.44cm | points=24 density=8538.72/m3
     Shape: planarity=0.6903 flatness=0.2460 thickness=16.67cm spread=14.87cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4029 | threshold=0.25

=================================================
Frame 114 (radar 29345) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9540m Z=+0.1866m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0129,+0.0015,-0.0085)m/s
     Sensor side info (raw): SNR mean=213.417 min=121 peak=291 | Noise mean=543.167
     Geometry estimate: L=26.29cm W=16.28cm H=6.44cm | points=24 density=8706.24/m3
     Shape: planarity=0.6844 flatness=0.2449 thickness=16.28cm spread=14.71cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4027 | threshold=0.25

=================================================
Frame 115 (radar 29346) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1871m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0009,+0.0052)m/s
     Sensor side info (raw): SNR mean=212.250 min=121 peak=286 | Noise mean=544.208
     Geometry estimate: L=26.23cm W=16.56cm H=6.44cm | points=24 density=8577.22/m3
     Shape: planarity=0.6835 flatness=0.2455 thickness=16.56cm spread=14.74cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4026 | threshold=0.25

=================================================
Frame 116 (radar 29347) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9539m Z=+0.1872m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0000,+0.0003)m/s
     Sensor side info (raw): SNR mean=209.917 min=122 peak=283 | Noise mean=546.417
     Geometry estimate: L=26.21cm W=16.61cm H=6.44cm | points=24 density=8559.81/m3
     Shape: planarity=0.6834 flatness=0.2456 thickness=16.61cm spread=14.78cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4026 | threshold=0.25

=================================================
Frame 117 (radar 29348) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9537m Z=+0.1883m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0021,+0.0113)m/s
     Sensor side info (raw): SNR mean=210.792 min=120 peak=285 | Noise mean=545.500
     Geometry estimate: L=26.17cm W=16.44cm H=6.44cm | points=24 density=8660.91/m3
     Shape: planarity=0.6832 flatness=0.2460 thickness=16.44cm spread=14.71cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4026 | threshold=0.25

=================================================
Frame 118 (radar 29349) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9536m Z=+0.1885m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0006,+0.0018)m/s
     Sensor side info (raw): SNR mean=211.125 min=120 peak=286 | Noise mean=545.125
     Geometry estimate: L=26.18cm W=16.80cm H=6.44cm | points=24 density=8468.29/m3
     Shape: planarity=0.6833 flatness=0.2459 thickness=16.80cm spread=14.79cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4025 | threshold=0.25

=================================================
Frame 119 (radar 29350) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0016m Y=+0.9539m Z=+0.1871m | Range=0.9721m
     Range-profile relative power: 51.46 dB at 1.0301m | raw=3468 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0263,+0.0030,-0.0136)m/s
     Sensor side info (raw): SNR mean=211.250 min=120 peak=286 | Noise mean=545.250
     Geometry estimate: L=26.10cm W=16.98cm H=6.44cm | points=24 density=8408.52/m3
     Shape: planarity=0.6982 flatness=0.2467 thickness=16.98cm spread=14.89cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4048 | threshold=0.25

=================================================
Frame 120 (radar 29351) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0003m Y=+0.9536m Z=+0.1887m | Range=0.9721m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0124,-0.0034,+0.0155)m/s
     Sensor side info (raw): SNR mean=210.792 min=118 peak=286 | Noise mean=545.167
     Geometry estimate: L=26.13cm W=16.65cm H=9.42cm | points=24 density=5854.88/m3
     Shape: planarity=0.6729 flatness=0.3605 thickness=16.65cm spread=14.91cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4074 | threshold=0.25

=================================================
Frame 121 (radar 29352) | Valid Objects: 1
UART: packet=928 B, objects=26, raw=26, filtered=26, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0074m Y=+0.9599m Z=+0.1863m | Range=0.9778m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=-0.0093m/s peak=0.1207m/s | Track velocity=(+0.0708,+0.0628,-0.0237)m/s
     Sensor side info (raw): SNR mean=204.962 min=115 peak=285 | Noise mean=534.654
     Geometry estimate: L=26.10cm W=18.56cm H=6.44cm | points=26 density=8332.65/m3
     Shape: planarity=0.6780 flatness=0.2467 thickness=18.56cm spread=15.68cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4078 | threshold=0.25

=================================================
Frame 122 (radar 29353) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0086m Y=+0.9537m Z=+0.1876m | Range=0.9720m
     Range-profile relative power: 51.41 dB at 1.0301m | raw=3466 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0122,-0.0621,+0.0128)m/s
     Sensor side info (raw): SNR mean=208.958 min=116 peak=285 | Noise mean=545.708
     Geometry estimate: L=25.61cm W=19.45cm H=6.44cm | points=24 density=7478.49/m3
     Shape: planarity=0.6779 flatness=0.2514 thickness=19.45cm spread=15.43cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4081 | threshold=0.25

=================================================
Frame 123 (radar 29354) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0026m Y=+0.9535m Z=+0.1886m | Range=0.9720m
     Range-profile relative power: 51.43 dB at 1.0301m | raw=3467 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0606,-0.0015,+0.0101)m/s
     Sensor side info (raw): SNR mean=210.083 min=119 peak=285 | Noise mean=545.125
     Geometry estimate: L=25.91cm W=19.97cm H=9.42cm | points=24 density=4921.32/m3
     Shape: planarity=0.6694 flatness=0.3635 thickness=19.97cm spread=15.62cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4113 | threshold=0.25

=================================================
Frame 124 (radar 29355) | Valid Objects: 1
UART: packet=992 B, objects=30, raw=30, filtered=30, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0039m Y=+0.9534m Z=+0.1890m | Range=0.9720m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0134,-0.0008,+0.0040)m/s
     Sensor side info (raw): SNR mean=205.542 min=116 peak=284 | Noise mean=549.500
     Geometry estimate: L=25.83cm W=19.44cm H=9.42cm | points=24 density=5073.09/m3
     Shape: planarity=0.6618 flatness=0.3647 thickness=19.44cm spread=15.45cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4169 | threshold=0.25

=================================================
Frame 125 (radar 29356) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0007m Y=+0.9497m Z=+0.1870m | Range=0.9680m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0048m/s peak=0.1207m/s | Track velocity=(-0.0464,-0.0371,-0.0197)m/s
     Sensor side info (raw): SNR mean=212.160 min=121 peak=288 | Noise mean=535.800
     Geometry estimate: L=25.90cm W=19.58cm H=14.43cm | points=25 density=3416.22/m3
     Shape: planarity=0.6017 flatness=0.5570 thickness=19.58cm spread=15.95cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4259 | threshold=0.25

=================================================
Frame 126 (radar 29357) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0013m Y=+0.9532m Z=+0.1906m | Range=0.9720m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0201,+0.0345,+0.0354)m/s
     Sensor side info (raw): SNR mean=211.458 min=117 peak=287 | Noise mean=543.875
     Geometry estimate: L=25.84cm W=20.48cm H=6.44cm | points=24 density=7040.91/m3
     Shape: planarity=0.6966 flatness=0.2491 thickness=20.48cm spread=15.80cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4241 | threshold=0.25

=================================================
Frame 127 (radar 29358) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0034m Y=+0.9535m Z=+0.1883m | Range=0.9719m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0209,+0.0030,-0.0227)m/s
     Sensor side info (raw): SNR mean=206.000 min=119 peak=282 | Noise mean=548.917
     Geometry estimate: L=25.47cm W=20.56cm H=9.42cm | points=24 density=4863.83/m3
     Shape: planarity=0.6658 flatness=0.3698 thickness=20.56cm spread=15.91cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4272 | threshold=0.25

=================================================
Frame 128 (radar 29359) | Valid Objects: 1
UART: packet=960 B, objects=28, raw=28, filtered=28, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=-0.0064m Y=+0.9554m Z=+0.1908m | Range=0.9742m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0093m/s peak=0.1207m/s | Track velocity=(-0.0975,+0.0189,+0.0245)m/s
     Sensor side info (raw): SNR mean=198.885 min=116 peak=282 | Noise mean=540.385
     Geometry estimate: L=25.68cm W=22.06cm H=20.08cm | points=26 density=2286.22/m3
     Shape: planarity=0.4363 flatness=0.7818 thickness=20.08cm spread=18.39cm
     Quality: 92% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4406 | threshold=0.25

=================================================
Frame 129 (radar 29360) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0063m Y=+0.9534m Z=+0.1891m | Range=0.9720m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.1263,-0.0196,-0.0162)m/s
     Sensor side info (raw): SNR mean=205.667 min=117 peak=285 | Noise mean=549.208
     Geometry estimate: L=25.91cm W=19.81cm H=6.44cm | points=24 density=7262.51/m3
     Shape: planarity=0.6850 flatness=0.2486 thickness=19.81cm spread=15.54cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4458 | threshold=0.25

=================================================
Frame 130 (radar 29361) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0062m Y=+0.9535m Z=+0.1892m | Range=0.9721m
     Range-profile relative power: 51.36 dB at 1.0301m | raw=3464 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0005,+0.0007,+0.0006)m/s
     Sensor side info (raw): SNR mean=203.708 min=120 peak=281 | Noise mean=551.458
     Geometry estimate: L=25.97cm W=18.97cm H=6.44cm | points=24 density=7564.37/m3
     Shape: planarity=0.6873 flatness=0.2479 thickness=18.97cm spread=15.44cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4460 | threshold=0.25

=================================================
Frame 131 (radar 29362) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0023m Y=+0.9538m Z=+0.1870m | Range=0.9720m
     Range-profile relative power: 51.34 dB at 1.0301m | raw=3463 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0392,+0.0035,-0.0221)m/s
     Sensor side info (raw): SNR mean=206.000 min=118 peak=284 | Noise mean=549.333
     Geometry estimate: L=26.01cm W=19.63cm H=9.42cm | points=24 density=4989.47/m3
     Shape: planarity=0.6734 flatness=0.3622 thickness=19.63cm spread=15.66cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4485 | threshold=0.25

=================================================
Frame 132 (radar 29363) | Valid Objects: 1
UART: packet=896 B, objects=25, raw=25, filtered=25, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [BOX][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0028m Y=+0.9536m Z=+0.1881m | Range=0.9719m
     Range-profile relative power: 51.22 dB at 1.0301m | raw=3458 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0050,-0.0026,+0.0113)m/s
     Sensor side info (raw): SNR mean=203.125 min=119 peak=279 | Noise mean=552.500
     Geometry estimate: L=25.79cm W=19.99cm H=9.42cm | points=24 density=4940.34/m3
     Shape: planarity=0.6548 flatness=0.3653 thickness=19.99cm spread=15.81cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4513 | threshold=0.25

=================================================
Frame 133 (radar 29364) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0028m Y=+0.9543m Z=+0.1855m | Range=0.9721m
     Range-profile relative power: 51.32 dB at 1.0301m | raw=3462 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0005,+0.0072,-0.0265)m/s
     Sensor side info (raw): SNR mean=208.625 min=117 peak=284 | Noise mean=546.667
     Geometry estimate: L=26.16cm W=16.76cm H=6.44cm | points=24 density=8497.33/m3
     Shape: planarity=0.6907 flatness=0.2461 thickness=16.76cm spread=14.95cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4514 | threshold=0.25

=================================================
Frame 134 (radar 29365) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0042m Y=+0.9541m Z=+0.1863m | Range=0.9721m
     Range-profile relative power: 51.39 dB at 1.0301m | raw=3465 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0139,-0.0017,+0.0079)m/s
     Sensor side info (raw): SNR mean=208.083 min=117 peak=282 | Noise mean=547.083
     Geometry estimate: L=26.21cm W=16.68cm H=6.44cm | points=24 density=8521.81/m3
     Shape: planarity=0.6825 flatness=0.2457 thickness=16.68cm spread=14.86cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4492 | threshold=0.25

=================================================
Frame 135 (radar 29366) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0065m Y=+0.9539m Z=+0.1868m | Range=0.9721m
     Range-profile relative power: 51.25 dB at 1.0301m | raw=3459 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0224,-0.0018,+0.0058)m/s
     Sensor side info (raw): SNR mean=205.417 min=116 peak=281 | Noise mean=549.708
     Geometry estimate: L=26.11cm W=18.88cm H=6.44cm | points=24 density=7560.53/m3
     Shape: planarity=0.6859 flatness=0.2466 thickness=18.88cm spread=15.60cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4475 | threshold=0.25

=================================================
Frame 136 (radar 29367) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0024m Y=+0.9539m Z=+0.1872m | Range=0.9721m
     Range-profile relative power: 51.22 dB at 1.0301m | raw=3458 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0402,-0.0002,+0.0033)m/s
     Sensor side info (raw): SNR mean=205.792 min=119 peak=280 | Noise mean=549.583
     Geometry estimate: L=25.99cm W=19.18cm H=6.44cm | points=24 density=7475.54/m3
     Shape: planarity=0.7077 flatness=0.2477 thickness=19.18cm spread=15.63cm
     Quality: 93% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4479 | threshold=0.25

=================================================
Frame 137 (radar 29368) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9534m Z=+0.1897m | Range=0.9721m
     Range-profile relative power: 51.27 dB at 1.0301m | raw=3460 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(-0.0224,-0.0049,+0.0252)m/s
     Sensor side info (raw): SNR mean=206.125 min=121 peak=280 | Noise mean=549.500
     Geometry estimate: L=25.95cm W=18.16cm H=6.44cm | points=24 density=7905.09/m3
     Shape: planarity=0.7060 flatness=0.2481 thickness=18.16cm spread=15.51cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4482 | threshold=0.25

=================================================
Frame 138 (radar 29369) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9534m Z=+0.1900m | Range=0.9721m
     Range-profile relative power: 51.27 dB at 1.0301m | raw=3460 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0005,+0.0029)m/s
     Sensor side info (raw): SNR mean=205.958 min=119 peak=279 | Noise mean=549.750
     Geometry estimate: L=25.91cm W=18.10cm H=6.44cm | points=24 density=7945.00/m3
     Shape: planarity=0.7058 flatness=0.2485 thickness=18.10cm spread=15.52cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4485 | threshold=0.25

=================================================
Frame 139 (radar 29370) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9534m Z=+0.1897m | Range=0.9721m
     Range-profile relative power: 51.22 dB at 1.0301m | raw=3458 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0005,-0.0027)m/s
     Sensor side info (raw): SNR mean=207.417 min=120 peak=282 | Noise mean=548.708
     Geometry estimate: L=25.93cm W=18.05cm H=6.44cm | points=24 density=7963.60/m3
     Shape: planarity=0.7064 flatness=0.2484 thickness=18.05cm spread=15.41cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4464 | threshold=0.25

=================================================
Frame 140 (radar 29371) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9534m Z=+0.1898m | Range=0.9721m
     Range-profile relative power: 51.25 dB at 1.0301m | raw=3459 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0001,+0.0012)m/s
     Sensor side info (raw): SNR mean=208.208 min=118 peak=281 | Noise mean=547.708
     Geometry estimate: L=26.02cm W=17.64cm H=6.44cm | points=24 density=8119.71/m3
     Shape: planarity=0.7070 flatness=0.2475 thickness=17.64cm spread=15.35cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4446 | threshold=0.25

=================================================
Frame 141 (radar 29372) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9535m Z=+0.1895m | Range=0.9721m
     Range-profile relative power: 51.27 dB at 1.0301m | raw=3460 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,+0.0006,-0.0027)m/s
     Sensor side info (raw): SNR mean=207.708 min=119 peak=284 | Noise mean=548.125
     Geometry estimate: L=25.98cm W=17.63cm H=6.44cm | points=24 density=8135.75/m3
     Shape: planarity=0.7065 flatness=0.2479 thickness=17.63cm spread=15.29cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4443 | threshold=0.25

=================================================
Frame 142 (radar 29373) | Valid Objects: 1
UART: packet=896 B, objects=24, raw=24, filtered=24, TLVs=5 [1,7,2,6,9] points=yes sideInfo=yes malformed=no
=================================================

  🔍 [3D][MET] Object ID: 0
     🔍 DETECTING... (need 0 more valid frames)
     Position estimate: X=+0.0002m Y=+0.9534m Z=+0.1899m | Range=0.9721m
     Range-profile relative power: 51.25 dB at 1.0301m | raw=3459 (relative, not dBm)
     Radial velocity estimate: mean=+0.0000m/s peak=0.0604m/s | Track velocity=(+0.0000,-0.0009,+0.0035)m/s
     Sensor side info (raw): SNR mean=203.375 min=120 peak=276 | Noise mean=552.500
     Geometry estimate: L=25.94cm W=18.10cm H=6.44cm | points=24 density=7936.39/m3
     Shape: planarity=0.7059 flatness=0.2482 thickness=18.10cm spread=15.44cm
     Quality: 94% | valid=yes | reason=Valid | score=999999.0000
     Best calibration candidate: GUN | distance=0.4417 | threshold=0.25

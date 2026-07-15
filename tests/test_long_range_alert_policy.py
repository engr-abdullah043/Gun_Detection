import re
import unittest
from collections import defaultdict, deque
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FIRMWARE = (ROOT / "parsing_detailed" / "parsing_detailed.ino").read_text(
    encoding="utf-8"
)
PROFILE = (
    ROOT / "cfg_profiles" / "iwr6843aop_gun_balanced_32loops_14db.cfg"
).read_text(encoding="utf-8")
OUTPUTS = ROOT / "outputs"


def numeric_constant(name: str) -> float:
    match = re.search(
        rf"const\s+(?:float|int)\s+{re.escape(name)}\s*=\s*([0-9.]+)f?\s*;",
        FIRMWARE,
    )
    if not match:
        raise AssertionError(f"missing numeric constant {name}")
    return float(match.group(1))


def capture_rows(path: Path):
    text = path.read_text(encoding="utf-8", errors="replace")
    rows = []
    for block in re.split(r"(?=Object ID:)", text)[1:]:
        patterns = {
            "track_id": r"Object ID:\s*(\d+)",
            "range": r"\| Range=([0-9.]+)m",
            "z": r"Position estimate: X=[+-]?[0-9.]+m Y=[+-]?[0-9.]+m Z=([+-]?[0-9.]+)m",
            "power": r"Range-profile relative power: ([0-9.]+) dB",
            "peak_velocity": r"Radial velocity estimate: mean=[+-]?[0-9.]+m/s peak=([0-9.]+)m/s",
            "geometry": r"Geometry estimate: L=([0-9.]+)cm W=([0-9.]+)cm H=[0-9.]+cm \| points=(\d+)",
            "snr": r"SNR mean=([0-9.]+).*?peak=([0-9]+)",
            "quality": r"Quality: ([0-9.]+)% \| valid=(yes|no)",
            "candidate": r"Best calibration candidate:\s*(\S+)\s*\|\s*distance=([0-9.]+)",
        }
        matches = {name: re.search(pattern, block) for name, pattern in patterns.items()}
        if not all(matches.values()):
            continue
        doppler_std = re.search(r"\bstd=([0-9.]+)m/s", block)
        shape = re.search(
            r"Shape: planarity=([0-9.]+) flatness=([0-9.]+)", block
        )
        rows.append(
            {
                "track_id": int(matches["track_id"].group(1)),
                "range": float(matches["range"].group(1)),
                "abs_z": abs(float(matches["z"].group(1))),
                "power": float(matches["power"].group(1)),
                "peak_velocity": float(matches["peak_velocity"].group(1)),
                "length": float(matches["geometry"].group(1)) / 100.0,
                "width": float(matches["geometry"].group(2)) / 100.0,
                "points": int(matches["geometry"].group(3)),
                "mean_snr": float(matches["snr"].group(1)),
                "peak_snr": float(matches["snr"].group(2)),
                "quality": float(matches["quality"].group(1)),
                "valid": matches["quality"].group(2) == "yes",
                "candidate": matches["candidate"].group(1).lower(),
                "candidate_distance": float(matches["candidate"].group(2)),
                "doppler_std": (
                    float(doppler_std.group(1)) if doppler_std else None
                ),
                "planarity": float(shape.group(1)) if shape else None,
                "flatness": float(shape.group(2)) if shape else None,
            }
        )
    return rows


def row_passes(row):
    return (
        row["valid"]
        and row["candidate"] == "gun"
        and row["candidate_distance"]
        <= numeric_constant("LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE")
        and numeric_constant("LONG_RANGE_GUN_MIN_RANGE")
        <= row["range"]
        <= numeric_constant("LONG_RANGE_GUN_MAX_RANGE")
        and row["power"] >= numeric_constant("LONG_RANGE_GUN_MIN_POWER_DB")
        and numeric_constant("LONG_RANGE_GUN_MIN_LENGTH")
        <= row["length"]
        <= numeric_constant("LONG_RANGE_GUN_MAX_LENGTH")
        and numeric_constant("LONG_RANGE_GUN_MIN_WIDTH")
        <= row["width"]
        <= numeric_constant("LONG_RANGE_GUN_MAX_WIDTH")
        and row["mean_snr"] >= numeric_constant("LONG_RANGE_GUN_MIN_MEAN_SNR")
        and row["peak_snr"] >= numeric_constant("LONG_RANGE_GUN_MIN_PEAK_SNR")
        and row["peak_velocity"]
        <= numeric_constant("LONG_RANGE_GUN_MAX_ABS_VELOCITY")
        and row["abs_z"] <= numeric_constant("LONG_RANGE_GUN_MAX_ABS_Z")
        and row["quality"] >= numeric_constant("LONG_RANGE_GUN_MIN_QUALITY")
        and row["points"] >= numeric_constant("LONG_RANGE_GUN_MIN_POINTS")
    )


def confirmed_rows_by_track(rows):
    window = int(numeric_constant("LONG_RANGE_GUN_HIT_WINDOW"))
    required = int(numeric_constant("LONG_RANGE_GUN_REQUIRED_HITS"))
    histories = defaultdict(lambda: deque(maxlen=window))
    confirmed = defaultdict(int)
    passes = defaultdict(int)
    for row in rows:
        track_id = row["track_id"]
        passed = row_passes(row)
        histories[track_id].append(passed)
        passes[track_id] += int(passed)
        confirmed[track_id] += int(sum(histories[track_id]) >= required)
    return passes, confirmed


def row_has_shape_doppler_evidence(row):
    return (
        row_passes(row)
        and row["planarity"] is not None
        and row["flatness"] is not None
        and row["doppler_std"] is not None
        and row["planarity"] >= numeric_constant("LONG_RANGE_GUN_MIN_PLANARITY")
        and row["flatness"] <= numeric_constant("LONG_RANGE_GUN_MAX_FLATNESS")
        and row["doppler_std"]
        >= numeric_constant("LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV")
    )


def final_confirmed_rows_by_track(rows):
    window = int(numeric_constant("LONG_RANGE_GUN_HIT_WINDOW"))
    required_base = int(numeric_constant("LONG_RANGE_GUN_REQUIRED_HITS"))
    required_secondary = int(
        numeric_constant("LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS")
    )
    base_histories = defaultdict(lambda: deque(maxlen=window))
    secondary_histories = defaultdict(lambda: deque(maxlen=window))
    secondary_passes = defaultdict(int)
    confirmed = defaultdict(int)
    for row in rows:
        track_id = row["track_id"]
        base_pass = row_passes(row)
        secondary_pass = row_has_shape_doppler_evidence(row)
        base_histories[track_id].append(base_pass)
        secondary_histories[track_id].append(secondary_pass)
        secondary_passes[track_id] += int(secondary_pass)
        confirmed[track_id] += int(
            sum(base_histories[track_id]) >= required_base
            and sum(secondary_histories[track_id]) >= required_secondary
        )
    return secondary_passes, confirmed


class LongRangeAlertPolicyTests(unittest.TestCase):
    def test_signature_constants_match_approved_concealed_policy(self):
        expected = {
            "LONG_RANGE_GUN_MIN_RANGE": 0.50,
            "LONG_RANGE_GUN_MAX_RANGE": 3.00,
            "LONG_RANGE_GUN_MIN_POWER_DB": 80.0,
            "LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE": 0.48,
            "LONG_RANGE_GUN_MIN_LENGTH": 0.15,
            "LONG_RANGE_GUN_MAX_LENGTH": 0.80,
            "LONG_RANGE_GUN_MIN_WIDTH": 0.08,
            "LONG_RANGE_GUN_MAX_WIDTH": 0.55,
            "LONG_RANGE_GUN_MIN_MEAN_SNR": 118.0,
            "LONG_RANGE_GUN_MIN_PEAK_SNR": 140.0,
            "LONG_RANGE_GUN_MAX_ABS_VELOCITY": 0.13,
            "LONG_RANGE_GUN_MAX_ABS_Z": 0.50,
            "LONG_RANGE_GUN_MIN_QUALITY": 80.0,
            "LONG_RANGE_GUN_MIN_POINTS": 5,
            "LONG_RANGE_GUN_REQUIRED_HITS": 5,
            "LONG_RANGE_GUN_HIT_WINDOW": 7,
            "LONG_RANGE_GUN_MIN_PLANARITY": 0.75,
            "LONG_RANGE_GUN_MAX_FLATNESS": 0.20,
            "LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV": 0.052,
            "LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS": 1,
        }
        for name, expected_value in expected.items():
            with self.subTest(name=name):
                self.assertEqual(numeric_constant(name), expected_value)

    def test_balanced_profile_uses_approved_range_and_angles(self):
        self.assertIn("aoaFovCfg -1 -30 30 -30 30", PROFILE)
        self.assertIn("cfarFovCfg -1 0 0.50 3.00", PROFILE)
        self.assertIn("frameCfg 0 2 32 0 100 1 0", PROFILE)
        self.assertEqual(PROFILE.count("cfarCfg -1 0 2 8 4 3 0 14 0"), 1)
        self.assertEqual(PROFILE.count("cfarCfg -1 1 0 4 2 3 1 14 0"), 1)
        self.assertIn("clutterRemoval -1 0", PROFILE)

    def test_concealed_gun_tracks_retain_temporal_confirmation(self):
        expected_tracks = {
            "concealed_hand_bag.md": 1953,
            "gun_concealed_bag.md": 1953,
            "gun_with_human_open.md": 1953,
        }
        for filename, track_id in expected_tracks.items():
            with self.subTest(filename=filename):
                passes, confirmed = confirmed_rows_by_track(
                    capture_rows(OUTPUTS / filename)
                )
                self.assertGreaterEqual(passes[track_id], 5)
                self.assertGreater(confirmed[track_id], 0)

    def test_moving_near_range_extra_track_does_not_confirm(self):
        passes, confirmed = confirmed_rows_by_track(
            capture_rows(OUTPUTS / "gun_present_open.md")
        )
        self.assertGreater(passes[287], 0)
        self.assertEqual(confirmed[287], 0)

    def test_human_only_base_confirmation_is_rejected_by_secondary_gate(self):
        rows = capture_rows(OUTPUTS / "only_human_present.md")
        base_passes, base_confirmed = confirmed_rows_by_track(rows)
        secondary_passes, final_confirmed = final_confirmed_rows_by_track(rows)

        self.assertGreater(base_passes[1756], 0)
        self.assertGreater(base_confirmed[1756], 0)
        self.assertEqual(secondary_passes[1756], 0)
        self.assertEqual(final_confirmed[1756], 0)

    def test_human_with_gun_retains_secondary_confirmation(self):
        rows = capture_rows(OUTPUTS / "human_with_gun.md")
        secondary_passes, final_confirmed = final_confirmed_rows_by_track(rows)

        self.assertEqual(secondary_passes[1756], 11)
        self.assertEqual(final_confirmed[1756], 48)

    def test_under_cloth_capture_is_outside_new_boundary_not_a_negative(self):
        gun_rows = [
            row
            for row in capture_rows(OUTPUTS / "gun_under_cloth.md")
            if row["candidate"] == "gun"
        ]
        self.assertGreater(len(gun_rows), 0)
        self.assertTrue(all(row["range"] > 3.00 for row in gun_rows))

    def test_firmware_uses_five_of_seven_signature_window(self):
        for text in (
            "uint8_t longRangeGunHitHistory;",
            "int longRangeGunWindowHits;",
            "pushLongRangeGunObservation",
            "longRangeGunConfirmed",
            "LONG-RANGE GUN SIGNATURE",
            "tr.longRangeGunConfirmed",
        ):
            with self.subTest(text=text):
                self.assertIn(text, FIRMWARE)

    def test_firmware_requires_secondary_shape_doppler_history(self):
        for text in (
            "uint8_t longRangeGunShapeDopplerHitHistory;",
            "int longRangeGunShapeDopplerWindowHits;",
            "bool longRangeGunShapeDopplerEvidenceThisFrame;",
            "t.longRangeGunShapeDopplerHitHistory = 0;",
            "t.longRangeGunShapeDopplerWindowHits = 0;",
            "t.longRangeGunShapeDopplerEvidenceThisFrame = false;",
            "bool pass, bool shapeDopplerPass",
            "shapeDopplerHits >= LONG_RANGE_GUN_REQUIRED_SHAPE_DOPPLER_HITS",
            "shapeDoppler=",
            "shapeHits=%d/%d",
        ):
            with self.subTest(text=text):
                self.assertIn(text, FIRMWARE)

    def test_doppler_std_drives_only_the_secondary_gate(self):
        for text in (
            "float radialVelocityStdDev;",
            "float radialVelocitySpan;",
            "filteredVelocities",
            "desc.radialVelocityStdDev",
            "desc.radialVelocitySpan",
            "std=%.4fm/s",
            "span=%.4fm/s",
        ):
            with self.subTest(text=text):
                self.assertIn(text, FIRMWARE)
        base_gate = re.search(
            r"const bool passes =(?P<body>.*?);\s*\n",
            FIRMWARE,
            re.DOTALL,
        )
        self.assertIsNotNone(base_gate)
        self.assertNotIn("radialVelocityStdDev", base_gate.group("body"))
        self.assertNotIn("radialVelocitySpan", base_gate.group("body"))

        secondary_gate = re.search(
            r"const bool shapeDopplerPass =(?P<body>.*?);\s*\n",
            FIRMWARE,
            re.DOTALL,
        )
        self.assertIsNotNone(secondary_gate)
        for text in (
            "passes",
            "desc.planarityScore >= LONG_RANGE_GUN_MIN_PLANARITY",
            "desc.flatnessRatio <= LONG_RANGE_GUN_MAX_FLATNESS",
            "desc.radialVelocityStdDev >= LONG_RANGE_GUN_MIN_DOPPLER_STD_DEV",
        ):
            with self.subTest(secondary_text=text):
                self.assertIn(text, secondary_gate.group("body"))
        self.assertNotIn("radialVelocitySpan", secondary_gate.group("body"))


if __name__ == "__main__":
    unittest.main()

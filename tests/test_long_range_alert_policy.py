import re
import statistics
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
FIRMWARE = (ROOT / "parsing_detailed" / "parsing_detailed.ino").read_text(
    encoding="utf-8"
)
CAPTURE = (ROOT / "output.md").read_text(encoding="utf-8", errors="replace")


def numeric_constant(name: str) -> float:
    match = re.search(
        rf"const\s+(?:float|int)\s+{re.escape(name)}\s*=\s*([0-9.]+)f?\s*;",
        FIRMWARE,
    )
    if not match:
        raise AssertionError(f"missing numeric constant {name}")
    return float(match.group(1))


def capture_rows():
    starts = list(re.finditer(r"^Frame (\d+) ", CAPTURE, re.MULTILINE))
    rows = []
    for index, start in enumerate(starts):
        block = CAPTURE[
            start.start() : starts[index + 1].start()
            if index + 1 < len(starts)
            else len(CAPTURE)
        ]
        if "Best calibration candidate: gun" not in block:
            continue

        def value(pattern, cast=float):
            match = re.search(pattern, block)
            return cast(match.group(1)) if match else None

        rows.append(
            {
                "range": value(r"\| Range=([0-9.]+)m"),
                "power": value(r"relative power: ([0-9.]+) dB"),
                "snr": value(r"SNR mean=([0-9.]+)"),
                "length": value(r"L=([0-9.]+)cm") / 100.0,
                "width": value(r"W=([0-9.]+)cm") / 100.0,
                "points": value(r"points=(\d+)", int),
                "quality": value(r"Quality: ([0-9.]+)%"),
                "distance": value(
                    r"Best calibration candidate: gun \| distance=([0-9.]+)"
                ),
            }
        )
    return rows


class LongRangeAlertPolicyTests(unittest.TestCase):
    def test_signature_constants_cover_the_captured_scenario(self):
        expected = {
            "LONG_RANGE_GUN_MIN_RANGE": 2.70,
            "LONG_RANGE_GUN_MAX_RANGE": 3.60,
            "LONG_RANGE_GUN_MIN_POWER_DB": 75.0,
            "LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE": 0.55,
            "LONG_RANGE_GUN_MIN_LENGTH": 0.18,
            "LONG_RANGE_GUN_MAX_LENGTH": 0.55,
            "LONG_RANGE_GUN_MIN_WIDTH": 0.07,
            "LONG_RANGE_GUN_MAX_WIDTH": 0.55,
            "LONG_RANGE_GUN_MIN_MEAN_SNR": 100.0,
            "LONG_RANGE_GUN_MIN_QUALITY": 80.0,
            "LONG_RANGE_GUN_MIN_POINTS": 5,
            "LONG_RANGE_GUN_REQUIRED_HITS": 5,
        }
        for name, expected_value in expected.items():
            with self.subTest(name=name):
                self.assertEqual(numeric_constant(name), expected_value)

    def test_policy_accepts_at_least_fifty_latest_gun_candidate_samples(self):
        rows = [row for row in capture_rows() if row["distance"] is not None]
        accepted = [
            row
            for row in rows
            if 2.70 <= row["range"] <= 3.60
            and row["power"] >= 75.0
            and row["snr"] >= 100.0
            and 0.18 <= row["length"] <= 0.55
            and 0.07 <= row["width"] <= 0.55
            and row["points"] >= 5
            and row["quality"] >= 80.0
            and row["distance"] <= 0.55
        ]
        self.assertGreaterEqual(len(accepted), 50)
        self.assertLessEqual(statistics.median(r["distance"] for r in accepted), 0.50)

    def test_firmware_alert_path_uses_temporally_confirmed_signature(self):
        for text in (
            "consecutiveLongRangeGunHits",
            "longRangeGunConfirmed",
            "evaluateLongRangeGunSignature",
            "LONG-RANGE GUN SIGNATURE",
            "tr.longRangeGunConfirmed",
        ):
            with self.subTest(text=text):
                self.assertIn(text, FIRMWARE)

    def test_tracker_declares_and_initializes_signature_state(self):
        declarations = (
            "int consecutiveLongRangeGunHits;",
            "bool longRangeGunEvidenceThisFrame;",
            "bool longRangeGunConfirmed;",
            "bool longRangePowerAvailable;",
            "float longRangePowerDb;",
            "float longRangePowerRange;",
            "uint16_t longRangePowerRaw;",
        )
        initializers = (
            "t.consecutiveLongRangeGunHits = 0;",
            "t.longRangeGunEvidenceThisFrame = false;",
            "t.longRangeGunConfirmed = false;",
            "t.longRangePowerAvailable = false;",
            "t.longRangePowerDb = 0.0f;",
            "t.longRangePowerRange = 0.0f;",
            "t.longRangePowerRaw = 0;",
        )
        for text in declarations + initializers:
            with self.subTest(text=text):
                self.assertIn(text, FIRMWARE)

    def test_rejected_radar_frames_break_consecutive_signature_evidence(self):
        self.assertIn("void resetAllLongRangeGunEvidence()", FIRMWARE)
        self.assertGreaterEqual(
            FIRMWARE.count("resetAllLongRangeGunEvidence();"),
            4,
        )


if __name__ == "__main__":
    unittest.main()

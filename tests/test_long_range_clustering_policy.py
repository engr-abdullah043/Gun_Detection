import re
import unittest
from pathlib import Path


FIRMWARE = (
    Path(__file__).resolve().parents[1]
    / "parsing_detailed"
    / "parsing_detailed.ino"
).read_text(encoding="utf-8")


def numeric_constant(name: str) -> float:
    match = re.search(
        rf"const\s+(?:float|int)\s+{re.escape(name)}\s*=\s*([0-9.]+)f?\s*;",
        FIRMWARE,
    )
    if not match:
        raise AssertionError(f"missing numeric constant {name}")
    return float(match.group(1))


def function_body(signature: str, next_marker: str) -> str:
    start = FIRMWARE.index(signature)
    end = FIRMWARE.index(next_marker, start)
    return FIRMWARE[start:end]


class LongRangeClusteringPolicyTests(unittest.TestCase):
    def test_processing_range_includes_deployment_boundary_with_margin(self):
        self.assertEqual(numeric_constant("RANGE_MAX"), 3.60)

    def test_all_cluster_and_descriptor_gates_accept_five_points(self):
        for name in (
            "DBSCAN_MIN_POINTS",
            "MIN_CLUSTER_POINTS",
            "MIN_POINTS_FOR_OUTPUT",
            "MIN_POINTS_FOR_VALID_OBJECT",
        ):
            with self.subTest(name=name):
                self.assertEqual(numeric_constant(name), 5)

    def test_dbscan_neighborhoods_count_the_seed_as_a_total_point(self):
        body = function_body("void clusterDBSCAN", "bool extractDimensions")
        self.assertNotIn("if (i == j) continue", body)
        self.assertNotIn("if (nIdx == j) continue", body)
        self.assertIn("total points including seed", body)

    def test_adaptive_epsilon_bands_are_explicit(self):
        expected = {
            "DBSCAN_EPS_NEAR": 0.15,
            "DBSCAN_EPS_MID": 0.20,
            "DBSCAN_EPS_FAR": 0.25,
            "DBSCAN_NEAR_RANGE_MAX": 1.50,
            "DBSCAN_MID_RANGE_MAX": 2.50,
        }
        for name, value in expected.items():
            with self.subTest(name=name):
                self.assertEqual(numeric_constant(name), value)
        self.assertIn("float adaptiveDbscanEps(float rangeMeters)", FIRMWARE)

    def test_no_cluster_output_exposes_actionable_diagnostics(self):
        for field in (
            "acceptedRange=",
            "epsRange=",
            "maxNeighbors=",
            "coreCandidates=",
        ):
            with self.subTest(field=field):
                self.assertIn(field, FIRMWARE)


if __name__ == "__main__":
    unittest.main()

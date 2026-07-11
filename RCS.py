"""
mmWave Radar Detection System with Advanced Geometric + RCS Recognition
Distinguishes flat plates from 3D boxes using shape complexity analysis
"""

import struct
import numpy as np
import open3d as o3d
from filterpy.kalman import KalmanFilter
import serial
import os
import json
from datetime import datetime
from collections import defaultdict
from scipy import stats

# =========================================================
# Constants
# =========================================================
MAGIC_WORD = b'\x02\x01\x04\x03\x06\x05\x08\x07'
SERIAL_PORT = "COM5"
SERIAL_BAUD = 921600

# Clustering parameters
DBSCAN_EPS = 0.15
DBSCAN_MIN_POINTS = 12

# Range filtering
RANGE_MIN = 0.20
RANGE_MAX = 3.0

# SNR threshold
MIN_SNR = 20

# Minimum cluster size
MIN_CLUSTER_POINTS = 10
MIN_POINTS_FOR_OUTPUT = 10

# ENHANCED CALIBRATION SETTINGS
CALIBRATION_FRAMES = 256
CALIBRATION_FILE = "radar_calibration.json"

# Multi-view matching with enhanced geometric descriptor
SHAPE_DESCRIPTOR_TOLERANCE = 0.25
GEOMETRY_WEIGHT = 0.7  # 70% geometry, 30% RCS
FLATNESS_WEIGHT = 2.0  # Extra weight for flatness (key differentiator)

# Temporal smoothing
DIMENSION_HISTORY_SIZE = 200
RCS_HISTORY_SIZE = 100

# =========================================================
# Advanced Shape Descriptor with Geometric Complexity
# =========================================================
class AdvancedShapeDescriptor:
    """
    Enhanced descriptor with geometric complexity analysis
    Distinguishes flat plates from 3D boxes
    """
    def __init__(self, length, width, height, cluster_points, cluster_snrs, distance, num_points):
        # Sort dimensions for orientation invariance
        self.dims = sorted([length, width, height], reverse=True)
        self.length = self.dims[0]  # Largest
        self.width = self.dims[1]   # Medium
        self.height = self.dims[2]  # Smallest
        
        # Basic geometric features
        self.volume = self.length * self.width * self.height
        self.surface_area = 2 * (self.length * self.width + 
                                 self.width * self.height + 
                                 self.height * self.length)
        
        # Standard aspect ratios
        self.aspect_ratio_1 = self.width / (self.length + 1e-6)
        self.aspect_ratio_2 = self.height / (self.length + 1e-6)
        self.compactness = self.volume / (self.surface_area**1.5 + 1e-6)
        
        # ===== NEW: ADVANCED GEOMETRIC COMPLEXITY FEATURES =====
        
        # 1. FLATNESS RATIO - Key for distinguishing 2D vs 3D
        # Flat plate: ~0.01-0.05, Box: ~0.3-0.8
        self.flatness_ratio = self.height / (self.length + 1e-6)
        
        # 2. DIMENSIONALITY SCORE - How 3D is the object?
        # 2D object: all dimensions very different
        # 3D object: dimensions more similar
        dim_sorted = np.array(self.dims)
        dim_ratios = dim_sorted[1:] / (dim_sorted[:-1] + 1e-6)
        self.dimensionality_score = np.mean(dim_ratios)  # Higher = more cubic/3D
        
        # 3. Z-AXIS BIMODALITY - Does object have front AND back surfaces?
        self.z_bimodality = self._calculate_z_bimodality(cluster_points)
        
        # 4. LOCAL DENSITY VARIANCE - Detects concentrated features (screws)
        self.local_density_variance = self._calculate_local_density_variance(cluster_points)
        
        # 5. POINT CLOUD THICKNESS - How thick is the point distribution?
        self.point_cloud_thickness = self._calculate_thickness(cluster_points)
        
        # 6. SURFACE PLANARITY - How flat/planar is the object?
        self.planarity_score = self._calculate_planarity(cluster_points)
        
        # RCS and material features
        self.distance = distance
        self.num_points = num_points
        
        sum_snr = np.sum(cluster_snrs)
        mean_snr = np.mean(cluster_snrs)
        max_snr = np.max(cluster_snrs)
        std_snr = np.std(cluster_snrs)
        
        self.rcs_estimate = (sum_snr) / (distance**2 * np.sqrt(num_points) + 1e-6)
        self.mean_snr = mean_snr
        self.max_snr = max_snr
        self.snr_variance = std_snr**2
        self.snr_std = std_snr
        self.point_density = num_points / (self.volume + 1e-6)
        self.reflection_consistency = std_snr / (mean_snr + 1e-6)
        
        # Store raw point cloud for advanced analysis
        self.cluster_points = cluster_points
    
    def _calculate_z_bimodality(self, points):
        """
        Detect if points cluster at TWO distinct Z levels (front+back of box)
        vs single Z level (flat plate)
        """
        if len(points) < 20:
            return 0.0
        
        # Center points
        centered = points - np.mean(points, axis=0)
        
        # PCA to find principal axes
        cov = np.cov(centered.T)
        eigvals, eigvecs = np.linalg.eigh(cov)
        
        # Project onto smallest eigenvector (thickness direction)
        smallest_ev = eigvecs[:, 0]
        projections = centered @ smallest_ev
        
        # Test for bimodality using simple approach
        # If bimodal, histogram should show two peaks
        hist, edges = np.histogram(projections, bins=20)
        
        # Find peaks
        peak_count = 0
        for i in range(1, len(hist)-1):
            if hist[i] > hist[i-1] and hist[i] > hist[i+1] and hist[i] > len(points)*0.05:
                peak_count += 1
        
        # Bimodality score: 2 peaks = high, 1 peak = low
        bimodality = min(peak_count / 2.0, 1.0)
        
        return bimodality
    
    def _calculate_local_density_variance(self, points):
        """
        Calculate variance in local point density
        High variance = concentrated features (screws, edges)
        Low variance = uniform surface
        """
        if len(points) < 30:
            return 0.0
        
        # Divide space into 3x3x3 grid
        mins = points.min(axis=0)
        maxs = points.max(axis=0)
        ranges = maxs - mins
        
        # Avoid division by zero
        ranges = np.maximum(ranges, 1e-6)
        
        # Calculate grid cell indices
        grid_size = 3
        cell_indices = np.floor((points - mins) / ranges * (grid_size - 0.001)).astype(int)
        cell_indices = np.clip(cell_indices, 0, grid_size - 1)
        
        # Count points per cell
        cell_counts = {}
        for idx in cell_indices:
            key = tuple(idx)
            cell_counts[key] = cell_counts.get(key, 0) + 1
        
        # Calculate variance
        counts = list(cell_counts.values())
        if len(counts) < 2:
            return 0.0
        
        variance = np.var(counts)
        normalized_variance = variance / (np.mean(counts)**2 + 1e-6)
        
        return min(normalized_variance, 10.0)  # Cap at reasonable value
    
    def _calculate_thickness(self, points):
        """
        Calculate actual thickness of point cloud distribution
        Thin plate: small thickness
        Box: larger thickness
        """
        if len(points) < 10:
            return 0.0
        
        # Center points
        centered = points - np.mean(points, axis=0)
        
        # PCA
        cov = np.cov(centered.T)
        eigvals, eigvecs = np.linalg.eigh(cov)
        
        # Thickness = spread along smallest eigenvector
        smallest_ev = eigvecs[:, 0]
        projections = centered @ smallest_ev
        
        thickness = np.max(projections) - np.min(projections)
        
        return thickness
    
    def _calculate_planarity(self, points):
        """
        Calculate how planar (flat) the point cloud is
        High planarity = flat plate
        Low planarity = 3D box
        """
        if len(points) < 10:
            return 0.0
        
        # Center points
        centered = points - np.mean(points, axis=0)
        
        # PCA
        cov = np.cov(centered.T)
        eigvals, eigvecs = np.linalg.eigh(cov)
        
        # Sort eigenvalues
        eigvals = np.sort(eigvals)[::-1]
        
        # Planarity: ratio of smallest to largest eigenvalue
        # Flat plane: very small ratio
        # 3D object: larger ratio
        if eigvals[0] < 1e-9:
            return 1.0
        
        planarity = 1.0 - (eigvals[2] / eigvals[0])
        
        return max(0.0, min(1.0, planarity))
    
    def distance_to(self, other, use_rcs=True):
        """
        Calculate normalized distance with enhanced geometric features
        """
        # === BASIC GEOMETRIC DISTANCE ===
        vol_diff = abs(self.volume - other.volume) / (max(self.volume, other.volume) + 1e-6)
        sa_diff = abs(self.surface_area - other.surface_area) / (max(self.surface_area, other.surface_area) + 1e-6)
        
        # === ADVANCED GEOMETRIC DISTANCE (NEW!) ===
        
        # Flatness difference - CRITICAL for plate vs box
        flatness_diff = abs(self.flatness_ratio - other.flatness_ratio) / (max(self.flatness_ratio, other.flatness_ratio) + 1e-6)
        
        # Dimensionality difference
        dim_diff = abs(self.dimensionality_score - other.dimensionality_score)
        
        # Z-bimodality difference
        bimodal_diff = abs(self.z_bimodality - other.z_bimodality)
        
        # Local density variance difference
        density_var_diff = abs(self.local_density_variance - other.local_density_variance) / (max(self.local_density_variance, other.local_density_variance) + 1e-6)
        
        # Thickness difference
        thickness_diff = abs(self.point_cloud_thickness - other.point_cloud_thickness) / (max(self.point_cloud_thickness, other.point_cloud_thickness) + 1e-6)
        
        # Planarity difference
        planarity_diff = abs(self.planarity_score - other.planarity_score)
        
        # Aspect ratios
        ar1_diff = abs(self.aspect_ratio_1 - other.aspect_ratio_1)
        ar2_diff = abs(self.aspect_ratio_2 - other.aspect_ratio_2)
        
        # WEIGHTED GEOMETRIC DISTANCE
        geometric_distance = (
            flatness_diff * FLATNESS_WEIGHT +      # 2.0 - Most important!
            dim_diff * 1.5 +                       # Dimensionality
            bimodal_diff * 1.5 +                   # Front/back surfaces
            planarity_diff * 1.5 +                 # How flat
            thickness_diff * 1.0 +                 # Physical thickness
            density_var_diff * 1.0 +               # Point clustering
            vol_diff * 1.0 +                       # Volume
            sa_diff * 0.8 +                        # Surface area
            ar1_diff * 0.5 +                       # Aspect ratios
            ar2_diff * 0.5
        ) / 11.3  # Normalize by sum of weights
        
        if not use_rcs:
            return geometric_distance, geometric_distance, 0.0
        
        # === RCS/MATERIAL DISTANCE ===
        rcs_diff = abs(self.rcs_estimate - other.rcs_estimate) / (max(self.rcs_estimate, other.rcs_estimate) + 1e-6)
        mean_snr_diff = abs(self.mean_snr - other.mean_snr) / (max(self.mean_snr, other.mean_snr) + 1e-6)
        max_snr_diff = abs(self.max_snr - other.max_snr) / (max(self.max_snr, other.max_snr) + 1e-6)
        pd_diff = abs(self.point_density - other.point_density) / (max(self.point_density, other.point_density) + 1e-6)
        rc_diff = abs(self.reflection_consistency - other.reflection_consistency) / (max(self.reflection_consistency, other.reflection_consistency) + 1e-6)
        
        material_distance = (rcs_diff * 3.0 + mean_snr_diff * 2.0 + 
                           max_snr_diff * 1.5 + pd_diff * 1.5 + rc_diff * 1.0) / 9.0
        
        # === COMBINED DISTANCE ===
        combined_distance = (GEOMETRY_WEIGHT * geometric_distance + 
                           (1 - GEOMETRY_WEIGHT) * material_distance)
        
        return combined_distance, geometric_distance, material_distance
    
    def get_object_type_estimate(self):
        """Classify object based on geometric complexity"""
        # Flat plate characteristics
        if self.flatness_ratio < 0.15 and self.planarity_score > 0.7:
            return "FLAT_PLATE", "🔲"
        
        # Box with dual surfaces
        elif self.z_bimodality > 0.5 and self.flatness_ratio > 0.25:
            return "3D_BOX", "📦"
        
        # Box-like but might be thin
        elif self.dimensionality_score > 0.4:
            return "3D_OBJECT", "🧊"
        
        # Irregular 3D
        elif self.planarity_score < 0.5:
            return "IRREGULAR_3D", "🎲"
        
        else:
            return "UNKNOWN_SHAPE", "❓"
    
    def get_material_type_estimate(self):
        """Estimate material type based on RCS signature"""
        if self.rcs_estimate > 150 and self.reflection_consistency < 0.3:
            return "METAL", "🔩"
        elif self.rcs_estimate > 80 and self.reflection_consistency < 0.4:
            return "DENSE_PLASTIC", "🧊"
        elif self.rcs_estimate > 40 and self.reflection_consistency < 0.5:
            return "PLASTIC", "📦"
        elif self.rcs_estimate > 20:
            return "CARDBOARD", "📄"
        else:
            return "LOW_REFLECTIVITY", "🪶"

# =========================================================
# Enhanced Calibration Database
# =========================================================
class CalibrationDatabase:
    def __init__(self):
        self.objects = {}
        self.load_calibration()
    
    def load_calibration(self):
        """Load calibration from file"""
        if os.path.exists(CALIBRATION_FILE):
            try:
                with open(CALIBRATION_FILE, 'r') as f:
                    self.objects = json.load(f)
                print(f"✓ Loaded {len(self.objects)} calibrated object(s)")
            except:
                print("⚠ Could not load calibration file")
                self.objects = {}
    
    def save_calibration(self):
        """Save calibration to file"""
        with open(CALIBRATION_FILE, 'w') as f:
            json.dump(self.objects, f, indent=2)
        print(f"✓ Saved calibration to {CALIBRATION_FILE}")
    
    def add_object(self, name, descriptors):
        """
        Add calibrated object with multiple descriptor measurements
        """
        if len(descriptors) == 0:
            print("⚠ No valid descriptors to calibrate")
            return
        
        # Extract all features
        lengths = [d.length for d in descriptors]
        widths = [d.width for d in descriptors]
        heights = [d.height for d in descriptors]
        flatness_ratios = [d.flatness_ratio for d in descriptors]
        dimensionality_scores = [d.dimensionality_score for d in descriptors]
        z_bimodalities = [d.z_bimodality for d in descriptors]
        local_density_variances = [d.local_density_variance for d in descriptors]
        thicknesses = [d.point_cloud_thickness for d in descriptors]
        planarity_scores = [d.planarity_score for d in descriptors]
        rcs_estimates = [d.rcs_estimate for d in descriptors]
        mean_snrs = [d.mean_snr for d in descriptors]
        max_snrs = [d.max_snr for d in descriptors]
        point_densities = [d.point_density for d in descriptors]
        reflection_consistencies = [d.reflection_consistency for d in descriptors]
        
        # Use median for robustness
        length = np.median(lengths)
        width = np.median(widths)
        height = np.median(heights)
        
        # Calculate standard deviations
        std_l = np.std(lengths)
        std_w = np.std(widths)
        std_h = np.std(heights)
        
        # Advanced geometric features (median)
        flatness_ratio = np.median(flatness_ratios)
        dimensionality_score = np.median(dimensionality_scores)
        z_bimodality = np.median(z_bimodalities)
        local_density_variance = np.median(local_density_variances)
        thickness = np.median(thicknesses)
        planarity_score = np.median(planarity_scores)
        
        # RCS features
        rcs_estimate = np.median(rcs_estimates)
        mean_snr = np.median(mean_snrs)
        max_snr = np.median(max_snrs)
        point_density = np.median(point_densities)
        reflection_consistency = np.median(reflection_consistencies)
        
        # Calculate derived properties
        volume = length * width * height
        surface_area = 2 * (length * width + width * height + height * length)
        aspect_ratio_1 = width / (length + 1e-6)
        aspect_ratio_2 = height / (length + 1e-6)
        
        # Determine object type
        if flatness_ratio < 0.15 and planarity_score > 0.7:
            object_type = "FLAT_PLATE"
        elif z_bimodality > 0.5 and flatness_ratio > 0.25:
            object_type = "3D_BOX"
        elif dimensionality_score > 0.4:
            object_type = "3D_OBJECT"
        else:
            object_type = "UNKNOWN_SHAPE"
        
        # Determine material type
        if rcs_estimate > 150 and reflection_consistency < 0.3:
            material_type = "METAL"
        elif rcs_estimate > 80:
            material_type = "DENSE_PLASTIC"
        elif rcs_estimate > 40:
            material_type = "PLASTIC"
        else:
            material_type = "LOW_REFLECTIVITY"
        
        self.objects[name] = {
            # Basic dimensions
            'length': float(length),
            'width': float(width),
            'height': float(height),
            'volume': float(volume),
            'surface_area': float(surface_area),
            'aspect_ratio_1': float(aspect_ratio_1),
            'aspect_ratio_2': float(aspect_ratio_2),
            'std_length': float(std_l),
            'std_width': float(std_w),
            'std_height': float(std_h),
            
            # Advanced geometric features
            'flatness_ratio': float(flatness_ratio),
            'dimensionality_score': float(dimensionality_score),
            'z_bimodality': float(z_bimodality),
            'local_density_variance': float(local_density_variance),
            'point_cloud_thickness': float(thickness),
            'planarity_score': float(planarity_score),
            
            # RCS and material
            'rcs_estimate': float(rcs_estimate),
            'mean_snr': float(mean_snr),
            'max_snr': float(max_snr),
            'point_density': float(point_density),
            'reflection_consistency': float(reflection_consistency),
            
            # Classification
            'object_type': object_type,
            'material_type': material_type,
            
            # Metadata
            'num_measurements': len(descriptors),
            'calibrated_at': datetime.now().strftime('%Y-%m-%d %H:%M:%S')
        }
        self.save_calibration()
        
        print(f"✓ Calibrated '{name}':")
        print(f"   Dimensions: {length*100:.1f} × {width*100:.1f} × {height*100:.1f} cm")
        print(f"   Object Type: {object_type}")
        print(f"   Flatness: {flatness_ratio:.3f} | Planarity: {planarity_score:.3f}")
        print(f"   Z-Bimodal: {z_bimodality:.3f} | Thickness: {thickness*100:.2f}cm")
        print(f"   Material: {material_type} | RCS: {rcs_estimate:.1f}")
    
    def find_match(self, descriptor):
        """Find matching calibrated object"""
        best_match = None
        best_match_obj = None
        best_distance = float('inf')
        best_geo_dist = None
        best_mat_dist = None
        
        for name, obj in self.objects.items():
            # Create descriptor from calibrated object (approximate)
            # Use stored geometric features
            cal_descriptor_approx = type('obj', (object,), {
                'length': obj['length'],
                'width': obj['width'],
                'height': obj['height'],
                'volume': obj['volume'],
                'surface_area': obj['surface_area'],
                'aspect_ratio_1': obj['aspect_ratio_1'],
                'aspect_ratio_2': obj['aspect_ratio_2'],
                'flatness_ratio': obj['flatness_ratio'],
                'dimensionality_score': obj['dimensionality_score'],
                'z_bimodality': obj['z_bimodality'],
                'local_density_variance': obj['local_density_variance'],
                'point_cloud_thickness': obj['point_cloud_thickness'],
                'planarity_score': obj['planarity_score'],
                'rcs_estimate': obj['rcs_estimate'],
                'mean_snr': obj['mean_snr'],
                'max_snr': obj['max_snr'],
                'point_density': obj['point_density'],
                'reflection_consistency': obj['reflection_consistency']
            })()
            
            # Calculate distance
            distance, geo_dist, mat_dist = descriptor.distance_to(cal_descriptor_approx, use_rcs=True)
            
            if distance < SHAPE_DESCRIPTOR_TOLERANCE:
                if distance < best_distance:
                    best_distance = distance
                    best_match = name
                    best_match_obj = obj
                    best_geo_dist = geo_dist
                    best_mat_dist = mat_dist
        
        if best_match:
            return best_match, best_match_obj, best_distance, best_geo_dist, best_mat_dist
        return None, None, None, None, None
    
    def delete_object(self, name):
        """Delete a calibrated object"""
        if name in self.objects:
            del self.objects[name]
            self.save_calibration()
            print(f"✓ Deleted object '{name}'")
            return True
        else:
            print(f"⚠ Object '{name}' not found")
            return False
    
    def clear_all_objects(self):
        """Clear all calibrated objects"""
        if not self.objects:
            print("⚠ No objects to clear")
            return False
        
        confirm = input(f"⚠ Delete ALL {len(self.objects)} calibrated objects? (yes/no): ").strip().lower()
        if confirm in ['yes', 'y']:
            self.objects = {}
            self.save_calibration()
            print("✓ All calibrated objects deleted")
            return True
        else:
            print("✗ Cancelled")
            return False
    
    def list_objects(self):
        """List all calibrated objects"""
        if not self.objects:
            print("\nNo calibrated objects yet.")
            return
        
        print("\n" + "="*80)
        print("CALIBRATED OBJECTS:")
        print("="*80)
        for i, (name, obj) in enumerate(self.objects.items(), 1):
            obj_icon = {"FLAT_PLATE": "🔲", "3D_BOX": "📦", "3D_OBJECT": "🧊", 
                       "IRREGULAR_3D": "🎲"}.get(obj.get('object_type', 'UNKNOWN'), "❓")
            mat_icon = {"METAL": "🔩", "DENSE_PLASTIC": "🧊", "PLASTIC": "📦", 
                       "CARDBOARD": "📄", "LOW_REFLECTIVITY": "🪶"}.get(obj.get('material_type', 'UNKNOWN'), "❓")
            
            print(f"\n  {i}. {obj_icon} {mat_icon} {name}")
            print(f"     Type: {obj.get('object_type', 'UNKNOWN')} | Material: {obj.get('material_type', 'UNKNOWN')}")
            print(f"     Dimensions: {obj['length']*100:.1f} × {obj['width']*100:.1f} × {obj['height']*100:.1f} cm")
            print(f"     Flatness: {obj.get('flatness_ratio', 0):.3f} | Planarity: {obj.get('planarity_score', 0):.3f}")
            print(f"     Z-Bimodal: {obj.get('z_bimodality', 0):.3f} | Thickness: {obj.get('point_cloud_thickness', 0)*100:.2f}cm")
            print(f"     RCS: {obj.get('rcs_estimate', 0):.1f}")
            print(f"     Measurements: {obj.get('num_measurements', 'N/A')} | Calibrated: {obj['calibrated_at']}")

# =========================================================
# Enhanced Object Tracker
# =========================================================
class ObjectTracker:
    def __init__(self, initial_position):
        self.kf = KalmanFilter(dim_x=6, dim_z=3)
        dt = 0.1
        self.kf.F = np.array([
            [1, 0, 0, dt, 0,  0],
            [0, 1, 0, 0,  dt, 0],
            [0, 0, 1, 0,  0,  dt],
            [0, 0, 0, 1,  0,  0],
            [0, 0, 0, 0,  1,  0],
            [0, 0, 0, 0,  0,  1]
        ])
        self.kf.H = np.array([
            [1, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 0, 1, 0, 0, 0]
        ])
        self.kf.P *= 100
        self.kf.R = np.eye(3) * 0.05**2
        self.kf.Q = np.eye(6) * 0.01**2
        x, y, z = initial_position
        self.kf.x = np.array([x, y, z, 0, 0, 0])
        self.age = 0
        self.hits = 1
        self.track_id = None
        
        self.all_descriptors = []
    
    def predict(self):
        self.kf.predict()
        self.age += 1
        return self.kf.x[:3]
    
    def update(self, measurement):
        self.kf.update(measurement)
        self.hits += 1
        self.age = 0
        return self.kf.x[:3]
    
    def update_descriptor(self, descriptor):
        """Store descriptor"""
        self.all_descriptors.append(descriptor)
        
        if len(self.all_descriptors) > 50:
            self.all_descriptors.pop(0)
    
    def get_robust_descriptor(self):
        """Get averaged descriptor features"""
        if not self.all_descriptors:
            return None
        
        if len(self.all_descriptors) < 3:
            return self.all_descriptors[-1]
        
        # Return most recent robust one
        return self.all_descriptors[-1]
    
    def get_position(self):
        return self.kf.x[:3]
    
    def get_velocity(self):
        return self.kf.x[3:6]

# =========================================================
# Multi-Object Tracking
# =========================================================
class MultiObjectTracker:
    def __init__(self):
        self.tracks = {}
        self.next_id = 0
    
    def update(self, detections):
        for track in self.tracks.values():
            track.predict()
        
        used_detections = set()
        
        for track_id, track in list(self.tracks.items()):
            best_det_idx = None
            best_distance = 1e9
            
            for i, (centroid, features) in enumerate(detections):
                if i in used_detections:
                    continue
                dist = np.linalg.norm(centroid - track.get_position())
                if dist < best_distance:
                    best_distance = dist
                    best_det_idx = i
            
            if best_det_idx is not None and best_distance < 0.3:
                centroid, features = detections[best_det_idx]
                track.update(centroid)
                track.update_descriptor(features['descriptor'])
                
                features['track_id'] = track_id
                features['tracked_centroid'] = track.get_position()
                features['velocity'] = track.get_velocity()
                features['robust_descriptor'] = track.get_robust_descriptor()
                
                used_detections.add(best_det_idx)
        
        for i, (centroid, features) in enumerate(detections):
            if i not in used_detections:
                new_track = ObjectTracker(centroid)
                new_track.track_id = self.next_id
                self.tracks[self.next_id] = new_track
                features['track_id'] = self.next_id
                features['tracked_centroid'] = centroid
                features['velocity'] = np.array([0, 0, 0])
                self.next_id += 1
        
        self.tracks = {
            tid: track for tid, track in self.tracks.items()
            if track.age < 10
        }
        
        return [feat for _, feat in detections]

# =========================================================
# Parser Functions
# =========================================================
def getUint32(d):
    return d[0] + d[1]*256 + d[2]*65536 + d[3]*16777216

def getUint16(d):
    return d[0] + d[1]*256

def checkMagicPattern(d):
    return len(d) >= 8 and d[:8] == MAGIC_WORD

def read_one_packet_from_uart(ser, buf):
    buf.extend(ser.read(16384))
    idx = buf.find(MAGIC_WORD)
    if idx == -1:
        if len(buf) > 64:
            del buf[:-64]
        return None
    if idx > 0:
        del buf[:idx]
    if len(buf) < 40:
        return None
    totalLen = getUint32(buf[12:16])
    if totalLen <= 0 or totalLen > 200000:
        del buf[0:1]
        return None
    if len(buf) < totalLen:
        return None
    pkt = bytes(buf[:totalLen])
    del buf[:totalLen]
    return pkt

def parser_one_packet(data):
    xs, ys, zs, snrs = [], [], [], []
    if not checkMagicPattern(data[:8]):
        return [], [], [], []
    
    numObj = getUint32(data[28:32])
    if numObj <= 0:
        return [], [], [], []
    
    tlvStart = 40
    if tlvStart + 8 > len(data):
        return [], [], [], []
    
    tlvType = getUint32(data[tlvStart:tlvStart+4])
    tlvLen = getUint32(data[tlvStart+4:tlvStart+8])
    off = 8
    
    if tlvType == 1:
        for _ in range(numObj):
            if tlvStart + off + 16 > len(data):
                break
            x = struct.unpack('<f', data[tlvStart+off:tlvStart+off+4])[0]
            y = struct.unpack('<f', data[tlvStart+off+4:tlvStart+off+8])[0]
            z = struct.unpack('<f', data[tlvStart+off+8:tlvStart+off+12])[0]
            xs.append(x)
            ys.append(y)
            zs.append(z)
            off += 16
    
    tlvStart += 8 + tlvLen
    if tlvStart + 8 <= len(data):
        tlvType = getUint32(data[tlvStart:tlvStart+4])
        if tlvType == 7:
            off = 8
            for _ in range(min(numObj, len(xs))):
                if tlvStart + off + 4 <= len(data):
                    snrs.append(getUint16(data[tlvStart+off:tlvStart+off+2]))
                    off += 4
    
    while len(snrs) < len(xs):
        snrs.append(100)
    
    return xs, ys, zs, snrs

def filter_points(xs, ys, zs, snrs):
    if len(xs) == 0:
        return [], [], [], []
    
    X = np.column_stack([xs, ys, zs])
    SNR = np.array(snrs)
    mask = np.ones(len(xs), dtype=bool)
    
    ranges = np.linalg.norm(X, axis=1)
    mask &= (ranges >= RANGE_MIN) & (ranges <= RANGE_MAX)
    mask &= (SNR >= MIN_SNR)
    
    Xf = X[mask]
    SNRf = SNR[mask]
    
    if len(Xf) == 0:
        return [], [], [], []
    
    return Xf[:,0].tolist(), Xf[:,1].tolist(), Xf[:,2].tolist(), SNRf.tolist()

def cluster_points_dbscan(xs, ys, zs, snrs):
    if len(xs) < DBSCAN_MIN_POINTS:
        return []
    
    points = np.column_stack([xs, ys, zs])
    snr_array = np.array(snrs)
    
    pcd = o3d.geometry.PointCloud()
    pcd.points = o3d.utility.Vector3dVector(points)
    
    labels = np.array(pcd.cluster_dbscan(
        eps=DBSCAN_EPS,
        min_points=DBSCAN_MIN_POINTS,
        print_progress=False
    ))
    
    clusters = []
    for cluster_id in sorted(set(labels)):
        if cluster_id < 0:
            continue
        
        cluster_mask = labels == cluster_id
        cluster_points = points[cluster_mask]
        cluster_snrs = snr_array[cluster_mask]
        
        if len(cluster_points) < MIN_CLUSTER_POINTS:
            continue
        
        clusters.append((cluster_points, cluster_snrs))
    
    return clusters

def extract_dimensions(cluster_points, cluster_snrs):
    """Extract dimensions AND create advanced descriptor"""
    N = len(cluster_points)
    
    if N < MIN_POINTS_FOR_OUTPUT:
        return None
    
    # Remove outliers
    centroid_initial = np.mean(cluster_points, axis=0)
    distances = np.linalg.norm(cluster_points - centroid_initial, axis=1)
    median_dist = np.median(distances)
    
    if median_dist > 0:
        mask = distances < (2.5 * median_dist)
        filtered_points = cluster_points[mask]
        filtered_snrs = cluster_snrs[mask]
    else:
        filtered_points = cluster_points
        filtered_snrs = cluster_snrs
    
    if len(filtered_points) < MIN_POINTS_FOR_OUTPUT:
        return None
    
    N = len(filtered_points)
    centroid = np.mean(filtered_points, axis=0)
    centered = filtered_points - centroid
    
    # PCA analysis
    cov = (centered.T @ centered) / max(N - 1, 1)
    eigvals, eigvecs = np.linalg.eigh(cov)
    
    idx = eigvals.argsort()[::-1]
    eigvals = eigvals[idx]
    eigvecs = eigvecs[:, idx]
    
    eigvals = np.maximum(eigvals, 0)
    
    rotated = centered @ eigvecs
    mins = rotated.min(axis=0)
    maxs = rotated.max(axis=0)
    extents = maxs - mins
    
    length, width, height = sorted(extents, reverse=True)
    
    # Calculate distance from radar
    distance = np.linalg.norm(centroid)
    
    # Create advanced descriptor with geometric complexity
    descriptor = AdvancedShapeDescriptor(
        length, width, height, 
        filtered_points, filtered_snrs, 
        distance, N
    )
    
    return {
        'centroid': centroid,
        'num_points': N,
        'length': float(length),
        'width': float(width),
        'height': float(height),
        'descriptor': descriptor,
        'cluster_points': filtered_points,
        'cluster_snrs': filtered_snrs
    }

# =========================================================
# Enhanced Calibration Mode
# =========================================================
def calibration_mode(ser, buf, calib_db):
    """Enhanced calibration with advanced geometric analysis"""
    print("\n" + "="*80)
    print("ADVANCED GEOMETRIC CALIBRATION")
    print("="*80)
    object_name = input("Enter object name (e.g., 'metal_plate' or 'white_box'): ").strip()
    
    if not object_name:
        print("⚠ Invalid name")
        return
    
    print(f"\n📋 CALIBRATION INSTRUCTIONS:")
    print(f"   This will analyze geometric complexity to distinguish flat vs 3D objects")
    print(f"   ")
    print(f"   During calibration ({CALIBRATION_FRAMES} frames):")
    print(f"   1. Keep object visible to radar")
    print(f"   2. SLOWLY move it to different positions:")
    print(f"      • Center (0.3-0.5m away)")
    print(f"      • Slightly left/right")
    print(f"      • Closer/further")
    print(f"   3. Try different orientations")
    print(f"   ")
    print(f"   System will measure:")
    print(f"   • Flatness (2D vs 3D)")
    print(f"   • Surface planarity")
    print(f"   • Point distribution patterns")
    print(f"   • RCS signature")
    
    input("\n   Press ENTER when ready to start...")
    
    all_descriptors = []
    tracker = MultiObjectTracker()
    frame_count = 0
    
    print(f"\n📡 Collecting data... (move object slowly)")
    
    try:
        while frame_count < CALIBRATION_FRAMES:
            pkt = read_one_packet_from_uart(ser, buf)
            if pkt is None:
                continue

            xs, ys, zs, snrs = parser_one_packet(pkt)
            if len(xs) == 0:
                continue

            xs, ys, zs, snrs = filter_points(xs, ys, zs, snrs)
            if len(xs) == 0:
                continue

            clusters_with_snr = cluster_points_dbscan(xs, ys, zs, snrs)
            if not clusters_with_snr:
                continue

            detections = []
            for cluster_points, cluster_snrs in clusters_with_snr:
                features = extract_dimensions(cluster_points, cluster_snrs)
                if features is not None:
                    detections.append((features['centroid'], features))

            tracked_objects = tracker.update(detections)
            
            if tracked_objects:
                obj = tracked_objects[0]
                desc = obj['descriptor']
                all_descriptors.append(desc)
                
                frame_count += 1
                
                if frame_count % 10 == 0:
                    obj_type, _ = desc.get_object_type_estimate()
                    mat_type, _ = desc.get_material_type_estimate()
                    print(f"  {frame_count}/{CALIBRATION_FRAMES}: "
                          f"{obj_type} | Flat={desc.flatness_ratio:.3f} | "
                          f"Plan={desc.planarity_score:.3f} | RCS={desc.rcs_estimate:.1f}")
    
    except KeyboardInterrupt:
        print("\n⚠ Calibration cancelled")
        return
    
    if len(all_descriptors) < 20:
        print(f"⚠ Not enough measurements ({len(all_descriptors)}), need at least 20")
        return
    
    # Save to database
    calib_db.add_object(object_name, all_descriptors)
    
    print(f"\n✓ Calibration successful!")
    print(f"   Object can now be recognized by geometric complexity + material")

# =========================================================
# Main Loop
# =========================================================
def run():
    print("="*80)
    print("mmWave Radar - Advanced Geometric + Material Recognition")
    print("Distinguishes Flat Plates from 3D Boxes")
    print("="*80)
    print(f"Serial: {SERIAL_PORT} @ {SERIAL_BAUD}")
    print(f"Range: {RANGE_MIN}m - {RANGE_MAX}m")
    print("="*80)
    
    calib_db = CalibrationDatabase()
    
    print("\nModes:")
    print("  1. Detection Mode")
    print("  2. Calibration Mode")
    print("  3. List Calibrated Objects")
    print("  4. Delete Calibrated Object")
    print("  5. Clear All Calibrated Objects")
    
    mode = input("\nSelect mode (1/2/3/4/5): ").strip()
    
    ser = serial.Serial(SERIAL_PORT, SERIAL_BAUD, timeout=0.01)
    buf = bytearray()
    
    if mode == '3':
        calib_db.list_objects()
        ser.close()
        return
    
    if mode == '4':
        calib_db.list_objects()
        if calib_db.objects:
            print("\n" + "="*70)
            object_name = input("Enter object name to delete: ").strip()
            if object_name:
                calib_db.delete_object(object_name)
        ser.close()
        return
    
    if mode == '5':
        calib_db.list_objects()
        if calib_db.objects:
            print("\n" + "="*70)
            calib_db.clear_all_objects()
        ser.close()
        return
    
    if mode == '2':
        calibration_mode(ser, buf, calib_db)
        ser.close()
        return
    
    # Detection mode
    print("\n" + "="*80)
    print("DETECTION MODE - Press Ctrl+C to stop")
    print("="*80 + "\n")
    
    tracker = MultiObjectTracker()
    frame_count = 0
    no_detection_count = 0
    
    try:
        while True:
            pkt = read_one_packet_from_uart(ser, buf)
            if pkt is None:
                continue

            xs, ys, zs, snrs = parser_one_packet(pkt)
            if len(xs) == 0:
                no_detection_count += 1
                if no_detection_count % 100 == 0:
                    print(f"⚫ No data... (frame {no_detection_count})")
                continue

            xs, ys, zs, snrs = filter_points(xs, ys, zs, snrs)
            if len(xs) == 0:
                no_detection_count += 1
                continue

            clusters_with_snr = cluster_points_dbscan(xs, ys, zs, snrs)
            if not clusters_with_snr:
                no_detection_count += 1
                continue

            detections = []
            for cluster_points, cluster_snrs in clusters_with_snr:
                features = extract_dimensions(cluster_points, cluster_snrs)
                if features is not None:
                    detections.append((features['centroid'], features))

            tracked_objects = tracker.update(detections)
            
            if not tracked_objects:
                no_detection_count += 1
                continue

            no_detection_count = 0
            frame_count += 1
            
            print(f"\n{'='*80}")
            print(f"✓ Frame {frame_count} | Time: {datetime.now().strftime('%H:%M:%S')} | Objects: {len(tracked_objects)}")
            print(f"{'='*80}")
            
            for obj in tracked_objects:
                track_id = obj.get('track_id', '?')
                desc = obj['descriptor']
                pos = obj['centroid']
                
                # Get object classification
                obj_type, obj_icon = desc.get_object_type_estimate()
                mat_type, mat_icon = desc.get_material_type_estimate()
                
                # Try to match with calibrated objects
                match_result = calib_db.find_match(desc)
                matched_name = match_result[0]
                matched_obj = match_result[1]
                best_distance = match_result[2]
                geo_dist = match_result[3]
                mat_dist = match_result[4]
                
                print(f"\n  {obj_icon}{mat_icon} Object ID: {track_id}")
                
                if matched_name:
                    # Matched to calibrated object
                    cal_obj_type = matched_obj.get('object_type', 'UNKNOWN')
                    cal_mat_type = matched_obj.get('material_type', 'UNKNOWN')
                    
                    confidence = max(0, min(100, (1 - best_distance) * 100))
                    shape_match = max(0, min(100, (1 - geo_dist) * 100))
                    material_match = max(0, min(100, (1 - mat_dist) * 100))
                    
                    print(f"     ✓ IDENTIFIED: '{matched_name}'")
                    #print(f"     Type: {cal_obj_type} | Material: {cal_mat_type}")
                    #print(f"     Confidence: {confidence:.0f}% | Geometry: {shape_match:.0f}% | Material: {material_match:.0f}%")
                    #print(f"     Calibrated: L={matched_obj['length']*100:.1f}cm × W={matched_obj['width']*100:.1f}cm × H={matched_obj['height']*100:.1f}cm")
                    #print(f"     Flatness: {matched_obj.get('flatness_ratio', 0):.3f} | Planarity: {matched_obj.get('planarity_score', 0):.3f}")
                else:
                    # Unknown object
                    print(f"     ❓ UNKNOWN OBJECT")
                    #print(f"     Estimated Type: {obj_type}")
                    #print(f"     Estimated Material: {mat_type}")
                    #print(f"     Dimensions: L={desc.length*100:.1f}cm × W={desc.width*100:.1f}cm × H={desc.height*100:.1f}cm")
                    #print(f"     Flatness: {desc.flatness_ratio:.3f} | Planarity: {desc.planarity_score:.3f}")
                    #print(f"     Z-Bimodal: {desc.z_bimodality:.3f} | Thickness: {desc.point_cloud_thickness*100:.2f}cm")
                    #print(f"     RCS: {desc.rcs_estimate:.1f} | Mean SNR: {desc.mean_snr:.1f}")
                
                #print(f"     Points: {obj['num_points']}")
                #print(f"     Position: X={pos[0]:.2f}m, Y={pos[1]:.2f}m, Z={pos[2]:.2f}m")
                print(f"     Distance: {np.linalg.norm(pos):.2f}m")

    except KeyboardInterrupt:
        print("\n\n⚠ Stopping...")
    finally:
        ser.close()
        print("✓ System stopped.")

if __name__ == "__main__":
    run()
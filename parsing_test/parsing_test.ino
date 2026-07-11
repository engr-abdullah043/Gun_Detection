/*
 * mmWave Radar Detection System for ESP32-S3
 * Advanced Geometric + RCS Recognition
 * WITH GUN DETECTION ALERT (LED + BUZZER)
 * WITH BUTTON START/STOP CONTROL
 * ENHANCED WITH GHOST REJECTION & QUALITY VALIDATION
 *
 * Hardware:
 * - LED -> GPIO 11 (through 220Ω resistor to GND)
 * - Buzzer -> GPIO 12 (active buzzer to GND)
 * - Button -> GPIO 4 (other side to GND)
 */

#include <Arduino.h>
#include <HardwareSerial.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>

// =========================================================
// BUTTON CONTROL
// =========================================================
const int BUTTON_PIN = 4;
bool systemRunning = false;
unsigned long lastButtonPress = 0;

// =========================================================
// GPIO Configuration for Alert System
// =========================================================
const int LED_PIN = 11;
const int BUZZER_PIN = 12;

const int ALERT_DURATION = 3000;
const int BEEP_PATTERN_FAST = 200;

// =========================================================
// Configuration Constants
// =========================================================
const uint8_t MAGIC_WORD[] = {0x02,0x01,0x04,0x03,0x06,0x05,0x08,0x07};

const int RADAR_RX_PIN = 16;
const int RADAR_TX_PIN = -1;

const long SERIAL_MONITOR_BAUD = 115200;
const long RADAR_BAUD = 921600;

static const uint32_t HEADER_LEN = 40;
static const uint32_t MAX_PACKET_LEN = 32 * 1024;

// Clustering parameters
const float DBSCAN_EPS = 0.15;
const int DBSCAN_MIN_POINTS = 12;

// Range filtering
const float RANGE_MIN = 0.20;
const float RANGE_MAX = 3.0;

// SNR threshold
const int MIN_SNR = 20;

// Minimum cluster size
const int MIN_CLUSTER_POINTS = 10;
const int MIN_POINTS_FOR_OUTPUT = 10;

// ===== NEW: GHOST REJECTION SETTINGS =====
const int MIN_POINTS_FOR_VALID_OBJECT = 12;
const int MIN_POINTS_FOR_CONFIRMED_MATCH = 15;

// Spatial coherence requirements
const float MAX_CLUSTER_SPREAD = 0.6;        // Max 60cm spread
const float MIN_POINT_DENSITY = 25.0;        // Points per m³

// Quality thresholds
const float MIN_AVERAGE_SNR = 22.0;
const float MIN_PEAK_SNR = 30.0;
const float MAX_SNR_VARIANCE_RATIO = 0.9;

// Match quality thresholds
const float STRICT_MATCH_THRESHOLD = 0.20;
const float CONFIDENT_MATCH_THRESHOLD = 0.25;
const float WEAK_MATCH_THRESHOLD = 0.35;

// Temporal consistency requirements
const int MIN_CONSECUTIVE_DETECTIONS = 6;
const int MIN_STABLE_FRAMES = 10;

// Calibration
const char* CALIBRATION_FILE = "/radar_calibration.json";

// Shape matching
const float SHAPE_DESCRIPTOR_TOLERANCE = 0.25;
const float GEOMETRY_WEIGHT = 0.7;
const float FLATNESS_WEIGHT = 2.0;

// Tracking
const float MAX_TRACKING_DISTANCE = 0.3;
const int MAX_TRACK_AGE = 10;

// Match hysteresis
const float MATCH_ENTER_THRESHOLD = 0.20;
const float MATCH_EXIT_THRESHOLD = 0.40;
const int DESCRIPTOR_WINDOW_SIZE = 20;
const int MIN_DESCRIPTORS_FOR_ROBUST = 5;
const int PRESENCE_HOLD_FRAMES = 10;
const int MIN_HITS_FOR_CONFIRMED = 8;

// =========================================================
// Data Structures
// =========================================================
struct Point3D {
  float x, y, z;
  Point3D() : x(0), y(0), z(0) {}
  Point3D(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
  float norm() const { return sqrt(x*x + y*y + z*z); }
  float distanceTo(const Point3D& other) const {
    float dx = x - other.x, dy = y - other.y, dz = z - other.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
  }
  Point3D operator-(const Point3D& other) const { return Point3D(x-other.x, y-other.y, z-other.z); }
  Point3D operator+(const Point3D& other) const { return Point3D(x+other.x, y+other.y, z+other.z); }
  Point3D operator*(float s) const { return Point3D(x*s, y*s, z*s); }
};

struct RadarPoint {
  float x, y, z;
  uint16_t snr;
};

struct ClusterData {
  std::vector<Point3D> points;
  std::vector<uint16_t> snrs;
  Point3D centroid;
  int numPoints;
};

// =========================================================
// Alert Manager Class
// =========================================================
class AlertManager {
private:
  unsigned long alertStartTime;
  bool alertActive;
  unsigned long lastBeepTime;
  bool beepState;

public:
  AlertManager() : alertStartTime(0), alertActive(false), lastBeepTime(0), beepState(false) {}

  void init() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    Serial.printf("✓ Alert System initialized (LED: GPIO%d, Buzzer: GPIO%d)\n", LED_PIN, BUZZER_PIN);
  }

  void triggerAlert() {
    alertStartTime = millis();
    alertActive = true;
    digitalWrite(LED_PIN, HIGH);
    Serial.println("⚠️  ALERT TRIGGERED - GUN DETECTED!");
  }

  void update() {
    if (!alertActive) {
      digitalWrite(LED_PIN, LOW);
      digitalWrite(BUZZER_PIN, LOW);
      return;
    }

    if (millis() - alertStartTime > ALERT_DURATION) {
      alertActive = false;
      digitalWrite(LED_PIN, LOW);
      digitalWrite(BUZZER_PIN, LOW);
      beepState = false;
      return;
    }

    if (millis() - lastBeepTime > BEEP_PATTERN_FAST) {
      beepState = !beepState;
      digitalWrite(BUZZER_PIN, beepState ? HIGH : LOW);
      lastBeepTime = millis();
    }
  }

  bool isActive() const { return alertActive; }
};

// =========================================================
// Advanced Shape Descriptor with Quality Validation
// =========================================================
class AdvancedShapeDescriptor {
public:
  float length, width, height;
  float volume;
  float surfaceArea;
  float aspectRatio1, aspectRatio2;
  float compactness;

  float flatnessRatio;
  float dimensionalityScore;
  float zBimodality;
  float localDensityVariance;
  float pointCloudThickness;
  float planarityScore;

  float distance;
  int numPoints;
  float rcsEstimate;
  float meanSnr;
  float maxSnr;
  float minSnr;
  float snrVariance;
  float snrStd;
  float snrVarianceRatio;
  float pointDensity;
  float reflectionConsistency;

  // NEW: Quality metrics
  float spatialSpread;
  float confidenceScore;
  bool isValid;
  char invalidReason[64];

  AdvancedShapeDescriptor() {}

  void compute(float l, float w, float h,
               const std::vector<Point3D>& pts,
               const std::vector<uint16_t>& snrs,
               float dist) {

    float dims[3] = {l, w, h};
    sortDimensions(dims);
    length = dims[0];
    width  = dims[1];
    height = dims[2];

    volume = length * width * height;
    surfaceArea = 2 * (length * width + width * height + height * length);
    aspectRatio1 = width / (length + 1e-6);
    aspectRatio2 = height / (length + 1e-6);
    compactness = volume / (pow(surfaceArea, 1.5) + 1e-6);

    flatnessRatio = height / (length + 1e-6);
    dimensionalityScore = calculateDimensionalityScore(dims);

    distance = dist;
    numPoints = (int)pts.size();

    float sumSnr = 0, sumSnr2 = 0;
    maxSnr = 0;
    minSnr = 10000;
    for (uint16_t s : snrs) {
      sumSnr += s;
      sumSnr2 += (float)s * (float)s;
      if (s > maxSnr) maxSnr = s;
      if (s < minSnr) minSnr = s;
    }

    meanSnr = (numPoints > 0) ? (sumSnr / numPoints) : 0;
    snrVariance = (numPoints > 0) ? ((sumSnr2 / numPoints) - (meanSnr * meanSnr)) : 0;
    snrStd = sqrt(max(0.0f, snrVariance));
    snrVarianceRatio = snrStd / (meanSnr + 1e-6);

    rcsEstimate = sumSnr / (distance * distance * sqrt(max(1, numPoints)) + 1e-6);
    pointDensity = numPoints / (volume + 1e-6);
    reflectionConsistency = snrStd / (meanSnr + 1e-6);

    zBimodality = calculateZBimodality(pts);
    localDensityVariance = calculateLocalDensityVariance(pts);
    pointCloudThickness = calculateThickness(pts);
    planarityScore = calculatePlanarity(pts);

    // NEW: Calculate quality metrics
    spatialSpread = calculateSpatialSpread(pts);
    
    // Validate object
    validateObject();
    
    // Calculate confidence score
    confidenceScore = calculateConfidenceScore();
  }

  void validateObject() {
    // Check 1: Sufficient points
    if (numPoints < MIN_POINTS_FOR_VALID_OBJECT) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too few points (%d < %d)", numPoints, MIN_POINTS_FOR_VALID_OBJECT);
      return;
    }

    // Check 2: Spatial coherence
    if (spatialSpread > MAX_CLUSTER_SPREAD) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too spread (%.2fm > %.2fm)", spatialSpread, MAX_CLUSTER_SPREAD);
      return;
    }

    // Check 3: Point density
    if (pointDensity < MIN_POINT_DENSITY) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too sparse (%.1f < %.1f pts/m³)", pointDensity, MIN_POINT_DENSITY);
      return;
    }

    // Check 4: SNR quality
    if (meanSnr < MIN_AVERAGE_SNR) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Low avg SNR (%.1f < %.1f)", meanSnr, MIN_AVERAGE_SNR);
      return;
    }

    if (maxSnr < MIN_PEAK_SNR) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Low peak SNR (%.1f < %.1f)", maxSnr, MIN_PEAK_SNR);
      return;
    }

    // Check 5: SNR consistency
    if (snrVarianceRatio > MAX_SNR_VARIANCE_RATIO) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Inconsistent SNR (%.2f > %.2f)", snrVarianceRatio, MAX_SNR_VARIANCE_RATIO);
      return;
    }

    // Check 6: Reasonable size
    if (volume < 0.0001) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too small (%.2f cm³)", volume * 1e6);
      return;
    }

    if (volume > 1.0) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too large (%.2f m³)", volume);
      return;
    }

    isValid = true;
    strcpy(invalidReason, "Valid");
  }

  float calculateConfidenceScore() {
    if (!isValid) return 0.0f;

    float scores[4];
    
    // Point count confidence
    scores[0] = min(100.0f, (numPoints / (float)MIN_POINTS_FOR_VALID_OBJECT) * 50.0f);
    
    // Spatial coherence confidence
    scores[1] = max(0.0f, 100.0f * (1.0f - spatialSpread / MAX_CLUSTER_SPREAD));
    
    // SNR confidence
    scores[2] = min(100.0f, (meanSnr / MIN_AVERAGE_SNR) * 50.0f);
    
    // Density confidence
    scores[3] = min(100.0f, (pointDensity / MIN_POINT_DENSITY) * 50.0f);
    
    float sum = 0;
    for (int i = 0; i < 4; i++) sum += scores[i];
    
    return sum / 4.0f;
  }

  float distanceTo(const AdvancedShapeDescriptor& other, bool useRcs = true) const {
    float volDiff = fabs(volume - other.volume) / (max(volume, other.volume) + 1e-6f);
    float saDiff  = fabs(surfaceArea - other.surfaceArea) / (max(surfaceArea, other.surfaceArea) + 1e-6f);

    float flatnessDiff  = fabs(flatnessRatio - other.flatnessRatio) / (max(flatnessRatio, other.flatnessRatio) + 1e-6f);
    float dimDiff       = fabs(dimensionalityScore - other.dimensionalityScore);
    float bimodalDiff   = fabs(zBimodality - other.zBimodality);
    float densityVarDiff= fabs(localDensityVariance - other.localDensityVariance) / (max(localDensityVariance, other.localDensityVariance) + 1e-6f);
    float thicknessDiff = fabs(pointCloudThickness - other.pointCloudThickness) / (max(pointCloudThickness, other.pointCloudThickness) + 1e-6f);
    float planarityDiff = fabs(planarityScore - other.planarityScore);
    float ar1Diff       = fabs(aspectRatio1 - other.aspectRatio1);
    float ar2Diff       = fabs(aspectRatio2 - other.aspectRatio2);

    float geometricDistance = (
      flatnessDiff * FLATNESS_WEIGHT +
      dimDiff * 1.5 +
      bimodalDiff * 1.5 +
      planarityDiff * 1.5 +
      thicknessDiff * 1.0 +
      densityVarDiff * 1.0 +
      volDiff * 1.0 +
      saDiff * 0.8 +
      ar1Diff * 0.5 +
      ar2Diff * 0.5
    ) / 11.3f;

    if (!useRcs) return geometricDistance;

    float rcsDiff     = fabs(rcsEstimate - other.rcsEstimate) / (max(rcsEstimate, other.rcsEstimate) + 1e-6f);
    float meanSnrDiff = fabs(meanSnr - other.meanSnr) / (max(meanSnr, other.meanSnr) + 1e-6f);
    float maxSnrDiff  = fabs(maxSnr - other.maxSnr) / (max(maxSnr, other.maxSnr) + 1e-6f);
    float pdDiff      = fabs(pointDensity - other.pointDensity) / (max(pointDensity, other.pointDensity) + 1e-6f);
    float rcDiff      = fabs(reflectionConsistency - other.reflectionConsistency) / (max(reflectionConsistency, other.reflectionConsistency) + 1e-6f);

    float materialDistance = (rcsDiff * 3.0 + meanSnrDiff * 2.0 + maxSnrDiff * 1.5 + pdDiff * 1.5 + rcDiff * 1.0) / 9.0f;

    return GEOMETRY_WEIGHT * geometricDistance + (1 - GEOMETRY_WEIGHT) * materialDistance;
  }

  void getObjectType(char* typeName, char* icon) const {
    if (flatnessRatio < 0.15 && planarityScore > 0.7) {
      strcpy(typeName, "FLAT_PLATE"); strcpy(icon, "PLATE");
    } else if (zBimodality > 0.5 && flatnessRatio > 0.25) {
      strcpy(typeName, "3D_BOX"); strcpy(icon, "BOX");
    } else if (dimensionalityScore > 0.4) {
      strcpy(typeName, "3D_OBJECT"); strcpy(icon, "3D");
    } else if (planarityScore < 0.5) {
      strcpy(typeName, "IRREGULAR_3D"); strcpy(icon, "IRREG");
    } else {
      strcpy(typeName, "UNKNOWN_SHAPE"); strcpy(icon, "?");
    }
  }

  void getMaterialType(char* matName, char* icon) const {
    if (rcsEstimate > 150 && reflectionConsistency < 0.3) {
      strcpy(matName, "METAL"); strcpy(icon, "MET");
    } else if (rcsEstimate > 80 && reflectionConsistency < 0.4) {
      strcpy(matName, "DENSE_PLASTIC"); strcpy(icon, "DPLA");
    } else if (rcsEstimate > 40 && reflectionConsistency < 0.5) {
      strcpy(matName, "PLASTIC"); strcpy(icon, "PLAS");
    } else if (rcsEstimate > 20) {
      strcpy(matName, "CARDBOARD"); strcpy(icon, "CARD");
    } else {
      strcpy(matName, "LOW_REFLECTIVITY"); strcpy(icon, "LOW");
    }
  }

  const char* getMatchConfidenceLevel(float matchDist) const {
    if (matchDist < STRICT_MATCH_THRESHOLD) return "VERY_HIGH";
    else if (matchDist < CONFIDENT_MATCH_THRESHOLD) return "HIGH";
    else if (matchDist < WEAK_MATCH_THRESHOLD) return "MEDIUM";
    else return "LOW";
  }

  int getMatchConfidencePct(float matchDist) const {
    if (matchDist < STRICT_MATCH_THRESHOLD) return 95;
    else if (matchDist < CONFIDENT_MATCH_THRESHOLD) return 85;
    else if (matchDist < WEAK_MATCH_THRESHOLD) return 70;
    else return 50;
  }

private:
  void sortDimensions(float dims[3]) {
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2 - i; j++) {
        if (dims[j] < dims[j + 1]) { 
          float t = dims[j]; 
          dims[j] = dims[j+1]; 
          dims[j+1] = t; 
        }
      }
    }
  }

  float calculateDimensionalityScore(float dims[3]) const {
    float r0 = dims[1] / (dims[0] + 1e-6f);
    float r1 = dims[2] / (dims[1] + 1e-6f);
    return (r0 + r1) / 2.0f;
  }

  float calculateSpatialSpread(const std::vector<Point3D>& pts) const {
    if (pts.size() < 3) return 0.0f;
    
    Point3D centroid(0, 0, 0);
    for (const auto& p : pts) {
      centroid.x += p.x;
      centroid.y += p.y;
      centroid.z += p.z;
    }
    centroid.x /= pts.size();
    centroid.y /= pts.size();
    centroid.z /= pts.size();
    
    float maxDist = 0;
    for (const auto& p : pts) {
      float dist = centroid.distanceTo(p);
      if (dist > maxDist) maxDist = dist;
    }
    
    return maxDist;
  }

  float calculateZBimodality(const std::vector<Point3D>& pts) const {
    if (pts.size() < 20) return 0.0f;
    float minZ = pts[0].z, maxZ = pts[0].z;
    for (auto& p : pts) { minZ = min(minZ, p.z); maxZ = max(maxZ, p.z); }
    float range = maxZ - minZ;
    if (range < 1e-6f) return 0.0f;

    const int bins = 10;
    int hist[bins] = {0};
    for (auto& p : pts) {
      int bin = (int)((p.z - minZ) / range * (bins - 0.001f));
      if (bin >= 0 && bin < bins) hist[bin]++;
    }

    int peaks = 0;
    for (int i = 1; i < bins - 1; i++) {
      if (hist[i] > hist[i-1] && hist[i] > hist[i+1] && hist[i] > (int)(pts.size() * 0.05f)) peaks++;
    }
    return min(peaks / 2.0f, 1.0f);
  }

  float calculateLocalDensityVariance(const std::vector<Point3D>& pts) const {
    if (pts.size() < 30) return 0.0f;

    Point3D minP = pts[0], maxP = pts[0];
    for (auto& p : pts) {
      minP.x = min(minP.x, p.x); minP.y = min(minP.y, p.y); minP.z = min(minP.z, p.z);
      maxP.x = max(maxP.x, p.x); maxP.y = max(maxP.y, p.y); maxP.z = max(maxP.z, p.z);
    }
    Point3D range = maxP - minP;
    if (range.norm() < 1e-6f) return 0.0f;

    const int gridSize = 3;
    int cellCounts[gridSize][gridSize][gridSize] = {{{0}}};

    for (auto& p : pts) {
      int ix = (int)((p.x - minP.x) / (range.x + 1e-6f) * (gridSize - 0.001f));
      int iy = (int)((p.y - minP.y) / (range.y + 1e-6f) * (gridSize - 0.001f));
      int iz = (int)((p.z - minP.z) / (range.z + 1e-6f) * (gridSize - 0.001f));
      ix = constrain(ix, 0, gridSize - 1);
      iy = constrain(iy, 0, gridSize - 1);
      iz = constrain(iz, 0, gridSize - 1);
      cellCounts[ix][iy][iz]++;
    }

    int sum = 0, sum2 = 0, count = 0;
    for (int i=0;i<gridSize;i++) for (int j=0;j<gridSize;j++) for (int k=0;k<gridSize;k++) {
      if (cellCounts[i][j][k] > 0) { 
        sum += cellCounts[i][j][k]; 
        sum2 += cellCounts[i][j][k]*cellCounts[i][j][k]; 
        count++; 
      }
    }
    if (count < 2) return 0.0f;
    float mean = (float)sum / count;
    float var  = ((float)sum2 / count) - (mean * mean);
    float normVar = var / (mean * mean + 1e-6f);
    return min(normVar, 10.0f);
  }

  float calculateThickness(const std::vector<Point3D>& pts) const {
    if (pts.size() < 10) return 0.0f;
    float minZ = pts[0].z, maxZ = pts[0].z;
    for (auto& p : pts) { minZ = min(minZ, p.z); maxZ = max(maxZ, p.z); }
    return maxZ - minZ;
  }

  float calculatePlanarity(const std::vector<Point3D>& pts) const {
    if (pts.size() < 10) return 0.0f;

    Point3D c(0,0,0);
    for (auto& p : pts) { c.x += p.x; c.y += p.y; c.z += p.z; }
    c.x /= pts.size(); c.y /= pts.size(); c.z /= pts.size();

    float sx=0, sy=0, sz=0;
    for (auto& p : pts) {
      float dx=p.x-c.x, dy=p.y-c.y, dz=p.z-c.z;
      sx += dx*dx; sy += dy*dy; sz += dz*dz;
    }
    sx = sqrt(sx/pts.size()); sy = sqrt(sy/pts.size()); sz = sqrt(sz/pts.size());

    float maxS = max(max(sx,sy),sz);
    float minS = min(min(sx,sy),sz);
    if (maxS < 1e-9f) return 1.0f;
    float plan = 1.0f - (minS / maxS);
    return constrain(plan, 0.0f, 1.0f);
  }
};

// =========================================================
// Calibration Database
// =========================================================
class CalibrationDatabase {
private:
  DynamicJsonDocument doc;

public:
  CalibrationDatabase() : doc(8192) {}

  bool loadCalibration() {
    if (!SPIFFS.exists(CALIBRATION_FILE)) {
      Serial.println("No calibration file found");
      return false;
    }
    File file = SPIFFS.open(CALIBRATION_FILE, "r");
    if (!file) {
      Serial.println("Failed to open calibration file");
      return false;
    }
    DeserializationError error = deserializeJson(doc, file);
    file.close();
    if (error) {
      Serial.print("Failed to parse calibration: ");
      Serial.println(error.c_str());
      return false;
    }
    Serial.printf("Loaded %d calibrated objects\n", (int)doc.size());
    return true;
  }

  bool findMatch(const AdvancedShapeDescriptor& descriptor,
                 String& matchedName, float& confidence,
                 float& geoMatch, float& matMatch) {
    float bestDistance = 999999.0f;
    bool found = false;

    JsonObject root = doc.as<JsonObject>();
    for (JsonPair kv : root) {
      const char* name = kv.key().c_str();
      JsonObject obj = kv.value().as<JsonObject>();

      AdvancedShapeDescriptor calDesc;
      calDesc.length = obj["length"];
      calDesc.width = obj["width"];
      calDesc.height = obj["height"];
      calDesc.volume = obj["volume"];
      calDesc.surfaceArea = obj["surface_area"];
      calDesc.aspectRatio1 = obj["aspect_ratio_1"];
      calDesc.aspectRatio2 = obj["aspect_ratio_2"];
      calDesc.flatnessRatio = obj["flatness_ratio"];
      calDesc.dimensionalityScore = obj["dimensionality_score"];
      calDesc.zBimodality = obj["z_bimodality"];
      calDesc.localDensityVariance = obj["local_density_variance"];
      calDesc.pointCloudThickness = obj["point_cloud_thickness"];
      calDesc.planarityScore = obj["planarity_score"];
      calDesc.rcsEstimate = obj["rcs_estimate"];
      calDesc.meanSnr = obj["mean_snr"];
      calDesc.maxSnr = obj["max_snr"];
      calDesc.pointDensity = obj["point_density"];
      calDesc.reflectionConsistency = obj["reflection_consistency"];

      float d = descriptor.distanceTo(calDesc, true);
      if (d < SHAPE_DESCRIPTOR_TOLERANCE && d < bestDistance) {
        bestDistance = d;
        matchedName = String(name);
        found = true;
      }
    }

    if (found) {
      confidence = max(0.0f, min(100.0f, (1.0f - bestDistance) * 100.0f));
      geoMatch = 0.0f;
      matMatch = 0.0f;
      return true;
    }
    return false;
  }
};

// =========================================================
// Enhanced Object Tracker with Ghost Rejection
// =========================================================
struct TrackedObject {
  int id;
  Point3D position;
  Point3D velocity;
  int age;
  int hits;
  
  // Descriptor history for robust matching
  std::vector<AdvancedShapeDescriptor> allDescriptors;
  
  // Match hysteresis state
  String matchedName;
  float lastMatchDistance;
  int framesSinceLastMatch;
  
  // Track state
  enum State {
    DETECTING,
    CONFIRMED,
    TEMP_LOST,
    LOST,
    GHOST,
    LOW_QUALITY
  };
  State state;
  
  // NEW: Quality tracking
  int consecutiveValidDetections;
  int consecutiveHighQuality;
  std::vector<float> qualityHistory;
  bool isGhost;
  
  bool active;
};

class ObjectTracker {
private:
  std::vector<TrackedObject> tracks;
  int nextId;

public:
  ObjectTracker() : nextId(0) {
    tracks.reserve(20);
  }

  void update(const std::vector<ClusterData>& clusters,
              const std::vector<AdvancedShapeDescriptor>& descriptors) {

    // Predict all tracks
    for (auto& track : tracks) {
      if (track.active) {
        track.position.x += track.velocity.x * 0.1f;
        track.position.y += track.velocity.y * 0.1f;
        track.position.z += track.velocity.z * 0.1f;
        track.age++;
        track.framesSinceLastMatch++;
      }
    }

    std::vector<bool> clusterUsed(clusters.size(), false);

    // Associate clusters with existing tracks
    for (auto& track : tracks) {
      if (!track.active) continue;

      int bestIdx = -1;
      float bestDist = MAX_TRACKING_DISTANCE;

      for (size_t i = 0; i < clusters.size(); i++) {
        if (clusterUsed[i]) continue;
        float dist = track.position.distanceTo(clusters[i].centroid);
        if (dist < bestDist) { 
          bestDist = dist; 
          bestIdx = (int)i; 
        }
      }

      if (bestIdx >= 0) {
        Point3D oldPos = track.position;
        track.position = clusters[bestIdx].centroid;
        track.velocity = (track.position - oldPos) * 10.0f;
        
        // Update descriptor and quality
        updateDescriptor(track, descriptors[bestIdx]);
        
        track.hits++;
        track.age = 0;
        clusterUsed[bestIdx] = true;
      }
    }

    // Create new tracks for unmatched clusters
    for (size_t i = 0; i < clusters.size(); i++) {
      if (!clusterUsed[i]) {
        TrackedObject t;
        t.id = nextId++;
        t.position = clusters[i].centroid;
        t.velocity = Point3D(0,0,0);
        t.age = 0;
        t.hits = 1;
        t.allDescriptors.clear();
        t.allDescriptors.push_back(descriptors[i]);
        t.matchedName = "";
        t.lastMatchDistance = 999999.0f;
        t.framesSinceLastMatch = 0;
        t.state = TrackedObject::DETECTING;
        t.consecutiveValidDetections = descriptors[i].isValid ? 1 : 0;
        t.consecutiveHighQuality = (descriptors[i].confidenceScore > 70) ? 1 : 0;
        t.qualityHistory.clear();
        t.qualityHistory.push_back(descriptors[i].confidenceScore);
        t.isGhost = !descriptors[i].isValid;
        t.active = true;
        tracks.push_back(t);
      }
    }

    // Remove old tracks
    for (auto& track : tracks) {
      if (track.age > MAX_TRACK_AGE) track.active = false;
    }
  }

  void updateDescriptor(TrackedObject& track, const AdvancedShapeDescriptor& descriptor) {
    track.allDescriptors.push_back(descriptor);
    
    if (track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.erase(track.allDescriptors.begin());
    }
    
    // Track quality
    track.qualityHistory.push_back(descriptor.confidenceScore);
    if (track.qualityHistory.size() > 30) {
      track.qualityHistory.erase(track.qualityHistory.begin());
    }
    
    if (descriptor.isValid && descriptor.confidenceScore > 70) {
      track.consecutiveValidDetections++;
      track.consecutiveHighQuality++;
      track.isGhost = false;
    } else {
      track.consecutiveValidDetections = 0;
      if (descriptor.confidenceScore < 40) {
        track.consecutiveHighQuality = 0;
        track.isGhost = true;
      }
    }
  }

  void updateMatchWithHysteresis(TrackedObject& track, CalibrationDatabase* calibDB) {
    // Check if we have enough valid detections
    if (track.consecutiveValidDetections < MIN_CONSECUTIVE_DETECTIONS) {
      track.matchedName = "";
      if (track.isGhost) {
        track.state = TrackedObject::GHOST;
      } else {
        track.state = TrackedObject::DETECTING;
      }
      return;
    }
    
    // Check average quality
    if (track.qualityHistory.size() > 0) {
      float avgQuality = 0;
      for (float q : track.qualityHistory) avgQuality += q;
      avgQuality /= track.qualityHistory.size();
      
      if (avgQuality < 50) {
        track.matchedName = "";
        track.state = TrackedObject::LOW_QUALITY;
        track.isGhost = true;
        return;
      }
    }
    
    // Get robust descriptor (median of recent)
    if (track.allDescriptors.empty()) return;
    
    AdvancedShapeDescriptor robustDesc;
    if (track.allDescriptors.size() >= MIN_DESCRIPTORS_FOR_ROBUST) {
      // Use median approach for robustness
      robustDesc = track.allDescriptors[track.allDescriptors.size() / 2];
    } else {
      robustDesc = track.allDescriptors.back();
    }
    
    // Find match
    String matchName;
    float confidence, geoMatch, matMatch;
    bool matched = calibDB->findMatch(robustDesc, matchName, confidence, geoMatch, matMatch);
    
    if (!matched) {
      track.matchedName = "";
      return;
    }
    
    float distance = 1.0f - (confidence / 100.0f);
    
    // Hysteresis logic
    if (track.matchedName.length() == 0) {
      // No current match - use ENTER threshold
      if (distance < MATCH_ENTER_THRESHOLD && track.consecutiveHighQuality >= MIN_STABLE_FRAMES) {
        track.matchedName = matchName;
        track.lastMatchDistance = distance;
        track.framesSinceLastMatch = 0;
      }
    } else {
      // Have a match
      if (matchName == track.matchedName) {
        // Same object - use EXIT threshold
        if (distance < MATCH_EXIT_THRESHOLD) {
          track.lastMatchDistance = distance;
          track.framesSinceLastMatch = 0;
        } else {
          track.matchedName = "";
        }
      } else {
        // Different object detected
        if (distance < MATCH_ENTER_THRESHOLD && distance < track.lastMatchDistance - 0.05f) {
          track.matchedName = matchName;
          track.lastMatchDistance = distance;
          track.framesSinceLastMatch = 0;
        }
      }
    }
    
    // Presence hold
    if (track.matchedName.length() > 0) {
      if (track.framesSinceLastMatch >= PRESENCE_HOLD_FRAMES) {
        track.matchedName = "";
      }
    }
    
    // Update state
    if (track.matchedName.length() > 0) {
      if (track.framesSinceLastMatch == 0) {
        if (track.state != TrackedObject::CONFIRMED && 
            track.consecutiveHighQuality >= MIN_STABLE_FRAMES) {
          track.state = TrackedObject::CONFIRMED;
        }
      } else if (track.framesSinceLastMatch < PRESENCE_HOLD_FRAMES) {
        track.state = TrackedObject::TEMP_LOST;
      } else {
        track.state = TrackedObject::LOST;
      }
    } else {
      if (track.isGhost) {
        track.state = TrackedObject::GHOST;
      } else if (track.hits < MIN_HITS_FOR_CONFIRMED) {
        track.state = TrackedObject::DETECTING;
      } else {
        track.state = TrackedObject::LOST;
      }
    }
  }

  const std::vector<TrackedObject>& getTracks() const { return tracks; }
  
  std::vector<TrackedObject>& getTracks() { return tracks; }
};

// =========================================================
// Radar Parser
// =========================================================
class RadarParser {
private:
  HardwareSerial* radarSerial;
  uint8_t pkt[MAX_PACKET_LEN];

  static inline uint32_t u32le(const uint8_t* p) {
    return ((uint32_t)p[0]) | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
  }
  static inline uint16_t u16le(const uint8_t* p) {
    return (uint16_t)(p[0] | (p[1] << 8));
  }

  bool readExact(uint8_t* dst, size_t n, uint32_t timeoutMs) {
    uint32_t start = millis();
    size_t got = 0;
    while (got < n) {
      if (radarSerial->available()) {
        int c = radarSerial->read();
        if (c >= 0) dst[got++] = (uint8_t)c;
      } else {
        if (millis() - start > timeoutMs) return false;
        delay(1);
      }
    }
    return true;
  }

  bool syncToMagic(uint32_t timeoutMs) {
    uint32_t start = millis();
    uint8_t window[8] = {0};
    uint32_t idx = 0;

    while (true) {
      if (radarSerial->available()) {
        uint8_t b = (uint8_t)radarSerial->read();
        window[idx % 8] = b;
        idx++;

        bool match = true;
        for (int i = 0; i < 8; i++) {
          uint8_t w = window[(idx - 8 + i) % 8];
          if (w != MAGIC_WORD[i]) { match = false; break; }
        }
        if (match) {
          memcpy(pkt, MAGIC_WORD, 8);
          return true;
        }
      } else {
        if (millis() - start > timeoutMs) return false;
        delay(1);
      }
    }
  }

public:
  RadarParser(HardwareSerial* serial) : radarSerial(serial) {}

  bool readPacket(std::vector<RadarPoint>& points) {
    points.clear();

    if (!syncToMagic(3000)) return false;

    if (!readExact(pkt + 8, HEADER_LEN - 8, 500)) return false;

    uint32_t totalLen = u32le(pkt + 12);
    if (totalLen < HEADER_LEN || totalLen > MAX_PACKET_LEN) return false;

    uint32_t numObj  = u32le(pkt + 28);
    uint32_t numTLVs = u32le(pkt + 32);

    uint32_t remaining = totalLen - HEADER_LEN;
    if (remaining > 0) {
      if (!readExact(pkt + HEADER_LEN, remaining, 1500)) return false;
    }

    if (numObj == 0 || numObj > 500) {
      return true;
    }

    size_t tlvStart = HEADER_LEN;

    for (uint32_t t = 0; t < numTLVs; t++) {
      if (tlvStart + 8 > totalLen) break;

      uint32_t tlvType = u32le(pkt + tlvStart);
      uint32_t tlvLen  = u32le(pkt + tlvStart + 4);
      size_t   tlvData = tlvStart + 8;

      if (tlvLen > (MAX_PACKET_LEN - 8) || (tlvData + tlvLen) > totalLen) break;

      if (tlvType == 1 && tlvLen >= numObj * 16) {
        size_t off = tlvData;
        for (uint32_t i = 0; i < numObj && (off + 16) <= totalLen; i++) {
          RadarPoint pt;
          memcpy(&pt.x, pkt + off,     4);
          memcpy(&pt.y, pkt + off + 4, 4);
          memcpy(&pt.z, pkt + off + 8, 4);
          pt.snr = 100;

          if (!isnan(pt.x) && !isnan(pt.y) && !isnan(pt.z) &&
              fabs(pt.x) < 100 && fabs(pt.y) < 100 && fabs(pt.z) < 100) {
            points.push_back(pt);
          }
          off += 16;
        }
      }
      else if (tlvType == 7 && points.size() > 0) {
        size_t off = tlvData;
        for (size_t i = 0; i < points.size() && (off + 4) <= totalLen; i++) {
          points[i].snr = u16le(pkt + off);
          off += 4;
        }
      }

      tlvStart = tlvData + tlvLen;
    }

    return true;
  }
};

// =========================================================
// Point Processing
// =========================================================
void filterPoints(std::vector<RadarPoint>& points) {
  std::vector<RadarPoint> filtered;
  filtered.reserve(points.size());
  for (const auto& pt : points) {
    float range = sqrt(pt.x*pt.x + pt.y*pt.y + pt.z*pt.z);
    if (range >= RANGE_MIN && range <= RANGE_MAX && pt.snr >= MIN_SNR) {
      filtered.push_back(pt);
    }
  }
  points = filtered;
}

void clusterDBSCAN(const std::vector<RadarPoint>& points,
                   std::vector<ClusterData>& clusters) {

  if (points.size() < (size_t)DBSCAN_MIN_POINTS) return;

  std::vector<int> labels(points.size(), -1);
  int clusterID = 0;

  for (size_t i = 0; i < points.size(); i++) {
    if (labels[i] >= 0) continue;

    std::vector<size_t> neighbors;
    neighbors.reserve(50);
    Point3D pi(points[i].x, points[i].y, points[i].z);

    for (size_t j = 0; j < points.size(); j++) {
      if (i == j) continue;
      Point3D pj(points[j].x, points[j].y, points[j].z);
      if (pi.distanceTo(pj) < DBSCAN_EPS) neighbors.push_back(j);
    }

    if ((int)neighbors.size() < DBSCAN_MIN_POINTS) {
      labels[i] = -1;
      continue;
    }

    labels[i] = clusterID;

    for (size_t k = 0; k < neighbors.size(); k++) {
      size_t nIdx = neighbors[k];
      if (labels[nIdx] == -1) labels[nIdx] = clusterID;
      if (labels[nIdx] >= 0) continue;

      labels[nIdx] = clusterID;

      Point3D pn(points[nIdx].x, points[nIdx].y, points[nIdx].z);
      for (size_t j = 0; j < points.size(); j++) {
        if (nIdx == j) continue;
        Point3D pj(points[j].x, points[j].y, points[j].z);
        if (pn.distanceTo(pj) < DBSCAN_EPS) {
          bool found = false;
          for (size_t m = 0; m < neighbors.size(); m++) {
            if (neighbors[m] == j) { found = true; break; }
          }
          if (!found) neighbors.push_back(j);
        }
      }
    }

    clusterID++;
  }

  for (int cid = 0; cid < clusterID; cid++) {
    ClusterData cluster;
    cluster.points.reserve(100);
    cluster.snrs.reserve(100);

    for (size_t i = 0; i < points.size(); i++) {
      if (labels[i] == cid) {
        cluster.points.push_back(Point3D(points[i].x, points[i].y, points[i].z));
        cluster.snrs.push_back(points[i].snr);
      }
    }

    if ((int)cluster.points.size() >= MIN_CLUSTER_POINTS) {
      cluster.centroid = Point3D(0,0,0);
      for (auto& p : cluster.points) {
        cluster.centroid.x += p.x;
        cluster.centroid.y += p.y;
        cluster.centroid.z += p.z;
      }
      cluster.centroid.x /= cluster.points.size();
      cluster.centroid.y /= cluster.points.size();
      cluster.centroid.z /= cluster.points.size();
      cluster.numPoints = (int)cluster.points.size();
      clusters.push_back(cluster);
    }
  }
}

bool extractDimensions(const ClusterData& cluster, AdvancedShapeDescriptor& descriptor) {
  if (cluster.numPoints < MIN_POINTS_FOR_OUTPUT) return false;

  Point3D centroid = cluster.centroid;
  std::vector<Point3D> filtered;
  std::vector<uint16_t> filteredSnrs;
  filtered.reserve(cluster.points.size());
  filteredSnrs.reserve(cluster.snrs.size());

  std::vector<float> distances;
  distances.reserve(cluster.points.size());
  for (const auto& pt : cluster.points) distances.push_back(centroid.distanceTo(pt));

  std::sort(distances.begin(), distances.end());
  float medianDist = distances[distances.size() / 2];

  for (size_t i = 0; i < cluster.points.size(); i++) {
    if (centroid.distanceTo(cluster.points[i]) < 2.5f * medianDist) {
      filtered.push_back(cluster.points[i]);
      filteredSnrs.push_back(cluster.snrs[i]);
    }
  }

  if (filtered.size() < (size_t)MIN_POINTS_FOR_OUTPUT) return false;

  centroid = Point3D(0,0,0);
  for (auto& p : filtered) { centroid.x += p.x; centroid.y += p.y; centroid.z += p.z; }
  centroid.x /= filtered.size(); centroid.y /= filtered.size(); centroid.z /= filtered.size();

  float minX=filtered[0].x, maxX=filtered[0].x;
  float minY=filtered[0].y, maxY=filtered[0].y;
  float minZ=filtered[0].z, maxZ=filtered[0].z;

  for (auto& p : filtered) {
    minX=min(minX,p.x); maxX=max(maxX,p.x);
    minY=min(minY,p.y); maxY=max(maxY,p.y);
    minZ=min(minZ,p.z); maxZ=max(maxZ,p.z);
  }

  float length = maxX - minX;
  float width  = maxY - minY;
  float height = maxZ - minZ;

  descriptor.compute(length, width, height, filtered, filteredSnrs, centroid.norm());
  return true;
}

// =========================================================
// Main System
// =========================================================
HardwareSerial RadarSerial(1);
RadarParser* parser = nullptr;
CalibrationDatabase* calibDB = nullptr;
ObjectTracker* tracker = nullptr;
AlertManager* alertManager = nullptr;

void setup() {
  Serial.begin(SERIAL_MONITOR_BAUD);
  delay(1000);

  Serial.println("=================================================");
  Serial.println("ESP32-S3 mmWave Gun Detection System");
  Serial.println("Advanced Geometric + RCS Recognition");
  Serial.println("WITH GHOST REJECTION & QUALITY VALIDATION");
  Serial.println("WITH ALERT SYSTEM (LED + BUZZER)");
  Serial.println("WITH BUTTON START/STOP CONTROL");
  Serial.println("=================================================");
  Serial.printf("Serial Monitor: %ld baud\n", SERIAL_MONITOR_BAUD);
  Serial.println("=================================================");

  #ifdef BOARD_HAS_PSRAM
  Serial.println("ESP32-S3 with PSRAM detected");
  Serial.printf("Total PSRAM: %d KB\n", ESP.getPsramSize() / 1024);
  Serial.printf("Free PSRAM: %d KB\n", ESP.getFreePsram() / 1024);
  Serial.printf("Free Heap: %d KB\n", ESP.getFreeHeap() / 1024);
  #else
  Serial.println("No PSRAM detected - using internal RAM only");
  Serial.printf("Free Heap: %d KB\n", ESP.getFreeHeap() / 1024);
  #endif

  if (!SPIFFS.begin(true)) {
    Serial.println("ERROR: SPIFFS mount failed!");
    while(1) delay(1000);
  }
  Serial.println("✓ SPIFFS mounted");

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.printf("✓ Button initialized on GPIO%d\n", BUTTON_PIN);

  RadarSerial.begin(RADAR_BAUD, SERIAL_8N1, RADAR_RX_PIN, RADAR_TX_PIN);
  Serial.printf("✓ Radar UART: RX=GPIO%d @ %ld baud (TX unused)\n", RADAR_RX_PIN, RADAR_BAUD);

  parser  = new RadarParser(&RadarSerial);
  calibDB = new CalibrationDatabase();
  tracker = new ObjectTracker();
  alertManager = new AlertManager();
  
  alertManager->init();

  Serial.printf("✓ Components initialized (Free heap: %d KB)\n", ESP.getFreeHeap() / 1024);

  if (calibDB->loadCalibration()) Serial.println("✓ Calibration loaded successfully");
  else Serial.println("⚠ No calibration data found");

  Serial.println("\n=================================================");
  Serial.println("🔧 ENHANCED FEATURES:");
  Serial.printf("   • Ghost Point Rejection (min %d points)\n", MIN_POINTS_FOR_VALID_OBJECT);
  Serial.println("   • Quality Validation (SNR, density, coherence)");
  Serial.printf("   • Requires %d consecutive valid detections\n", MIN_CONSECUTIVE_DETECTIONS);
  Serial.printf("   • Requires %d stable frames for confident ID\n", MIN_STABLE_FRAMES);
  Serial.println("=================================================");
  Serial.println("READY - Press button on GPIO4 to START/STOP");
  Serial.println("System is OFF. Press button to begin detection.");
  Serial.println("=================================================\n");
}

void loop() {
  static int frameCount = 0;
  static int noFrameCount = 0;
  static unsigned long lastFrameTime = millis();
  static bool lastButtonState = HIGH;
  static int noValidObjectFrames = 0;

  // Check button press with debouncing
  bool currentButtonState = digitalRead(BUTTON_PIN);
  
  if (currentButtonState == LOW && lastButtonState == HIGH) {
    if (millis() - lastButtonPress > 500) {
      systemRunning = !systemRunning;
      lastButtonPress = millis();
      
      if (systemRunning) {
        Serial.println("\n🟢 SYSTEM STARTED - Detection active");
      } else {
        Serial.println("\n🔴 SYSTEM STOPPED - Detection paused");
      }
    }
  }
  
  lastButtonState = currentButtonState;

  if (!systemRunning) {
    alertManager->update();
    delay(100);
    return;
  }

  alertManager->update();

  std::vector<RadarPoint> points;
  bool gotFrame = parser->readPacket(points);

  if (!gotFrame) {
    noFrameCount++;
    if (noFrameCount % 200 == 0) {
      Serial.printf("⚫ Waiting for frames... (%d) | UART avail: %d bytes\n",
                    noFrameCount, RadarSerial.available());
    }
    delay(10);
    return;
  }

  lastFrameTime = millis();
  noFrameCount = 0;

  if (points.empty()) {
    delay(10);
    return;
  }

  filterPoints(points);
  if (points.empty()) { delay(10); return; }

  std::vector<ClusterData> clusters;
  clusterDBSCAN(points, clusters);
  if (clusters.empty()) { delay(10); return; }

  std::vector<AdvancedShapeDescriptor> descriptors;
  std::vector<ClusterData> validClusters;

  for (const auto& cluster : clusters) {
    AdvancedShapeDescriptor desc;
    if (extractDimensions(cluster, desc)) {
      descriptors.push_back(desc);
      validClusters.push_back(cluster);
    }
  }
  
  if (validClusters.empty()) { delay(10); return; }

  tracker->update(validClusters, descriptors);
  auto& tracks = tracker->getTracks();

  // Update matches with hysteresis
  for (auto& tr : tracks) {
    if (tr.active) {
      tracker->updateMatchWithHysteresis(tr, calibDB);
    }
  }

  // Count valid (non-ghost) active tracks
  int activeCount = 0;
  bool gunDetected = false;
  
  for (const auto& tr : tracks) {
    if (tr.active && !tr.isGhost && 
        tr.state != TrackedObject::GHOST && 
        tr.state != TrackedObject::LOW_QUALITY) {
      activeCount++;
      
      if (tr.matchedName.equalsIgnoreCase("gun")) {
        gunDetected = true;
      }
    }
  }
  
  if (gunDetected && !alertManager->isActive()) {
    alertManager->triggerAlert();
  }
  
  if (activeCount == 0) {
    noValidObjectFrames++;
    if (noValidObjectFrames % 20 == 0) {
      Serial.printf("\n⚠️  No valid objects (filtering ghost points) - frame %d\n", noValidObjectFrames);
    }
    delay(10);
    return;
  }

  noValidObjectFrames = 0;
  frameCount++;

  Serial.println("\n=================================================");
  Serial.printf("Frame %d | Valid Objects: %d", frameCount, activeCount);
  if (alertManager->isActive()) {
    Serial.print(" | 🚨 ALERT ACTIVE");
  }
  Serial.println();
  Serial.println("=================================================");

  for (const auto& track : tracks) {
    if (!track.active) continue;
    
    // Skip ghost and low quality tracks
    if (track.isGhost || track.state == TrackedObject::GHOST || 
        track.state == TrackedObject::LOW_QUALITY) {
      continue;
    }

    const auto& desc = track.allDescriptors.back();
    const auto& pos  = track.position;

    char objType[32], objIcon[16];
    desc.getObjectType(objType, objIcon);

    char matType[32], matIcon[16];
    desc.getMaterialType(matType, matIcon);

    // State icons
    const char* stateIcon;
    switch(track.state) {
      case TrackedObject::DETECTING: stateIcon = "🔍"; break;
      case TrackedObject::CONFIRMED: stateIcon = "✅"; break;
      case TrackedObject::TEMP_LOST: stateIcon = "⏸️"; break;
      case TrackedObject::LOST: stateIcon = "❌"; break;
      case TrackedObject::GHOST: stateIcon = "👻"; break;
      case TrackedObject::LOW_QUALITY: stateIcon = "⚠️"; break;
      default: stateIcon = "❓";
    }

    Serial.printf("\n  %s [%s][%s] Object ID: %d", stateIcon, objIcon, matIcon, track.id);
    
    if (track.matchedName.equalsIgnoreCase("gun")) {
      Serial.print(" 🔴 GUN DETECTED!");
    }
    Serial.println();

    if (track.matchedName.length() > 0) {
      if (track.state == TrackedObject::TEMP_LOST) {
        Serial.printf("     ⏸️  IDENTIFIED (HELD): '%s' [%d/%d frames]\n", 
                     track.matchedName.c_str(), 
                     track.framesSinceLastMatch, 
                     PRESENCE_HOLD_FRAMES);
      } else {
        Serial.printf("     ✅ IDENTIFIED: '%s'\n", track.matchedName.c_str());
        const char* confLevel = desc.getMatchConfidenceLevel(track.lastMatchDistance);
        int confPct = desc.getMatchConfidencePct(track.lastMatchDistance);
        Serial.printf("     Match Confidence: %s (%d%%)\n", confLevel, confPct);
      }
    } else if (track.state == TrackedObject::DETECTING) {
      int needMore = max(0, MIN_CONSECUTIVE_DETECTIONS - track.consecutiveValidDetections);
      Serial.printf("     🔍 DETECTING... (need %d more valid frames)\n", needMore);
    } else {
      Serial.println("     ❓ UNKNOWN OBJECT");
    }

    Serial.printf("     Distance: %.2fm | Quality: %.0f%%\n", 
                 pos.norm(), desc.confidenceScore);
  }

  delay(50);
}
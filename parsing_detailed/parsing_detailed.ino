// ESP32-S3 mmWave gun-detection firmware.
// Load /radar_calibration.json into SPIFFS; GPIO: radar RX 16, button 4, LED 2, buzzer 38.

#include <Arduino.h>
#include <HardwareSerial.h>
#include <ArduinoJson.h>
#include <SPIFFS.h>
#include <vector>
#include <deque>
#include <cmath>
#include <algorithm>
#include <cstring>

// Button control
const int BUTTON_PIN = 4;
bool systemRunning = false;
unsigned long lastButtonPress = 0;

// Alert hardware
const int LED_PIN = 2;
const int BUZZER_PIN = 38;

const int ALERT_DURATION = 3000;
const int BEEP_PATTERN_FAST = 200;

// Firmware configuration
const uint8_t MAGIC_WORD[] = {0x02,0x01,0x04,0x03,0x06,0x05,0x08,0x07};

const int RADAR_RX_PIN = 16;
const int RADAR_TX_PIN = -1;

const long SERIAL_MONITOR_BAUD = 460800;
const long RADAR_BAUD = 921600;

static const uint32_t HEADER_LEN = 40;
static const uint32_t MAX_PACKET_LEN = 32 * 1024;

const size_t RANGE_PROFILE_MAX_BINS = 128;
const float RANGE_BIN_SIZE_METERS = 0.0381529018f;

const float RANGE_PROFILE_RAW_TO_DB = 0.031357291215f;
const float RANGE_PROFILE_FFT_COMPENSATION_DB = -18.061799740f;

const float DBSCAN_EPS_NEAR = 0.15;
const float DBSCAN_EPS_MID = 0.20;
const float DBSCAN_EPS_FAR = 0.25;
const float DBSCAN_NEAR_RANGE_MAX = 1.50;
const float DBSCAN_MID_RANGE_MAX = 2.50;
const int DBSCAN_MIN_POINTS = 5;

// Range filtering
const float RANGE_MIN = 0.20;
const float RANGE_MAX = 3.60;

// Signal filtering
const int MIN_SNR = 20;

const uint16_t SNR_UNKNOWN = 0;

// Cluster thresholds
const int MIN_CLUSTER_POINTS = 5;
const int MIN_POINTS_FOR_OUTPUT = 5;

// Object validation
const int MIN_POINTS_FOR_VALID_OBJECT = 5;
const int MIN_POINTS_FOR_CONFIRMED_MATCH = 15;

// Spatial validation
const float MAX_CLUSTER_SPREAD = 0.6;
const float MIN_POINT_DENSITY = 25.0;

// Quality thresholds
const float MIN_AVERAGE_SNR = 22.0;
const float MIN_PEAK_SNR = 30.0;
const float MAX_SNR_VARIANCE_RATIO = 0.9;

// Match thresholds
const float STRICT_MATCH_THRESHOLD = 0.20;
const float CONFIDENT_MATCH_THRESHOLD = 0.25;
const float WEAK_MATCH_THRESHOLD = 0.35;

// Temporal validation
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
const size_t MAX_TRACKS = 32;

// Match hysteresis
const float MATCH_ENTER_THRESHOLD = 0.20;
const float MATCH_EXIT_THRESHOLD = 0.40;
const int DESCRIPTOR_WINDOW_SIZE = 20;
const int MIN_DESCRIPTORS_FOR_ROBUST = 5;
const int PRESENCE_HOLD_FRAMES = 10;
const int MIN_HITS_FOR_CONFIRMED = 8;

const float LONG_RANGE_GUN_MIN_RANGE = 2.30;
const float LONG_RANGE_GUN_MAX_RANGE = 3.45;
const float LONG_RANGE_GUN_MIN_POWER_DB = 65.0;
const float LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE = 0.55;
const float LONG_RANGE_GUN_MIN_LENGTH = 0.15;
const float LONG_RANGE_GUN_MAX_LENGTH = 0.80;
const float LONG_RANGE_GUN_MIN_WIDTH = 0.08;
const float LONG_RANGE_GUN_MAX_WIDTH = 0.55;
const float LONG_RANGE_GUN_MIN_MEAN_SNR = 118.0;
const float LONG_RANGE_GUN_MIN_PEAK_SNR = 140.0;
const float LONG_RANGE_GUN_MAX_ABS_VELOCITY = 0.35;
const float LONG_RANGE_GUN_MAX_ABS_Z = 0.50;
const float LONG_RANGE_GUN_MIN_QUALITY = 80.0;
const int LONG_RANGE_GUN_MIN_POINTS = 5;
const int LONG_RANGE_GUN_REQUIRED_HITS = 5;
const int LONG_RANGE_GUN_HIT_WINDOW = 7;

// Data structures
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
  float velocity;
  uint16_t snr;
  uint16_t noise;
};

struct ClusterData {
  std::vector<Point3D> points;
  std::vector<uint16_t> snrs;
  std::vector<float> velocities;
  std::vector<uint16_t> noises;
  Point3D centroid;
  int numPoints;
};

// Alert manager
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
    Serial.printf("Alert system initialized (LED: GPIO%d, buzzer: GPIO%d)\n", LED_PIN, BUZZER_PIN);
  }

  void triggerAlert() {
    alertStartTime = millis();
    alertActive = true;
    digitalWrite(LED_PIN, HIGH);
    Serial.println("ALERT: GUN DETECTED");
  }

  void refresh() {
    if (alertActive) alertStartTime = millis();
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

// Shape descriptor
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
  float meanRadialVelocity;
  float maxAbsRadialVelocity;
  float meanNoise;
  float meanSnrMargin;

  float spatialSpread;
  float confidenceScore;
  bool isValid;
  char invalidReason[64];

  AdvancedShapeDescriptor()
    : meanRadialVelocity(0), maxAbsRadialVelocity(0),
      meanNoise(0), meanSnrMargin(0) {}

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

    double sumSnr = 0.0, sumSnr2 = 0.0;
    maxSnr = 0;
    minSnr = 10000;
    for (uint16_t s : snrs) {
      sumSnr += (double)s;
      sumSnr2 += (double)s * (double)s;
      if (s > maxSnr) maxSnr = s;
      if (s < minSnr) minSnr = s;
    }

    meanSnr = (numPoints > 0) ? (float)(sumSnr / numPoints) : 0;
    snrVariance = (numPoints > 0)
      ? (float)((sumSnr2 / numPoints) - ((double)meanSnr * meanSnr)) : 0;
    snrStd = sqrt(max(0.0f, snrVariance));
    snrVarianceRatio = snrStd / (meanSnr + 1e-6);

    rcsEstimate = (float)(sumSnr /
      (distance * distance * sqrt(max(1, numPoints)) + 1e-6));
    pointDensity = numPoints / (volume + 1e-6);
    reflectionConsistency = snrStd / (meanSnr + 1e-6);

    zBimodality = calculateZBimodality(pts);
    localDensityVariance = calculateLocalDensityVariance(pts);
    pointCloudThickness = calculateThickness(pts);
    planarityScore = calculatePlanarity(pts);

    spatialSpread = calculateSpatialSpread(pts);
    
    validateObject();
    
    confidenceScore = calculateConfidenceScore();
  }

  void validateObject() {
    if (numPoints < MIN_POINTS_FOR_VALID_OBJECT) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too few points (%d < %d)", numPoints, MIN_POINTS_FOR_VALID_OBJECT);
      return;
    }

    if (spatialSpread > MAX_CLUSTER_SPREAD) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too spread (%.2fm > %.2fm)", spatialSpread, MAX_CLUSTER_SPREAD);
      return;
    }

    if (pointDensity < MIN_POINT_DENSITY) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too sparse (%.1f < %.1f pts/m3)", pointDensity, MIN_POINT_DENSITY);
      return;
    }

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

    if (snrVarianceRatio > MAX_SNR_VARIANCE_RATIO) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Inconsistent SNR (%.2f > %.2f)", snrVarianceRatio, MAX_SNR_VARIANCE_RATIO);
      return;
    }

    if (volume < 0.0001) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too small (%.2f cm3)", volume * 1e6);
      return;
    }

    if (volume > 1.0) {
      isValid = false;
      snprintf(invalidReason, sizeof(invalidReason), 
               "Too large (%.2f m3)", volume);
      return;
    }

    isValid = true;
    strcpy(invalidReason, "Valid");
  }

  float calculateConfidenceScore() {
    if (!isValid) return 0.0f;

    float scores[4];
    
    scores[0] = min(100.0f, (numPoints / (float)MIN_POINTS_FOR_VALID_OBJECT) * 50.0f);
    
    scores[1] = max(0.0f, 100.0f * (1.0f - spatialSpread / MAX_CLUSTER_SPREAD));
    
    scores[2] = min(100.0f, (meanSnr / MIN_AVERAGE_SNR) * 50.0f);
    
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

// Calibration database
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
                 String& matchedName, float& confidence) {
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
      if (d < bestDistance) {
        bestDistance = d;
        matchedName = String(name);
      }
    }

    if (bestDistance < 999999.0f) {
      confidence = max(0.0f, min(100.0f, (1.0f - bestDistance) * 100.0f));
      found = bestDistance < SHAPE_DESCRIPTOR_TOLERANCE;
    }
    return found;
  }
};

// Object tracking
struct TrackedObject {
  int id;
  Point3D position;
  Point3D velocity;
  int age;
  int hits;
  
  std::deque<AdvancedShapeDescriptor> allDescriptors;
  
  String matchedName;
  String candidateName;
  float candidateDistance;
  float lastMatchDistance;
  int framesSinceLastMatch;

  uint8_t longRangeGunHitHistory;
  int longRangeGunWindowHits;
  bool longRangeGunEvidenceThisFrame;
  bool longRangeGunConfirmed;
  bool longRangePowerAvailable;
  float longRangePowerDb;
  float longRangePowerRange;
  uint16_t longRangePowerRaw;
  
  enum State {
    DETECTING,
    CONFIRMED,
    TEMP_LOST,
    LOST,
    GHOST,
    LOW_QUALITY
  };
  State state;
  
  int consecutiveValidDetections;
  int consecutiveHighQuality;
  std::deque<float> qualityHistory;
  bool isGhost;
  bool measuredThisFrame;
  
  bool active;
};

class ObjectTracker {
private:
  std::vector<TrackedObject> tracks;
  int nextId;

public:
  ObjectTracker() : nextId(0) {
    tracks.reserve(MAX_TRACKS);
  }

  void update(const std::vector<ClusterData>& clusters,
              const std::vector<AdvancedShapeDescriptor>& descriptors) {

    for (auto& track : tracks) {
      if (track.active) {
        track.measuredThisFrame = false;
        track.age++;
        track.framesSinceLastMatch++;
      }
    }

    std::vector<bool> clusterUsed(clusters.size(), false);

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
        
        updateDescriptor(track, descriptors[bestIdx]);
        
        track.hits++;
        track.age = 0;
        track.measuredThisFrame = true;
        clusterUsed[bestIdx] = true;
      }
    }

    tracks.erase(
      std::remove_if(tracks.begin(), tracks.end(),
        [](const TrackedObject& track) {
          return !track.active || track.age > MAX_TRACK_AGE;
        }),
      tracks.end());

    size_t droppedNewTracks = 0;
    for (size_t i = 0; i < clusters.size(); i++) {
      if (!clusterUsed[i]) {
        if (tracks.size() >= MAX_TRACKS) {
          droppedNewTracks++;
          continue;
        }

        tracks.emplace_back();
        TrackedObject& t = tracks.back();
        t.id = nextId++;
        t.position = clusters[i].centroid;
        t.velocity = Point3D(0,0,0);
        t.age = 0;
        t.hits = 1;
        t.allDescriptors.clear();
        t.allDescriptors.push_back(descriptors[i]);
        t.matchedName = "";
        t.candidateName = "";
        t.candidateDistance = 999999.0f;
        t.lastMatchDistance = 999999.0f;
        t.framesSinceLastMatch = 0;
        t.longRangeGunHitHistory = 0;
        t.longRangeGunWindowHits = 0;
        t.longRangeGunEvidenceThisFrame = false;
        t.longRangeGunConfirmed = false;
        t.longRangePowerAvailable = false;
        t.longRangePowerDb = 0.0f;
        t.longRangePowerRange = 0.0f;
        t.longRangePowerRaw = 0;
        t.state = TrackedObject::DETECTING;
        t.consecutiveValidDetections = descriptors[i].isValid ? 1 : 0;
        t.consecutiveHighQuality = (descriptors[i].confidenceScore > 70) ? 1 : 0;
        t.qualityHistory.clear();
        t.qualityHistory.push_back(descriptors[i].confidenceScore);
        t.isGhost = !descriptors[i].isValid;
        t.measuredThisFrame = true;
        t.active = true;
      }
    }

    if (droppedNewTracks > 0) {
      Serial.printf("Tracker capacity reached (%u); dropped %u transient cluster(s) | freeHeap=%u\n",
                    (unsigned)MAX_TRACKS, (unsigned)droppedNewTracks,
                    (unsigned)ESP.getFreeHeap());
    }
  }

  void updateDescriptor(TrackedObject& track, const AdvancedShapeDescriptor& descriptor) {
    track.allDescriptors.push_back(descriptor);
    
    if (track.allDescriptors.size() > DESCRIPTOR_WINDOW_SIZE) {
      track.allDescriptors.pop_front();
    }
    
    track.qualityHistory.push_back(descriptor.confidenceScore);
    if (track.qualityHistory.size() > 30) {
      track.qualityHistory.pop_front();
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
    if (track.consecutiveValidDetections < MIN_CONSECUTIVE_DETECTIONS) {
      track.matchedName = "";
      if (track.isGhost) {
        track.state = TrackedObject::GHOST;
      } else {
        track.state = TrackedObject::DETECTING;
      }
      return;
    }
    
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
    
    if (track.allDescriptors.empty()) return;
    
    AdvancedShapeDescriptor robustDesc;
    if (track.allDescriptors.size() >= MIN_DESCRIPTORS_FOR_ROBUST) {
      robustDesc = track.allDescriptors.back();
      const size_t count = track.allDescriptors.size();
      robustDesc.length = robustDesc.width = robustDesc.height = 0;
      robustDesc.volume = robustDesc.surfaceArea = 0;
      robustDesc.aspectRatio1 = robustDesc.aspectRatio2 = 0;
      robustDesc.flatnessRatio = robustDesc.dimensionalityScore = 0;
      robustDesc.zBimodality = robustDesc.localDensityVariance = 0;
      robustDesc.pointCloudThickness = robustDesc.planarityScore = 0;
      robustDesc.rcsEstimate = robustDesc.meanSnr = robustDesc.maxSnr = 0;
      robustDesc.pointDensity = robustDesc.reflectionConsistency = 0;
      for (const auto& sample : track.allDescriptors) {
        robustDesc.length += sample.length;
        robustDesc.width += sample.width;
        robustDesc.height += sample.height;
        robustDesc.volume += sample.volume;
        robustDesc.surfaceArea += sample.surfaceArea;
        robustDesc.aspectRatio1 += sample.aspectRatio1;
        robustDesc.aspectRatio2 += sample.aspectRatio2;
        robustDesc.flatnessRatio += sample.flatnessRatio;
        robustDesc.dimensionalityScore += sample.dimensionalityScore;
        robustDesc.zBimodality += sample.zBimodality;
        robustDesc.localDensityVariance += sample.localDensityVariance;
        robustDesc.pointCloudThickness += sample.pointCloudThickness;
        robustDesc.planarityScore += sample.planarityScore;
        robustDesc.rcsEstimate += sample.rcsEstimate;
        robustDesc.meanSnr += sample.meanSnr;
        robustDesc.maxSnr += sample.maxSnr;
        robustDesc.pointDensity += sample.pointDensity;
        robustDesc.reflectionConsistency += sample.reflectionConsistency;
      }
      robustDesc.length /= count;
      robustDesc.width /= count;
      robustDesc.height /= count;
      robustDesc.volume /= count;
      robustDesc.surfaceArea /= count;
      robustDesc.aspectRatio1 /= count;
      robustDesc.aspectRatio2 /= count;
      robustDesc.flatnessRatio /= count;
      robustDesc.dimensionalityScore /= count;
      robustDesc.zBimodality /= count;
      robustDesc.localDensityVariance /= count;
      robustDesc.pointCloudThickness /= count;
      robustDesc.planarityScore /= count;
      robustDesc.rcsEstimate /= count;
      robustDesc.meanSnr /= count;
      robustDesc.maxSnr /= count;
      robustDesc.pointDensity /= count;
      robustDesc.reflectionConsistency /= count;
    } else {
      robustDesc = track.allDescriptors.back();
    }
    
    String matchName;
    float confidence = 0.0f;
    bool matched = calibDB->findMatch(robustDesc, matchName, confidence);
    track.candidateName = matchName;
    track.candidateDistance = 1.0f - (confidence / 100.0f);
    
    if (!matched) {
      track.matchedName = "";
      return;
    }
    
    float distance = 1.0f - (confidence / 100.0f);
    
    if (track.matchedName.length() == 0) {
      if (distance < MATCH_ENTER_THRESHOLD && track.consecutiveHighQuality >= MIN_STABLE_FRAMES) {
        track.matchedName = matchName;
        track.lastMatchDistance = distance;
        track.framesSinceLastMatch = 0;
      }
    } else {
      if (matchName == track.matchedName) {
        if (distance < MATCH_EXIT_THRESHOLD) {
          track.lastMatchDistance = distance;
          track.framesSinceLastMatch = 0;
        } else {
          track.matchedName = "";
        }
      } else {
        if (distance < MATCH_ENTER_THRESHOLD && distance < track.lastMatchDistance - 0.05f) {
          track.matchedName = matchName;
          track.lastMatchDistance = distance;
          track.framesSinceLastMatch = 0;
        }
      }
    }
    
    if (track.matchedName.length() > 0) {
      if (track.framesSinceLastMatch >= PRESENCE_HOLD_FRAMES) {
        track.matchedName = "";
      }
    }
    
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

// Radar parser
struct ParserDiagnostics {
  uint32_t frameNumber;
  uint32_t uartObjectCount;
  uint32_t parsedPointCount;
  uint32_t numTLVs;
  uint32_t packetLength;
  uint32_t tlvTypes[8];
  uint8_t tlvTypeCount;
  bool pointsTlvSeen;
  bool sideInfoTlvSeen;
  bool rangeProfileSeen;
  bool malformed;
  uint16_t rangeProfile[RANGE_PROFILE_MAX_BINS];
  size_t rangeProfileBinCount;

  ParserDiagnostics()
    : frameNumber(0), uartObjectCount(0), parsedPointCount(0), numTLVs(0),
      packetLength(0), tlvTypeCount(0), pointsTlvSeen(false),
      sideInfoTlvSeen(false), rangeProfileSeen(false), malformed(false),
      rangeProfileBinCount(0) {
    memset(rangeProfile, 0, sizeof(rangeProfile));
  }
};

class RadarParser {
private:
  HardwareSerial* radarSerial;
  uint8_t pkt[MAX_PACKET_LEN];
  ParserDiagnostics diagnostics;

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

  const ParserDiagnostics& getDiagnostics() const { return diagnostics; }

  bool readPacket(std::vector<RadarPoint>& points) {
    points.clear();
    diagnostics = ParserDiagnostics();
    bool preferredLengthConventionKnown = false;
    bool preferredLengthIncludesHeader = false;

    if (!syncToMagic(3000)) return false;

    if (!readExact(pkt + 8, HEADER_LEN - 8, 500)) return false;

    uint32_t totalLen = u32le(pkt + 12);
    if (totalLen < HEADER_LEN || totalLen > MAX_PACKET_LEN) {
      diagnostics.malformed = true;
      return false;
    }

    uint32_t numObj  = u32le(pkt + 28);
    uint32_t numTLVs = u32le(pkt + 32);
    diagnostics.frameNumber = u32le(pkt + 20);
    diagnostics.uartObjectCount = numObj;
    diagnostics.numTLVs = numTLVs;
    diagnostics.packetLength = totalLen;

    uint32_t remaining = totalLen - HEADER_LEN;
    if (remaining > 0) {
      if (!readExact(pkt + HEADER_LEN, remaining, 1500)) return false;
    }

    if (numObj == 0 || numObj > 500) {
      return true;
    }

    size_t tlvStart = HEADER_LEN;

    auto plausibleTlvHeader = [&](size_t pos) -> bool {
      if (pos + 8U > totalLen) return false;
      uint32_t candidateType = u32le(pkt + pos);
      uint32_t candidateLen = u32le(pkt + pos + 4U);
      return candidateType >= 1U && candidateType <= 20U &&
             candidateLen > 0U && candidateLen <= (totalLen - pos);
    };

    for (uint32_t t = 0; t < numTLVs; t++) {
      if (tlvStart + 8 > totalLen) {
        diagnostics.malformed = true;
        break;
      }

      uint32_t tlvType = u32le(pkt + tlvStart);
      uint32_t tlvLen  = u32le(pkt + tlvStart + 4);
      size_t   tlvData = tlvStart + 8;
      if (diagnostics.tlvTypeCount < 8) {
        diagnostics.tlvTypes[diagnostics.tlvTypeCount++] = tlvType;
      }

      size_t includeEnd = (tlvLen >= 8U && tlvLen <= totalLen - tlvStart)
        ? tlvStart + tlvLen : totalLen + 1U;
      size_t payloadEnd = (tlvLen <= totalLen - tlvData)
        ? tlvData + tlvLen : totalLen + 1U;
      bool includeInBounds = includeEnd <= totalLen;
      bool payloadInBounds = payloadEnd <= totalLen;
      bool includeValid = includeInBounds;
      bool payloadValid = payloadInBounds;

      if (t + 1U < numTLVs) {
        includeValid = includeValid && plausibleTlvHeader(includeEnd);
        payloadValid = payloadValid && plausibleTlvHeader(payloadEnd);
      }

      bool lengthIncludesHeader = false;
      if (includeValid && !payloadValid) {
        lengthIncludesHeader = true;
      } else if (!includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else if (includeValid && payloadValid && preferredLengthConventionKnown) {
        lengthIncludesHeader = preferredLengthIncludesHeader;
      } else if (includeValid && payloadValid && tlvType == 1U) {
        const size_t expectedPointBytes = (size_t)numObj * 16U;
        lengthIncludesHeader = tlvLen >= expectedPointBytes + 8U;
      } else if (includeValid && payloadValid) {
        lengthIncludesHeader = false;
      } else if (tlvType == 2U && preferredLengthConventionKnown &&
                 ((preferredLengthIncludesHeader && includeInBounds) ||
                  (!preferredLengthIncludesHeader && payloadInBounds))) {
        lengthIncludesHeader = preferredLengthIncludesHeader;
      } else {
        if (!diagnostics.pointsTlvSeen || !diagnostics.sideInfoTlvSeen) {
          diagnostics.malformed = true;
        }
        break;
      }

      preferredLengthConventionKnown = true;
      preferredLengthIncludesHeader = lengthIncludesHeader;
      size_t tlvEnd = lengthIncludesHeader ? includeEnd : payloadEnd;
      size_t payloadLen = tlvEnd - tlvData;

      if (tlvType == 1 && payloadLen >= numObj * 16) {
        diagnostics.pointsTlvSeen = true;
        size_t off = tlvData;
        for (uint32_t i = 0; i < numObj && (off + 16) <= tlvEnd; i++) {
          RadarPoint pt;
          memcpy(&pt.x, pkt + off,     4);
          memcpy(&pt.y, pkt + off + 4, 4);
          memcpy(&pt.z, pkt + off + 8, 4);
          memcpy(&pt.velocity, pkt + off + 12, 4);
          pt.snr = SNR_UNKNOWN;
          pt.noise = 0;

          if (isfinite(pt.x) && isfinite(pt.y) && isfinite(pt.z) &&
              isfinite(pt.velocity) && fabs(pt.x) < 100 &&
              fabs(pt.y) < 100 && fabs(pt.z) < 100 &&
              fabs(pt.velocity) < 100) {
            points.push_back(pt);
          }
          off += 16;
        }
      }
      else if (tlvType == 7 && points.size() > 0 && payloadLen >= numObj * 4) {
        diagnostics.sideInfoTlvSeen = true;
        size_t off = tlvData;
        for (size_t i = 0; i < points.size() && (off + 4) <= tlvEnd; i++) {
          points[i].snr = u16le(pkt + off);
          points[i].noise = u16le(pkt + off + 2);
          off += 4;
        }
      }
      else if (tlvType == 2 && payloadLen >= 2U) {
        size_t availableBins = payloadLen / 2U;
        diagnostics.rangeProfileBinCount =
          availableBins < RANGE_PROFILE_MAX_BINS
            ? availableBins : RANGE_PROFILE_MAX_BINS;
        for (size_t i = 0; i < diagnostics.rangeProfileBinCount; i++) {
          diagnostics.rangeProfile[i] = u16le(pkt + tlvData + i * 2U);
        }
        diagnostics.rangeProfileSeen = diagnostics.rangeProfileBinCount > 0;
      }

      tlvStart = tlvEnd;
    }

    diagnostics.parsedPointCount = points.size();
    return true;
  }
};

void pushLongRangeGunObservation(TrackedObject& track, bool pass);
void evaluateLongRangeGunSignature(TrackedObject& track,
                                   const ParserDiagnostics& diagnostics);

void pushLongRangeGunObservation(TrackedObject& track, bool pass) {
  track.longRangeGunHitHistory = (uint8_t)(
    ((track.longRangeGunHitHistory << 1) | (pass ? 1u : 0u)) &
    ((1u << LONG_RANGE_GUN_HIT_WINDOW) - 1u));
  int hits = 0;
  for (int i = 0; i < LONG_RANGE_GUN_HIT_WINDOW; i++) {
    if (track.longRangeGunHitHistory & (1u << i)) hits++;
  }
  track.longRangeGunWindowHits = hits;
  track.longRangeGunConfirmed = hits >= LONG_RANGE_GUN_REQUIRED_HITS;
}

bool findRangeProfilePeakNear(const ParserDiagnostics& diagnostics,
                              float targetRangeMeters,
                              float& peakRangeMeters,
                              float& relativePowerDb,
                              uint16_t& rawValue) {
  if (!diagnostics.rangeProfileSeen || diagnostics.rangeProfileBinCount == 0)
    return false;

  int centerBin = (int)lroundf(targetRangeMeters / RANGE_BIN_SIZE_METERS);
  int firstBin = max(0, centerBin - 2);
  int lastBin = min((int)diagnostics.rangeProfileBinCount - 1, centerBin + 2);
  if (firstBin > lastBin) return false;

  int peakBin = firstBin;
  rawValue = diagnostics.rangeProfile[firstBin];
  for (int bin = firstBin + 1; bin <= lastBin; bin++) {
    if (diagnostics.rangeProfile[bin] > rawValue) {
      rawValue = diagnostics.rangeProfile[bin];
      peakBin = bin;
    }
  }

  peakRangeMeters = peakBin * RANGE_BIN_SIZE_METERS;
  relativePowerDb = rawValue * RANGE_PROFILE_RAW_TO_DB
                  + RANGE_PROFILE_FFT_COMPENSATION_DB;
  return true;
}

void evaluateLongRangeGunSignature(TrackedObject& track,
                                   const ParserDiagnostics& diagnostics) {
  track.longRangeGunEvidenceThisFrame = false;
  track.longRangePowerAvailable = false;
  track.longRangePowerDb = 0.0f;
  track.longRangePowerRange = 0.0f;
  track.longRangePowerRaw = 0;

  if (!track.active || track.allDescriptors.empty()) {
    track.longRangeGunHitHistory = 0;
    track.longRangeGunWindowHits = 0;
    track.longRangeGunConfirmed = false;
    return;
  }

  if (!track.measuredThisFrame) {
    pushLongRangeGunObservation(track, false);
    return;
  }

  const AdvancedShapeDescriptor& desc = track.allDescriptors.back();
  const float rangeMeters = track.position.norm();
  track.longRangePowerAvailable = findRangeProfilePeakNear(
    diagnostics, rangeMeters, track.longRangePowerRange,
    track.longRangePowerDb, track.longRangePowerRaw);

  const bool candidateIsGun = track.candidateName.equalsIgnoreCase("gun");
  const bool passes =
    desc.isValid &&
    candidateIsGun &&
    track.candidateDistance <= LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE &&
    rangeMeters >= LONG_RANGE_GUN_MIN_RANGE &&
    rangeMeters <= LONG_RANGE_GUN_MAX_RANGE &&
    track.longRangePowerAvailable &&
    track.longRangePowerDb >= LONG_RANGE_GUN_MIN_POWER_DB &&
    desc.length >= LONG_RANGE_GUN_MIN_LENGTH &&
    desc.length <= LONG_RANGE_GUN_MAX_LENGTH &&
    desc.width >= LONG_RANGE_GUN_MIN_WIDTH &&
    desc.width <= LONG_RANGE_GUN_MAX_WIDTH &&
    desc.meanSnr >= LONG_RANGE_GUN_MIN_MEAN_SNR &&
    desc.maxSnr >= LONG_RANGE_GUN_MIN_PEAK_SNR &&
    desc.maxAbsRadialVelocity <= LONG_RANGE_GUN_MAX_ABS_VELOCITY &&
    fabs(track.position.z) <= LONG_RANGE_GUN_MAX_ABS_Z &&
    desc.confidenceScore >= LONG_RANGE_GUN_MIN_QUALITY &&
    desc.numPoints >= LONG_RANGE_GUN_MIN_POINTS;

  track.longRangeGunEvidenceThisFrame = passes;
  pushLongRangeGunObservation(track, passes);
}

// Point processing
struct FilterDiagnostics {
  size_t inputCount;
  size_t acceptedCount;
  size_t rangeRejected;
  size_t snrUnknown;
  size_t snrBelowThreshold;
  float inputMinRange;
  float inputMaxRange;
  float acceptedMinRange;
  float acceptedMaxRange;

  FilterDiagnostics()
    : inputCount(0), acceptedCount(0), rangeRejected(0), snrUnknown(0),
      snrBelowThreshold(0), inputMinRange(999999.0f), inputMaxRange(0.0f),
      acceptedMinRange(999999.0f), acceptedMaxRange(0.0f) {}
};

struct DbscanDiagnostics {
  size_t maxNeighborCount;
  size_t coreCandidateCount;
  float minEps;
  float maxEps;

  DbscanDiagnostics()
    : maxNeighborCount(0), coreCandidateCount(0),
      minEps(999999.0f), maxEps(0.0f) {}
};

float adaptiveDbscanEps(float rangeMeters) {
  if (rangeMeters <= DBSCAN_NEAR_RANGE_MAX) return DBSCAN_EPS_NEAR;
  if (rangeMeters <= DBSCAN_MID_RANGE_MAX) return DBSCAN_EPS_MID;
  return DBSCAN_EPS_FAR;
}

FilterDiagnostics filterPoints(std::vector<RadarPoint>& points);
void clusterDBSCAN(const std::vector<RadarPoint>& points,
                   std::vector<ClusterData>& clusters,
                   DbscanDiagnostics& diagnostics);

FilterDiagnostics filterPoints(std::vector<RadarPoint>& points) {
  FilterDiagnostics diagnostics;
  diagnostics.inputCount = points.size();
  std::vector<RadarPoint> filtered;
  filtered.reserve(points.size());
  for (const auto& pt : points) {
    float range = sqrt(pt.x*pt.x + pt.y*pt.y + pt.z*pt.z);
    diagnostics.inputMinRange = min(diagnostics.inputMinRange, range);
    diagnostics.inputMaxRange = max(diagnostics.inputMaxRange, range);
    if (range < RANGE_MIN || range > RANGE_MAX) {
      diagnostics.rangeRejected++;
      continue;
    }
    if (pt.snr == SNR_UNKNOWN) {
      diagnostics.snrUnknown++;
      continue;
    }
    if (pt.snr < MIN_SNR) {
      diagnostics.snrBelowThreshold++;
      continue;
    }
    filtered.push_back(pt);
    diagnostics.acceptedMinRange = min(diagnostics.acceptedMinRange, range);
    diagnostics.acceptedMaxRange = max(diagnostics.acceptedMaxRange, range);
  }
  points = filtered;
  diagnostics.acceptedCount = points.size();
  return diagnostics;
}

void clusterDBSCAN(const std::vector<RadarPoint>& points,
                   std::vector<ClusterData>& clusters,
                   DbscanDiagnostics& diagnostics) {

  for (size_t i = 0; i < points.size(); i++) {
    Point3D pi(points[i].x, points[i].y, points[i].z);
    float eps = adaptiveDbscanEps(pi.norm());
    diagnostics.minEps = min(diagnostics.minEps, eps);
    diagnostics.maxEps = max(diagnostics.maxEps, eps);

    size_t totalNeighbors = 0;
    for (size_t j = 0; j < points.size(); j++) {
      Point3D pj(points[j].x, points[j].y, points[j].z);
      if (pi.distanceTo(pj) < eps) totalNeighbors++;
    }
    diagnostics.maxNeighborCount = max(diagnostics.maxNeighborCount,
                                       totalNeighbors);
    if ((int)totalNeighbors >= DBSCAN_MIN_POINTS) {
      diagnostics.coreCandidateCount++;
    }
  }

  if (points.size() < (size_t)DBSCAN_MIN_POINTS) return;

  const int UNVISITED = -2;
  const int NOISE = -1;
  std::vector<int> labels(points.size(), UNVISITED);
  int clusterID = 0;

  for (size_t i = 0; i < points.size(); i++) {
    if (labels[i] != UNVISITED) continue;

    std::vector<size_t> neighbors;
    neighbors.reserve(50);
    Point3D pi(points[i].x, points[i].y, points[i].z);
    float eps = adaptiveDbscanEps(pi.norm());

    for (size_t j = 0; j < points.size(); j++) {
      Point3D pj(points[j].x, points[j].y, points[j].z);
      if (pi.distanceTo(pj) < eps) neighbors.push_back(j);
    }

    if ((int)neighbors.size() < DBSCAN_MIN_POINTS) {
      labels[i] = NOISE;
      continue;
    }

    labels[i] = clusterID;
    std::vector<bool> queued(points.size(), false);
    queued[i] = true;
    for (size_t neighborIdx : neighbors) queued[neighborIdx] = true;

    for (size_t k = 0; k < neighbors.size(); k++) {
      size_t nIdx = neighbors[k];

      if (labels[nIdx] == NOISE) {
        labels[nIdx] = clusterID;
        continue;
      }

      if (labels[nIdx] != UNVISITED) continue;

      labels[nIdx] = clusterID;

      Point3D pn(points[nIdx].x, points[nIdx].y, points[nIdx].z);
      float subEps = adaptiveDbscanEps(pn.norm());
      std::vector<size_t> subNeighbors;
      subNeighbors.reserve(32);
      for (size_t j = 0; j < points.size(); j++) {
        Point3D pj(points[j].x, points[j].y, points[j].z);
        if (pn.distanceTo(pj) < subEps) {
          subNeighbors.push_back(j);
        }
      }

      if ((int)subNeighbors.size() >= DBSCAN_MIN_POINTS) {
        for (size_t subIdx : subNeighbors) {
          if (!queued[subIdx]) {
            neighbors.push_back(subIdx);
            queued[subIdx] = true;
          }
        }
      }
    }

    clusterID++;
  }

  for (int cid = 0; cid < clusterID; cid++) {
    ClusterData cluster;
    cluster.points.reserve(100);
    cluster.snrs.reserve(100);
    cluster.velocities.reserve(100);
    cluster.noises.reserve(100);

    for (size_t i = 0; i < points.size(); i++) {
      if (labels[i] == cid) {
        cluster.points.push_back(Point3D(points[i].x, points[i].y, points[i].z));
        cluster.snrs.push_back(points[i].snr);
        cluster.velocities.push_back(points[i].velocity);
        cluster.noises.push_back(points[i].noise);
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

  double velocitySum = 0.0;
  float maxAbsVelocity = 0.0f;
  double noiseSum = 0.0;
  double marginSum = 0.0;
  size_t metricCount = min(cluster.velocities.size(), cluster.noises.size());
  for (size_t i = 0; i < metricCount; i++) {
    velocitySum += (double)cluster.velocities[i];
    maxAbsVelocity = max(maxAbsVelocity, fabs(cluster.velocities[i]));
    noiseSum += (double)cluster.noises[i];
    marginSum += (double)cluster.snrs[i] - (double)cluster.noises[i];
  }
  if (metricCount > 0) {
    descriptor.meanRadialVelocity = (float)(velocitySum / metricCount);
    descriptor.maxAbsRadialVelocity = maxAbsVelocity;
    descriptor.meanNoise = (float)(noiseSum / metricCount);
    descriptor.meanSnrMargin = (float)(marginSum / metricCount);
  }
  return true;
}

// Main system
HardwareSerial RadarSerial(1);
RadarParser* parser = nullptr;
CalibrationDatabase* calibDB = nullptr;
ObjectTracker* tracker = nullptr;
AlertManager* alertManager = nullptr;

void recordLongRangeGunMissAllTracks() {
  if (tracker == nullptr) return;
  for (auto& track : tracker->getTracks()) {
    if (!track.active) continue;
    track.longRangeGunEvidenceThisFrame = false;
    track.longRangePowerAvailable = false;
    track.longRangePowerDb = 0.0f;
    track.longRangePowerRange = 0.0f;
    track.longRangePowerRaw = 0;
    pushLongRangeGunObservation(track, false);
  }
}

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
  Serial.println("SPIFFS mounted");

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.printf("Button initialized on GPIO%d\n", BUTTON_PIN);

  RadarSerial.setRxBufferSize(MAX_PACKET_LEN);
  RadarSerial.begin(RADAR_BAUD, SERIAL_8N1, RADAR_RX_PIN, RADAR_TX_PIN);
  Serial.printf("Radar UART: RX=GPIO%d @ %ld baud (TX unused)\n", RADAR_RX_PIN, RADAR_BAUD);

  parser  = new RadarParser(&RadarSerial);
  calibDB = new CalibrationDatabase();
  tracker = new ObjectTracker();
  alertManager = new AlertManager();
  
  alertManager->init();

  Serial.printf("Components initialized (free heap: %d KB)\n", ESP.getFreeHeap() / 1024);

  if (calibDB->loadCalibration()) Serial.println("Calibration loaded successfully");
  else Serial.println("WARNING: Calibration data not found");

  Serial.println("\n=================================================");
  Serial.println("FEATURES:");
  Serial.printf("  - Ghost point rejection (min %d points)\n", MIN_POINTS_FOR_VALID_OBJECT);
  Serial.println("  - Quality validation (SNR, density, coherence)");
  Serial.printf("  - Requires %d consecutive valid detections\n", MIN_CONSECUTIVE_DETECTIONS);
  Serial.printf("  - Requires %d stable frames for confident ID\n", MIN_STABLE_FRAMES);
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

  bool currentButtonState = digitalRead(BUTTON_PIN);
  
  if (currentButtonState == LOW && lastButtonState == HIGH) {
    if (millis() - lastButtonPress > 500) {
      systemRunning = !systemRunning;
      lastButtonPress = millis();
      
      if (systemRunning) {
        Serial.println("\nSYSTEM STARTED - Detection active");
      } else {
        Serial.println("\nSYSTEM STOPPED - Detection paused");
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
      Serial.printf("Waiting for frames... (%d) | UART avail: %d bytes\n",
                    noFrameCount, RadarSerial.available());
    }
    delay(10);
    return;
  }

  lastFrameTime = millis();
  noFrameCount = 0;
  const ParserDiagnostics parserInfo = parser->getDiagnostics();
  const size_t rawPointCount = points.size();

  if (points.empty()) {
    recordLongRangeGunMissAllTracks();
    Serial.printf("Radar frame %lu: no points | packet=%luB objects=%lu TLVs=%lu pointsTLV=%s sideInfo=%s malformed=%s\n",
                  (unsigned long)parserInfo.frameNumber,
                  (unsigned long)parserInfo.packetLength,
                  (unsigned long)parserInfo.uartObjectCount,
                  (unsigned long)parserInfo.numTLVs,
                  parserInfo.pointsTlvSeen ? "yes" : "no",
                  parserInfo.sideInfoTlvSeen ? "yes" : "no",
                  parserInfo.malformed ? "yes" : "no");
    delay(10);
    return;
  }

  const FilterDiagnostics filterInfo = filterPoints(points);
  const size_t filteredPointCount = points.size();
  if (points.empty()) {
    recordLongRangeGunMissAllTracks();
    Serial.printf("Radar frame %lu: %u raw, 0 accepted | range=%u unknownSNR=%u lowSNR=%u inputRange=%.2f-%.2fm | sideInfo=%s malformed=%s TLVs=[",
                  (unsigned long)parserInfo.frameNumber,
                  (unsigned)filterInfo.inputCount,
                  (unsigned)filterInfo.rangeRejected,
                  (unsigned)filterInfo.snrUnknown,
                  (unsigned)filterInfo.snrBelowThreshold,
                  filterInfo.inputMinRange,
                  filterInfo.inputMaxRange,
                  parserInfo.sideInfoTlvSeen ? "yes" : "no",
                  parserInfo.malformed ? "yes" : "no");
    for (uint8_t i = 0; i < parserInfo.tlvTypeCount; i++) {
      if (i) Serial.print(',');
      Serial.print(parserInfo.tlvTypes[i]);
    }
    Serial.println("]");
    delay(10);
    return;
  }

  std::vector<ClusterData> clusters;
  DbscanDiagnostics dbscanInfo;
  clusterDBSCAN(points, clusters, dbscanInfo);
  if (clusters.empty()) {
    recordLongRangeGunMissAllTracks();
    Serial.printf("Radar frame %lu: %u filtered points, no DBSCAN cluster | acceptedRange=%.2f-%.2fm epsRange=%.2f-%.2fm minPts=%d total maxNeighbors=%u coreCandidates=%u\n",
                  (unsigned long)parserInfo.frameNumber,
                  (unsigned)filteredPointCount,
                  filterInfo.acceptedMinRange, filterInfo.acceptedMaxRange,
                  dbscanInfo.minEps, dbscanInfo.maxEps,
                  DBSCAN_MIN_POINTS,
                  (unsigned)dbscanInfo.maxNeighborCount,
                  (unsigned)dbscanInfo.coreCandidateCount);
    delay(10);
    return;
  }

  std::vector<AdvancedShapeDescriptor> descriptors;
  std::vector<ClusterData> validClusters;

  for (const auto& cluster : clusters) {
    AdvancedShapeDescriptor desc;
    if (extractDimensions(cluster, desc)) {
      descriptors.push_back(desc);
      validClusters.push_back(cluster);
    }
  }
  
  if (validClusters.empty()) {
    recordLongRangeGunMissAllTracks();
    Serial.printf("Radar frame %lu: %u clusters, none produced a valid descriptor\n",
                  (unsigned long)parserInfo.frameNumber, (unsigned)clusters.size());
    delay(10);
    return;
  }

  tracker->update(validClusters, descriptors);
  auto& tracks = tracker->getTracks();

  for (auto& tr : tracks) {
    if (tr.active) {
      tracker->updateMatchWithHysteresis(tr, calibDB);
      evaluateLongRangeGunSignature(tr, parserInfo);
    }
  }

  int activeCount = 0;
  bool gunDetected = false;
  
  for (const auto& tr : tracks) {
    if (tr.active && tr.measuredThisFrame && !tr.isGhost && 
        tr.state != TrackedObject::GHOST && 
        tr.state != TrackedObject::LOW_QUALITY) {
      activeCount++;
      
      if (tr.matchedName.equalsIgnoreCase("gun") &&
          tr.state == TrackedObject::CONFIRMED) {
        gunDetected = true;
      }
      if (tr.longRangeGunConfirmed) {
        gunDetected = true;
      }
    }
  }
  
  if (gunDetected) {
    if (alertManager->isActive()) {
      alertManager->refresh();
    } else {
      alertManager->triggerAlert();
    }
  }
  
  if (activeCount == 0) {
    noValidObjectFrames++;
    if (noValidObjectFrames % 20 == 0) {
      Serial.printf("\nNo valid objects (filtering ghost points) - frame %d\n", noValidObjectFrames);
    }
    delay(10);
    return;
  }

  noValidObjectFrames = 0;
  frameCount++;

  Serial.println("\n=================================================");
  Serial.printf("Frame %d (radar %lu) | Valid Objects: %d",
                frameCount, (unsigned long)parserInfo.frameNumber, activeCount);
  if (alertManager->isActive()) {
    Serial.print(" | ALERT ACTIVE");
  }
  Serial.println();
  Serial.printf("UART: packet=%lu B, objects=%lu, raw=%u, filtered=%u, TLVs=%lu [",
                (unsigned long)parserInfo.packetLength,
                (unsigned long)parserInfo.uartObjectCount,
                (unsigned)rawPointCount,
                (unsigned)filteredPointCount,
                (unsigned long)parserInfo.numTLVs);
  for (uint8_t i = 0; i < parserInfo.tlvTypeCount; i++) {
    if (i) Serial.print(',');
    Serial.print(parserInfo.tlvTypes[i]);
  }
  Serial.printf("] points=%s sideInfo=%s malformed=%s\n",
                parserInfo.pointsTlvSeen ? "yes" : "no",
                parserInfo.sideInfoTlvSeen ? "yes" : "no",
                parserInfo.malformed ? "yes" : "no");
  Serial.println("=================================================");

  for (const auto& track : tracks) {
    if (!track.active || !track.measuredThisFrame) continue;
    
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

    const char* stateLabel;
    switch(track.state) {
      case TrackedObject::DETECTING: stateLabel = "DETECTING"; break;
      case TrackedObject::CONFIRMED: stateLabel = "CONFIRMED"; break;
      case TrackedObject::TEMP_LOST: stateLabel = "TEMP_LOST"; break;
      case TrackedObject::LOST: stateLabel = "LOST"; break;
      case TrackedObject::GHOST: stateLabel = "GHOST"; break;
      case TrackedObject::LOW_QUALITY: stateLabel = "LOW_QUALITY"; break;
      default: stateLabel = "UNKNOWN";
    }

    Serial.printf("\n  [%s][%s][%s] Object ID: %d", stateLabel, objIcon, matIcon, track.id);
    
    if ((track.matchedName.equalsIgnoreCase("gun") &&
         track.state == TrackedObject::CONFIRMED) ||
        track.longRangeGunConfirmed) {
      Serial.print(" | GUN DETECTED");
    }
    Serial.println();

    if (track.longRangeGunConfirmed) {
      Serial.printf("     LONG-RANGE GUN SIGNATURE (%d/%d hits in last %d frames)\n",
                    track.longRangeGunWindowHits,
                    LONG_RANGE_GUN_REQUIRED_HITS,
                    LONG_RANGE_GUN_HIT_WINDOW);
    } else if (track.matchedName.length() > 0) {
      if (track.state == TrackedObject::TEMP_LOST) {
        Serial.printf("     IDENTIFIED (HELD): '%s' [%d/%d frames]\n",
                     track.matchedName.c_str(), 
                     track.framesSinceLastMatch, 
                     PRESENCE_HOLD_FRAMES);
      } else {
        Serial.printf("     IDENTIFIED: '%s'\n", track.matchedName.c_str());
        const char* confLevel = desc.getMatchConfidenceLevel(track.lastMatchDistance);
        int confPct = desc.getMatchConfidencePct(track.lastMatchDistance);
        Serial.printf("     Match Confidence: %s (%d%%)\n", confLevel, confPct);
      }
    } else if (track.state == TrackedObject::DETECTING) {
      int needMore = max(0, MIN_CONSECUTIVE_DETECTIONS - track.consecutiveValidDetections);
      Serial.printf("     DETECTING... (need %d more valid frames)\n", needMore);
    } else {
      Serial.println("     UNKNOWN OBJECT");
    }

    Serial.printf("     Position estimate: X=%+.4fm Y=%+.4fm Z=%+.4fm | Range=%.4fm\n",
                  pos.x, pos.y, pos.z, pos.norm());
    float profilePeakRange = 0.0f;
    float profileRelativePowerDb = 0.0f;
    uint16_t profileRawValue = 0;
    if (findRangeProfilePeakNear(parserInfo, pos.norm(), profilePeakRange,
                                 profileRelativePowerDb, profileRawValue)) {
      Serial.printf("     Range-profile relative power: %.2f dB at %.4fm | raw=%u (relative, not dBm)\n",
                    profileRelativePowerDb, profilePeakRange,
                    (unsigned)profileRawValue);
    } else {
      Serial.println("     Range-profile relative power: unavailable (TLV 2 missing)");
    }
    Serial.printf("     Radial velocity estimate: mean=%+.4fm/s peak=%.4fm/s | Track velocity=(%+.4f,%+.4f,%+.4f)m/s\n",
                  desc.meanRadialVelocity, desc.maxAbsRadialVelocity,
                  track.velocity.x, track.velocity.y, track.velocity.z);
    Serial.printf("     Sensor side info (raw): SNR mean=%.3f min=%.0f peak=%.0f | Noise mean=%.3f\n",
                  desc.meanSnr, desc.minSnr, desc.maxSnr,
                  desc.meanNoise);
    Serial.printf("     Geometry estimate: L=%.2fcm W=%.2fcm H=%.2fcm | points=%d density=%.2f/m3\n",
                  desc.length * 100.0f, desc.width * 100.0f,
                  desc.height * 100.0f, desc.numPoints, desc.pointDensity);
    Serial.printf("     Shape: planarity=%.4f flatness=%.4f thickness=%.2fcm spread=%.2fcm\n",
                  desc.planarityScore, desc.flatnessRatio,
                  desc.pointCloudThickness * 100.0f, desc.spatialSpread * 100.0f);
    Serial.printf("     Quality: %.0f%% | valid=%s | reason=%s | score=%.4f\n",
                  desc.confidenceScore, desc.isValid ? "yes" : "no",
                  desc.invalidReason, track.lastMatchDistance);
    Serial.printf("     Best calibration candidate: %s | distance=%.4f | threshold=%.2f\n",
                  track.candidateName.length() ? track.candidateName.c_str() : "none",
                  track.candidateDistance, SHAPE_DESCRIPTOR_TOLERANCE);
    Serial.printf("     Long-range gun evidence: pass=%s hits=%d/%d confirmed=%s | power=%s",
                  track.longRangeGunEvidenceThisFrame ? "yes" : "no",
                  track.longRangeGunWindowHits,
                  LONG_RANGE_GUN_REQUIRED_HITS,
                  track.longRangeGunConfirmed ? "yes" : "no",
                  track.longRangePowerAvailable ? "available" : "missing");
    if (track.longRangePowerAvailable) {
      Serial.printf(" %.2fdB@%.4fm raw=%u",
                    track.longRangePowerDb,
                    track.longRangePowerRange,
                    (unsigned)track.longRangePowerRaw);
    }
    Serial.printf(" | candidateLimit=%.2f\n",
                  LONG_RANGE_GUN_MAX_CANDIDATE_DISTANCE);
  }

  delay(1);
}

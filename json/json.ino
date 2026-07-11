// #include <SPIFFS.h>

// void setup() {
//   Serial.begin(115200);
//   delay(300);

//   // Mount SPIFFS
//   if (!SPIFFS.begin(true)) {   // true = format if mount fails
//     Serial.println("Failed to mount SPIFFS.");
//     return;
//   }
//   Serial.println("SPIFFS mounted successfully.");

//   // The NEW JSON content you want to store (replaces old file content)
//   const char* newJson =
// R"JSON(
// {
//   "GUN": {
//     "length": 0.11671787063885937,
//     "width": 0.06258282672879945,
//     "height": 0.019146819622172084,
//     "volume": 0.00013985860017487966,
//     "surface_area": 0.021475144769948787,
//     "aspect_ratio_1": 0.5361843066699762,
//     "aspect_ratio_2": 0.1640421940117497,
//     "std_length": 0.002854603586682521,
//     "std_width": 0.004364153612781026,
//     "std_height": 0.0028636358497230643,
//     "flatness_ratio": 0.1640421940117497,
//     "dimensionality_score": 0.42106154353497416,
//     "z_bimodality": 0.0,
//     "local_density_variance": 0.0,
//     "point_cloud_thickness": 0.019146819622172073,
//     "planarity_score": 0.9822884472639068,
//     "rcs_estimate": 1242.435056982461,
//     "mean_snr": 240.9102564102564,
//     "max_snr": 266.0,
//     "point_density": 85191.81636834162,
//     "reflection_consistency": 0.09964447279018263,
//     "object_type": "3D_OBJECT",
//     "material_type": "METAL",
//     "num_measurements": 256,
//     "calibrated_at": "2026-01-13 10:57:39"
//   },
//   "BOX": {
//     "length": 0.11724192711719145,
//     "width": 0.04967631445339413,
//     "height": 0.01906864854538637,
//     "volume": 0.00011105860914190104,
//     "surface_area": 0.018014104245837832,
//     "aspect_ratio_1": 0.42370414723388494,
//     "aspect_ratio_2": 0.16264220805683308,
//     "std_length": 0.02746221241800138,
//     "std_width": 0.020337812222547273,
//     "std_height": 0.0036658776970513803,
//     "flatness_ratio": 0.16264220805683308,
//     "dimensionality_score": 0.40377718828146447,
//     "z_bimodality": 0.0,
//     "local_density_variance": 0.0,
//     "point_cloud_thickness": 0.01906864854538636,
//     "planarity_score": 0.9823053500659028,
//     "rcs_estimate": 1579.4708200251434,
//     "mean_snr": 247.33333333333334,
//     "max_snr": 280.0,
//     "point_density": 107086.81904845231,
//     "reflection_consistency": 0.09894144506915978,
//     "object_type": "3D_OBJECT",
//     "material_type": "METAL",
//     "num_measurements": 256,
//     "calibrated_at": "2026-01-13 10:59:08"
//   },
//   "gun": {
//     "length": 0.16590541918684062,
//     "width": 0.06502599341212564,
//     "height": 0.03221852747345581,
//     "volume": 0.000347578780616583,
//     "surface_area": 0.03645686951276639,
//     "aspect_ratio_1": 0.39194380621821884,
//     "aspect_ratio_2": 0.19419699148091385,
//     "std_length": 0.045437484749319905,
//     "std_width": 0.0247961219441657,
//     "std_height": 0.015436380396504749,
//     "flatness_ratio": 0.1870496849262567,
//     "dimensionality_score": 0.44927980768693654,
//     "z_bimodality": 0.0,
//     "local_density_variance": 0.0,
//     "point_cloud_thickness": 0.03219383856805497,
//     "planarity_score": 0.9674950724741016,
//     "rcs_estimate": 314.2145842387142,
//     "mean_snr": 164.04166666666669,
//     "max_snr": 193.0,
//     "point_density": 31202.222533456,
//     "reflection_consistency": 0.165745413782714,
//     "object_type": "3D_OBJECT",
//     "material_type": "METAL",
//     "num_measurements": 256,
//     "calibrated_at": "2026-01-29 09:12:10"
//   }
// }
// )JSON";

//   // Write (overwrite) file
//   File f = SPIFFS.open("/radar_calibration.json", FILE_WRITE);
//   if (!f) {
//     Serial.println("Failed to open /radar_calibration.json for writing.");
//     return;
//   }

//   size_t written = f.print(newJson);
//   f.close();

//   Serial.print("Wrote bytes: ");
//   Serial.println(written);

//   // Read back to verify
//   File r = SPIFFS.open("/radar_calibration.json", FILE_READ);
//   if (!r) {
//     Serial.println("Failed to open /radar_calibration.json for reading.");
//     return;
//   }

//   Serial.println("----- FILE CONTENT BEGIN -----");
//   while (r.available()) Serial.write(r.read());
//   Serial.println("\n----- FILE CONTENT END -----");
//   r.close();
// }

// void loop() {}



#include <Arduino.h>
#include <SPIFFS.h>

void listSPIFFS(const char* path) {
  File root = SPIFFS.open(path);
  if (!root) {
    Serial.println("Failed to open root directory.");
    return;
  }
  if (!root.isDirectory()) {
    Serial.println("Root is not a directory.");
    root.close();
    return;
  }

  File file = root.openNextFile();
  while (file) {
    Serial.print(file.isDirectory() ? "[DIR ] " : "[FILE] ");
    Serial.print(file.name());
    if (!file.isDirectory()) {
      Serial.print("  | size: ");
      Serial.print(file.size());
      Serial.println(" bytes");
    } else {
      Serial.println();
    }
    file = root.openNextFile();
  }
  root.close();
}

void setup() {
  Serial.begin(115200);
  delay(300);

  // Mount SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("SPIFFS mount failed!");
    return;
  }

  Serial.println("SPIFFS mounted OK.");

  // Print storage stats
  size_t total = SPIFFS.totalBytes();
  size_t used  = SPIFFS.usedBytes();
  Serial.println("\n===== SPIFFS Storage =====");
  Serial.printf("Total: %u bytes\n", (unsigned)total);
  Serial.printf("Used : %u bytes\n", (unsigned)used);
  Serial.printf("Free : %u bytes\n", (unsigned)(total - used));
  Serial.println("==========================\n");

  // List files
  Serial.println("===== SPIFFS Files =====");
  listSPIFFS("/");
  Serial.println("========================");
}

void loop() {}

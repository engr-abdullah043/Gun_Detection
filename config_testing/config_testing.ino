// // // stroing the data in flash memory of esp32
// #include <FS.h>
// #include <SPIFFS.h>

// const char* CONFIG_FILE = "/radar_config.txt";

// // The configuration content you provided
// const char* radarConfig = R"cfg(
// % ***************************************************************
// % Created for SDK ver:03.06
// % Created using Visualizer ver:3.6.0.0
// % Frequency:60
// % Platform:xWR68xx_AOP
// % Scene Classifier:best_range_res
// % Azimuth Resolution(deg):30 + 30
// % Range Resolution(m):0.044
// % Maximum unambiguous Range(m):3.95
// % Maximum Radial Velocity(m/s):1
// % Radial velocity resolution(m/s):0.13
// % Frame Duration(msec):100
// % RF calibration data:None
// % ***************************************************************
// sensorStop
// flushCfg
// dfeDataOutputMode 1
// channelCfg 15 7 0
// adcCfg 2 1
// adcbufCfg -1 0 1 1 1
// profileCfg 0 60 359 7 57.14 0 0 70 1 112 2279 0 0 158
// chirpCfg 0 0 0 0 0 0 0 1
// chirpCfg 1 1 0 0 0 0 0 2
// chirpCfg 2 2 0 0 0 0 0 4
// frameCfg 0 2 16 0 100 1 0
// lowPower 0 0
// guiMonitor -1 1 1 0 0 0 1
// cfarCfg -1 0 2 8 4 3 0 23 0
// cfarCfg -1 1 0 4 2 3 1 15 0
// multiObjBeamForming -1 1 0.5
// clutterRemoval -1 0
// calibDcRangeSig -1 0 -5 8 256
// extendedMaxVelocity -1 0
// lvdsStreamCfg -1 0 0 0
// compRangeBiasAndRxChanPhase 0.0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0 1 0 -1 0
// measureRangeBiasAndRxChanPhase 0 1.5 0.2
// CQRxSatMonitor 0 3 5 121 0
// CQSigImgMonitor 0 55 4
// analogMonitor 0 0
// aoaFovCfg -1 -60 60 -30 30
// cfarFovCfg -1 0 0 3.90
// cfarFovCfg -1 1 -1 1.00
// calibData 0 0 0
// sensorStart
// )cfg";

// void setup() {
//   // Start Serial communication
//   Serial.begin(115200);

//   // Initialize SPIFFS (File system)
//   if (!SPIFFS.begin(true)) {
//     Serial.println("SPIFFS Mount Failed");
//     return;
//   }

//   // Open the file in write mode
//   File configFile = SPIFFS.open(CONFIG_FILE, FILE_WRITE);
//   if (!configFile) {
//     Serial.println("Failed to open file for writing");
//     return;
//   }

//   // Write the configuration to the file
//   configFile.print(radarConfig);

//   // Close the file after writing
//   configFile.close();
//   Serial.println("Configuration file saved to SPIFFS.");
// }

// void loop() {
//   // Add any code to trigger reading and sending config to radar
// }

//checking the data if its properly stored or not
// #include <FS.h>
// #include <SPIFFS.h>

// const char* CONFIG_FILE = "/radar_config.txt";  // Path to your config file

// void setup() {
//   Serial.begin(115200);  // Start Serial Monitor

//   // Initialize SPIFFS (File system)
//   if (!SPIFFS.begin(true)) {
//     Serial.println("SPIFFS Mount Failed");
//     return;
//   }

//   // Check if the file exists
//   if (SPIFFS.exists(CONFIG_FILE)) {
//     Serial.println("Config file exists. Reading...");
    
//     // Open the file in read mode
//     File configFile = SPIFFS.open(CONFIG_FILE, FILE_READ);
//     if (!configFile) {
//       Serial.println("Failed to open config file for reading");
//       return;
//     }

//     // Read the file and print its content to Serial Monitor
//     while (configFile.available()) {
//       Serial.write(configFile.read());
//     }

//     // Close the file after reading
//     configFile.close();
//   } else {
//     Serial.println("Config file does not exist.");
//   }
// }

// void loop() {
//   // Empty loop, as we only need to read the file once during setup
// }



// checking i2c address for iwr


// #include <Wire.h>

// void setup() {
//   Serial.begin(115200);
//   Wire.begin(8, 9); // Initialize I2C with default SDA (GPIO8) and SCL (GPIO9)

//   Serial.println("\nI2C Scanner");

//   // Scan for devices on the I2C bus
//   for (uint8_t address = 1; address < 127; address++) {
//     Wire.beginTransmission(address);
//     byte error = Wire.endTransmission();
    
//     if (error == 0) {
//       Serial.print("Device found at address 0x");
//       if (address < 16) {
//         Serial.print("0");
//       }
//       Serial.println(address, HEX);  // Print the address in hexadecimal format
//     } else {
//       // No device found at this address
//     }
//   }
// }

// void loop() {
//   // Nothing to do here
// }

//checking which files are stored in the esp32 memory

#include <SPIFFS.h>
#include <FS.h>  // Include the FS.h library

void setup() {
  Serial.begin(115200);  // Start Serial Monitor for debugging

  // Initialize SPIFFS
  if (!SPIFFS.begin()) {
    Serial.println("Failed to mount SPIFFS.");
    return;
  }

  Serial.println("SPIFFS mounted successfully.");

  // Open the root directory
  File root = SPIFFS.open("/");

  // Check if directory is opened successfully
  if (!root) {
    Serial.println("Failed to open directory.");
    return;
  }

  // Read the content of the directory and list all files
  Serial.println("Listing files in SPIFFS:");

  // Iterate through the files in the root directory
  File file = root.openNextFile();
  while (file) {
    // Print file name and size
    Serial.print("File: ");
    Serial.print(file.name());
    Serial.print(", Size: ");
    Serial.println(file.size());
    
    // Close the file after reading
    file.close();
    
    // Read the next file
    file = root.openNextFile();
  }

  Serial.println("End of file listing.");
}

void loop() {
  // Nothing to do in the loop
}




// // size checking of the memory
// #include <SPIFFS.h>

// void setup() {
//   Serial.begin(115200);  // Start the Serial Monitor for debugging

//   // Initialize SPIFFS
//   if (!SPIFFS.begin()) {
//     Serial.println("Failed to mount SPIFFS.");
//     return;
//   }

//   // Get and print the total and used space of SPIFFS
//   Serial.print("Total SPIFFS size: ");
//   Serial.println(SPIFFS.totalBytes());  // Total size of SPIFFS in bytes

//   Serial.print("Used SPIFFS space: ");
//   Serial.println(SPIFFS.usedBytes());   // Used space in bytes

//   Serial.print("Remaining SPIFFS space: ");
//   Serial.println(SPIFFS.totalBytes() - SPIFFS.usedBytes());  // Remaining space in bytes
// }

// void loop() {
//   // Nothing to do here
// }



//deleting the config file

// #include "FS.h"
// #include "SPIFFS.h"

// void setup() {
//   // Start serial communication
//   Serial.begin(115200);

//   // Initialize SPIFFS
//   if (!SPIFFS.begin(true)) {  // The 'true' argument formats SPIFFS if it fails to mount
//     Serial.println("Failed to mount SPIFFS");
//     return;
//   }

//   // Define the file path to your configuration file
//   String filePath = "/radar_calibration.json";  // Update with your actual file path

//   // Check if the file exists
//   if (SPIFFS.exists(filePath)) {
//     // Delete the configuration file
//     if (SPIFFS.remove(filePath)) {
//       Serial.println("Configuration file deleted successfully");
//     } else {
//       Serial.println("Failed to delete configuration file");
//     }
//   } else {
//     Serial.println("Configuration file does not exist");
//   }

//   SPIFFS.end();  // End the SPIFFS session
// }

// void loop() {
//   // Your regular code here
// }




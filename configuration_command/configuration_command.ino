#include <FS.h>
#include <SPIFFS.h>

const char* CONFIG_FILE = "/radar_config.txt";

// UART configuration
#define CLI_BAUD 115200      // For sending config commands (CLI)
#define DATA_BAUD 921600     // Often used for DATA UART (usually a different physical port)
#define UART_NUM 1

// Radar UART pins (ESP32 side)
#define RADAR_RX 18  // ESP32 RX  <- MAX3232 TXD (Radar TX through MAX3232)
#define RADAR_TX 17  // ESP32 TX  -> MAX3232 RXD (Radar RX through MAX3232)

static bool baudSwitched = false;

// ---------------------- Helpers ----------------------
static void clearUartRx() {
  while (Serial1.available()) Serial1.read();
}

static bool isCommentOrEmpty(const String& s) {
  if (s.length() == 0) return true;
  if (s.charAt(0) == '%') return true;
  if (s.charAt(0) == '#') return true;
  if (s.startsWith("//")) return true;
  return false;
}

// Send one CLI command and wait for response (Done / Error / NACK) with robust matching
void sendCommand(const String& cmd) {
  Serial.print("  → ");
  Serial.println(cmd);

  // Clear buffer before sending (avoid mixing old prompt/bytes)
  clearUartRx();

  // Send command (TI CLI usually accepts '\n' or '\r\n')
  Serial1.print(cmd);
  Serial1.print("\n");
  Serial1.flush();

  // Read response with timeout
  String response;
  unsigned long startTime = millis();
  bool gotResponse = false;

  while (millis() - startTime < 1500) {
    while (Serial1.available()) {
      char c = (char)Serial1.read();
      response += c;
      gotResponse = true;
    }

    if (gotResponse) {
      // Robust exit conditions: "Done", "Error", or "NACK" anywhere in response
      if (response.indexOf("Done") >= 0) break;
      if (response.indexOf("Error") >= 0) break;
      if (response.indexOf("NACK") >= 0) break;
    }
    delay(2);
  }

  if (gotResponse) {
    String cleaned = response;
    cleaned.replace("\r", "");
    cleaned.trim();

    Serial.print("     Response: ");
    if (cleaned.length() > 140) Serial.println(cleaned.substring(0, 140) + "...");
    else Serial.println(cleaned);

    if (cleaned.indexOf("Error") >= 0 || cleaned.indexOf("NACK") >= 0) {
      Serial.println("     ⚠ WARNING: Command may have failed!");
    } else if (cleaned.indexOf("Done") >= 0) {
      Serial.println("     ✓ OK");
    } else {
      Serial.println("     ⚠ Response received but no explicit Done/Error detected");
    }
  } else {
    Serial.println("     ⚠ No response (timeout)");
  }
}

// ---------------------- Setup ----------------------
void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("==============================================");
  Serial.println("IWR6843AOPEV Radar Configuration Utility");
  Serial.println("==============================================");

  // Start UART at CLI baud rate (115200)
  Serial1.begin(CLI_BAUD, SERIAL_8N1, RADAR_RX, RADAR_TX);
  delay(800); // give radar/level-shifter a moment

  Serial.println("✓ UART initialized at 115200 baud (CLI mode)");

  // Clear any garbage in UART RX
  clearUartRx();
  delay(100);

  // Initialize SPIFFS
  if (!SPIFFS.begin(true)) {
    Serial.println("ERROR: SPIFFS Mount Failed");
    return;
  }
  Serial.println("✓ SPIFFS mounted");

  // Check if file exists
  if (!SPIFFS.exists(CONFIG_FILE)) {
    Serial.println("ERROR: Config file not found!");
    Serial.println("Please upload '/radar_config.txt' to SPIFFS");
    return;
  }

  // Open config file
  File configFile = SPIFFS.open(CONFIG_FILE, FILE_READ);
  if (!configFile) {
    Serial.println("ERROR: Failed to open config file");
    return;
  }

  Serial.printf("✓ Config file opened (%d bytes)\n", (int)configFile.size());

  // Reset radar to known state
  Serial.println("\n--- Resetting Radar ---");
  sendCommand("sensorStop");
  delay(600);
  sendCommand("flushCfg");
  delay(600);

  Serial.println("\n--- Sending Configuration ---");

  int lineCount = 0;
  String line;

  while (configFile.available()) {
    char c = (char)configFile.read();

    if (c == '\n' || c == '\r') {
      line.trim();
      if (!isCommentOrEmpty(line)) {
        sendCommand(line);
        lineCount++;
        delay(150); // safe gap between CLI commands
      }
      line = "";
    } else {
      line += c;
    }
  }

  // Last line (if file doesn't end with newline)
  line.trim();
  if (!isCommentOrEmpty(line)) {
    sendCommand(line);
    lineCount++;
  }

  configFile.close();

  Serial.println("\n--- Configuration Complete ---");
  Serial.printf("Commands sent: %d\n", lineCount);

  Serial.println("\n==============================================");
  Serial.println("Configuration Summary:");
  Serial.println("✓ All commands sent to radar over CLI UART");
  Serial.println("NOTE: On most IWR6843 setups, DATA UART is a DIFFERENT physical port.");
  Serial.println("      Switching baud here may NOT show data unless your hardware routes data here.");
  Serial.println("==============================================");
}

// ---------------------- Loop ----------------------
void loop() {
  // OPTIONAL: Attempt to monitor bytes after config (only useful if data is on this same UART path)
  static unsigned long lastPrint = 0;

  if (!baudSwitched && millis() > 5000) {
    Serial.println("\n[Switching UART to 921600 baud to sniff for data (if present on this port)]");
    Serial1.end();
    delay(100);
    Serial1.begin(DATA_BAUD, SERIAL_8N1, RADAR_RX, RADAR_TX);
    clearUartRx();
    baudSwitched = true;
  }

  if (Serial1.available()) {
    if (millis() - lastPrint > 2000) {
      Serial.println("\n[Radar bytes detected]");
      lastPrint = millis();
    }

    // Print first 32 bytes as hex
    int count = 0;
    while (Serial1.available() && count < 32) {
      uint8_t b = (uint8_t)Serial1.read();
      Serial.printf("%02X ", b);
      count++;
    }
    if (count > 0) Serial.println();

    // Clear remaining buffer quickly
    clearUartRx();
  }

  delay(100);
}

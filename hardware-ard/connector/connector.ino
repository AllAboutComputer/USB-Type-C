#include <USBComposite.h>

void setup() {
  // Initialize USB Type C connection
  USBComposite.begin();
}

void loop() {
  // Check if data is available to be sent
  if (USBComposite.isSendReady()) {
    // Send data over USB Type C connection
    USBComposite.send("Hello, world!");
  }

  // Check if data is available to be received
  if (USBComposite.isAvailable()) {
    // Receive data over USB Type C connection
    String data = USBComposite.receive();
    // Print received data to serial monitor
    Serial.println(data);
  }
}

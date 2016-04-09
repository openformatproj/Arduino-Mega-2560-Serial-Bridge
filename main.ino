/* 
 * Arduino Mega 2560 Serial Bridge: this sketch
 * allows a direct serial communication
 * with a device connected to Serial1 channel
 * (pin 18 and pin 19)
 */

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
}

void loop() {
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  while (Serial.available()) {
    Serial1.write(Serial.read());
  }
}


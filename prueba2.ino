#include "customLib.h"

String text; // for incoming serial data

void setup() {
  Serial.begin(115200); // opens serial port, sets data rate to 9600 bps
  
}
Serial_class s1, s2, s3, s4;
void loop() {
  // reply only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    text = Serial.readStringUntil('\n');

    // say what you got:
    s3.post_data(text);
    s1.get_min(text);
    s2.get_max(text);
  }
  
}

#include <Arduino.h>


void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  analogWrite(9, 255);
}

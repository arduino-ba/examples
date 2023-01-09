#include <Arduino.h>


void set_pin_mode() {
  pinMode(13, OUTPUT);
}

void blink_once() {
  digitalWrite(13, HIGH);
  delay(1000);
  
  digitalWrite(13, LOW);
  delay(1000);
}

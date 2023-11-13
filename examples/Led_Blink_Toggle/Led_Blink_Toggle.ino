#include <Arduino.h>
#include"rk_led.h"

Led led1(13);

void setup() {
  // put your setup code here, to run once:
  // no need to init gpio 
}

void loop() {
  // put your main code here, to run repeatedly:
  led1.Toggle();
  delay(500);
}

#include <Arduino.h>
#include "rk_led.h"

Led::Led(int Pin){
  _pin = Pin;
  pinMode(_pin, OUTPUT);
}

void Led::Toggle(){
  digitalWrite(_pin, !(digitalRead(_pin)));
}

void Led::On(){
  digitalWrite(_pin, HIGH);
}

void Led::Off(){
  digitalWrite(_pin, LOW);
}
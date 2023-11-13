#ifndef _RK_LED_H
#define _RK_LED_H

#include <Arduino.h>

class Led
{
  public:
    Led(int pin);
    void Toggle();
    void On();
    void Off();
  private:
    int _pin;
};


#endif
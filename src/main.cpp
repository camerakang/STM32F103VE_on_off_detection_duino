#include "74HC595_device.h"

void setup()
{
  Serial.begin(115200);
  IO_device_init();
}

void loop()
{
  TimerHandler();
}

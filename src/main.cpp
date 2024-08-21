#include "74HC595_device.h"

void setup()
{
  Serial.begin(115200);
  IO_device_init();
  xTaskCreate(TaskTimer0Begin, (const portCHAR *)"Timer0Begin", 1024, NULL, 1, NULL);
  xTaskCreate(TaskTimer1Begin, (const portCHAR *)"Timer1Begin", 1024, NULL, 1, NULL);
  vTaskStartScheduler();
}

void loop()
{
}

#include "74HC595_device.h"
void TaskFrequencyCalculation(void *pvParameters);
extern volatile unsigned int rising_edge_count;
extern volatile unsigned long start_time;
extern volatile unsigned long end_time;
extern volatile unsigned long pwm_frequency;

void setup()
{
  Serial.begin(115200);
  IOOUT_device_init();
  IOIN_device_init();

  xTaskCreate(TaskTimer0Begin, (const portCHAR *)"Timer0Begin", 1024, NULL, 1, NULL);
  // xTaskCreate(TaskTimer1Begin, (const portCHAR *)"Timer1Begin", 1024, NULL, 1, NULL);

  // xTaskCreate(TaskFrequencyCalculation, (const portCHAR *)"FrequencyCalculation", 1024, NULL, 1, NULL);
  vTaskStartScheduler();
}

void loop()
{
}
void TaskFrequencyCalculation(void *pvParameters)
{
  while (1)
  {

    
  }
}
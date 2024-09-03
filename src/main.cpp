#include "74HC595_device.h"
void TaskFrequencyCalculation(void *pvParameters);
bool Generate_Signal = false;

void setup()
{
  Serial.begin(115200);
  IOOUT_device_init();
  IOIN_device_init();
  xTaskCreate(TaskTimer0Begin, (const portCHAR *)"Timer0Begin", 1024, NULL, 1, NULL);
  // xTaskCreate(TaskTimer1Begin, (const portCHAR *)"Timer1Begin", 1024, NULL, 1, NULL);
  xTaskCreate(TaskFrequencyCalculation, (const portCHAR *)"FrequencyCalculation", 1024, NULL, 1, NULL);
  vTaskStartScheduler();
}

void loop()
{
  // 逐个打开定时器生成波形
}
void TaskFrequencyCalculation(void *pvParameters)
{
  Generate_Signal = 1;

  while (Generate_Signal)
  {
    generate_waveform(200);
    vTaskDelay(500);
  }
}
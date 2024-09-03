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
    if (rising_edge_count > PULSE_COUNT)
    {
      unsigned long pulse_duration = end_time - start_time;
      unsigned long average_frequency = 1000000 / (pulse_duration / rising_edge_count);
      Serial.print("Average PWM Frequency: ");
      Serial.print(average_frequency);
      Serial.println(" Hz");
      rising_edge_count = 0;
      pwm_frequency = 0;
    }
    
  }
}
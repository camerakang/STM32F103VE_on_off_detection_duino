#include "74HC595_device.h"

void setup()
{
  Serial.begin(115200);
  //设置PA1为低电平
  pinMode(PA1,OUTPUT);
  digitalWrite(PA1,LOW);
}

void loop()
{

  // setting all pins at the same time to either HIGH or LOW
  O1_74HC595_sr.setAllHigh(); // set all pins HIGH
  {
    int pin = 0;
    uint8_t state = O1_74HC595_sr.get(pin); // 0 = LOW, 1 = HIGH
    Serial.printf("Pin %d is %d\n", pin, state);
  }
    O1_74HC595_sr.updateRegisters(); // update the pins to the set values

  delay(10);

  O1_74HC595_sr.setAllLow(); // set all pins LOW
  {
    int pin = 0;
    uint8_t state = O1_74HC595_sr.get(pin); // 0 = LOW, 1 = HIGH
    Serial.printf("Pin %d is %d\n", pin, state);
  }
    O1_74HC595_sr.updateRegisters(); // update the pins to the set values

  delay(10);

}

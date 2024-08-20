#include "74HC595_device.h"

void setup()
{
  Serial.begin(115200);
  IO_device_init();
}

void loop()
{

  // setting all pins at the same time to either HIGH or LOW
  O1_74HC595_sr.setAllHigh(); // set all pins HIGH
  O2_74HC595_sr.setAllHigh();
  O3_74HC595_sr.setAllHigh();
  O4_74HC595_sr.setAllHigh();

  O1_74HC595_sr.updateRegisters(); // update the pins to the set values
  O2_74HC595_sr.updateRegisters();
  O3_74HC595_sr.updateRegisters();
  O4_74HC595_sr.updateRegisters();
  delay(10);

  O1_74HC595_sr.setAllLow(); // set all pins LOW
  O2_74HC595_sr.setAllLow(); // set all pins LOW
  O3_74HC595_sr.setAllLow(); // set all pins LOW
  O4_74HC595_sr.setAllLow(); // set all pins LOW

  O1_74HC595_sr.updateRegisters(); // update the pins to the set values
  O2_74HC595_sr.updateRegisters(); // update the pins to the set values
  O3_74HC595_sr.updateRegisters(); // update the pins to the set values
  O4_74HC595_sr.updateRegisters(); // update the pins to the set values

  delay(10);
}

#include "74HC595_device.h"

ShiftRegister74HC595<1> O1_74HC595_sr(O1_74HC595_DATA_MR_PIN, O1_74HC595_CLOCK_SHCP_PIN, O1_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O2_74HC595_sr(O2_74HC595_DATA_MR_PIN, O2_74HC595_CLOCK_SHCP_PIN, O2_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O3_74HC595_sr(O3_74HC595_DATA_MR_PIN, O3_74HC595_CLOCK_SHCP_PIN, O3_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O4_74HC595_sr(O4_74HC595_DATA_MR_PIN, O4_74HC595_CLOCK_SHCP_PIN, O4_74HC595_LATCH_STCP_PIN);

void IO_device_init()
{
    pinMode(OE_CH1_8, OUTPUT);
    digitalWrite(OE_CH1_8, LOW);
    pinMode(OE_CH9_16, OUTPUT);
    digitalWrite(OE_CH9_16, LOW);
    pinMode(OE_CH17_24, OUTPUT);
    digitalWrite(OE_CH17_24, LOW);
    pinMode(OE_CH25_32, OUTPUT);
    digitalWrite(OE_CH25_32, LOW);

    pinMode(OE_OUT1, OUTPUT);
    digitalWrite(OE_OUT1, LOW);
    pinMode(OE_OUT2, OUTPUT);
    digitalWrite(OE_OUT2, LOW);
    pinMode(OE_OUT3, OUTPUT);
    digitalWrite(OE_OUT3, LOW);
    pinMode(OE_OUT4, OUTPUT);
    digitalWrite(OE_OUT4, LOW);
}
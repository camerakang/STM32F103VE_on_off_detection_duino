#ifndef __74HC959_DEVICE__
#define __74HC959_DEVICE__
#include <ShiftRegister74HC595.h>

extern ShiftRegister74HC595<1> O1_74HC595_sr;
extern ShiftRegister74HC595<1> O2_74HC595_sr;
extern ShiftRegister74HC595<1> O3_74HC595_sr;
extern ShiftRegister74HC595<1> O4_74HC595_sr;
void IO_device_init();
#endif // !__74HC959_DEVICE__

#ifndef __74HC959_DEVICE__
#define __74HC959_DEVICE__
#include <ShiftRegister74HC595.h>
#include <STM32FreeRTOS.h>

#define HW_TIMER_INTERVAL_MS 1000L

// 定义基本的时间间隔（单位：毫秒）
#define BASE_INTERVAL_MS 1000

//定义要检测的脉冲数量
#define PULSE_COUNT 1000
// 生成32个定时器间隔
#define TIMER_INTERVAL_1HZ   (BASE_INTERVAL_MS / 3000)   // 1Hz  -> 1000ms
#define TIMER_INTERVAL_2HZ   (BASE_INTERVAL_MS / 2000)   // 2Hz  -> 500ms
#define TIMER_INTERVAL_3HZ   (BASE_INTERVAL_MS / 4)   // 3Hz  -> 333.33ms
#define TIMER_INTERVAL_4HZ   (BASE_INTERVAL_MS / 6)   // 4Hz  -> 250ms
#define TIMER_INTERVAL_5HZ   (BASE_INTERVAL_MS / 8)   // 5Hz  -> 200ms
#define TIMER_INTERVAL_6HZ   (BASE_INTERVAL_MS / 10)   // 6Hz  -> 166.67ms
#define TIMER_INTERVAL_7HZ   (BASE_INTERVAL_MS / 12)   // 7Hz  -> 142.86ms
#define TIMER_INTERVAL_8HZ   (BASE_INTERVAL_MS / 14)   // 8Hz  -> 125ms
#define TIMER_INTERVAL_9HZ   (BASE_INTERVAL_MS / 16)   // 9Hz  -> 111.11ms
#define TIMER_INTERVAL_10HZ  (BASE_INTERVAL_MS / 18)  // 10Hz -> 100ms
#define TIMER_INTERVAL_11HZ  (BASE_INTERVAL_MS / 20)  // 11Hz -> 90.91ms
#define TIMER_INTERVAL_12HZ  (BASE_INTERVAL_MS / 22)  // 12Hz -> 83.33ms
#define TIMER_INTERVAL_13HZ  (BASE_INTERVAL_MS / 24)  // 13Hz -> 76.92ms
#define TIMER_INTERVAL_14HZ  (BASE_INTERVAL_MS / 26)  // 14Hz -> 71.43ms
#define TIMER_INTERVAL_15HZ  (BASE_INTERVAL_MS / 28)  // 15Hz -> 66.67ms
#define TIMER_INTERVAL_16HZ  (BASE_INTERVAL_MS / 30)  // 16Hz -> 62.5ms
#define TIMER_INTERVAL_17HZ  (BASE_INTERVAL_MS / 32)  // 17Hz -> 58.82ms
#define TIMER_INTERVAL_18HZ  (BASE_INTERVAL_MS / 34)  // 18Hz -> 55.56ms
#define TIMER_INTERVAL_19HZ  (BASE_INTERVAL_MS / 36)  // 19Hz -> 52.63ms
#define TIMER_INTERVAL_20HZ  (BASE_INTERVAL_MS / 38)  // 20Hz -> 50ms
#define TIMER_INTERVAL_21HZ  (BASE_INTERVAL_MS / 40)  // 21Hz -> 47.62ms
#define TIMER_INTERVAL_22HZ  (BASE_INTERVAL_MS / 42)  // 22Hz -> 45.45ms
#define TIMER_INTERVAL_23HZ  (BASE_INTERVAL_MS / 44)  // 23Hz -> 43.48ms
#define TIMER_INTERVAL_24HZ  (BASE_INTERVAL_MS / 46)  // 24Hz -> 41.67ms
#define TIMER_INTERVAL_25HZ  (BASE_INTERVAL_MS / 48)  // 25Hz -> 40ms
#define TIMER_INTERVAL_26HZ  (BASE_INTERVAL_MS / 50)  // 26Hz -> 38.46ms
#define TIMER_INTERVAL_27HZ  (BASE_INTERVAL_MS / 52)  // 27Hz -> 37.04ms
#define TIMER_INTERVAL_28HZ  (BASE_INTERVAL_MS / 54)  // 28Hz -> 35.71ms
#define TIMER_INTERVAL_29HZ  (BASE_INTERVAL_MS / 56)  // 29Hz -> 34.48ms
#define TIMER_INTERVAL_30HZ  (BASE_INTERVAL_MS / 58)  // 30Hz -> 33.33ms
#define TIMER_INTERVAL_31HZ  (BASE_INTERVAL_MS / 60)  // 31Hz -> 32.26ms
#define TIMER_INTERVAL_32HZ  (BASE_INTERVAL_MS / 62)  // 32Hz -> 31.25ms

extern ShiftRegister74HC595<1> O1_74HC595_sr;
extern ShiftRegister74HC595<1> O2_74HC595_sr;
extern ShiftRegister74HC595<1> O3_74HC595_sr;
extern ShiftRegister74HC595<1> O4_74HC595_sr;
void IOOUT_device_init();
void IOIN_device_init();

void TaskTimer0Begin(void *pvParameters);
void TaskTimer1Begin(void *pvParameters);

#endif // !__74HC959_DEVICE__

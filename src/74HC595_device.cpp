#include "74HC595_device.h"
#include "TimerInterrupt_Generic.h"
#include "ISR_Timer_Generic.h"
STM32Timer ITimer0(TIM1);
STM32Timer ITimer1(TIM8);
ISR_Timer STM32_ISR_Timer0;
ISR_Timer STM32_ISR_Timer1;
ShiftRegister74HC595<1> O1_74HC595_sr(O1_74HC595_DATA_DS_PIN, O1_74HC595_CLOCK_SHCP_PIN, O1_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O2_74HC595_sr(O2_74HC595_DATA_DS_PIN, O2_74HC595_CLOCK_SHCP_PIN, O2_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O3_74HC595_sr(O3_74HC595_DATA_DS_PIN, O3_74HC595_CLOCK_SHCP_PIN, O3_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O4_74HC595_sr(O4_74HC595_DATA_DS_PIN, O4_74HC595_CLOCK_SHCP_PIN, O4_74HC595_LATCH_STCP_PIN);

// 定义PWM回调函数
void PWM_1HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_2HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_3HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_4HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_5HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_6HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_7HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_8HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_9HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_10HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_11HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_12HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_13HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_14HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_15HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_16HZ()
{
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_17HZ()
{
    // 实现17Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_18HZ()
{
    // 实现18Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_19HZ()
{
    // 实现19Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_20HZ()
{
    // 实现20Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_21HZ()
{
    // 实现21Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_22HZ()
{
    // 实现22Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_23HZ()
{
    // 实现23Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_24HZ()
{
    // 实现24Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_25HZ()
{
    // 实现25Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_26HZ()
{
    // 实现26Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_27HZ()
{
    // 实现27Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_28HZ()
{
    // 实现28Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_29HZ()
{
    // 实现29Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_30HZ()
{
    // 实现30Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_31HZ()
{
    // 实现31Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_32HZ()
{
    // 实现32Hz PWM的逻辑
    static bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void TimerHandler()
{
    STM32_ISR_Timer0.run();
    // STM32_ISR_Timer1.run();
}

void IO_device_init()
{
    pinMode(OE_CH1_8, OUTPUT);
    digitalWrite(OE_CH1_8, LOW);
    pinMode(O1_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O1_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O1_74HC595_DATA_MR_PIN, HIGH);

    pinMode(OE_CH9_16, OUTPUT);
    digitalWrite(OE_CH9_16, LOW);
    pinMode(O2_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O2_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O2_74HC595_DATA_MR_PIN, HIGH);

    pinMode(OE_CH17_24, OUTPUT);
    digitalWrite(OE_CH17_24, LOW);
    pinMode(O3_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O3_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O3_74HC595_DATA_MR_PIN, HIGH);

    pinMode(OE_CH25_32, OUTPUT);
    digitalWrite(OE_CH25_32, LOW);
    pinMode(O4_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O4_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O4_74HC595_DATA_MR_PIN, HIGH);

    pinMode(OE_OUT1, OUTPUT);
    digitalWrite(OE_OUT1, LOW);
    pinMode(OE_OUT2, OUTPUT);
    digitalWrite(OE_OUT2, LOW);
    pinMode(OE_OUT3, OUTPUT);
    digitalWrite(OE_OUT3, LOW);
    pinMode(OE_OUT4, OUTPUT);
    digitalWrite(OE_OUT4, LOW);
    O1_74HC595_sr.setAllLow();
    O2_74HC595_sr.setAllLow();
    O3_74HC595_sr.setAllLow();
    O4_74HC595_sr.setAllLow();

    if (ITimer0.attachInterruptInterval(HW_TIMER_INTERVAL_US, TimerHandler))
    {
        auto lastMillis = millis();
        Serial.println("Starting  ITimer0 OK, millis() = " + String(lastMillis));
    }
    else
        Serial.println("Can't set ITimer0 correctly. Select another freq. or interval");

    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_1HZ, PWM_1HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_2HZ, PWM_2HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_3HZ, PWM_3HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_4HZ, PWM_4HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_5HZ, PWM_5HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_6HZ, PWM_6HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_7HZ, PWM_7HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_8HZ, PWM_8HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_9HZ, PWM_9HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_10HZ, PWM_10HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_11HZ, PWM_11HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_12HZ, PWM_12HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_13HZ, PWM_13HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_14HZ, PWM_14HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_15HZ, PWM_15HZ);
    STM32_ISR_Timer0.setInterval(TIMER_INTERVAL_16HZ, PWM_16HZ);

    if (ITimer1.attachInterruptInterval(HW_TIMER_INTERVAL_US, TimerHandler))
    {
        auto lastMillis = millis();
        Serial.println("Starting  ITimer1 OK, millis() = " + String(lastMillis));
    }
    else
        Serial.println("Can't set ITimer1 correctly. Select another freq. or interval");
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_17HZ, PWM_17HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_18HZ, PWM_18HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_19HZ, PWM_19HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_20HZ, PWM_20HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_21HZ, PWM_21HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_22HZ, PWM_22HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_23HZ, PWM_23HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_24HZ, PWM_24HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_25HZ, PWM_25HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_26HZ, PWM_26HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_27HZ, PWM_27HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_28HZ, PWM_28HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_29HZ, PWM_29HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_30HZ, PWM_30HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_31HZ, PWM_31HZ);
    STM32_ISR_Timer1.setInterval(TIMER_INTERVAL_32HZ, PWM_32HZ);
}

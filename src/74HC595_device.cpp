#include "74HC595_device.h"
#include "TimerInterrupt_Generic.h"
#include "ISR_Timer_Generic.h"
uint32_t pwm_frequency[32] = {0};
volatile uint16_t rising_edge_count[32]{0};
volatile uint32_t start_time[32];
volatile uint32_t end_time[32];
volatile uint16_t PWM_Channle = 0;
// volatile unsigned long pwm_frequency;

STM32Timer ITimer0(TIM1);
STM32Timer ITimer1(TIM8);
ISR_Timer STM32_ISR_Timer0;
ISR_Timer STM32_ISR_Timer1;
ShiftRegister74HC595<1> O1_74HC595_sr(O1_74HC595_DATA_DS_PIN, O1_74HC595_CLOCK_SHCP_PIN, O1_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O2_74HC595_sr(O2_74HC595_DATA_DS_PIN, O2_74HC595_CLOCK_SHCP_PIN, O2_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O3_74HC595_sr(O3_74HC595_DATA_DS_PIN, O3_74HC595_CLOCK_SHCP_PIN, O3_74HC595_LATCH_STCP_PIN);
ShiftRegister74HC595<1> O4_74HC595_sr(O4_74HC595_DATA_DS_PIN, O4_74HC595_CLOCK_SHCP_PIN, O4_74HC595_LATCH_STCP_PIN);

void calculatePwmFrequency(int index);
// 定义PWM回调函数
void PWM_1HZ()
{
    // Serial.println("PWM_1HZ");
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_2HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_3HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_4HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_5HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_6HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_7HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_8HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O1_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_9HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_10HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_11HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_12HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_13HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_14HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_15HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_16HZ()
{
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O2_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_17HZ()
{
    // 实现17Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_18HZ()
{
    // 实现18Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_19HZ()
{
    // 实现19Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_20HZ()
{
    // 实现20Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_21HZ()
{
    // 实现21Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_22HZ()
{
    // 实现22Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_23HZ()
{
    // 实现23Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_24HZ()
{

    // 实现24Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O3_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void PWM_25HZ()
{
    // 实现25Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(0, outputState ? HIGH : LOW);
}

void PWM_26HZ()
{
    // 实现26Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(1, outputState ? HIGH : LOW);
}

void PWM_27HZ()
{
    // 实现27Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(2, outputState ? HIGH : LOW);
}

void PWM_28HZ()
{
    // 实现28Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(3, outputState ? HIGH : LOW);
}

void PWM_29HZ()
{
    // 实现29Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(4, outputState ? HIGH : LOW);
}

void PWM_30HZ()
{
    // 实现30Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(5, outputState ? HIGH : LOW);
}

void PWM_31HZ()
{
    // 实现31Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(6, outputState ? HIGH : LOW);
}

void PWM_32HZ()
{
    // Serial.println("PWM_32HZ");
    // 实现32Hz PWM的逻辑
    static volatile bool outputState = false;
    outputState = !outputState; // 反转状态
    O4_74HC595_sr.set(7, outputState ? HIGH : LOW);
}

void Timer0Handler()
{
    STM32_ISR_Timer0.run();
}
void Timer1Handler()
{
    STM32_ISR_Timer1.run();
}
void TaskTimer0Begin(void *pvParameters)
{
    ITimer0.setFrequency(10000000, 0);

    // 创建两个任务用来初始化定时器
    if (ITimer0.attachInterruptInterval(HW_TIMER_INTERVAL_MS * 1000, Timer0Handler))
    {
        auto lastMillis = millis();
        Serial.println("Starting  ITimer0 OK, millis() = " + String(lastMillis));
    }
    else
        Serial.println("Can't set ITimer0 correctly. Select another freq. or interval");

    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_1HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_2HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_3HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_4HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_5HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_6HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_7HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_8HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_9HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_10HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_11HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_12HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_13HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_14HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_15HZ);
    STM32_ISR_Timer0.setInterval(BASE_INTERVAL_MS, PWM_16HZ);
    auto NumTimers = STM32_ISR_Timer0.getNumTimers();
    Serial.println("NumTimers = " + String(NumTimers));
    while (1)
    {
        Timer0Handler();
    }
}
void TaskTimer1Begin(void *pvParameters)
{
    ITimer1.setFrequency(72000000, 0);
    if (ITimer1.attachInterruptInterval(HW_TIMER_INTERVAL_MS * 1000, Timer1Handler))
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
    auto NumTimers = STM32_ISR_Timer1.getNumTimers();
    Serial.println("NumTimers = " + String(NumTimers));
    while (1)
    {
        Timer1Handler();
    }
}
void IOOUT_device_init()
{
    pinMode(OE_CH1_8, OUTPUT);
    digitalWrite(OE_CH1_8, LOW);
    pinMode(O1_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O1_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O1_74HC595_DATA_MR_PIN, HIGH);
    pinMode(OE_OUT1, OUTPUT);
    digitalWrite(OE_OUT1, LOW);

    pinMode(OE_CH9_16, OUTPUT);
    digitalWrite(OE_CH9_16, LOW);
    pinMode(O2_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O2_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O2_74HC595_DATA_MR_PIN, HIGH);
    pinMode(OE_OUT2, OUTPUT);
    digitalWrite(OE_OUT2, LOW);

    pinMode(OE_CH17_24, OUTPUT);
    digitalWrite(OE_CH17_24, LOW);
    pinMode(O3_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O3_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O3_74HC595_DATA_MR_PIN, HIGH);
    pinMode(OE_OUT3, OUTPUT);
    digitalWrite(OE_OUT3, LOW);

    pinMode(OE_CH25_32, OUTPUT);
    digitalWrite(OE_CH25_32, LOW);
    pinMode(O4_74HC595_DATA_MR_PIN, OUTPUT);
    digitalWrite(O4_74HC595_DATA_MR_PIN, LOW);
    delay(10);
    digitalWrite(O4_74HC595_DATA_MR_PIN, HIGH);
    pinMode(OE_OUT4, OUTPUT);
    digitalWrite(OE_OUT4, LOW);

    O1_74HC595_sr.setAllLow();
    O2_74HC595_sr.setAllLow();
    O3_74HC595_sr.setAllLow();
    O4_74HC595_sr.setAllLow();

    STM32_ISR_Timer0.disableAll();
    STM32_ISR_Timer1.disableAll();
}

void onPulse_0()
{
    calculatePwmFrequency(0);
}
void onPulse_1()
{
    calculatePwmFrequency(1);
}
void onPulse_2()
{
    calculatePwmFrequency(2);
}
void onPulse_3()
{
    calculatePwmFrequency(3);
}
void onPulse_4()
{
    calculatePwmFrequency(4);
}
void onPulse_5()
{
    calculatePwmFrequency(5);
}
void onPulse_6()
{
    calculatePwmFrequency(6);
}
void onPulse_7()
{
    calculatePwmFrequency(7);
}
void onPulse_8()
{
    calculatePwmFrequency(8);
}
void onPulse_9()
{
    calculatePwmFrequency(9);
}
void onPulse_10()
{
    calculatePwmFrequency(10);
}
void onPulse_11()
{
    calculatePwmFrequency(11);
}
void onPulse_12()
{
    calculatePwmFrequency(12);
}
void onPulse_13()
{
    calculatePwmFrequency(13);
}
void onPulse_14()
{
    calculatePwmFrequency(14);
}
void onPulse_15()
{
    calculatePwmFrequency(15);
    // if (rising_edge_count[15] == 0)
    // {
    //     start_time = micros();
    // }
    // else if (rising_edge_count[15] == PULSE_COUNT)
    // {
    //     end_time = micros();
    // }
    // rising_edge_count[15]++;

    // if (rising_edge_count[15] > PULSE_COUNT)
    // {
    //     unsigned long pulse_duration = end_time - start_time;
    //     unsigned long average_frequency = 1000000 / (pulse_duration / PULSE_COUNT);
    //     pwm_frequency[15] = average_frequency;
    //     Serial.print("Average PWM Frequency: ");
    //     Serial.print(pwm_frequency[15]);
    //     Serial.println(" Hz");
    //     rising_edge_count[15] = 0;
    // }
}
void IOIN_device_init()
{
    pinMode(IN_OE1, OUTPUT);
    digitalWrite(IN_OE1, LOW);
    pinMode(IN_OE2, OUTPUT);
    digitalWrite(IN_OE2, LOW);
    // pinMode(IN_OE3,OUTPUT);
    // digitalWrite(IN_OE3,LOW);
    //  pinMode(IN_OE4,OUTPUT);
    //  digitalWrite(IN_OE4,LOW);

    pinMode(DIR_IN1, OUTPUT);
    digitalWrite(DIR_IN1, LOW);
    pinMode(DIR_IN2, OUTPUT);
    digitalWrite(DIR_IN2, LOW);
    // pinMode(DIR_IN3, OUTPUT);
    // digitalWrite(DIR_IN3, LOW);
    // pinMode(DIR_IN4, OUTPUT);
    // digitalWrite(DIR_IN4, LOW);
    attachInterrupt(digitalPinToInterrupt(PD0), onPulse_0, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD1), onPulse_1, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD2), onPulse_2, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD3), onPulse_3, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD4), onPulse_4, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD5), onPulse_5, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD6), onPulse_6, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD7), onPulse_7, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD8), onPulse_8, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD9), onPulse_9, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD10), onPulse_10, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD11), onPulse_11, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD12), onPulse_12, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD13), onPulse_13, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD14), onPulse_14, FALLING);
    attachInterrupt(digitalPinToInterrupt(PD15), onPulse_15, FALLING);
}

void calculatePwmFrequency(int index)
{
    if (rising_edge_count[index] == 0)
    {
        start_time[index] = micros();
    }
    else if (rising_edge_count[index] == PULSE_COUNT)
    {
        end_time[index] = micros();
    }
    rising_edge_count[index]++;

    if (rising_edge_count[index] > PULSE_COUNT)
    {
        unsigned long pulse_duration = end_time[index] - start_time[index];
        unsigned long average_frequency = 1000000 / (pulse_duration / PULSE_COUNT);
        pwm_frequency[index] = average_frequency;
        Serial.print("Average PWM Frequency for channel ");
        Serial.print(index);
        Serial.print(": ");
        Serial.print(pwm_frequency[index]);
        Serial.println(" Hz");
        rising_edge_count[index] = 0;
    }
}
/**
 * @brief 为指定的定时器设置计时一段时间后关闭
 *
 * 该函数开启指定的定时器，并在一段时间后自动关闭它。使用非阻塞方式来等待
 * 指定的时间间隔，以避免阻塞程序的其他部分。
 *
 * @param timerId 定时器的标识符
 * @param duration 定时器运行的持续时间（毫秒）
 */
void enableTimerForDuration(ISR_Timer &STM32_ISR_Timer, int timerId, unsigned long duration)
{
    STM32_ISR_Timer.enable(timerId);    // 开启指定的定时器
    unsigned long startTime = millis(); // 记录开始时间

    // 使用一个非阻塞的方式来处理定时器的关闭
    if (millis() - startTime >= duration)
    {
        STM32_ISR_Timer.disable(timerId); // 超过指定时间后关闭定时器
        PWM_Channle++;
    }
}

/**
 * 生成PWM波形，根据持续时间选择适当的定时器通道。
 *
 * @param duration PWM波的持续时间。
 */
void generate_waveform(unsigned long duration)
{
    switch (PWM_Channle)
    {
    case 0:
        enableTimerForDuration(STM32_ISR_Timer1, 0, duration);
        break;
    case 1:
        enableTimerForDuration(STM32_ISR_Timer1, 1, duration);
        break;
    case 2:
        enableTimerForDuration(STM32_ISR_Timer1, 2, duration);
        break;
    case 3:
        enableTimerForDuration(STM32_ISR_Timer1, 3, duration);
        break;
    case 4:
        enableTimerForDuration(STM32_ISR_Timer1, 4, duration);
        break;
    case 5:
        enableTimerForDuration(STM32_ISR_Timer1, 5, duration);
        break;
    case 6:
        enableTimerForDuration(STM32_ISR_Timer1, 6, duration);
        break;
    case 7:
        enableTimerForDuration(STM32_ISR_Timer1, 7, duration);
        break;
    case 8:
        enableTimerForDuration(STM32_ISR_Timer1, 8, duration);
        break;
    case 9:
        enableTimerForDuration(STM32_ISR_Timer1, 9, duration);
        break;
    case 10:
        enableTimerForDuration(STM32_ISR_Timer1, 10, duration);
        break;
    case 11:
        enableTimerForDuration(STM32_ISR_Timer1, 11, duration);
        break;
    case 12:
        enableTimerForDuration(STM32_ISR_Timer1, 12, duration);
        break;
    case 13:
        enableTimerForDuration(STM32_ISR_Timer1, 13, duration);
        break;
    case 14:
        enableTimerForDuration(STM32_ISR_Timer1, 14, duration);
        break;
    case 15:
        enableTimerForDuration(STM32_ISR_Timer1, 15, duration);
        break;
    case 16:
        enableTimerForDuration(STM32_ISR_Timer1, 16, duration);
        break;
    case 17:
        enableTimerForDuration(STM32_ISR_Timer1, 17, duration);
        break;
    case 18:
        enableTimerForDuration(STM32_ISR_Timer1, 18, duration);
        break;
    case 19:
        enableTimerForDuration(STM32_ISR_Timer1, 19, duration);
        break;
    case 20:
        enableTimerForDuration(STM32_ISR_Timer1, 20, duration);
        break;
    case 21:
        enableTimerForDuration(STM32_ISR_Timer1, 21, duration);
        break;
    case 22:
        enableTimerForDuration(STM32_ISR_Timer1, 22, duration);
        break;
    case 23:
        enableTimerForDuration(STM32_ISR_Timer1, 23, duration);
        break;
    case 24:
        enableTimerForDuration(STM32_ISR_Timer1, 24, duration);
        break;
    case 25:
        enableTimerForDuration(STM32_ISR_Timer1, 25, duration);
        break;
    case 26:
        enableTimerForDuration(STM32_ISR_Timer1, 26, duration);
        break;
    case 27:
        enableTimerForDuration(STM32_ISR_Timer1, 27, duration);
        break;
    case 28:
        enableTimerForDuration(STM32_ISR_Timer1, 28, duration);
        break;
    case 29:
        enableTimerForDuration(STM32_ISR_Timer1, 29, duration);
        break;
    case 30:
        enableTimerForDuration(STM32_ISR_Timer1, 30, duration);
        break;
    case 31:
        enableTimerForDuration(STM32_ISR_Timer1, 31, duration);
        PWM_Channle = -1;
        break;
    default:
        break;
    }
}

#include "mbed/mbed.h"

static void blinky1(void) {
    static DigitalOut led1(LED1);
    led1 = !led1;
    printf("LED1 = %d \r\n",led1.read());
}

static void blinky2(void) {
    static DigitalOut led2(LED2);
    led2 = !led2;
    printf("LED2 = %d \r\n",led2.read());
}

static void blinky3(void) {
    static DigitalOut led3(LED3);
    led3 = !led3;
    printf("LED3 = %d \r\n",led3.read());
}

void app_start(int, char**) {
    minar::Scheduler::postCallback(blinky1).period(minar::milliseconds(300));
    minar::Scheduler::postCallback(blinky2).period(minar::milliseconds(500));
    minar::Scheduler::postCallback(blinky3).period(minar::milliseconds(1500));
}

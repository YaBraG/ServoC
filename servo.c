#include <wiringPi.h>
#include <stdio.h>

int main(void)
{
    printf("Raspberry Pi wiringPi test program\n");
    wiringPiSetupGpio();
    pinMode(0, PWM_OUTPUT);
    pwmSetMode(PWM_MODE_MS);
    pwmSetRange(2000);
    pwmSetClock(192);
    int x;
    while (1)
    {
        for (x; x < 200; x++)
        {
            pwmWrite(0, 150);
            delay(100);
            printf("%d /n", x);
        }
        for (x; x > 0; x--)
        {
            pwmWrite(0, 0);
            delay(100);
            printf("%d /n", x);
        }
    }
    return 0;
}
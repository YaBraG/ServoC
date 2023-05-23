#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

int main(void)
{
    wiringPiSetup();
    int pin = 0;
    softPwmCreate(pin, 0, 30);
    int x;

    while (1)
    {
        for (x; x < 30; x++)
        {
            softPwmWrite(pin, x);
            delay(100);
            printf("%d \n", x);
        }
        for (x; x > 0; x--)
        {
            softPwmWrite(pin, x);
            delay(100);
            printf("%d \n", x);
        }
    }
}
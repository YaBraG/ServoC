#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

#include <stdio.h>

#define mapRange(a1, a2, b1, b2, s) (b1 + (s - a1) * (b2 - b1) / (a2 - a1))

int main(void)
{
    wiringPiSetup();
    int pin = 0;
    softPwmCreate(pin, 0, 28);
    float x = map(x, 0, 28, 0, 360);

    while (1)
    {

        for (x; x < 90; x++)
        {
            softPwmWrite(pin, mapRange(0, 28, 0, 360, x));
            delay(100);
            printf("%d \n", x);
        }
        for (x; x > 0; x--)
        {
            softPwmWrite(pin, mapRange(0, 28, 0, 360, x));
            delay(100);
            printf("%d \n", x);
        }
    }
}
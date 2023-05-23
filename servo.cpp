#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

// #include <includes/wiringPi.h>
// #include <includes/softPwm.h>

#include <stdio.h>

#define mapRange(a1, a2, b1, b2, s) (b1 + (((s - a1) * (b2 - b1)) / (a2 - a1)))
float x;

int main(void)
{
    wiringPiSetup();
    int pin = 0;
    softPwmCreate(pin, 0, 28);

    while (1)
    {

        for (x = 0; x <= 28; x++)
        {
            softPwmWrite(pin, mapRange(0, 28, 0, 360, x));
            delay(700);
            printf("%d = %g \n", x, mapRange(0, 28, 0, 360, x));
        }
        for (x = 0; x = > 0; x--)
        {
            softPwmWrite(pin, mapRange(0, 28, 0, 360, x));
            delay(700);
            printf("%d = %g \n", x, mapRange(0, 28, 0, 360, x));
        }
    }
}
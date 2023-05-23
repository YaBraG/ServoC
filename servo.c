#include <wiringPi.h>
#include <softServo.h>

int main(void)
{
    wiringPiSetup();
    softServoSetup(0, 1, 2, 3, 4, 5, 6, 7);

    softServoWrite(0, 500);
    delay(10);
}
#include <wiringPi.h>
#include <softServo.h>

int main(void)
{
    wiringPiSetup();
    softServoSetup(0);

    softServoWrite(0, 500);
    delay(10);
}
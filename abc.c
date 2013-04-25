#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{

    int pinNumber = 14;
    if (-1 == wiringPiSetup()) 
    {
        printf("Setup wiringPi failed!");
        return 1;
    }
 
    pinMode(pinNumber, OUTPUT); // set mode to output 
    for(int i=0; i<10; i++)
    {
        digitalWrite(pinNumber, 1); // output a high level 
        delay(800);
        digitalWrite(pinNumber, 0); // output a low level 
        delay(800);
    }
 
    // hello, just test
    return 0;
}
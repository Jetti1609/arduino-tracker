#include <Arduino.h>
#include <motors.h>
#include <com.h>

void setup(){
    SerialUSB.begin(9600);
    pinMode(STEPPIN_DEC, OUTPUT);
    pinMode(STEPPIN_RA, OUTPUT);
    pinMode(DIRPIN_DEC, OUTPUT);
    pinMode(DIRPIN_RA, OUTPUT);

}
    
void loop(){
    com::com();
}


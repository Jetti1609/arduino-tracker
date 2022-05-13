#include <Arduino.h>
#include <Wire.h>
#include <motors.h>
#include <com.h>



void setup(){
    Serial.begin(9600);
    pinMode(STEPPIN_DEC, OUTPUT);
    pinMode(STEPPIN_RA, OUTPUT);
    pinMode(DIRPIN_DEC, OUTPUT);
    pinMode(DIRPIN_RA, OUTPUT);
    Serial.println("started");


}
    
void loop(){
    com::com();
    
}


#include <Arduino.h>
#include <motors.h>
#include <com.h>
String read;

void setup(){
    Serial.begin(9600);
    pinMode(STEPPIN_DEC, OUTPUT);
    pinMode(STEPPIN_RA, OUTPUT);
    pinMode(DIRPIN_DEC, OUTPUT);
    pinMode(DIRPIN_RA, OUTPUT);

}
    
void loop(){
    if (Serial.available()) {
    read = Serial.readStringUntil('\n');
    read.trim();

    if(read = 'DEC+'){
        step::DE::CW();
    }
    else if(read = 'DEC-'){
        step::DE::CCW();
    }
    else if(read = 'RA+'){
        step::RA::CW();
    }
    else if(read = 'RA-'){
        step::RA::CCW();
    }
    }
    else{
        step::RA::CCW();
        delay(300);
    }
}


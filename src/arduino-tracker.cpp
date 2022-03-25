#include <Arduino.h>
#include <motors.h>
#include <com.h>
String read;

void setup(){
    SerialUSB.begin(9600);
    pinMode(STEPPIN_DEC, OUTPUT);
    pinMode(STEPPIN_RA, OUTPUT);
    pinMode(DIRPIN_DEC, OUTPUT);
    pinMode(DIRPIN_RA, OUTPUT);

}
    
void loop(){
    if (SerialUSB.available()) {
    read = SerialUSB.readStringUntil('\n');
    read.trim();

    if(read = 'DEC+'){
        step::DE::CW();
        SerialUSB.print(read);
    }
    else if(read = 'DEC-'){
        step::DE::CCW();
        SerialUSB.print(read);
        
    }
    else if(read = 'RA+'){
        step::RA::CW();
        SerialUSB.print(read);
    }
    else if(read = 'RA-'){
        step::RA::CCW();
        SerialUSB.print(read);
    }
    delay(5);
    }
    else{
        step::RA::CCW();
        delay(270);
        SerialUSB.print('.');
    }
}


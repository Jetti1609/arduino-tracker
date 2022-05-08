#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <motors.h>
#include <com.h>

LiquidCrystal_I2C lcd(0x27,20,4);


void setup(){
    Serial.begin(9600);
    lcd.init();
    lcd.init();
    pinMode(STEPPIN_DEC, OUTPUT);
    pinMode(STEPPIN_RA, OUTPUT);
    pinMode(DIRPIN_DEC, OUTPUT);
    pinMode(DIRPIN_RA, OUTPUT);
    Serial.println("started");


}
    
void loop(){
    com::com();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("RA:");
  lcd.setCursor(4,0);
  lcd.print(RApos1);
  lcd.setCursor(0,1);
  lcd.print("DEC:");
  lcd.setCursor(5,1);
  lcd.print(DEpos1);
    
}


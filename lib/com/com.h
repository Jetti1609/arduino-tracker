String command;

namespace com{
    void com(){
    if (SerialUSB.available()) {
    command = SerialUSB.readStringUntil('\n');
    command.trim();

    if(command.equals("DEC1")){
        step::DE::CW();
        
    }
    else if(command.equals("DEC2")){
        step::DE::CCW();
        
        
    }
    else if(command.equals("RA1")){
        step::RA::CW();
        
    }
    else if(command.equals("RA2")){
        step::RA::CCW();
        
    }
    }
    else if(digitalRead(10) == HIGH){
    step::RA::CCW();
    delay(2700);
    SerialUSB.print(millis());
    }
    
}
}
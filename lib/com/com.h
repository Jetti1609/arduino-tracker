String command;

namespace com{
    void com(){
    while (Serial.available()) {
    command = Serial.readStringUntil('\n');
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
    
}
}
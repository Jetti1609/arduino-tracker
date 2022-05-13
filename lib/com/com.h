String command;

const int stepsperdeg = 89;

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
        else if(command.equals("DEC1G")){
            for (int i = 1; i <= stepsperdeg; i++){
            step::DE::CW();
            delayMicroseconds(100);
            }
        }
        else if(command.equals("DEC2G")){
            for (int i2 = 1; i2 <= stepsperdeg; i2++){
            step::DE::CCW();
            delayMicroseconds(100);
            }
        }
        else if(command.equals("RA1G")){
            for (int i3 = 1; i3 <= stepsperdeg; i3++){
            step::RA::CW();
            delayMicroseconds(100);
            }
        }
        else if(command.equals("RA2G")){
            for (int i4 = 1; i4 <= stepsperdeg; i4++){
            step::RA::CCW();
            delayMicroseconds(100);
            }
        }
    }
    
}
}
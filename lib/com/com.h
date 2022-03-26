String read;

namespace com{
    void com(){
    while (SerialUSB.available()) {
    read = SerialUSB.readStringUntil('\n');
    read.trim();

    if(read = 'DEC1'){
        step::DE::CW();
        SerialUSB.print(read);
    }
    else if(read = 'DEC2'){
        step::DE::CCW();
        SerialUSB.print(read);
        
    }
    else if(read = 'RA1'){
        step::RA::CW();
        SerialUSB.print(read);
    }
    else if(read = 'RA2'){
        step::RA::CCW();
        SerialUSB.print(read);
    }
    delay(5);
    }
    step::RA::CCW();
    delay(2700);
    SerialUSB.print('.');
}
}
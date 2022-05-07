#define STEPPIN_RA 0x16
#define STEPPIN_DEC 0x18
#define DIRPIN_RA 0x17
#define DIRPIN_DEC 0x19

#define set digitalWrite

int RApos = 0;
int DEpos = 0;

namespace step{
    namespace RA{
        void CW(){
            RApos++;
            set(DIRPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 0);
            delayMicroseconds(100);
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            Serial.print(RApos);
            Serial.println("RA");
        }

        void CCW(){
            RApos--;
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            set(STEPPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 0);
            delayMicroseconds(100);
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            Serial.print(RApos);
            Serial.println("RA");
        }
    }
    namespace DE{
        void CW(){
            DEpos++;
            set(DIRPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(100);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);
            Serial.print(DEpos);
            Serial.println("DE");
            
        }

        void CCW(){
            DEpos--;
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(100);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);           
            Serial.print(DEpos);
            Serial.println("DE");

        }

    };
}

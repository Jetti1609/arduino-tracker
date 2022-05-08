#define STEPPIN_RA 0x16
#define STEPPIN_DEC 0x18
#define DIRPIN_RA 0x17
#define DIRPIN_DEC 0x19

#define set digitalWrite

volatile int RApos1 = 0;
volatile int DEpos1 = 0;
volatile int RApos2 = 0;
volatile int DEpos2 = 0;

namespace step{
    namespace RA{
        void CW(){
            RApos1++;
            set(DIRPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 0);
            delayMicroseconds(100);
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            Serial.print(RApos1);
            Serial.println("RA");
        }

        void CCW(){
            RApos1--;
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            set(STEPPIN_RA, 1);
            delayMicroseconds(100);
            set(STEPPIN_RA, 0);
            delayMicroseconds(100);
            set(DIRPIN_RA, 0);
            delayMicroseconds(100);
            Serial.print(RApos1);
            Serial.println("RA");
        }
    }
    namespace DE{
        void CW(){
            DEpos1++;
            set(DIRPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(100);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);
            Serial.print(DEpos1);
            Serial.println("DE");
            
        }

        void CCW(){
            DEpos1--;
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(100);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(100);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(100);           
            Serial.print(DEpos1);
            Serial.println("DE");

        }

    };
}

#define STEPPIN_RA 0x16
#define STEPPIN_DEC 0x18
#define DIRPIN_RA 0x17
#define DIRPIN_DEC 0x19

#define set digitalWrite

const float secondsPerDay = 86164.0905f;
const float stepspersecond = (secondsPerDay/32000);
namespace step{
    namespace RA{
        void CW(){
            set(DIRPIN_RA, 1);
            delayMicroseconds(50);
            set(STEPPIN_RA, 1);
            delayMicroseconds(50);
            set(DIRPIN_RA, 0);
            delayMicroseconds(50);
            set(STEPPIN_RA, 0);
            delayMicroseconds(50);
        }

        void CCW(){
            set(DIRPIN_RA, 0);
            delayMicroseconds(50);
            set(STEPPIN_RA, 1);
            delayMicroseconds(50);
            set(DIRPIN_RA, 0);
            delayMicroseconds(50);
            set(STEPPIN_RA, 0);
            delayMicroseconds(50);
        }
    }
    namespace DE{
        void CW(){
            set(DIRPIN_DEC, 1);
            delayMicroseconds(50);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(50);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(50);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(50);
            
        }

        void CCW(){
            set(DIRPIN_DEC, 0);
            delayMicroseconds(50);
            set(STEPPIN_DEC, 1);
            delayMicroseconds(50);
            set(DIRPIN_DEC, 0);
            delayMicroseconds(50);
            set(STEPPIN_DEC, 0);
            delayMicroseconds(50);

        }

    };
}

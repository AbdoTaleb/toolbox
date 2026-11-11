#include "sensorobjekt_klass.h"

bool Sensor::sattAntalMatningar(int nyttAntal) {
    if(nyttAntal < 0) {
        return false;
    }
    antalMatningar = nyttAntal;
    return true;

}

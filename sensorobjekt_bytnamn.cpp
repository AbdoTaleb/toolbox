#include <cstring>
#include "sensorobjekt_klass.h"

bool Sensor::bytNamn(const char *nyttNamn) {
    if (nyttNamn[0] == '\0')
    {
        return false;
    }
    strncpy(namn, nyttNamn, sizeof(namn) - 1);
    namn[sizeof(namn) - 1] = '\0';
    return true;
}
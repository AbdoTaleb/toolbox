#include <cstring>
#include "sensorobjekt_klass.h"

void Sensor::bytNamn(const char *nyttNamn) {
    strncpy(namn, nyttNamn, sizeof(namn) - 1);
    namn[sizeof(namn) - 1] = '\0';
}
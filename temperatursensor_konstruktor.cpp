#include <cstring>
#include "temperatursensor_klass.h"

TemperatureSensor::TemperatureSensor(const char *sensornamn, double startvarde,
                                        const char *enhetsnamn)
    : Sensor(sensornamn, startvarde) {
    strncpy(enhet, enhetsnamn, sizeof(enhet) - 1);
    enhet[sizeof(enhet) - 1] = '\0';
    }

const char *TemperatureSensor::hamtaEnhet() const {
    return enhet;
}
#ifndef TEMPERATURSENSOR_KLASS_H
#define TEMPERATURSENSOR_KLASS_H

#include "sensorobjekt_klass.h"

class TemperatureSensor : public Sensor {
private:
    char enhet[20];

public:
    TemperatureSensor(const char *sensornamn, double startvarde,
    const char *enhetsnamn);

    const char *hamtaEnhet() const;
    double hamtaSomFahrenheit() const;
};

#endif
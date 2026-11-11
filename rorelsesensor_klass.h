#ifndef RORELSESENSOR_KLASS_H
#define RORELSESENSOR_KLASS_H

#include "sensorobjekt_klass.h"

class MotionSensor : public Sensor {
private:
    bool rorelseDetekterad;

public:
    MotionSensor(const char *sensornamn);

    bool harRorelseDetekterats() const;
    void utlosLarm();
};

 #endif
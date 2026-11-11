#include "rorelsesensor_klass.h"

MotionSensor::MotionSensor(const char *sensornamn)
    : Sensor(sensornamn, 0)
{
    rorelseDetekterad = false;
}

bool MotionSensor::harRorelseDetekterats() const
{
    return rorelseDetekterad;
}
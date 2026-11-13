#include "fuktsensor_klass.h"

HumiditySensor::HumiditySensor(
    const char *sensornamn,
    double startvarde,
    double kritiskGransvarde
)
    : Sensor(sensornamn, startvarde)
{
    kritiskGrans = kritiskGransvarde;
}

double HumiditySensor::hamtaKritiskGrans() const
{
    return kritiskGrans;
}
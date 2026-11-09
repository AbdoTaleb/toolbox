#include "sensorobjekt_klass.h"

bool Sensor::arInomGrans(double min, double max) const
{
    return senasteVarde >= min && senasteVarde <= max;
}
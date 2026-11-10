#include "sensorobjekt_klass.h"


bool Sensor::harHogreVarde(const Sensor &annan) const {
    if (annan.senasteVarde >= senasteVarde) {
        return false;
    }
    return true;
}
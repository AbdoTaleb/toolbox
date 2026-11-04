#include "sensorobjekt_klass.h"

void Sensor::uppdateraVarde(double nyttVarde) {
    senasteVarde = nyttVarde;
    antalMatningar++;
}
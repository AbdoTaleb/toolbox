#include <iostream>
#include "sensorobjekt_klass.h"

void Sensor::skrivUt() const {
    std::cout << "Sensor: " << namn << "\n";
    std::cout << "Senaste värde: " << senasteVarde << "\n";
    std::cout << "Antal mätningar: " << antalMatningar << "\n";
}
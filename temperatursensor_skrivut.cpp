#include <iostream>
#include "temperatursensor_klass.h"

void TemperatureSensor::skrivUt() const {
    std::cout << "[" << hamtaTyp() << "] ";
    Sensor::skrivUt();
    std::cout << " Enhet: " << hamtaEnhet()
              << ", i Fahrenheit: " << hamtaSomFahrenheit() << "\n";
}
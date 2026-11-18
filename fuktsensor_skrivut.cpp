#include <iostream>
#include "fuktsensor_klass.h"

void HumiditySensor::skrivUt() const {
    std::cout << "[" << hamtaTyp() << "] ";
    Sensor::skrivUt();
    std::cout << " Kritisk grans: " << hamtaKritiskGrans()
              << (arKritisktFuktigt() ? " (KRITISKT!)" : "") << "\n";



}
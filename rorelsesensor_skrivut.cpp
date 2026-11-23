#include <iostream>
#include "rorelsesensor_klass.h"

void MotionSensor::skrivUt() const {

    std::cout << "[" << hamtaTyp() << "] ";
    Sensor::skrivUt();
    std::cout << " Rorelse detekterad: ";
    if(harRorelseDetekterats()){
        std::cout << "ja" << std::endl;
    }
    else{
        std::cout << "nej" << std::endl;
    }
}
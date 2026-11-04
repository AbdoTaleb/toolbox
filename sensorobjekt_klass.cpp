#include <cstring>
#include <iostream>
#include "sensorobjekt_klass.h"

Sensor::Sensor() {
    strncpy(namn, "Namnlös", sizeof(namn) - 1);
    namn[sizeof(namn) - 1] = '\0';
    senasteVarde = 0;
    antalMatningar = 0;

    std::cout << "En ny sensor (" << namn << ") skapades.\n";
}

Sensor::Sensor(const char *sensornamn, double startvarde) {
    strncpy(namn, sensornamn, sizeof(namn) - 1);
    namn[sizeof(namn) - 1] = '\0';
    senasteVarde = startvarde;
    antalMatningar = 1;

    std::cout << "En ny sensor (" << namn << ") skapades.\n";
}

Sensor::~Sensor() {
    std::cout << "Sensorn " << namn << " forstors.\n";
}
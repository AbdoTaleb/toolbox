#ifndef SENSORSTATISTIK_H
#define SENSORSTATISTIK_H

#include <vector>
#include <string>
#include "sensorobjekt_klass.h"

double hamtaMedelvardeForTyp(std::vector<Sensor*> &sensorer,
                             const std::string &typ);

#endif
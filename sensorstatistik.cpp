#include <cassert>
#include "sensorstatistik.h"

double hamtaMedelvardeForTyp(std::vector<Sensor*> &sensorer,
                             const std::string &typ) {
    double summa = 0;
    int antal = 0;

    for (size_t i = 0; i < sensorer.size(); i++) {
        if (sensorer[i]->hamtaTyp() == typ) {
            summa += sensorer[i]->hamtaSenasteVarde();
            antal++;
        }
    }

    assert(antal > 0 && "Ingen sensor av den efterfragade typen hittades");
    return summa / antal;
}
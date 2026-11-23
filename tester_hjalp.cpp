#include <iostream>
#include "tester.h"

int testerKorda = 0;
int testerLyckade = 0;

void kontrollera(bool villkor, const std::string &beskrivning) {
    testerKorda++;
    if (villkor) {
        testerLyckade++;
        std::cout << " OK: " << beskrivning << "\n";
    } else {
        std::cout << " MISSLYCKADES: " << beskrivning << "\n";
    }
}
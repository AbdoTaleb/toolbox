#ifndef TESTER_H
#define TESTER_H

#include <string>

extern int testerKorda;
extern int testerLyckade;

void kontrollera(bool villkor, const std::string &beskrivning);

void testaSensorGrundlaggande();
void testaSensorValidering();
void testaTemperatursensor();
void testaFuktsensor();
void testaPrimtal();
void testaKalkylator();

#endif
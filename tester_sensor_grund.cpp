#include <iostream>
#include "tester.h"
#include "temperatursensor_klass.h"

void testaSensorGrundlaggande() {
    std::cout << "-- Sensor: grundlaggande --\n";
    TemperatureSensor s("Testsensor", 10.0, "Celsius");

    kontrollera(s.hamtaAntalMatningar() == 1,
                "en ny sensor har en matning direkt fran konstruktorn");

    s.uppdateraVarde(20.0);
    kontrollera(s.hamtaSenasteVarde() == 20.0,
                "uppdateraVarde satter ratt varde");
    kontrollera(s.hamtaAntalMatningar() == 2,
                "uppdateraVarde okar antalMatningar");

    s.nollstallRakning();
    kontrollera(s.hamtaAntalMatningar() == 0,
                "nollstallRakning nollstaller raknaren");
}
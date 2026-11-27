#include <iostream>
#include "tester.h"
#include "temperatursensor_klass.h"

void testaSensorValidering() 
{
    std::cout << "-- Sensor: validering --\n";
    TemperatureSensor s("Testsensor", 10.0, "Celsius");
    
    bool resultat1 = s.sattAntalMatningar(-5);
    kontrollera(resultat1 == false, "sattAntalMatningar avvisar ett negativt tal");

    bool resultat2 = s.sattAntalMatningar(10);
    kontrollera(resultat2 == true, "sattAntalMatningar accepterar ett giltigt tal");
    kontrollera(s.hamtaAntalMatningar() == 10, "antalMatningar fick ratt varde efter en giltig andring");
 }
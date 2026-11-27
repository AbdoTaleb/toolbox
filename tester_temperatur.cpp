#include <iostream>
#include "tester.h"
#include "temperatursensor_klass.h"

void testaTemperatursensor() 
{
    std::cout << "-- TemperatureSensor: Fahrenheit --\n";

    TemperatureSensor fryspunkt("Fryspunkt", 0.0, "Celsius");
    kontrollera(fryspunkt.hamtaSomFahrenheit() == 32.0, "0 grader Celsius blir 32 grader Fahrenheit");

    TemperatureSensor kokpunkt("Kokpunkt", 100.0, "Celsius");
    kontrollera(kokpunkt.hamtaSomFahrenheit() == 212.0, "100 grader Celsius blir 212 grader Fahrenheit");
}
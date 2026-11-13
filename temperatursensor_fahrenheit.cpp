#include "temperatursensor_klass.h"
#include "verktyg.h"

double TemperatureSensor::hamtaSomFahrenheit() const {
    return celsius_till_fahrenheit(senasteVarde);
}
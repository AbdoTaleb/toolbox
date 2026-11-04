#include "verktyg.h"

double celsius_till_fahrenheit(double celsius)
{
    // Omvandla Celsius till Fahrenheit
    return (celsius * 9.0 / 5.0) + 32.0;
}

void konvertera_serie(double *matningar, int antal)
{
    for (int i = 0; i < antal; i++) {
        matningar[i] = celsius_till_fahrenheit(matningar[i]);
    }
}
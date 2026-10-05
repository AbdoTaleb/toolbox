#include "verktyg.h"

double celsius_till_fahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    return fahrenheit;
}
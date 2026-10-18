#include "verktyg.h"

double celsius_till_fahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    return fahrenheit;
}

void konvertera_serie(double *matningar, int antal){

    for(int i = 0; i < antal; i++) {

        matningar[i] = celsius_till_fahrenheit(matningar[i]);

    }

}
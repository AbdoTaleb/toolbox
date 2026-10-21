#include <stdlib.h>
#include "verktyg.h"

double *kopiera_matlogg(double *logg, int antal)
{
    if (antal == 0)
    {
        return NULL;
    }

    double *newLogg = malloc(antal * sizeof(*logg));

    for (int i = 0; i < antal; i++)
    {
        *(newLogg + i) = *(logg +i);
    }

    return newLogg;
}
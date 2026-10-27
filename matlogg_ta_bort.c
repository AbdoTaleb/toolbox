#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

double *ta_bort_senaste_matning(double *logg, int *antal)
{
    if (logg == NULL || *antal == 0) {
        return logg;
    }

    if (*antal == 1) {
        free(logg);
        *antal = 0;
        return NULL;
    }

    double *ny_logg = NULL;
    ny_logg = realloc(logg, (*antal - 1) * sizeof(double));

    if (ny_logg == NULL) {
        return logg;
    }

    (*antal)--;
    return ny_logg;
}
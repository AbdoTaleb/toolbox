
#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

double *lagg_till_matning(double *logg, int *antal, double varde) {
    double *ny_logg = NULL;

    if (logg == NULL) {
        ny_logg = malloc(sizeof(double));
    } else {
        ny_logg = realloc(logg, (*antal + 1) * sizeof(double));
    }

    if (ny_logg == NULL) {
        printf("Minnesallokering misslyckades!\n");
        return logg;
    }

    ny_logg[*antal] = varde;
    (*antal)++;

    return ny_logg;
}

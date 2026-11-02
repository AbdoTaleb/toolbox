#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

Sensormatning *lasa_sensorregister(const char *filnamn, int *antal_ut)
{
    FILE *fil = fopen(filnamn, "r");
    Sensormatning *reg = NULL;
    int antal = 0;

    if (fil == NULL) {
        printf("Kunde inte oppna filen %s.\n", filnamn);
        *antal_ut = 0;
        return NULL;
    }

    char namn[50];
    double varde;

    while (fscanf(fil, "%49s %lf", namn, &varde) == 2) {
        reg = lagg_till_sensormatning(reg, &antal, namn, varde);
    }

    fclose(fil);
    *antal_ut = antal;
    return reg;
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "verktyg.h"

Sensormatning *lagg_till_sensormatning(Sensormatning *reg, int *antal,
                                        const char *namn, double varde) {
    Sensormatning *ny_reg;

    if (reg == NULL) {
        ny_reg = malloc(sizeof(Sensormatning));
    } else {
        ny_reg = realloc(reg, (*antal + 1) * sizeof(Sensormatning));
    }

    if (ny_reg == NULL) {
        printf("Kunde inte allokera minne for sensorregistret.\n");
        return reg;
    }

    strncpy(ny_reg[*antal].namn, namn, sizeof(ny_reg[*antal].namn));
    ny_reg[*antal].namn[sizeof(ny_reg[*antal].namn) - 1] = '\0';

    ny_reg[*antal].varde = varde;

    (*antal)++;

    return ny_reg;
}
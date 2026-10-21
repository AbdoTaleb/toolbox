#include <stdio.h>
#include "verktyg.h"

void skriv_matlogg(double *logg, int antal)
{
    if(antal == 0){
        printf("Matloggen ar tom.\n");
        return;
    }

    for(int i = 0; i < antal; i++){
        printf("%.2f\n", logg[i]);
    }
}
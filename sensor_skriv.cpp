#include <stdio.h>
#include "verktyg.h"

void skriv_sensorregister(Sensormatning *reg, int antal)
{
    if (antal == 0)
    {
        printf("Sensorregistret ar tomt.");
    }
    else
    {
        for (int i = 0; i < antal; i++)
        {
            printf("%s: %.2f\n", (*(reg + i)).namn, (*(reg + i)).varde);
        }
    }
}
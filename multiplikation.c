#include <stdio.h>
#include "verktyg.h"

void skriv_multiplikationstabell(int tal) 
{
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", tal, i, tal * i);
    }
}
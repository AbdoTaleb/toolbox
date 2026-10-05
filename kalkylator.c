#include "verktyg.h"

double calc(double a, double b, char operators)
{

    switch(operators)
    {
        case '+':
            return a + b;

        case '-':
            return a-b;
        
        case '*':
            return a*b;
        
        case '/':
            if (b != 0)
            {
                return a/b;

            }

            return 0;

        default :
            return 0;

    }
    
}
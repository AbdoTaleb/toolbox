#include <iostream>
#include "tester.h"
#include "verktyg.h"

void testaKalkylator() 
{
    std::cout << "-- berakna --\n";

    kontrollera(berakna(4, 2, '+') == 6, "4 + 2 ger 6");
    kontrollera(berakna(4, 2, '-') == 2, "4 - 2 ger 2");
    kontrollera(berakna(4, 2, '*') == 8, "4 * 2 ger 8");
    kontrollera(berakna(4, 2, '/') == 2, "4 / 2 ger 2");
    kontrollera(berakna(4, 0, '/') == 0, "division med 0 ger 0 istallet for att krascha");
}
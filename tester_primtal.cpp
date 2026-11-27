#include <iostream>
#include "tester.h"
#include "verktyg.h"

void testaPrimtal() {
    std::cout << "-- ar_primtal --\n";

    kontrollera(ar_primtal(7) == 1, "7 ar ett primtal");
    kontrollera(ar_primtal(8) == 0, "8 ar inte ett primtal");
    kontrollera(ar_primtal(2) == 1, "2 ar ett primtal (specialfallet)");
    kontrollera(ar_primtal(1) == 0, "1 ar inte ett primtal");
    kontrollera(ar_primtal(0) == 0, "0 ar inte ett primtal");
}
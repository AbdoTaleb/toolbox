#include <iostream>
#include "tester.h"
#include "fuktsensor_klass.h"

void testaFuktsensor() {
    std::cout << "-- HumiditySensor: kritisk grans --\n";

    HumiditySensor under("Under", 50.0, 70.0);
    kontrollera(under.arKritisktFuktigt() == false,
                "50 ar inte kritiskt fuktigt med grans 70");

    HumiditySensor pa_gransen("Pa_gransen", 70.0, 70.0);
    kontrollera(pa_gransen.arKritisktFuktigt() == false,
                "exakt pa gransen raknas inte som kritiskt");

    HumiditySensor over("Over", 80.0, 70.0);
    kontrollera(over.arKritisktFuktigt() == true,
                "80 ar kritiskt fuktigt med grans 70");
}
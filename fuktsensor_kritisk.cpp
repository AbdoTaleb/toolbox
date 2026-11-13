#include "fuktsensor_klass.h"

bool HumiditySensor::arKritisktFuktigt() const {
    return senasteVarde > kritiskGrans;
}
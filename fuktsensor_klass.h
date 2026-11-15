#ifndef FUKTSENSOR_KLASS_H
#define FUKTSENSOR_KLASS_H

#include "sensorobjekt_klass.h"

class HumiditySensor : public Sensor {
private:
    double kritiskGrans;

public:
    HumiditySensor(const char *sensornamn, double startvarde,
    double kritiskGransvarde);

    double hamtaKritiskGrans() const;
    bool arKritisktFuktigt() const;

    const char *hamtaTyp() const override;
    void skrivUt() const override;
};

#endif
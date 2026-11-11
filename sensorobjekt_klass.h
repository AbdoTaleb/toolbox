#ifndef SENSOROBJEKT_KLASS_H
#define SENSOROBJEKT_KLASS_H

class Sensor 
{
protected:
    char namn[50];
    double senasteVarde;
    int antalMatningar;

public:
    Sensor();
    Sensor(const char *sensornamn, double startvarde);
    ~Sensor();

    void uppdateraVarde(double nyttVarde);
    void nollstallRakning();
    bool arInomGrans(double min, double max) const;
    bool bytNamn(const char *nyttNamn);
    void skrivUt() const;
    bool harHogreVarde(const Sensor &annan) const;

    const char *hamtaNamn() const;
    double hamtaSenasteVarde() const;
    int hamtaAntalMatningar() const;
    bool sattAntalMatningar(int nyttAtal);
    bool arGiltig() const;
};

#endif
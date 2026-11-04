#ifndef SENSOROBJEKT_KLASS_H
#define SENSOROBJEKT_KLASS_H

struct Sensor {
    char namn[50];
    double senasteVarde;
    int antalMatningar;

    Sensor();
    Sensor(const char *sensornamn, double startvarde);
    ~Sensor();

    void uppdateraVarde(double nyttVarde);
    void nollstallRakning();
    bool arInomGrans(double min, double max) const;
    void bytNamn(const char *nyttNamn);
    void skrivUt() const;

    bool harHogreVarde(const Sensor &annan) const;
};

#endif
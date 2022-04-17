#ifndef CALCULATION_HPP
#define CALCULATION_HPP

#include "Vector.hpp"
#include "../Classes/Windlog.hpp"

// Provides calculation components
class Calculation
{
public:
    //.....
    float avgWindSpeed(Vector<Windlog> *data, int month, int year);
    float avgAmbientTemp(Vector<Windlog> *data, int month, int year);
    float sumSolarRadiation(Vector<Windlog> *data, int month, int year);

private:
    //.....
};

#endif

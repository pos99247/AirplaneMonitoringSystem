// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H

#include "Sensor.h"

namespace Project2
{
    class TemperatureSensor : public Project2::Sensor
    {
    public:
        TemperatureSensor(string name, Signal &source);

    protected:
        virtual string getUnits() const;
    };
}
#endif


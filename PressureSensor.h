// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef PRESSURESENSOR_H
#define PRESSURESENSOR_H

#include "Sensor.h"

namespace Project2
{
    class PressureSensor : public Project2::Sensor
    {
    public:
        PressureSensor(string name, Signal &source);

    protected:
        virtual string getUnits() const;
    };
}
#endif

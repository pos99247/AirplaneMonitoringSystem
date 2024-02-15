// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef ANGULARSENSOR_H
#define ANGULARSENSOR_H

#include "Sensor.h"

namespace Project2
{
    class AngularSensor : public Project2::Sensor
    {
    public:
        AngularSensor(string name, Signal &source);

    protected:
        virtual string getUnits() const;
    };
}
#endif

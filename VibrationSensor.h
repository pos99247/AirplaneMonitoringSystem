// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef VIBRATIONSENSOR_H
#define VIBRATIONSENSOR_H

#include "Sensor.h"

namespace Project2
{
    class VibrationSensor : public Project2::Sensor
    {
    public:
        VibrationSensor(string name, Signal &source);

    protected:
        virtual string getUnits() const;
    };
}
#endif


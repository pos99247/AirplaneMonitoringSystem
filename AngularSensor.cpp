// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - AngularSensor.cpp

#include "AngularSensor.h"
#include <string>
using std::string;

namespace Project2
{
    AngularSensor::AngularSensor(std::string name, Signal &source)
        : Sensor(name, source)
    {
    }

    string AngularSensor::getUnits() const
    {
        return "Radians";
    }
}

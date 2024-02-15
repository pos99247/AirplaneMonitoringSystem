// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - PressureSensor.cpp

#include "PressureSensor.h"
#include <string>
using std::string;

namespace Project2
{
    PressureSensor::PressureSensor(std::string name, Signal &source)
        : Sensor(name, source)
    {
    }

    string PressureSensor::getUnits() const
    {
        return "Pounds per square inch (PSI)";
    }
}

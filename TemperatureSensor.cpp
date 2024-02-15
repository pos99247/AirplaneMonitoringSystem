// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - TemperatureSensor.cpp

#include "TemperatureSensor.h"
#include <string>
using std::string;

namespace Project2
{
    TemperatureSensor::TemperatureSensor(std::string name, Signal &source)
        : Sensor(name, source)
    {
    }

    string TemperatureSensor::getUnits() const
    {
        return "Degrees Celsius";
    }
}

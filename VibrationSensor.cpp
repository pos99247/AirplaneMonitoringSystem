// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - VibrationSensor.cpp

#include "VibrationSensor.h"
#include <string>
using std::string;

namespace Project2
{
    VibrationSensor::VibrationSensor(std::string name, Signal &source)
        : Sensor(name, source)
    {
    }

    string VibrationSensor::getUnits() const
    {
        return "Hertz (Hz)";
    }
}

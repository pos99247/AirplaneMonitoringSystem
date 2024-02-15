// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - ConstantSignal.cpp

#include "ConstantSignal.h"
#include "Time.h"

namespace Project2
{
    // Constructor
    ConstantSignal::ConstantSignal(double voltageOffset, Time timeOffset)
        : Signal(voltageOffset, timeOffset)
    {
    }

    double ConstantSignal::getVoltageAtTime(Time t) const
    {
        return getVoltageOffset();
    }
}

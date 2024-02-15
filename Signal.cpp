// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - Signal.cpp

#include "Signal.h"
#include "Time.h"

namespace Project2
{
    Signal::Signal(double voltageOffset, Time timeOffset)
        : voltageOffset(voltageOffset), timeOffset(timeOffset)
    {
    }

    double Signal::getVoltageOffset() const
    {
        return voltageOffset;
    }

    Time Signal::getTimeOffset() const
    {
        return timeOffset;
    }
}

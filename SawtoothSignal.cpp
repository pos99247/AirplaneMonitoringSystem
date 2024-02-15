// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - SawtoothSignal.cpp

#include "SawtoothSignal.h"
#include <math.h>

namespace Project2
{
    // Constructor
    SawtoothSignal::SawtoothSignal(double voltageOffset, Time timeOffset, 
        double minVoltage, double maxVoltage, Time period)
        : PeriodicSignal(voltageOffset, timeOffset,
            minVoltage, maxVoltage, period)
    {
    }

    double
    SawtoothSignal::getVoltageAtTime(Time t) const
    {
        double tInSeconds = t.getTotalTimeAsSeconds();
        double tOffsetInSeconds = getTimeOffset().getTotalTimeAsSeconds();
        double pInSeconds = getPeriod().getTotalTimeAsSeconds();
        double min = getMinVoltage();
        double max = getMaxVoltage();
        return getVoltageOffset() + min + fmod((tInSeconds + tOffsetInSeconds) 
            * (max - min) / (pInSeconds), (max - min));
    }
}

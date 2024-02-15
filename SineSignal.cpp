// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - SineSignal.cpp

#include "SineSignal.h"
#include <cmath>

const double PI = 3.14159265358979323846;

namespace Project2
{
    // Constructor
    SineSignal::SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period)
        : PeriodicSignal(voltageOffset, timeOffset, minVoltage, maxVoltage, period)
    {
    }

    double
        SineSignal::getVoltageAtTime(Time t) const
    {
        double tInSeconds = t.getTotalTimeAsSeconds();
        double tOffsetInSeconds = getTimeOffset().getTotalTimeAsSeconds();
        double pInSeconds = getPeriod().getTotalTimeAsSeconds();
        double min = getMinVoltage();
        double max = getMaxVoltage();
        return getVoltageOffset() + min + (max - min) / 2
            + sin((tInSeconds + tOffsetInSeconds) * 2 * PI / pInSeconds) * (max - min) / 2;
    }
}

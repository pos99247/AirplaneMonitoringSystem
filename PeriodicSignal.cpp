// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - PeriodicSignal.cpp

#include "PeriodicSignal.h"
#include "Time.h"

namespace Project2
{
    // Constructor
    PeriodicSignal::PeriodicSignal(double voltageOffset, Time timeOffset, 
        double minVoltage, double maxVoltage, Time period)
        : Signal(voltageOffset, timeOffset), 
        minVoltage(minVoltage), maxVoltage(maxVoltage), period(period)
    {
    }

    double 
    PeriodicSignal::getMinVoltage() const
    {
        return minVoltage;
    }

    double
    PeriodicSignal::getMaxVoltage() const
    {
        return maxVoltage;
    }

    Time
    PeriodicSignal::getPeriod() const
    {
        return period;
    }
}

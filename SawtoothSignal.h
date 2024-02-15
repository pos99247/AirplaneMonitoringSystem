// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef SAWTOOTHSIGNAL_H
#define SAWTOOTHSIGNAL_H

#include "Time.h"
#include "PeriodicSignal.h"

namespace Project2
{
    class SawtoothSignal : public Project2:: PeriodicSignal
    {
    public:
        SawtoothSignal(double voltageOffset, Time timeOffset, 
            double minVoltage, double maxVoltage, Time period);
        virtual double getVoltageAtTime(Time t) const;
    };
}
#endif

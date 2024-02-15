// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef SINESIGNAL_H
#define SINeSIGNAL_H

#include "Time.h"
#include "PeriodicSignal.h"

namespace Project2
{
    class SineSignal : public Project2::PeriodicSignal
    {
    public:
        SineSignal(double voltageOffset, Time timeOffset, double minVoltage, double maxVoltage, Time period);
        virtual double getVoltageAtTime(Time t) const;
    };
}
#endif

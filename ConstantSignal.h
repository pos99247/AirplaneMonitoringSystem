// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef CONSTANTSIGNAL_H
#define CONSTANTSIGNAL_H

#include "Time.h"
#include "Signal.h"

namespace Project2
{
    class ConstantSignal : public Project2::Signal
    {
    public:
        ConstantSignal(double voltageOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const;
    };
}
#endif

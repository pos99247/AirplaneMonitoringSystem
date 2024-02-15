// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef SIGNAL_H
#define SIGNAL_H

#include "Time.h"

namespace Project2
{
    class Signal
    {
    public:
        Signal(double voltageOffset, Time timeOffset);
        virtual double getVoltageAtTime(Time t) const = 0;

    protected:
        double getVoltageOffset() const;
        Time getTimeOffset() const;

    private:
        double voltageOffset;
        Time timeOffset;

    };
}
#endif

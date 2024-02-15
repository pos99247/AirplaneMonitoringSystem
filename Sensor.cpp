// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - Sensor.cpp

#include "Sensor.h"

namespace Project2
{
    Sensor::Sensor(std::string name, Signal &source)
        : name(name), source(source)
    {
    }

    void Sensor::takeReading(Time t, DataRecorder &recorder)
    {
        double voltage = getSource().getVoltageAtTime(t);
        recorder.log(t, getName(), voltage, getUnits());
    }

    std::string Sensor::getName() const
    {
        return name;
    }

    Signal& Sensor::getSource() const
    {
        return source;
    }
}

// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - Sensor.h

#ifndef SENSOR_H
#define SENSOR_H

#include <string>
using std::string;
#include "Signal.h"
#include "DataRecorder.h"

namespace Project2
{
    class Sensor
    {
    public:
        Sensor(string name, Signal &source);
        void takeReading(Time t, DataRecorder &recorder);

    protected:
        virtual string getUnits() const = 0;
        string getName() const;
        Signal &getSource() const;

    private:
        string name;
        Signal& source;
    };
}
#endif

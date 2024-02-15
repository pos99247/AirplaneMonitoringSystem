// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - MonitoringSystem.h

#ifndef MONITORINGSYSTEM_H
#define MONITORINGSYSTEM_H

#include "Sensor.h"
#include <vector>
using std::vector;
#include <iostream>
using std::ostream;

namespace Project2
{
    class MonitoringSystem
    {
    public:
        MonitoringSystem(ostream &out);
        void addSensor(Sensor *s);
        void takeReading(Time t);
    private:
        vector<Sensor*> sensors;
        ostream &out;
    };
}
#endif

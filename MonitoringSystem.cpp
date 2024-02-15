// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - MonitoringSystem.cpp

#include "MonitoringSystem.h"

namespace Project2
{
    MonitoringSystem::MonitoringSystem(ostream &out) : out(out)
    {
    }

    void MonitoringSystem::addSensor(Sensor *s)
    {
        sensors.push_back(s);
    }

    void MonitoringSystem::takeReading(Time t)
    {
        DataRecorder recorder(out);
        for (size_t i = 0; i < sensors.size(); ++i)
        {
            Sensor* sensor = sensors[i];
            sensor->takeReading(t, recorder);
        }
    }
}

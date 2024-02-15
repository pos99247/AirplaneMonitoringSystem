// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - DataRecorder.h

#ifndef DATARECORDER_H
#define DATARECORDER_H

#include "Time.h"
#include <string>
using std::string;
#include <ostream>
using std::ostream;

namespace Project2
{
    class DataRecorder
    {
    public:
        DataRecorder(ostream &out);
        void log(Time timestamp, string sensorName, 
            double sensorVoltage, string sensorUnits);

    private:
        ostream &out;

    };
}
#endif

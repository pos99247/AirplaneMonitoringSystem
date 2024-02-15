// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - DataRecorder.cpp

#include "DataRecorder.h"
#include <iostream>
#include <iomanip>
using std::fixed;
using std::setprecision;

namespace Project2
{
    DataRecorder::DataRecorder(ostream &out) : out(out)
    {
    }

    void DataRecorder::log(Time timestamp, string sensorName, 
        double sensorVoltage, string sensorUnits)
    {
        out << timestamp << " - " << sensorName << " - " 
            << fixed << setprecision(2) << sensorVoltage 
            << " " << sensorUnits << "\n";
    }
}

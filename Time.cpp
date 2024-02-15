// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2 - Time.cpp

#include "Time.h"
#include <iostream>
using std::ostream;

const int SECONDS_IN_HOUR = 3600;
const int SECONDS_IN_MINUTE = 60;

namespace Project2
{
    Time::Time(int hours, int minutes, int seconds)
    {
        this->seconds = SECONDS_IN_HOUR * hours + SECONDS_IN_MINUTE * minutes + seconds;
    }

    int Time::getTotalTimeAsSeconds() const
    {
        return seconds;
    }

    Time& Time::operator+=(const Time &rhs)
    {
        this->seconds += rhs.getTotalTimeAsSeconds();
        return *this;
    }

    ostream &operator<<(ostream &os, const Time &rhs)
    {
        int totalSeconds = rhs.getTotalTimeAsSeconds();
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        os << hours << "h:" << minutes << "m:" << seconds << "s";
        return os;
    }
}

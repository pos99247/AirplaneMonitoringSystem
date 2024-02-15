// Brian Nam U08673167
// nam.bbrian@gmail.com
// CSE - 40477 C/C++ Programming III
// Project 2

#ifndef TIME_H
#define TIME_H

#include <iostream>
using std::ostream;

namespace Project2
{
    class Time
    {
        friend ostream &operator<<(ostream &os, const Time &rhs);
    public:
        Time(int hours, int minutes, int seconds);
        int getTotalTimeAsSeconds() const;
        Time &operator+=(const Time &rhs);
        friend ostream &operator<<(ostream &os, const Time &rhs);
    private:
        int seconds;
    };
}

#endif // TIME_H

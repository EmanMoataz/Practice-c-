 #include <iostream>
 #include "Time.h"

Time::Time()
{
    second = 0;
    minute = 0;
    hour = 0;
}

Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::reset(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::print()
{
    std::cout << hour << ":" << minute << ":" << second << std::endl;
}

void Time::normalize()
{
    minute += second / 60;
    second %= 60;

    hour += minute / 60;
    minute %= 60;

    hour %= 24;
}

void Time::advance(int h, int m, int s)
{
    second += s;
    minute += m;
    hour += h;

    normalize();
}
#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int second, minute, hour;

public:
    Time();
    Time(int h, int m, int s);

    void reset(int h, int m, int s);
    void print();
    void normalize();
    void advance(int h, int m, int s);
};

#endif
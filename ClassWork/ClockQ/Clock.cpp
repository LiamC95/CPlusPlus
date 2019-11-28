#include "Clock.h"
#include <iostream>
#include <string>


using namespace std;

Clock::Clock(int h, int m, int s)
{
    setHours(h);
    setMinutes(m);
    setSeconds(s);
}

int Clock::getHours()
{
    return hours;
}
void Clock::setHours(int h)
{
    if(h >= 0 && h < 24)
    {
        hours = h;
    }
}

int Clock::getMinutes()
{
    return minutes;
}
void Clock::setMinutes(int m)
{
    if(m >= 0 && m < 60)
    {
        minutes = m;
    }
}


ostream& operator<<(ostream &o, Clock &c)
{
    o << c.hours << " : "<<c.minutes<<" : "<< c.seconds << endl;
    return o;
}


int Clock::getSeconds()
{
    return seconds;
}
void Clock::setSeconds(int s)
{
    if(s >= 0 && s < 60)
    {
        seconds = s;
    }
}


int Clock::getTimeInSeconds()
{
    return (hours*3600)+(minutes*60)+seconds;
}

int Clock::timeRemaininginDay()
{
    return (24*3600) - getTimeInSeconds();
}

string Clock::timeDifference(Clock b)
{
    int diff = abs(getTimeInSeconds() - b.getTimeInSeconds());
    int hr = (diff/3600);
    int min = (diff%3600) / 60;
    int sec = (diff % 60);

    string s = to_string(hr)+":"+to_string(min)+":"+to_string(sec);
    return s;
}

Clock::~Clock()
{

}
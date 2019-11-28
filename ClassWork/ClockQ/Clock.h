#pragma once 
#include <string>
#include <iostream>
using namespace std;

class Clock
{
    int hours;
    int minutes;
    int seconds;
    public : 
    Clock(int hours = 0,int minutes = 0, int seconds = 0 );
    int getHours();
    int getMinutes();
    int getSeconds();


    int getTimeInSeconds();

    int timeRemaininginDay();

    string timeDifference(Clock b);

    friend ostream& operator<<(ostream& o, Clock &c);


    void setHours(int h);
    void setMinutes(int m);
    void setSeconds(int s);

    ~Clock();
};
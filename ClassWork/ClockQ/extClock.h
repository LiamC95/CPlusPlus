#pragma once
#include "Clock.h"

class extClock : public Clock
{
    string timezone;
    public:

        extClock();
        extClock(int h, int m, int s, string t);
        string getTimezone() const;
        void setTimezone(string s);

        ~extClock();
};
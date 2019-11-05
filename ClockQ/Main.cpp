#include "Clock.h"
#include "extClock.h"
#include <iostream>

int main()
{
    Clock clock1(12,3,12);
    extClock clock2(12,23,55,"GMT");

    cout << clock1.getHours() << endl;


    cout << clock1 << endl;

    int secondspast = clock1.getTimeInSeconds();

    cout << "Time past : " << secondspast << endl;

    cout << "Time Remaining: " << clock1.timeRemaininginDay() << endl;


    cout << "Difference Between clock one and two: "<< clock1.timeDifference(clock2) << endl;

    cout << clock2.getTimezone() << endl;
    return 0;
}
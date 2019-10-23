#include "Clock.h"
#include <iostream>

int main()
{
    Clock clock1(12,3,12);
    Clock clock2(12,23,55);

    cout << clock1.getHours() << endl;


    cout << clock1 << endl;

    int secondspast = clock1.getTimeInSeconds();

    cout << "Time past : " << secondspast << endl;

    cout << "Time Remaining: " << clock1.timeRemaininginDay() << endl;


    cout << "Difference Between clock one and two: "<< clock1.timeDifference(clock2) << endl;
    return 0;
}
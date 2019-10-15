// daysOfWeek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "DayOfWeek.h"
#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello World!\n";

    DayOfWeek d(1);
     
    cout << "The current day is: " << d.printCurrentDay()  << endl;
}


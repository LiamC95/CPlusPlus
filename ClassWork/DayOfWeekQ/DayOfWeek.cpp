
#include "DayOfWeek.h"
#include <string>
#include <iostream>

using namespace std;

DayOfWeek::DayOfWeek(int d)
{
	currentDay = d;
	dayOfWeek[0] = "Sun";
	dayOfWeek[1] = "Mon";
	dayOfWeek[2] = "Tue";
	dayOfWeek[3] = "Wed";
	dayOfWeek[4] = "Thur";
	dayOfWeek[5] = "Fri";
	dayOfWeek[6] = "Sat";
}

string DayOfWeek::printCurrentDay()
{
	return dayOfWeek[currentDay];
}

void DayOfWeek::setDay(unsigned int d)
{
	if (d >= 0 && d < 7)
	{
		currentDay = d;
	}
	else
	{
		currentDay = 0;
	}
}

string DayOfWeek::getNextDay()
{
	return dayOfWeek[(currentDay + 1) % 7];
}

string DayOfWeek::getPreviousDay()
{
	return dayOfWeek[(currentDay + 6) % 7];
}

DayOfWeek::~DayOfWeek()
{

}
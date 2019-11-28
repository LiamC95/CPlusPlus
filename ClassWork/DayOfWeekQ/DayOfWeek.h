#pragma once
#include <string>
using namespace std;
class DayOfWeek
{
	int currentDay;
	string dayOfWeek[7];
public:
	
	DayOfWeek(int d = 0);
	string printCurrentDay();
	void setDay(unsigned int d);
	int getDay();
	string getNextDay();
	string getPreviousDay();
	~DayOfWeek();
};
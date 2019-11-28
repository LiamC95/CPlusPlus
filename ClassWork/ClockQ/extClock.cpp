#include "extClock.h"


extClock::extClock() : Clock(){
    timezone = "GMT";
}

// *                        :Clock Makes the function inhertent that function from the parent class
extClock::extClock(int h, int m, int s, string t):Clock(h,m,s)
{
    timezone = t;
}
string extClock::getTimezone() const
{
    return timezone;
}
void extClock::setTimezone(string s){
    timezone = s;
}

extClock::~extClock(){

}
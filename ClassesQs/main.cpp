#include "Date.cpp"
#include <iostream>

using namespace std;


int main()
{
    Date today;
    today.SetDate(2010,2,10);

    cout << today.getYear() <<endl;
}
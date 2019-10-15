#include "Line.h"
#include <iostream>
#include <string>

using namespace std;

Line::Line(int anA, int aB, int aC)
{
    a =anA;
    b = aB;
    c = aC;
}

float Line::getSlope()
{
    if(b == 0)
    {
        throw domain_error("Cannot find slope of vertical line!");
    }
    return -1*((float)a / (float)b);
}

bool Line::equals(Line l2)
{
    if(a== l2.a && b == l2.b && c == l2.c)
    {
        return true;

    }
    int k = a/ l2.a;
    if(b == k * l2.b && c == k *l2.c)
    {
        return true;
    }
    return false;
}

bool Line::areParrallel(Line l2)
{   
    return (b == 0 && l2.b == 0) || getSlope() == l2.getSlope();

}

bool Line::arePerpindicular(Line l2)
{
    bool result;
    result = a ==0 && l2.a == 0;
    result = result || 
}

Line::~Line()
{

}


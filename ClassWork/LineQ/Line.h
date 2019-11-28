#pragma once
#include <iostream>


using namespace std;

class Line
{
    int a, b, c;

    public:
    Line(int anA, int aB, int aC);
    float getSlope();
    bool equals(Line l2);
    bool areParrallel(Line l2);
    bool arePerpindicular(Line l2);

    ~Line();
};
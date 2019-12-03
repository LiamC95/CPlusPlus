#pragma once
#include "Shape.h"
class Circle: public Shape
{
    double radius;

    public:
    Circle();
    Circle(string color, string description, int x, int y, double radius);

    double getRadius();

    void setRadius(double radius);

    ~Circle();
};


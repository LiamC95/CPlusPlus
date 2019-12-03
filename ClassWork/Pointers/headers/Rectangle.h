#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
    double perimeter;
    public:
    Rectangle();
    Rectangle(string color, string description, int x, int y, int perimeter);

    double getPerimeter();

    void setPerimeter();


    ~Rectangle();
};
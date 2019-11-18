#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
    int perimeter
    public:
    Rectangle();
    Rectangle(string color, string description, int x, int y, int perimeter);

    int getPerimeter();

    void setPerimeter();


    ~Rectangle();
}
#pragma once
#include "Circle.h"

class Cylinder : public Circle
{
    float height; 
    public :
    Cylinder(float r, float h);
    float getHeight() const;
    void setHeight(float h);
    float area() const;
    float surfaceArea() const;

    void print() const;
    ~Cylinder();
};
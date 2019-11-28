#include "Cylinder.h"
#include <math.h>
#include<iostream>
using namespace std;

    Cylinder::Cylinder(float r, float h) : Circle(r){
        height = h;
    } 
    float Cylinder::getHeight() const
    {
        return height;
    }
    void Cylinder::setHeight(float h)
    {
        height = h;   
    }
    float Cylinder::area() const
    {
        return Circle::area() * height;
    }
    float Cylinder::surfaceArea() const
    {
        //A=2πr2+2πrh
        return 2*Circle::area() + height *Circle::circumference();
    }

    void Cylinder::print() const
    {
        cout << "Cylinder (Height: " << height
        << " radius: " << getRadius()
        << " Volume: "<< area()
        << " Surface: " << surfaceArea()
        << ")" <<endl;
    }
    Cylinder::~Cylinder(){

    }
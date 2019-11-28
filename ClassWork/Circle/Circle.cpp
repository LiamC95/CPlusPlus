#include "Circle.h"
#include <math.h>
#include<iostream>

using namespace std;

Circle::Circle(float r)
{
    radius = r;
}
float Circle::getRadius() const
{
    return radius;
}

float Circle::area() const
{
    return (radius*radius)*M_PI;
}
float Circle::circumference() const
{
    return 2.0*(M_PI*radius);
}
void Circle::print()
{
    cout << "Circle radius = "<<this->radius << endl;
    cout << "Circumference = "<< circumference() << endl;
    cout << "Crea          = "<< area() << endl;

}

void Circle::setRadius(float r)
{
    radius =r;
}

Circle::~Circle()
{
}
#include "Circle.h"

Circle::Circle():Shape(){
    setRadius(0);
}
Circle::Circle(string color, string description, int x, int y, double radius):Shape(string color, string description, int x, int y)
{
    setRadius(radius);
}

double Circle::getRadius(){
    return this->radius;
}

void Circle::setRadius(double radius){
    this->radius = radius;
}

Circle::~Circle(){

}
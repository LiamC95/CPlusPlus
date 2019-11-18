#include "Shape.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Shape::Shape()
{
    setColor("White");
    setDescription("Square");
    setX(1);
    setY(1);
}
Shape::Shape(string color, string description, int x, int y)
{
    setColor(color);
    setDescription(description);
    setX(x);
    setY(y);
}

void Shape::setColor(string color)
{
    this->color = color;
}
void Shape::setDescription(string description)
{
    this->description = description;
}
void Shape::setX(int x)
{
    this->x = x;
}
void Shape::setY(int y)
{
    this->y = y;
}

string Shape::getColor()
{
    return this->color;
}
string Shape::getDescriprion()
{
    return this->description;
}

int Shape::getX()
{
    return this->x;
}
int Shape::getY()
{   
    return this->y;
}

void Shape::print()

Shape::~Shape()
{

}
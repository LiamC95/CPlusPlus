#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
class Shape{

string color;
string description;
int x,y;

public:

Shape();
Shape(string color, string description, int x, int y);
void setColor(string color);
void setDescription(string description);
void setX(int x);
void setY(int y);

string getColor();
string getDescriprion();

int getX();
int getY();

virtual void print();
virtual double getArea()=0;
virtual double getPerimeter()=0;

~Shape();
};
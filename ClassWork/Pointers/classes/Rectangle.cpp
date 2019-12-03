#include "Rectangle.h"

Rectangle::Rectangle():Shape(){

}
Rectangle::Rectangle(string color, string description, int x, int y, int perimeter):Shape(string color, string description, int x, int y){
    setPerimeter();
}

double Rectangle::getPerimeter(){
    return this->perimeter;
}

void Rectangle::setPerimeter(){
    this->perimeter = (2*x) + (2*y);
}


Rectangle::~Rectangle(){

}
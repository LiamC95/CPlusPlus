#pragma once

class Circle
{
private:
    float radius;
public:

    Circle(float r);
    float getRadius() const;
    float circumference() const;

    float area() const;


    void setRadius(float r);
    void print();
    ~Circle();
};



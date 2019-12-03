#pragma once
#include <iostream>
using namespace std;
class Fraction{

public :
int a,b;
Fraction();



friend istream& operator>>(istream& in, Fraction& f);
friend ostream& operator<<(ostream& out,const Fraction& f);

Fraction operator+(Fraction& f);
Fraction operator-(Fraction& f);
Fraction operator*(Fraction& f);
Fraction operator/(Fraction& f);
bool operator >(Fraction& f);
bool operator <(Fraction& f);

};
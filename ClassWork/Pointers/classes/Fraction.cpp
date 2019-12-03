#include "./../headers/Fraction.h"
#include<iostream>

using namespace std;

Fraction::Fraction()
{
    a = 1;
    b = 1;
}
 istream& operator>>(istream& in, Fraction& f)
{
    char slash;
    in >> f.a;
    in >> slash;
    in >> f.b;
    return in;
}
 ostream& operator<<(ostream& out,const Fraction& f)
{
    out << f.a << "/" << f.b << endl;
    return out;
}

Fraction Fraction::operator+(Fraction& f)
{
    Fraction f2;
    f2.a = (a*f.b) + (b*f.a);
    f2.b = (b*f.b);
    return f2;
}
Fraction Fraction::operator-(Fraction& f)
{
    Fraction f2;
    f2.a = (a*f.b) - (b*f.a);
    f2.b = (b*f.b);
    return f2;
}
Fraction Fraction::operator*(Fraction& f)
{
    // f c/d
    // 
    Fraction f2;
    f2.a = a*f.a;
    f2.b = b*f.b;
    return f2;
}
Fraction Fraction::operator/(Fraction& f)
{
    /*
    fraction f = c/d
    (a/b)/(c/d) = ad/bc; in which c/d != 0:
    */
    Fraction f2;
    f2.a =  a*f.b;
    f2.b = b*f.a;
    return f2;

}
bool Fraction::operator>(Fraction& f)
{
    return a*f.b > b*f.a;
}
bool Fraction::operator<(Fraction& f)
{
    return a*f.b < b*f.a;
}
#include "Calculator.h"
#include <iostream>
#include <stack>
using namespace std;
Calculator::Calculator(){
    insert(0);
}
void Calculator::insert(double x)
{
    myStack.push(x);
}

void Calculator::addNums()
{
    if(myStack.size() >= 2)
    {
        double x1 = myStack.top();
        myStack.pop();
        double x2 = myStack.top();
        myStack.pop();
        myStack.push(x1+x2);
    }
    else throw domain_error("Not enough args");
}
void Calculator::multiplyNums()
{
    if(myStack.size() >=2)
    {
        double x = myStack.top();
        myStack.pop();
        double y = myStack.top();
        myStack.pop();
        myStack.push(x*y);
    }
    else
    {
        throw domain_error("Not enough args");
    }
    
}
double Calculator::getTop()
{
    return myStack.top();
}

Calculator::~Calculator()
{

}
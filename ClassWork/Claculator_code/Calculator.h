#pragma once
#include<stack>

using namespace std;
class Calculator{
    stack<double> myStack;
public:
    Calculator();
    void addNums();
    void multiplyNums();
    void insert(double x);
    double getTop();
    ~Calculator();
};
#include "Calculator.h"
#include <iostream>


using namespace std;

int main()
{
    Calculator calc;
    calc.insert(2);
    calc.insert(3);

    calc.addNums();
    cout << calc.getTop() <<endl;
    


    return 0;
}


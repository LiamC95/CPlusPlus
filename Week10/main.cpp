#include "intVector.h"

#include <iostream>
using namespace std;
void printVector(intVector myVec)
{
    for(int i = 0; i < myVec.length();i++)
    {
        if(i!=0)
        {
            cout << ", ";
        }
        cout << myVec.get(i);
    }
    cout << endl;
}
void question6()
{
    intVector iv;
    for(int i = 1; i <= 5 ; i++)
    {
        iv.add((i+i)*i);
    }
    printVector(iv);

    {
        intVector iv2;
        iv2.add(0);
        iv2 = iv;
    }

    printVector(iv);
}


int main()
{   

    question6();
    return 0;
}
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void printMenu(int functions);
{
    
    for(int i = 0; i <= (functions + 1); i++)
    {
        cout << "option -" << i << endl
    }
}

int main()
{
    int option = 0;

    while(option >= 0)
    {
        printMenu(3);
        getline(cin,option);
    }
    return 0;
}
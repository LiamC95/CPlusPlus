#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    string lines[4] = {"Roses are Red", "Violets are blue", "Have a drink", "or two"};

    int pad = 3;
    int len = lines[0].length();

    for(int i = 0; i < 4; i++)
    {
        if(lines[i].length() > len)
        {
            len = lines[i].length();
        }
    }

	string top(len+((pad*2)+2), '*');
    string padding(len+(pad*2), ' ');
    

    cout << top << endl;
    for(int i =0; i <pad; i++)
    {
        cout << "*" << padding << "*" << endl;
    }
    for(int i = 0; i < 4; i++)
    {
        string innerpad(pad,' ');
        cout << "*"<< innerpad << lines[i]<< innerpad << "*" << endl;
    }
    for(int i =0; i <pad; i++)
    {
        cout << "*" << padding << "*" << endl;
    }
    cout << top << endl;
}

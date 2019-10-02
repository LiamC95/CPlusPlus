#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void doubleValue(int x)
{
    x = x*2;
}
void doubleValue2(int &x)
{
    x = x*2;
}
int question12()
{
    int x = 10, y = 10;

    doubleValue(y);
    doubleValue2(x);
    cout << "x = "<< x << endl;

    cout << "y = "<< y << endl;
    return 0;
}
void print(ostream &out,string line)
{
    out << line << endl;
}

void question13()
{
    cout << "Line of text:" << endl;
    string line;
    getline(cin, line);
    print(cout, line);
    ofstream out("newFile.txt");
    if(out)
    {
        print(out, line);
    }   
    
}
int divide(int a, int b)
{
    if(b == 0)
    {
        throw domain_error("Cannot divide by zero!");
    }
    return a/b;
}
int average(int a[], int size)
{
    int total = 0;
    int count;
    for(int i = 0; i <size; i++)
    {
        if(a[i] != 0)
        {
            total = total + a[i];
            count++;
        }    
    }
    if(count == 0)
    {
        throw logic_error("Cannot compute average. All items are zero");
    }
    return total/count;
}

int main()
{
    int nums [6];
cout << "please enter 6 numbers seperated by a spaces:" << endl;
cin >> nums[0] >> nums[2] >> nums[1] >> nums[3] >> nums[4] >> nums[5];


try{
cout << average(nums, 6) << endl;
}
catch(domain_error e)
{
    cout<< e.what() << endl;
}
catch(logic_error e)
{
    cout<< e.what() << endl;
}

return 0;
}


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int question1();
int question2();
int question3();
int question4();
int question5();
int question9(int length, string names[]);
float findGrade(int ca, int fe);
string::size_type stringLength(string lines[], int length);
string::size_type stringLength(string lines);

int main()
{
    string names[6] = {"liam", "con", "bill", "jill", "joe", "sarah"};
	//question1();
	//question2();
    //question3();
    //question4();
    //question5();
    question9(6,names);

}

int question1()
{
    string name;
    cout<< "Name: " << endl;
    getline(cin,name);

    ofstream out;
    out.open("name.txt");
    if(out.is_open())
    {
        //To append data
        // out << name ios_open::app()
        out<<name;
        out.close();
    }
    else
    {
        cout << "Error opening file";
    }
    return 0;
}

int question2()
{
    ifstream in("name.txt");
    if(in)
    {
        string name;
        getline(in,name);
        int length = name.length();
        string top(length+2, '*');

        cout << top << endl;
        cout<< "*" << name << "*" << endl;
        cout << top << endl;
    }
    else
    {
        cout << "Error opening File." << endl;
    }

    return 0;
}

int question3()
{
    ifstream in("numbers.txt");
    if(in)
    {
        int numIn, total;
        float avg, count;

        count = 0;
        total = 0; 

        while(!in.eof())
        {
            in >> numIn;
            total+= numIn;
            count++;
        }
        avg = total/count;

        cout << "Average: " << avg << endl;
    }
    else
    {
        cout << "Error opening file" << endl;
    }
    return 0;
}

int question4()
{
  ifstream in("numbers.txt");
  if(in)
  {
      string name;
      getline(in,name);
      cout << name << endl;
  }
  else
  {
      cout << "Error loading file" << endl;
  }
    return 0;
}
int question5()
{

    ofstream out;
    out.open("squares.txt");

    if(out.is_open())
    {
        //To append data
        // out << name ios_open::app()
        for(int i =1; i <101; i++)
    {
        int square = i * i;
        out << "Number: " << i << " Square: " << square << endl;
    }
    }
    else
    {
        cout << "Error opening file";
    }

    

    return 0;
}
float findGrade(int ca, int fe)
{
    float fg; 
    fg = (ca *.4) + (fe *.6);
    return fg;
}
string::size_type stringLength(string names[], int size)
{
    string::size_type length = names[0].length();
    for(int i =0; i < size; i++)
    {
        if(names[i].length() > length)
        {
            length = stringLength(names[i]);
        }
    }
    return length;
}
string::size_type stringLength(string x)
{
    return x.length;
}
int question9(int length, string names[])
{
    int longest = stringLength(names, length);
    string edges(longest+2, '*');
    cout << edges << endl;
    for(int i =0; i < length; i++)
    {
        int pad = (longest - names[i].length());
        string innerpadd(pad/2, ' ');
        cout << "*" << innerpadd << names[i] << innerpadd << endl;
    }

    cout << edges << endl;

    return 0;
}


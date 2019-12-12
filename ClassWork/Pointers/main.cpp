
#include "./headers/Fraction.h"
#include "./headers/Stack.h"
#include "./headers/Entry.h"
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <functional>
#include <fstream>
#include <queue>
#include <list>

using namespace std;

typedef function <void(void)> funct;
void question1();
void question2();
void question6();
void question7();
void question9();
void question10();

struct customer{
    int arrival, seen, departure;
};


int main()
{


    map<int, funct>questions;
    questions[1] = question1;
    questions[2] = question2;
    questions[6] = question6;
    questions[7] = question7;
    questions[9] = question9;
    questions[10]   = question10;
    int choice =0;

    do{
        cout << "question number" << endl;
        cin >> choice ;
        if(questions.find(choice) != questions.end())
        {
            questions[choice]();
        }
        else if(choice != -1)
        {
            cout << "Qusetion not found" << endl;
        }
    }while(choice!=1);
    

    return 0;
}

void question1()
{
    string text; 
    cout << "input line of text:";
    cin >> text;

    char* letters = new char[text.size()];
    char* pointer = letters;
    for(int i = 0; i < text.size(); i++)
    {
        *pointer = toupper(text[i]);
        pointer++;
    }
    pointer = letters;
    for(int i = 0; i < text.size(); i++)
    {
        cout << *pointer;
        pointer++;
    }
    cout << endl;
    delete[] letters;
    letters = 0;
    pointer = 0;
}
int mark(char *correct, char *stuAns)
{
    int marks = 0; 
    for(int i =0; i < 20; i++ )
    {
        if(*correct == *stuAns)
        {
            marks+=5;
        }
        correct++;
        stuAns++;
    }
    return marks;
}
void question2()
{
    ifstream iof("Text.txt");
    if(iof)
    {
        string correct;
        getline(iof,correct);
        cout << correct;
        char *corrPtr = new char[20];

        while(!iof.eof())
        {
        string studentNum;
        string ans;
        iof >> studentNum;
        getline(iof, ans);


        ans =ans.substr(1);
        
        char *stuPtr = new char[20];
        for(int i=0;i < 20; i++)
        {
            stuPtr[i] = ans[i];
        }
        int stuMark = mark(corrPtr, stuPtr);
        cout << stuMark ;
            
        }
    }
    else
    {
        cout << "Dunno mate...." << endl;
    }
}

void question6()
{
    set<string> words;
    ifstream in("/../../textFiles/student.txt");
    if(in)
    {
        string word;
        while(!in.eof())
        {
            in >> word;
            words.insert(word);
        }
        for(set<string>::iterator iter = words.begin();
            iter != words.end();
            iter++
            )
            {
                cout << *iter << endl;
            }
    }
}

// To simulate a barber shops wait times
void question7()
{
    queue <customer> waitingQueue;
    list<customer> fincustomers;
    bool b1busy = false;
    bool b2busy = false;
    int b1idle, b2idle = 0;
    customer b1cust;
    customer b2cust;

    for(int min = 1; min < 540; min++)
    {
        if(min > 180 && min < 360)
        {
            if(min % 5 == 0)
            {
                customer c;
                c.arrival = min;
                waitingQueue.push(c);
            }
        }
        else{
            if(min % 15 == 0)
            {
                customer c;
                c.arrival = min;
                waitingQueue.push(c);
            }

            if(!b1busy && waitingQueue.size()>1)
            {
                b1cust = waitingQueue.front();
                waitingQueue.pop();
                b1cust.seen = min;
                b1busy = true;
            }
            else if(b1busy && (min - b1cust.seen)==10)
            {
                b1busy = false;
                b1cust.departure = min;
                fincustomers.push_back(b1cust);
            }
            else if(!b2busy && waitingQueue.size()>1)
            {
                b2cust = waitingQueue.front();
                waitingQueue.pop();
                b2cust.seen = min;
                b2busy = true;
            }
            else if(b2busy && (min - b2cust.seen)==20)
            {
                b2busy = false;
                b2cust.departure = min;
                fincustomers.push_back(b2cust);
            }
            else if(!b1busy)
            {
                b1idle++;
            }
            else if(!b2busy)
            {
                b2idle++;
            }

        
        }
    }
        int total = 0;
        for(customer c: fincustomers)
        {
            int wait = c.seen - c.arrival;
            total += wait; 
            
        }
        cout << "Ammount of customers = "<< fincustomers.size() << endl;
        cout << "Barber idles - (b1: " << b1idle << ") (b2: " << b2idle << ")" <<  endl;
        cout << "Average Wait time = " << total/fincustomers.size() << endl;
}

void question9()
{
    MyStack pt(3);

	pt.push(1);
	pt.push(2);

	pt.pop();
	pt.pop();

	pt.push(3);

	cout << "Top element is: " << pt.peek() << endl;
	cout << "Stack size is " << pt.size() << endl;

	pt.pop();

	if (pt.isEmpty())
		cout << "Stack Is Empty\n";
	else
		cout << "Stack Is Not Empty\n";

}

void question10()
{
    Fraction f1;
    Fraction f2;

    cout << f1 << f1 << endl;
}
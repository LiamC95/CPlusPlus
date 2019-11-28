#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <functional>
#include <fstream>

using namespace std;

typedef function <void(void)> funct;
void question1();
void question2();
void question6();

int main()
{
    map<int, funct>questions;
    questions[1] = question1;
    questions[2] = question2;
    questions[6] = question6;
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
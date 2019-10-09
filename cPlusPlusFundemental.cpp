#include <iostream>
#include <string>

using namespace std;
//? 1. Implement the “Hello World” application from the lecture “Anatomy of a C++ programme”.

//? 2. Implement the modified “Hello World” application from the lecture “Anatomy of a C++ programme”.

/*
?        3. Is the following a valid program? Why/Why not? If not modify it to get it to run.
?           #include <iostream>
?           int main() std::cout<< “Hello World!” << std::endl;

*/

//? 6. Write an application to ask a user for two numbers and tell them which number is the largest
void greaterThan();
void hellowrld(){ cout<< "Hello World!" << endl;}

/*
?    7. Write an application that will ask a user for their age and output a message telling them if they
?       are a Child (under 18), Adult (18 or over) or a Senior Citizen (over 65). Use an if statement for
?       this. Test your programme with a range of values. Record the test values and the result of your
?       program.
*/
void ageChecker();

/*
?   8.  Write an application that will ask a user for a grade (out of 100) and tell them the letter grade
?       associated with this score. Use the following table to determine their grade
*/
void gradeChecker();

/*
?    9. Write an application that implements a menu system to run the previous three questions. This
?       should use a switch statement to handle the users choice of question.
*/
void menuPrint();
void menu();


int main()
{
    hellowrld();

    menu();
    
    return 0;
}

void greaterThan()
{
    int x,y;

    cout << "Enter x value and y value" << endl;
    cin >> x >> y ;

    if(x > y)
    {
        cout << x << "is greater than " << y << endl;
    }
    else{
        cout << y << " is greater than " << x << endl;
    }
}

void ageChecker()
{
    int age;

    cout << "Please enter your age: ";
    cin >> age;
    if(age >17)
    {
        cout << "\nYou are an adult!" << endl;
    }
    else
    {
        cout << "\nYou are a child!" << endl;
    }
    
}

void gradeChecker()
{
    string output;
    cout << "Input your test score: " << endl;
    int grade;
    cin >> grade;

    if(grade < 0 || grade > 100)
    {
        output = "Invalid Input";
    }
    else if(grade < 40)
    {
        output = "your received - f";
    }
    else if(grade < 55)
    {
        output = "your received - d";
    }
    else if(grade < 70)
    {
        output = "your received - c";
    }
    else if(grade < 85)
    {
        output = "your received - b";
    }
    else if(grade <= 100)
    {
        output = "your received - a";
    }

    cout << output << endl;
}

void menuPrint()
{
    cout << "Option 1 - Number Checker\nOption 2 - Age Checker\nOption 3 - Grade Checker\nOption 4 - Exit" << endl;
}

void menu()
{
    bool exit = false;
    int option;
    while(!exit)
    {
        menuPrint();
        cin >> option;
        if(option == 1)
        {
            greaterThan();
        }
        else if(option == 2)
        {
            ageChecker();
        }
        else if(option == 3)
        {
            gradeChecker();
        }
        else if(option == 4)
        {
            exit = true;
        }
        else
        {
            cout << "Not a option!!" << endl;
        }
        

    }
}

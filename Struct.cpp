#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//? 2.	Write a program that declares a variable of type fruitType, prompts the user to input data about a fruit, and outputs the fruit data.
struct fruitType
{
    string Fruitname;
    string colour;
    int fat;
    int sugar;
    int carbs;
};
fruitType getFruit()
{
    fruitType userFruit;
    cout << "Fruit Name: ";
    cin >> userFruit.Fruitname;
    cout << endl;
    cout << "Colour of fruit: ";
    cin >> userFruit.colour;
    cout << endl;
    cout << "Fruit fats: ";
    cin >> userFruit.fat;
    cout << endl;
    cout << "Fruit Carbohydrates: ";
    cin >> userFruit.carbs;
    cout << endl;
    cout << "Fruit Sugars: ";
    cin >> userFruit.sugar;
    cout << endl;
    return userFruit;

}
void displayFruit(fruitType fruit)
{
    cout << "Name\t:"<< fruit.Fruitname << endl;
    cout << "Colour\t:"<< fruit.colour << endl;
    cout << "Fats\t:"<< fruit.fat << endl;
    cout << "Carbs\t:"<< fruit.carbs << endl;
    cout << "Sugars\t:"<< fruit.sugar << endl;
}

/*

?   3.	Write a program that reads students’ names followed by their test scores. 
?   The program should output each student’s name followed by the test scores and the relevant grade.
?   It should also find and print the highest test score and the name of the students having the highest test score.
?
?   Student data should be stored in a struct variable of type studentType,
?   which has four components: studentFName and studentLName of type string, testScore of type int
?   (testScore is between 0 and 100), and grade of type char. Suppose that the class has 20 students.
?   Use a vector (or list) of 20 components of type studentType. 
?
?       Your program must contain at least the following functions:
?  i.	A function to read the students’ data from a file into the vector.
?  ii.	A function to assign the relevant grade to each student.
?  iii.	A function to find the highest test score.
?  iv.	A function to print the names of the students having the highest test score.

? Your program must output each student’s name in this form: last name followed by a comma, followed by a space,
? followed by the first name; the name must be left justified. Moreover,
? other than declaring the variables and opening the input and output files, the function main should only be a collection of function calls.

*/
struct student
{
    /* data */
    string Fname;
    string Lname;
    int     testScore;
    char    grade;

    friend istream& operator >>(istream& in, student& s);
    friend ostream& operator >>(ostream& out, student s);

};


void setGrade(student& s)
{
    
    if(s.testScore < 40)
    {
        s.grade = 'e';
    }else if(s.testScore < 55)
    {
        s.grade = 'd';
    }
    else if(s.testScore <  65)
    {
        s.grade = 'c';
    }
    else if(s.testScore < 75)
    {
        s.grade = 'b';
    }
    else
    {
        s.grade = 'a';
    }
}





int main()
{
   

    return 0;
}

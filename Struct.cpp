#include <string>
#include <iostream>
#include <fstream>

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

//? 3.	Write a program that reads students’ names followed by their test scores. The program should output each student’s name followed by the test scores and the relevant grade. It should also find and print the highest test score and the name of the students having the highest test score.
struct student
{
    string  name;
    int     caGrade;
    int     testGrade;
    float   average;
};




int main()
{
    fruitType newFruit = getFruit();
    displayFruit(newFruit);
    return 0;
}

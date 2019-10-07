#include <string>
#include <iostream>
#include <fstream>

using namespace std;
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

int main()
{
    fruitType newFruit = getFruit();
    displayFruit(newFruit);
    return 0;
}


#include <string>
using namespace std;

class Student
{
    string firstName;
    string lastName;
    int score;
    char grade;
    void assignGrade();
public:
    Student();

    string getFirstName();

    ~Student();
};


Student::Student(string firstname, string lastname, int score)
{
    this -> firstName   = firstname;
    this -> lastName    = lastName;
    this -> score       = score;
}



string Student::getFirstName()
{
    return firstName;
}

Student::~Student()
{

}
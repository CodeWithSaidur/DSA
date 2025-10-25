/*
    polymorphism is the ability of an object to take on many forms.
    for Example Constructor Overloading
*/
#include <iostream>
using namespace std;

class Peron
{
public:
    string name;
    string gender;
    int age;

    Peron()
    {
        cout << "Enter Name, Gender, Age\n";
    };

    Peron(string name, string gender, int age)
    {
        this->name = name;
        this->gender = gender;
        this->age = age;
    };

    string info()
    {
        return "i am " + name + " My Age is " + to_string(age) + " My Gender is " + gender + "\n";
    }
};

int main()
{
    Peron p1("Jabed", "Male", 20);
    cout << p1.info();

    Peron p2;
    cout << p2.info();

    return 0;
}

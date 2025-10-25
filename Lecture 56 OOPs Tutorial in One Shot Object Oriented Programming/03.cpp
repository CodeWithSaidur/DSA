// Constructor
// 3 Types 1.Parameterize 2.Non parameterize 3.Copy

#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string dasignation;
    string lang;

    string info()
    {
        return name + " " + dasignation + " " + lang;
    }
    Employee()
    {
        name = "Enter Name";
        dasignation = "Enter Designation";
        lang = "Enter Language";
    }

    Employee(string name, string dasignation, string lang)
    {
        name = name;
        dasignation = dasignation;
        lang = lang;
    }
};

int main()
{
    Employee e1;
    e1.name = "sabed";
    e1.dasignation = "Dev";
    e1.lang = "Cpp";
    cout << e1.info() << endl;

    Employee e2("Jabed", "Dev", "C++");
    cout << e2.info() << endl;

    return 0;
}
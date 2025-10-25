#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    string company;
    int age;
    int ID;

    string info()
    {
        return name + " " + company + " " + to_string(age) + " " + to_string(ID);
    }
};

int main()
{
    Employee Emp1;
    Emp1.name = "Sabed";
    Emp1.company = "KUET"; //
    Emp1.age = 20;
    Emp1.ID = 1;

    // Emp1.info();
    cout << Emp1.info() << endl;
    return 0;
}
// constractur
#include <iostream>
using namespace std;

class Eployee
{
public:
    string name;
    string company;
    int age;
    int ID;

private:
    int salary;
    bool isMarried;

public:
    void(int salary, bool isMarried)
    {
        this->salary = salary;
        this->isMarried = isMarried;
    }
};

int main()
{
    Eployee emp1;
    emp1.name = "Sabed";
    emp1.company = "KUET";
    emp1.age = 20;
    emp1.ID = 1;

    cout << emp1.info() << endl;
    return 0;
}

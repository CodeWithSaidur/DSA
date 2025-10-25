#include <iostream>
using namespace std;

// If Else If Else
/*
int main()
{
    string a;
    cout << "Enter a";
    cin >> a;
    if (a == "Sabed")
    {
        cout << "Enter \n";
    }
    else if (a == "Jabed")
    {
        cout << " Enter \n";
    }
    else
    {
        cout << "Pass Securaty \n";
    }
    return 0;
}
*/
// Switch
/*
int main()
{
    int x = 1;
    switch (x)
    {
        case 1:
        cout << "one";
        break;

        default:
        break;
    }
    return 0;
}
*/
// For
/*
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
*/
// While
/*
int main()
{
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}
*/
// Do While
/*
int main()
{
    string name;
    do
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Hello " << name << endl;
    } while (name != "Esc");
}
*/
// Function
/*
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}
*/
// Class and Object
/*
class Stu
{
    public:
    string name;
    int roll;

    string info()
    {
        return "Name " + name + " Roll " + to_string(roll);
    }
};

int main()
{
    Stu stu1;
    stu1.name = "Sabed";
    stu1.roll = 1;

    cout << stu1.info() << endl;
    return 0;
}
*/
//
class Abc
{
public:
    int a;
    int b;
    int sum()
    {
        return a + b;
    };
    Abc()
    {
        a = 1;
        b = 2;
    }
    ~Abc()
    {
        a = 0;
        b = 0;
    }
};
int main()
{
    Abc abc1;
    abc1.a = 12;
    abc1.b = 12;
    cout << abc1.sum() << endl;
    Abc abc2;
    cout << abc2.sum() << endl;
    return 0;
}
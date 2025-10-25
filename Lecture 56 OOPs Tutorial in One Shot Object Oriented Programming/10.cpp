#include <iostream>
using namespace std;

int main()
{
    string name;
    do
    {
        cout << "Enter Name: ";
        cin >> name;
        if (name != "Exe")
        {
            cout << "Hello " << name << " How are you!" << endl;
        }
    } while (name != "Exe");

    return 0;
}
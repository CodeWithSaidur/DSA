// 7. i/o ✓
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You Can Give Vote" << endl;
    }
    else
    {
        cout << "You Can't Give Vote" << endl;
    }

    return 0;
}
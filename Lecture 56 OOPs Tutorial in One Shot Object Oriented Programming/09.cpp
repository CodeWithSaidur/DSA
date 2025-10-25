#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl; // endl is Manipulator
    cout << setw(5) << setfill('*') << a << endl;
    return 0;
}
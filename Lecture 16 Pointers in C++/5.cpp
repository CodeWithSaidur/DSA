#include <iostream>
using namespace std;

// passby reference
void change(int &a) // alias &a or *a
{
    a = 0; // *a
}

int main()
{
    int a = 10;
    change(a); // &a
    cout << a << endl;
    return 0;
}
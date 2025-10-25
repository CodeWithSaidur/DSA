
#include <iostream>
using namespace std;

int a = 10;
int fnx()
{
    int a = 20;
    return ::a; // scope resolution
}

int main()
{
    cout << fnx() << endl;
    return 0;
}
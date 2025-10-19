#include <iostream>
using namespace std;

void change(int x) // pass by Value 
{
    x = 0;
}

void change2(int *x) // pass by Reference
{
    *x = 0;
}
int main()
{

    int a = 10;
    change2(&a);
    cout << a << endl;

    return 0;
}
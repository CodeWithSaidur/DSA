#include <iostream>
using namespace std;

// A self-referential structure is a structure (or struct) 
// in C/C++ that contains a pointer to another structure of the same type 
// including possibly itself.
struct abc 
{
    int a;
    char b;
    struct abc *self;
};

int main()
{
    struct abc a;
    a.a = 2;
    a.b = 'C';
    a.self = &a;
    cout << a.a << endl;
    cout << a.b << endl;
    cout << a.self << endl;

    return 0;
}
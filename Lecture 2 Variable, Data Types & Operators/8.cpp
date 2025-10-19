/*
    8. Operators ✓
    8.1 Araithmatic ✓
    8.2 Relational ✓
    8.3 Logical ✓
    8.4 Unary Operators ✓
    8.4.1 post a++ ✓
    8.4.2 pre ++a ✓
    */

#include <iostream>
using namespace std;
int main()
{
    // 8.1 Araithmatic ✓
    int a = 10;
    int b = 10;
    cout << a - b << endl;

    // 8.2 Relational ✓
    int c = 10;
    int d = 10;
    cout << (c == d) << endl;

    // 8.3 Logical ✓
    int e = true;
    int f = false;
    cout << (e && f) << endl;

    // 8.4 Unary Operators ✓
    int g = 10;
    cout << (++g) << endl;
    return 0;
}
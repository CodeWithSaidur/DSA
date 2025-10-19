// 6. Type Conversion & Type casting ✓
//     6.1 Type Conversation
//     6.2 Type Casting
#include <iostream>
using namespace std;
int main()
{
    char c = 'C';
    int a = (int)c; // Type Casting explicitly tell the compiler to treat a value as a different type.
    cout << a << endl;

    char c1 = 'C';
    int a1 = c1; // type conversion
    cout << a1 << endl;

    return 0;
}
// Copy Constructor 2 Type 1. Shallow Copy
#include <iostream>
using namespace std;

class Num
{
public:
    int a;
    int b;
    int c;
    int *Sum;

    // constructor
    Num(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        *Sum = a + b + c;
    }

    Num(Num &obj)
    {
        this->a = obj.a;
        this->b = obj.b;
        this->c = obj.c;
        *Sum = a + b + c;
    }
};

int main()
{
    Num n1(2, 4, 5);
    Num n2(n1);

    n2.a = 0;
    n2.b = 0;
    n2.c = 0;
    n2.Sum = 0;

    cout << n1.Sum << endl;
    cout << n2.Sum << endl;
    return 0;
}

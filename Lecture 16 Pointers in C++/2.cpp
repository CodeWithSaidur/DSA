#include <iostream>
using namespace std;
int main()
{
    int a = 10;          // Digleration with Assign
    int *ap = &a;        // Address of a  , &a is Addres of operator
                         // *ap is a pointer its store address of other Variables
    cout << *ap << endl; // print the value of *ap *ap dereference value of address
    cout << &a << endl;  // print the Address of a

    int **f = &ap; // pointer to pointer its store Pointer of anpther pointer i.e *ap
    cout << **f << "F\n";
    return 0;
}
#include <iostream>
using namespace std;
// Array
int main()
{
    int marks[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < (sizeof(marks) / sizeof(marks[-1])); i++)
    {
        cout << marks[i] << endl;
    }
    cout << sizeof(int) << endl;
    return 0;
}
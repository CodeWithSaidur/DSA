#include <iostream>
using namespace std;
// max , min
int main()
{
    int arr[] = {12, 34, 65, -1, -3, 78, 23, 44, 11};
    int small = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
    }
    cout << "Smallest " << small << endl;
    return 0;
}
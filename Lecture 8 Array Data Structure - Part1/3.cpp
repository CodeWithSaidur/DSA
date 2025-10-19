#include <iostream>
using namespace std;

// LinearSearch
int LinearSearch(int arr[], int n, int item)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == item)
            return i;
    }
    return -1;
}

int main()
{
    int ar[] = {10, 20, 30};
    int n = sizeof(ar) / sizeof(int);
    cout << LinearSearch(ar, n, 200) << endl;
    return 0;
}
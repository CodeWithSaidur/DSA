#include <iostream>
using namespace std;

// Selection Sort
void SS(int arr[], int n)

{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

int main()
{
    int arr[] = {3, 2, 2, 5, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    SS(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
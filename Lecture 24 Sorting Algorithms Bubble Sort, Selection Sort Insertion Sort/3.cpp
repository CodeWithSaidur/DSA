#include <iostream>
using namespace std;

void IS(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];  // Shift element right
            previous--;
        }
        arr[previous + 1] = current;  // Insert current element
    }
}

int main()
{
    int arr[] = {2, 4, 3, 6, 5};
    int n = sizeof(arr) / sizeof(int);
    IS(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

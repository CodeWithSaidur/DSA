#include <iostream>
using namespace std;
// Bubble Sort
void BS(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSorted = false;
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = true;
            }
        }
        if (!isSorted)
        {
            return;
        }
    }
};

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 5, 7, 1};
    int n = sizeof(arr) / sizeof(int);
    BS(arr, n);
    PrintArr(arr, n);
    return 0;
}
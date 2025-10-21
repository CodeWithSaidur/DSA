#include <iostream>
#include <vector>
using namespace std;
// Recursive Binary Search

int BinarySearch(vector<int> arr, int terget, int start, int end)
{
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (terget == arr[mid])
        return mid;

    if (start <= end)
        if (terget > arr[mid])
            return BinarySearch(arr, terget, mid + 1, end);
        else
            return BinarySearch(arr, terget, start, mid - 1);
}

int main()
{
    vector<int> arr = {12, 23, 34, 45, 56, 67, 89, 90};
    int terget = 23;
    cout << BinarySearch(arr, terget, 0, arr.size() - 1) << endl;
    return 0;
}
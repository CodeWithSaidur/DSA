#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int terget)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;  // same as  (start + end) / 2;

        if (terget == arr[mid])
            return mid;

        else if (terget > arr[mid])
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {12, 23, 34, 56, 67, 78};
    int terget = 23;
    cout << binarySearch(arr, terget) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int B2D(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans = ans + (rem * pow);
        n = n / 10;
        pow = pow * 2;
    }

    return ans;
}

int main()
{
    cout << B2D(101) << endl;
    return 0;
}
#include <iostream>
using namespace std;
// factorial

int factroil(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int f_n = factroil(n);
    int f_r = factroil(r);
    int f_NmR = factroil(n - r);

    return f_n / (f_r * f_NmR);
}

int main()
{
    int n = 8;
    int r = 2;

    int fact = factroil(n);
    cout << fact << endl;
    return 0;
}
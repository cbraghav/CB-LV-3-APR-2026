#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int32_t main()
{

    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " ";
    // for (int i = 2; i <= 5; i++)
    // {
    //     int c = a + b;
    //     cout << c << " ";
    //     a = b;
    //     b = c;
    // }

    cout << fib(7) << endl;
    // for (int i = 0; i <= 5; i++)
    // {

    //     cout << fib(i) << " ";
    // }
}
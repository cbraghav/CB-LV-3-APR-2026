#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // Base case
    if (n == 1)
        return 1;

    // recursive call
    return n * fact(n - 1);
}

int32_t main()
{

    cout << fact(7) << endl;
}
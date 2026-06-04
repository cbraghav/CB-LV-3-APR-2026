#include <bits/stdc++.h>
using namespace std;
int sum = 0;

int sod(int n)
{
    if (n <= 0)
        return 0;
    int r = n % 10;
    n /= 10;
    sum += r;
    sod(n);
    return sum;
    // return r + sod(n)
}
int main()
{
    int n = 6248;

    int tot = sod(n);
    cout << tot << endl;
    return 0;
}
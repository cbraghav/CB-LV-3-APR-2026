#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int rem = n % 10;
    int quo = n / 10;
    return rem + sum_of_digits(quo);
}

int32_t main()
{
    int n = 62475;

    int sum = 0;
    // TC :O(nmumber of digits ->  max for int => 11)
    // long long
    // while (n > 0)
    // {
    //     int rem = n % 10;
    //     int quo = n / 10;
    //     sum += rem;
    //     n = quo;
    // }
    sum = sum_of_digits(n);

    cout << sum << endl;
}
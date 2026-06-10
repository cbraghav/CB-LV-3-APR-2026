#include <bits/stdc++.h>
using namespace std;

// TC ? sqrt(N)
// int find_sqrt(int n)
// {
//     int ans = 1;
//     while (ans * ans <= n)
//     {
//         ans++;
//     }
//     return ans - 1;
// }

bool check(int mid, int n, int b = 0)
{
    // O(1)
    //  return mid * mid <= n;

    // O(N)
    // power(mid, b) <=n
    int val = 1;
    for (int x = 0; x < b; x++)
    {
        val = val * mid;
    }
    return val <= n;
}

// TC:O(LogN)
int find_sqrt(int n)
{

    int low = 0;
    int hi = n;
    int ans = -1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;
        // if (mid * mid <= n)
        if (check(mid, n))
        {
            // this is a possible ans
            ans = max(ans, mid);
            // but look for a better ans on right side
            low = mid + 1;
        }
        else
        {
            // mid is not a posisble ans
            // check on left
            hi = mid - 1;
        }
    }
    return ans;
}

int32_t main()
{
    int n = 65;

    int ans = find_sqrt(n);
    cout << ans << endl;
}
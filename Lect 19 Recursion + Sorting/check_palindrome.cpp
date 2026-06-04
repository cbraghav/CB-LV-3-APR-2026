#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &v, int low, int hi)
{
    if (low >= hi)
    {
        return true;
    }

    if (v[low] != v[hi])
    {
        return false;
    }

    return check(v, low + 1, hi - 1);
}

int32_t main()
{

    vector<int> v = {1, 2, 3, 2, 7};
    int n = v.size();
    cout << check(v, 0, n - 1);
}
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int low, int hi)
{
    if (low >= hi)
    {
        return;
    }

    swap(v[low], v[hi]);
    reverse(v, low + 1, hi - 1);
}

int32_t main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = v.size();
    int low = 0;
    int hi = n - 1;

    // while (low < hi)
    // {
    //     swap(v[low], v[hi]);
    //     low++;
    //     hi--;
    // }

    reverse(v, 0, n - 1);

    for (int ele : v)
    {
        cout << ele << " ";
    }
}
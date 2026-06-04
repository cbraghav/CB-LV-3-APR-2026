#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> v = {3, 1, 5, 23, 6, 1, 6};

    // Selection sort
    // TC : O(N^2)
    // SC : O(1)
    // for every iteration => find the smallest element => swap with the current pos(idx)

    int n = v.size();
    for (int i = 0; i < n; i++) // O(N)
    {
        int sm_idx = i;
        for (int j = i; j < n; j++) // O(N)
        {
            if (v[j] < v[sm_idx])
            {
                sm_idx = j;
            }
        }
        swap(v[sm_idx], v[i]);
    }

    for (auto x : v)
        cout << x << " ";

    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> v = {3, 1, 5, 23, 6, 1, 6};
    int n = v.size();
    // bubble sort
    // TC : O(N^2)
    // SC : O(1)
    // for every iteration -> compare j and j+1 element, if( v[j+1] < v[j]  ) => swap

    for (int i = 0; i < n; i++)
        for (int j = 0; j + 1 < n; j++)
        {
            if (v[j + 1] < v[j])
                swap(v[j + 1], v[j]);
        }

    for (auto ele : v)
        cout << ele << " ";
}
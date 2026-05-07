#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> v = {1, 8, 2, 8, 2, 9, 4, 2, 8, 2, 4, 7, 3, 3, 83, 342};
    int k = 7;
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
        {
            // cout << "found";
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "found ";
    }
    else
    {
        cout << "not found";
    }
}
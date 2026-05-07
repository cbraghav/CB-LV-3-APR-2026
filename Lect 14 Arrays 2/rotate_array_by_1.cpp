#include <bits/stdc++.h>
using namespace std;

// Approach 1
// TC : O(N)
// SC : O(N)
// vector<int> rotate_array(vector<int> &v)
// {
//     int n = v.size();
//     vector<int> ans(n);

//     ans[n - 1] = v[0];
//     for (int i = 1; i < n; i++)
//     {
//         ans[i - 1] = v[i];
//     }
//     return ans;
// }

// Approach 2
// TC : O(N)
// SC : O(1)
// left
// vector<int> rotate_array(vector<int> &v)
// {
//     int n = v.size();
//     int temp = v[0];

//     // for (int i = 1; i < n; i++)
//     // {
//     //     v[i - 1] = v[i];
//     // }
//     for (int i = 0; i < n - 1; i++)
//     {
//         v[i] = v[i + 1];
//     }

//     v[n - 1] = temp;
//     return v;
// }

vector<int> rotate_array_right(vector<int> &v)
{
    int n = v.size();
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }
    v[0] = temp;

    return v;
}
int32_t main()
{

    vector<int> v = {5, 7, 9, 2, 1, 3, 8};

    vector<int> ans = rotate_array_right(v);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;

// TC O(N)
// SC O(N)
// vector<int> reverse(vector<int> &v)
// {
//     int n = v.size();
//     vector<int> ans(n);
//     for (int i = 0, j = n - 1; i < n; i++, j--)
//     {
//         ans[j] = v[i];
//     }
//     return ans;
// }

// TC O(N)
// SC O(1)
vector<int> reverse(vector<int> &v)
{
    int n = v.size();
    int i = 0;     // starting
    int j = n - 1; // ending

    while (i < j)
    {
        swap(v[i], v[j]); // 1st and last
        // 2nd and 2nd last
        // 3rd and 3rd last
        //.....
        i++;
        j--;
    }
    return v;
}
int32_t main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = v.size();

    vector<int> ans = reverse(v);

    for (int x : ans)
    {
        cout << x << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/merge-sorted-array/

// Approach 1 :
// Create a new arr , add all elements , then sort it
// TC: O(N + M + (N+M)log(N+M))
// SC: O(N+M)
// vector<int> fnc(vector<int> &a, vector<int> &b)
// {
//     vector<int> ans;
//     for (auto x : a)
//         ans.push_back(x);
//     for (auto x : b)
//         ans.push_back(x);
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// Approach 2:
// TC:O(N+M)
// SC:O(N+M)
vector<int> fnc(vector<int> &a, vector<int> &b)
{
    int p1 = 0;
    int p2 = 0;
    int n = a.size();
    int m = b.size();

    vector<int> ans;

    while (p1 < n && p2 < m)
    {
        if (a[p1] < b[p2])
        {
            ans.push_back(a[p1]);
            p1++;
        }
        else
        {
            ans.push_back(b[p2]);
            p2++;
        }
    }

    // p1 ke sare elements push ho gye and p1 > n, matlab arr2 me elments bche h
    while (p2 < m)
    {
        ans.push_back(b[p2]);
        p2++;
    }
    // p2 ke sare elements push ho gye and p2 > m
    while (p1 < n)
    {
        ans.push_back(a[p1]);
        p1++;
    }
    return ans;
}
int32_t main()
{
    vector<int> arr1 = {2, 3, 5, 6, 11};
    vector<int> arr2 = {2, 4, 6, 7, 9, 12, 15};

    vector<int> ans = fnc(arr1, arr2);

    for (int ele : ans)
    {
        cout << ele << " ";
    }
}
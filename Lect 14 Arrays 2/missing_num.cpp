#include <bits/stdc++.h>
using namespace std;

// search -> TC:O(N)
bool search(vector<int> &v, int k)
{
    for (auto x : v)
    {
        if (x == k)
        {
            return true;
        }
    }
    return false;
}

// Approach 1
// TC : O(N^2)
// SC : O(1)
// int missing_number(vector<int> &v, int n)
// {
//     // elements -> can be from 0 to n
//     for (int i = 0; i <= n; i++)
//     {
//         if (search(v, i) == false) // O(N)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Approach 2
// TC : O(N)
// SC : O(N)
// int missing_number(vector<int> &v, int n)
// {
//     cout << "approach 2 : ";

//     set<int> st;
//     // unordered_set<int> st;
//     // map<int,bool> mp;
//     for (auto x : v)
//     {
//         st.insert(x); // LogN -> set // 1-> unordered_Set
//         // mp[x] = true;
//     }

//     for (int i = 0; i <= n; i++)
//     {
//         if (st.find(i) == st.end())
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// Approach 3
// TC :O(N*LogN)
// SC :O(1)
// int missing_number(vector<int> &v, int n)
// {
//     sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] != i)
//         {
//             return i;
//         }
//     }
//     return n;
// }

// Approach 4
// TC :O(N)
// SC :O(1)
// int missing_number(vector<int> &v, int n)
// {
//     cout << "approach 3 : ";

//     // accumulate(start, end, starting_sum)
//     int sum_of_arr = accumulate(v.begin(), v.end(), 0); // O(N)

//     return ((n * (n + 1)) / 2) - sum_of_arr;
// }

// Approach 5
// TC : O(N)
// SC : O(1)
int missing_number(vector<int> &v, int n)
{
}

int32_t main()
{

    vector<int> v = {3, 1, 5, 2, 0};
    int n = 5;

    cout << "missing element is : " << missing_number(v, n);
}
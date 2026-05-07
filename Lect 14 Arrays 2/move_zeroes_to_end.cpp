#include <bits/stdc++.h>
using namespace std;

// Approach 1
// TC: O(N)
// SC: O(N)
// vector<int> move_zeroes(vector<int> &v)
// {
//     // v -> 1,0,2,0,3,4,5,
//     int zero_cnt = 0;
//     vector<int> ans;
//     for (auto x : v)
//     {
//         if (x == 0)
//         {
//             zero_cnt++;
//         }
//         else
//         {
//             ans.push_back(x);
//         }
//     }

//     // ans -> 1,2,3,4,5
//     // zero_cnt = 2
//     for (int i = 0; i < zero_cnt; i++)
//     {
//         ans.push_back(0);
//     }
//     return ans;
// }

// Approach 2
// TC: O(N)
// SC: O(1)
vector<int> move_zeroes(vector<int> &v)
{
    cout << "approach 2" << endl;

    int i = 0;
    int j = 0;
    int n = v.size();
    // goal ->
    // i-> points to non zero element
    // j-> points to zero element

    while (i < n)
    {
        if (v[i] == 0)
        {
            i++;
        }
        else
        {
            // non zero element
            // v[j] = v[i];
            swap(v[i], v[j]);
            i++;
            // jth pos -> koi non zero element aa gya
            j++;
        }
    }

    // 0 -> j (non zero elemnts)
    // // j and beyond -> zero
    // while (j < n)
    // {
    //     v[j] = 0;
    //     j++;
    // }
    return v;
}

int32_t main()
{
    vector<int> v = {0, 1, 3, 1, 0, 1, 0, 0, 5, 1, 6, 2, 7, 9, 0, 0, 2};

    vector<int> ans = move_zeroes(v);

    for (auto x : ans)
    {
        cout << x << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

// Approach 1
// TC: O(NlogN)
// SC: O(N)
// bool check_sorted(vector<int> &v)
// {
//     vector<int> copy = v;
//     sort(copy.begin(), copy.end());
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] != copy[i])
//         {
//             return false;
//         }
//     }

//     return true;
// }

// Approach 2
// TC : O(N^2)
// SC : O(1)
// bool check_sorted(vector<int> &v)
// {
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[i] > v[j])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// Approach 3
// TC O(N)
// SC O(1)
bool check_sorted(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i + 1 < n; i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}
int32_t main()
{

    // print the 2nd largest element
    vector<int> v = {7, 5, 2, 8, 2, 9, 1};

    if (check_sorted(v))
    {
        cout << "yes array is sorted" << endl;
    }
    else
    {
        cout << "array not sorted" << endl;
    }
}
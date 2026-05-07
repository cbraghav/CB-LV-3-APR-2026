#include <bits/stdc++.h>
using namespace std;
// TC O(N)
// vector<int> rotate_array_1(vector<int> &v)
// {
//     int n = v.size();
//     int temp = v[0];

//     for (int i = 0; i < n - 1; i++)
//     {
//         v[i] = v[i + 1];
//     }

//     v[n - 1] = temp;
//     return v;
// }

// Approach 1
// TC : O(N*K)
// SC : O(1)
// vector<int> rotate_array_k(vector<int> &v, int k)
// {
//     for (int i = 0; i < k; i++)
//     {
//         v = rotate_array_1(v); // O(N)
//     }
//     return v;
// }

// Approach 2
// TC : O(N*min(N,K))  -> O(N^2)
// SC : O(1)
// vector<int> rotate_array_k(vector<int> &v, int k)
// {
//     int n = v.size();
//     k = k % n; // k now will always be less that N
//     for (int i = 0; i < k; i++)
//     {
//         v = rotate_array_1(v); // O(N)
//     }
//     return v;
// }

// TC: O(N)
void reverse(vector<int> &v, int i, int j)
{
    while (i < j)
    {
        swap(v[i], v[j]);
        i++;
        j--;
    }
}

// Approach 3
// TC : O(3N)-> O(2N) -> O(N)
// SC: O(1)
vector<int> rotate_array_k(vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;
    reverse(v, 0, k - 1); // k element
    reverse(v, k, n - 1); // n -k element
    reverse(v, 0, n - 1); // n element
    return v;
}

int32_t main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    vector<int> ans = rotate_array_k(v, k);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
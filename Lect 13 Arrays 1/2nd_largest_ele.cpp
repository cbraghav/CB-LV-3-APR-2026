#include <bits/stdc++.h>
using namespace std;

// Approach 1
// TC : O(NLogN)
// SC : O(1)
// int second_largest_element(vector<int> &v)
// {
//     int n = v.size();
//     sort(v.begin(), v.end());
//     return v[n - 2];
// }

// Approach 2
// TC : O(N)
// SC : O(1)
// int second_largest_element(vector<int> &v)
// {
//     int n = v.size();
//     int largest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] > largest)
//         {
//             largest = v[i];
//         }
//     }

//     int second_largest = INT_MIN;
//     int skip = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (v[i] == largest && skip == 1)
//         {
//             skip--;
//             continue;
//         }
//         if (v[i] > second_largest)
//         {
//             second_largest = v[i];
//         }
//     }

//     return second_largest;
// }

// Approach 3
// TC O(N)
// SC O(1)
int second_largest_element(vector<int> &v)
{
    int l1 = INT_MIN;
    int l2 = INT_MIN;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] > l1)
        {
            // v[i] > l1 > l2
            // i found a element, which is greater that my largest element so far
            l2 = l1;   // your topper becoms second
            l1 = v[i]; // v[i] becomes topper
        }
        // else if (v[i] == l1)
        // {
        // }
        else if (v[i] > l2)
        {
            // l1 > v[i] > l2
            // i found a element, which is greater that your 2nd largest
            l2 = v[i];
        }
        // else{
        // l1 > l2 > v[i]
        // do nothing
        // }
    }
    return l2;
}

int32_t main()
{

    // print the 2nd largest element
    vector<int> v = {5, 4, 3, 2, 1};

    cout << "2nd largest element is :" << second_largest_element(v) << endl;
}
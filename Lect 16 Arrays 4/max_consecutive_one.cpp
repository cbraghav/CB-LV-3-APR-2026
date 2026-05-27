#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/max-consecutive-ones/
int32_t main()
{
    vector<int> nums = {4, 1, 2, 4, 1, 1, 2, 4, 1, 1, 1, 1, 2, 3, 1, 5, 1, 1, 1, 2, 4, 7};

    int ans = 0;
    int n = nums.size();

    // TC O(N^2)
    // for (int start = 0; start < n; start++)
    // {

    //     int cnt = 0;
    //     int idx = start;
    //     while (idx < n)
    //     {
    //         if (nums[idx] == 1)
    //             cnt++;
    //         else
    //             break;
    //         idx++;
    //     }
    //     ans = max(ans, cnt);
    // }

    ;
    ;
    ;
    // TC : O(N)
    // SC : O(1)
    int cnt = 0;
    for (int ele : nums)
    {
        if (ele == 1)
        {
            cnt++; // continue the 1ssss
        }
        else
        {
            cnt = 0; // restart
        }
        ans = max(ans, cnt);
    }

    cout << "ans is " << ans << endl;
}
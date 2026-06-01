#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    // start
    // end
    // start-> end => sum
    int n = nums.size();
    int ans = INT_MIN;
    // TC :O(N^3)
    // for (int start = 0; start < n; start++) {
    //     for (int end = start; end < n; end++) {

    //         int sum = 0;
    //         for (int k = start; k <= end; k++) {
    //             sum += nums[k];
    //         }
    //         ans = max(ans, sum);
    //         // cout << start << " " << end << " " << sum << endl;
    //     }
    // }

    // TC :O(N^2)
    // SC :O(1)
    // for (int start = 0; start < n; start++) {
    //     int sum = 0;
    //     for (int end = start; end < n; end++) {
    //         sum += nums[end];

    //         ans = max(ans, sum);
    //         // cout << start << " " << end << " " << sum << endl;
    //     }
    // }

    // Kadane's Algo
    // TC O(N)
    // SC O(1)
    int sum = 0;

    for (int ele : nums)
    {
        sum += ele; // continue the prev
        ans = max(ans, sum);

        if (sum < 0)
        {
            sum = 0; // start a new subarray
        }
    }

    return ans;
}
int32_t main()
{
}
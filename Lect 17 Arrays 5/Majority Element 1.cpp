#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Approach 1 :
    // TC -> O(N^2)
    // SC -> O(1)
    // int majorityElement(vector<int>& nums) {
    //     int n = nums.size();
    //     for (int i = 0; i < n; i++) {
    //         // nums[i] -> cnt
    //         int cnt = 0;
    //         for (int j = 0; j < n; j++) {
    //             if (nums[i] == nums[j])
    //                 cnt++;
    //         }
    //         if (cnt > n / 2)
    //             return nums[i];
    //     }
    //     return -1;
    // }

    // Approach 2
    // TC : O(N)
    // SC : O(N)
    // int majorityElement(vector<int>& nums) {
    //     int n = nums.size();
    //     map<int, int> mp; // {ele , cnt}

    //     for (int ele : nums)
    //         mp[ele]++;

    //     for (int ele : nums)
    //         if (mp[ele] > n / 2)
    //             return ele;

    //     return -1;
    // }

    // Approach 3
    // TC :O(N)
    // SC :O(1)
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();

        int winner = -1;
        int cnt = 0;

        for (int ele : nums)
        {
            if (cnt == 0)
            {
                cnt = 1;
                winner = ele;
            }
            else if (ele == winner)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }

        cnt = 0;
        for (int ele : nums)
        {
            if (ele == winner)
                cnt++;
        }

        if (cnt > n / 2)
        {
            return winner;
        }
        return -1;
    }
};

int32_t main()
{
}
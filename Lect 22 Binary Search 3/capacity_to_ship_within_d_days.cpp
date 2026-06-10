// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool check(vector<int> &weights, int days, int cap)
    {
        int curr_day = 1;
        int curr_weight = 0;
        for (int weight : weights)
        {
            if (curr_weight + weight <= cap)
            {
                curr_weight += weight;
            }
            else
            {
                curr_day++;
                curr_weight = 0;
                curr_weight += weight;
                // curr_weight = weight;
            }

            if (curr_day > days)
            {
                return false;
            }
        }

        return true;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {

        // can i ship "weights" in "days" days with a ship of Capacity X
        int low = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);
        int ans = 1e9;
        while (low <= hi)
        {
            int mid = (low + hi) / 2;
            if (check(weights, days, mid) == true)
            {
                ans = mid;
                // yes we can ship () with cap mid ; try to find a smaller value
                // on left
                hi = mid - 1;
            }
            else
            {
                // cant ship with cap mid ; try to find a possible ans on right
                low = mid + 1;
            }
        }
        return ans;
    }
};
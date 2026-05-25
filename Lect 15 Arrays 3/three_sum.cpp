#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{                             // N^3 log(N^3)
    vector<vector<int>> ans;  // list pf triplets
    set<vector<int>> ans_set; // set of triplest
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    // ans.push_back(triplet);
                    ans_set.insert(triplet);
                }
            }
        }
    }

    for (auto t : ans_set)
    {
        ans.push_back(t);
    }
    return ans;
}

int32_t main()
{
}
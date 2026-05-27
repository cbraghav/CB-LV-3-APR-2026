#include <bits/stdc++.h>
using namespace std;

// TC : O(N)
// SC : O(N) //
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> pos, neg, ans;

    for (int ele : nums)
    {
        if (ele > 0)
            pos.push_back(ele);
        else
            neg.push_back(ele);
    }

    int n = nums.size();
    // pos -> n/2 ele
    // neg -> n/2 ele
    for (int i = 0; i < n / 2; i++)
    {
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
    }
    return ans;
}

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n);
    int p_idx = 0;
    int n_idx = 1;

    for (int ele : nums)
    {
        if (ele > 0)
        {
            ans[p_idx] = ele;
            p_idx += 2;
        }
        else
        {
            ans[n_idx] = ele;
            n_idx += 2;
        }
    }
    return ans;
}

int32_t main()
{
}
#include <bits/stdc++.h>
using namespace std;

// TC :O(N) (unorder map)
//  TC : O(NlogN) // ordered map
// SC:O(N)
// vector<int> majorityElement(vector<int> &nums)
// {
//     map<int, int> frq;

//     int n = nums.size();

//     for (int ele : nums)
//     {
//         frq[ele]++;
//     }

//     vector<int> ans;
//     // for(int ele : nums){
//     //     if(frq[ele] > n/3){
//     //         ans.push_back(ele);
//     //     }
//     // }
//     for (pair<int, int> x : frq)
//     {
//         if (x.second > n / 3)
//             ans.push_back(x.first);
//     }
//     return ans;
// }

// Approach 2 
// TC : O(N)
// SC : O(1)
vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int winner1 = -1, winner2 = -1, cnt1 = 0, cnt2 = 0;

    for (int ele : nums)
    {

        if (cnt1 == 0 && ele != winner2)
        {
            winner1 = ele;
            cnt1 = 1;
        }
        else if (cnt2 == 0 && ele != winner1)
        {
            winner2 = ele;
            cnt2 = 1;
        }
        else if (ele == winner1)
        {
            cnt1++;
        }
        else if (ele == winner2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> ans;
    cnt1 = 0;
    cnt2 = 0;

    for (int ele : nums)
    {
        if (ele == winner1)
        {
            cnt1++;
        }
        else if (ele == winner2)
        {
            cnt2++;
        }
    }

    if (cnt1 > n / 3)
        ans.push_back(winner1);
    if (cnt2 > n / 3)
        ans.push_back(winner2);
    return ans;
}
int32_t main()
{
}
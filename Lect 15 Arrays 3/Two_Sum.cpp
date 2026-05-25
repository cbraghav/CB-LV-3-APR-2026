#include <bits/stdc++.h>
using namespace std;

// Approach 1 : Brute force approach
// TC O(N^2)
// SC O(1)
// vector<int> twoSum(vector<int> &nums, int target)
// {

//     int n = nums.size();

//     for (int first_ele = 0; first_ele < n; first_ele++)
//     {
//         for (int second_ele = first_ele + 1; second_ele < n; second_ele++)
//         {
//             if (nums[first_ele] + nums[second_ele] == target)
//             {
//                 // cout << nums[first_ele] << " " << nums[second_ele] << endl;
//                 // vector<int> ans = {first_ele, second_ele};
//                 // return ans;
//                 return {first_ele, second_ele};
//             }
//         }
//     }

//     return {};
// }

// Approach 2
// TC O(N^2) with Linear Search
// TC O(N * Log N) -> use Map
// TC O(N ) -> unordered map  //// worst case -> un_map ->O(N) => TTC O(N^2)
// SC O(N)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     cout << "approach 2 : ";
//     int n = nums.size();
//     map<int, int> present; // present[number] = index

//     for (int i = 0; i < n; i++) // O(N)
//     {
//         int a = nums[i];
//         int b = target - a;
//         // find b in nums  -> Linear Search / Find -> O(N) ?? optimize ???

//         if (present.find(b) != present.end())
//         {
//             // b exist
//             return {i, present[b]};
//         }
//         present[a] = i;
//     }
// }

// Approach 3 -> only return -> true/false
// TC : O(NLogN)
// SC : O(1)
// bool twoSum(vector<int>& nums, int target) {
//     sort(nums.begin(), nums.end()); // NlogN
//     int n = nums.size();
//     for(int i =0 ; i < n; i++){ // N
//             int a = nums[i];
//             int b  = target -a;
//             // find -> Linear Search
//             // find -> Binary Search
//             // binary_search(start , end , ele)
//             if(binary_search(nums.begin()+ i + 1, nums.end(), b)){ // LogN
//                 return true;
//             }
//     }
//     return false;
// }

// Approach 3 -> Sorting + Binary Search
// https://leetcode.com/problems/two-sum/submissions/2012781285/
// TC : O(NLogN)
// SC : O(N)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     cout << "approach 3 : sorting + bs";
//     vector<pair<int, int>> vp; // {ele,index}
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         vp.push_back({nums[i], i});
//     }

//     sort(vp.begin(), vp.end());

//     for (int i = 0; i < n; i++)
//     {

//         int a = vp[i].first; // element
//         int b = target - a;

//         // find -> Linear Search
//         // find -> Binary Search
//         // binary_search(start , end , ele)

//         // pair<int,int> p = binary_search(vp.begin() + i + 1, vp.end(), {b, -1} )
//         pair<int, int> f = {b, -1};
//         auto it = lower_bound(vp.begin() + i + 1, vp.end(), f);
//         if (it != vp.end() && it->first == b)
//         {
//             return {vp[i].second, it->second};
//         }
//     }
//     return {};
// }

// Approach 4 : Sorting + Two Pointer
// TC : O(NlogN)
// SC :O(1) -> only when -> return T/F
// SC O(N) -> if need to return the index -> https://leetcode.com/problems/two-sum/submissions/2012814152/
// bool twoSum(vector<int> &nums, int target)
// {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         int sum = nums[i] + nums[j];
//         if (sum == target)
//         {
//             return true;
//         }
//         else if (sum < target)
//         {
//             i++;
//         }
//         else
//         {
//             // sum > target
//             j--;
//         }
//     }

//     return false;
// }
int32_t main()
{

    vector<int> v1;
    vector<int> v2 = {};

    vector<int> v = {2, 7, 11, 15};
    int target = 18;

    // i // j
    // int arr[2] = {i,j};
    // pair<int,int> p = {i,j};
    // vector<int> v = {i,j};

    // cout<< i <<" " << j

    // int sum = add(3, 5);
    vector<int> ans = twoSum(v, target);

    cout << "my answer from main fnc is  " << ans[0] << " " << ans[1];
}
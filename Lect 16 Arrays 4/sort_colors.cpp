#include <bits/stdc++.h>
using namespace std;

// TC :O(2 * N)
// SC : O(1)
void sortColors(vector<int> &nums)
{
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    for (int num : nums)
    {
        if (num == 0)
            count_0++;
        else if (num == 1)
            count_1++;
        else
            count_2++;
    }
    // c0, c1, c2
    for (int i = 0; i < nums.size(); i++)
    {
        if (count_0 > 0)
        {
            nums[i] = 0;
            count_0--;
        }
        else if (count_1 > 0)
        {
            nums[i] = 1;
            count_1--;
        }
        else
        {
            nums[i] = 2;
            count_2--;
        }
    }
    return;
}

// TC :O(N)
// SC :O(1)
// Dutch national flag algo
void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int hi = n - 1;

    // from 0 to low -1 => 0s
    // from low to mid -1 => 1s
    // from mid to hi => unsorted
    // from hi + 1 to n -1 => 2s

    while (mid <= hi)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            // nums[mid] == 2
            swap(nums[mid], nums[hi]);
            hi--;
        }
    }
    return;
}

int32_t main()
{
}
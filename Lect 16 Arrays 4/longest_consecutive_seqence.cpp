// https://leetcode.com/problems/longest-consecutive-sequence/submissions/2014761846/

int longestConsecutive(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int ans = 1;
    int cnt = 1;
    int n = nums.size();

    if (n == 0)
        return 0;

    int last_smaller = nums[0];
    for (int i = 1; i < n; i++)
    {

        if (nums[i] == last_smaller + 1)
        {
            cnt++;
            last_smaller = nums[i];
        }
        else if (nums[i] != last_smaller)
        { // count reset
            cnt = 1;
            last_smaller = nums[i];
        }
        else
        {
            // nums[i] == last_smaller
        }
        ans = max(ans, cnt);
    }
    return ans;
}
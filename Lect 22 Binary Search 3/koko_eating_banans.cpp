class Solution
{
public:
    bool check(vector<int> &piles, long long h, int speed)
    {

        long long total_time_req = 0;

        for (long long banana : piles)
        {
            total_time_req += ceil((1.0 * banana) / speed);
        }

        if (total_time_req <= h)
        {
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {

        int low = 1;
        int hi = 1e9;
        int ans = hi;

        while (low <= hi)
        {
            int mid = (low + hi) / 2;

            if (check(piles, h, mid) == true)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};
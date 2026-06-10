// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/2028853242/

class Solution
{
public:
    bool check(vector<int> &arr, long long m, long long k, long long day)
    {

        long long n = arr.size();
        long long cnt = 0;
        long long boquet = 0;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] <= day)
            {
                // this flower has bloomed
                cnt++;
                if (cnt >= k)
                {
                    // i found k consecutive flowers -> make a boque
                    boquet++;
                    cnt = 0;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        if (boquet >= m)
        {
            return true;
        }
        return false;
    }

    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long total = k * 1ll * m;
        if (total > bloomDay.size())
            return -1;

        long long low = 1;
        long long hi = INT_MAX;
        int ans = -1;
        while (low <= hi)
        {
            long long mid = (low + hi) / 2;
            // check if we can make `m` boquets with `k` flowers in each , after
            // `mid` day

            if (check(bloomDay, m, k, mid))
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
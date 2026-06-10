// https://www.spoj.com/problems/AGGRCOW/
#include <bits/stdc++.h>
using namespace std;

// check if we can place "cows" number cows such that each cow is at least "dis" distance away
bool check(vector<int> &stalls, int cows, int dis)
{
    int n = stalls.size();
    int placed_cows = 1;
    int last_pos = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_pos >= dis)
        {
            // i can place a cow at stall i , such that the dis is greater
            placed_cows++;
            last_pos = stalls[i];
        }
        if (placed_cows >= cows)
        {
            return true;
        }
    }
    return false;
}
int aggr_cows(vector<int> &stalls, int cows)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();

    int x = 0; // i want to place my cows atleast x dis
    int ans = -1;
    // Linear Search
    // while (true) // O(Max_Dis) //O(10^9)
    // {
    //     if (check(stalls, cows, x) == true)
    //     {
    //         ans = x;
    //     }
    //     else
    //     {
    //         break;
    //     }
    //     x++;
    // }

    int low = 0;
    int hi = 1e9;

    while (low <= hi)
    { // O(log2(10^9))
        // int mid = low + (hi - low)/2;
        int mid = (low + hi) / 2;
        if (check(stalls, cows, mid) == true)
        {
            // mid is a possible ans -> but try to find a better(max) answer on right side
            ans = mid;
            low = mid + 1;
        }
        else
        {
            // mid is not possible, try to find a possible answer on left side
            hi = mid - 1;
        }
    }
    return ans;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
            cin >> stalls[i];
        cout << aggr_cows(stalls, c) << endl;
    }
}
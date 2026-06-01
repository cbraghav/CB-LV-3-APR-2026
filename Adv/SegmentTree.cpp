#include <bits/stdc++.h>
using namespace std;

// Prefix Sum
//  TC O(N  + Q1 + Q2N)
//  TC O(N + Q*N)
//  vector<int> Cal(vector<int> &nums, vector<vector<int>> queries)
//  {
//      int n = nums.size();
//      vector<int> pre_sum(n);
//      pre_sum[0] = nums[0];
//      for (int i = 1; i < n; i++) // O(N)
//      {
//          pre_sum[i] = pre_sum[i - 1] + nums[i];
//      }
//
//      // for (auto x : pre_sum)
//      // {
//      //     cout << x << " ";
//      // }
//      vector<int> ans;
//      for (vector<int> q : queries) // O(Q)
//      {
//          if (q[0] == 1) // Range Sum (L R) // O(1)
//          {
//              int L = q[1];
//              int R = q[2];
//              int val = pre_sum[R];
//              if (L - 1 >= 0)
//                  val -= pre_sum[L - 1];
//              ans.push_back(val);
//          }
//          else if (q[0] == 2) // Update index i with val // O(N)
//          {
//              int i = q[1];
//              int val = q[2];
//              nums[i] = val;
//              pre_sum[0] = nums[0];
//              for (int i = 1; i < n; i++) // O(N)
//              {
//                  pre_sum[i] = pre_sum[i - 1] + nums[i];
//              }
//          }
//          else if (q[0] == 3) // Update (L R) with val //O(2*N)
//          {
//              int L = q[1];
//              int R = q[2];
//              int val = q[3];
//              for (int k = L; k <= R; k++)
//              {
//                  nums[k] = val;
//              }
//              pre_sum[0] = nums[0];
//              for (int i = 1; i < n; i++) // O(N)
//              {
//                  pre_sum[i] = pre_sum[i - 1] + nums[i];
//              }
//          }
//      }
//      return ans;
//  }

class SegTree
{
private:
    vector<int> segTreeArr; // SC O(4*N)

public:
    SegTree(int n)
    {
        segTreeArr.resize(4 * n);
    }

    // TC: O(4*N)
    //  low and hi is the range of SegTree Node at index idx
    void buildSegTree(vector<int> &nums, int idx, int low, int hi)
    {
        if (low > hi)
            return;
        if (low == hi)
        {
            segTreeArr[idx] = nums[low];
            return;
        }

        int mid = (low + hi) / 2;
        buildSegTree(nums, 2 * idx + 1, low, mid);
        buildSegTree(nums, 2 * idx + 2, mid + 1, hi);

        // segTreeArr[idx] = segTreeArr[2 * idx + 1] + segTreeArr[2 * idx + 2];
        segTreeArr[idx] = max(segTreeArr[2 * idx + 1], segTreeArr[2 * idx + 2]);
        return;
    }
    // TC O(4*n)
    void printSegTreeArr(int n)
    {
        for (int i = 0; i < 4 * n; i++)
        {
            cout << segTreeArr[i] << " ";
        }
        cout << endl;
    }

    // TC O(LogN)
    int query(int idx, int low, int hi, const int L, const int R)
    {
        // base case for recur
        if (low > hi)
            return 0;

        // no overlap
        // low hi , l r have (0-2 ) need (5,7)
        // l r , low hi have(6 - 7) need (3-4)
        if (hi < L || R < low)
            return 0;

        // full overlap
        // L low hi R -> have (1-3) need (0 -7)
        if (L <= low && hi <= R)
        {
            return segTreeArr[idx];
        }

        // partial overlap
        // need( L R) have(low hi)
        // low <= L <=R <=Hi  need (1 3 ) have (0, 7)
        //  low<=L <=hi <=R   need (4 7) have (1,5)
        // L<=low <= R <= hi need(1 3 ) have(2,5)
        int mid = (low + hi) / 2;

        // return query(2 * idx + 1, low, mid, L, R) +
        //        query(2 * idx + 2, mid + 1, hi, L, R);

        return max(query(2 * idx + 1, low, mid, L, R),
                   query(2 * idx + 2, mid + 1, hi, L, R));
    }

    // Update fnc
    // TC :O(LogN)
    void pointUpdate(vector<int> &nums, int idx, int low, int hi, int X, int Val)
    {
        if (hi < low)
            return;

        if (X < low || X > hi)
            return;

        // low <= X <=hi

        if (low == hi) // leaf node of segTree
        {
            nums[X] = Val;
            segTreeArr[idx] = Val;
            return;
        }

        int mid = (low + hi) / 2;

        // range => 0 to 6 updating 2
        // mid => 3

        if (X <= mid)
            pointUpdate(nums, 2 * idx + 1, low, mid, X, Val);
        else
            pointUpdate(nums, 2 * idx + 2, mid + 1, hi, X, Val);

        // segTreeArr[idx] = segTreeArr[2 * idx + 1] + segTreeArr[2 * idx + 2];
        segTreeArr[idx] = max(segTreeArr[2 * idx + 1], segTreeArr[2 * idx + 2]);
    }
};
int32_t main()
{
    vector<int> nums = {3, 2, 7, 1, 5, 4, 6};
    // vector<vector<int>> que = {{1, 2, 4}, {1, 1, 3}, {2, 1, 100}, {1, 1, 3}};

    // vector<int> ans = Cal(nums, que);
    // for (auto x : ans)
    // {
    //     cout << x << endl;
    // }
    int n = nums.size();
    SegTree seg(n);
    seg.buildSegTree(nums, 0, 0, n - 1);
    seg.printSegTreeArr(n);

    cout << seg.query(0, 0, n - 1, 3, 6) << endl;

    seg.pointUpdate(nums, 0, 0, n - 1, 3, 15);
    seg.printSegTreeArr(n);
}

// https://leetcode.com/problems/spiral-matrix/submissions/2019216992/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &v)
    {
        int n = v.size();
        int m = v[0].size();

        int left = 0, right = m - 1;
        int top = 0, bottom = n - 1;
        vector<int> ans;

        while (left <= right && top <= bottom)
        {

            // L to R ( for topmost row)
            for (int j = left; j <= right; j++)
                ans.push_back(v[top][j]);
            top++;

            // T to B (for  rightmost col)
            for (int i = top; i <= bottom; i++)
                ans.push_back(v[i][right]);
            right--;

            if (top <= bottom)
            {
                // R to L (for bottom most row)
                for (int j = right; j >= left; j--)
                    ans.push_back(v[bottom][j]);
                bottom--;
            }

            if (left <= right)
            {
                // B  to T (for leftmost column)
                for (int i = bottom; i >= top; i--)
                    ans.push_back(v[i][left]);
                left++;
            }
        }
        return ans;
    }
};

int32_t main()
{
}
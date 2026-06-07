#include <bits/stdc++.h>
using namespace std;

// int find_right_most_set_bit(int n)
// {
//     return (n & (-n));
// }

int sub_right_most_set_bit(int n)
{
    return n - (n & (-n));
}

class BIT
{

private:
    vector<int> nums;
    vector<int> bit;
    int N;

public:
    BIT(int n)
    {
        N = n + 1;
        nums.resize(N);
        bit.resize(N);
    }

    int getSum(int idx)
    {
        int sum = 0;
        while (idx > 0)
        {
            sum += bit[idx];
            idx = idx - (idx & (-idx)); // idx - right most set bit
        }
        return sum;
    }
    int query(int L, int R)
    {
        // Make LR from 0 based to 1 Based index
        L++;
        R++;
        if (L == 1)
            return getSum(R);
        return getSum(R) - getSum(L - 1);
    }

    void update(int X, int diff)
    {
        // make X to 1 based index
        X++;
        int idx = X;
        while (idx <= N)
        {
            bit[idx] += diff;
            idx = idx + (idx & (-idx)); // idx + right most set bit
        }
        return;
    }

    void constructBIT(vector<int> &v)
    {
        nums = v;
        for (int i = 0; i < N; i++)
        {
            bit[i] = 0;
        }
        int n = v.size();
        for (int i = 0; i < n; i++)
        {
            update(i, nums[i]);
        }
    }
    void print()
    {
        for (auto ele : bit)
            cout << ele << " ";
        cout << endl;
    }
};

int32_t main()
{
    // int n = 6;
    // int r = find_right_most_set_bit(n);

    vector<int> nums = {3, 2, 1, 5, 4, 2, 0, 0, 3, 4, 1, 2};
    BIT b(nums.size());
    b.constructBIT(nums);
    b.print();
    cout << b.query(1, 4) << endl;
    ;

    b.update(2, 99);    

    b.print();
    cout << b.query(1, 2) << endl;

    cout << b.query(2, 5) << endl;
}
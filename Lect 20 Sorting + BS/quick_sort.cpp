#include <bits/stdc++.h>
using namespace std;

// TC : O(N)
int partition(vector<int> &v, int low, int hi)
{
    if (low >= hi)
    {
        return low;
    }

    int i = low - 1; // i points to the last element which is less than or equal to pivot
    // hi as pivot
    int pivot = v[hi];
    for (int j = low; j < hi; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[j], v[i]);
        }
    }
    // [low to i ] < pivot
    // [i+1 to hi -1] >= pivot
    // hi => pivot
    i++;
    swap(v[i], v[hi]);
    return i;
}

void quick_sort(vector<int> &v, int low, int hi)
{
    if (low >= hi)
    {
        return;
    }

    int partition_idx = partition(v, low, hi);
    quick_sort(v, low, partition_idx - 1);
    quick_sort(v, partition_idx + 1, hi);
}

int32_t main()
{

    vector<int> v = {3, 7, 2, 8, 2, 6, 5, 6, 1, 9, 0};

    int n = v.size();
    quick_sort(v, 0, n - 1);

    for (int ele : v)
        cout << ele << " ";
    cout << endl;
}
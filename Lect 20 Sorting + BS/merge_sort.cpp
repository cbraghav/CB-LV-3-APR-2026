#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int low, int hi)
{
    int mid = (low + hi) / 2;
    // Arr1 => low to mid
    // Arr2 => mid + 1 to hi

    int p1 = low;
    int p2 = mid + 1;

    vector<int> ans;
    while (p1 <= mid && p2 <= hi)
    {
        if (v[p1] < v[p2])
        {
            ans.push_back(v[p1]);
            p1++;
        }
        else
        {
            ans.push_back(v[p2]);
            p2++;
        }
    }
    while (p1 <= mid)
    {
        ans.push_back(v[p1]);
        p1++;
    }
    while (p2 <= hi)
    {
        ans.push_back(v[p2]);
        p2++;
    }

    // ans -> sorted
    int x = low;
    for (auto ele : ans)
    {
        v[x] = ele;
        x++;
    }
}

void merge_sort(vector<int> &v, int low, int hi)
{
    if (low == hi)
    {
        // there is a single ele
        return;
    }
    if (low > hi)
    { // no elements
        return;
    }

    int mid = (low + hi) / 2;

    merge_sort(v, low, mid);
    merge_sort(v, mid + 1, hi);

    merge(v, low, hi);
}

int32_t main()
{
    vector<int> v = {3, 7, 2, 8, 2, 5, 5, 5, 4, 6, 5, 5, 5, 6, 5, 6, 1, 9, 0};

    int n = v.size();
    merge_sort(v, 0, n - 1);

    for (int ele : v)
        cout << ele << " ";
    cout << endl;
}
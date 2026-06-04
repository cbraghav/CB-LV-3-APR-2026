#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> v = {
        23,
        23,
        45,
        1,
        5,
        21,
        76,
        8,
        12,
        346,
        32};
    int n = v.size();
    // Insertion sort
    //  TC =>O(N^2)

    // from 0 to i -1 => sorted part
    // from i to n-1 => unsorted part
    // every time , you will try to move ith element in sorted part

    for (int i = 0; i < n; i++) // O(N)
    {
        int j = i;
        while (j - 1 >= 0 && v[j] < v[j - 1]) // wost case-> O(N)
        {
            times++;
            swap(v[j], v[j - 1]);
            j--;
        }
    }

    for (auto x : v)
        cout << x << " ";
}
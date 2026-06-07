#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<int> v = {1, 4, 4, 4, 4, 4, 8};
    int k = 4;

    int n = v.size();
    int low = 0;
    int hi = n - 1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;
        if (v[mid] == k)
        {
            cout << "found element at idx " << mid << endl;
            return 0;
        }
        else if (k < v[mid])
        {
            // element may be present on left side
            // definately not present on right side
            // reject the right half( mid +1 to hi)
            hi = mid - 1;
        }
        else
        {
            // k> v[mid]
            // element maybe presnt on right side
            // definately not present on left side
            // reject the left half( low to mid -1)
            low = mid + 1;
        }
    }
    cout << "element not found";
}
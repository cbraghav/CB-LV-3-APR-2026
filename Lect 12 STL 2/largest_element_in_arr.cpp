#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int arr[] = {3, 1, 5, 9, 1, 15, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     // if (arr[i] > ans)
    //     // {
    //     //     ans = arr[i];
    //     // }
    //     // ans = max(ans, arr[i]);
    // }

    sort(arr, arr + n);
    cout << arr[n - 1];

    // cout << ans << endl;
}
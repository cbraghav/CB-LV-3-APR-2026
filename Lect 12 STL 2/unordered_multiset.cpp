#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    unordered_multiset<int> mst = {5, 8, 4, 8, 3, 6, 1, 5, 5, 5, 6};

    mst.insert(123141);

    cout << mst.size() << " :-> ";
    for (auto x : mst)
    {
        cout << x << " ";
    }
    cout << endl;
}
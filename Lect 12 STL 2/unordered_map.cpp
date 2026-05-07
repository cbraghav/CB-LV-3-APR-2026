#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    unordered_map<int, int> mp;
    mp.insert({1, 2});
    mp.insert({5, 7});

    // for (pair<int, int> p : mp)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    mp[5] = 999;
    auto it = mp.find(1);
    if (it != mp.end())
    {
        cout << (*it).first << " " << it->second << endl;
    }
    cout << mp[5] << endl;

    mp.erase(5);

    for (pair<int, int> p : mp)
    {
        cout << p.first << " " << p.second << endl;
    }

    mp.clear();

    cout << mp.size() << endl;
}
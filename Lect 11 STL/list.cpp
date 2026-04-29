#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    l.pop_front();

    for (auto x : l)
    {
        cout << x << " ";
    }
    cout << endl;

    l.push_back(666);
    l.push_front(11);

    cout << l.front() << " " << l.back() << endl;

    cout << "size " << l.size() << endl;

    cout << l.empty() << endl;

    // auto it = find(l.begin(), l.end(), 33);
    // if (it == l.end())
    // {
    //     cout << "element not found" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    for (int x : l)
    {
        cout << x << " ";
    }
    cout << endl;
    auto it = l.begin();
    it++;
    it++;
    it++;
    cout << *(it) << endl;
}
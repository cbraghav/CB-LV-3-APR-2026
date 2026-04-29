#include <bits/stdc++.h>
using namespace std;

void print(set<int> &st)
{

    for (int ele : st)
    {
        cout << ele << " ";
    }
    cout << endl;
}

struct abc
{
    bool operator()(const int &a, const int &b) const
    {
        if (a % 2 == 0 && b % 2 == 1)
        {
            return false;
        }
        else if (a % 2 == 1 && b % 2 == 0)
        {
            return true;
        }

        return a > b;
    }
};

int32_t main()
{

    // set<int> st;

    // st.insert(3);
    // st.insert(1);
    // st.insert(99);
    // st.insert(7);
    // st.insert(3);
    // st.insert(3);
    // st.insert(3);
    // st.insert(3);

    // print(st);

    // auto it = st.find(3);
    // // if (it == st.end())
    // // {
    // //     cout << " elemnt not found" << endl;
    // // }
    // // else
    // // {
    // //     cout << "element found : " << *it << endl;
    // // }

    // st.erase(99); // st.erase(value)
    // if (it != st.end())
    //     st.erase(it); // st.erase(iterator)

    // print(st);

    // multiset<int> mst;

    // mst.insert(8);
    // mst.insert(5);
    // mst.insert(7);
    // mst.insert(7);
    // mst.insert(7);
    // mst.insert(7);

    // mst.insert(-22);
    // mst.insert(5);

    // for (auto x : mst)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // cout << mst.count(741) << endl;

    // How to change order ???? of set / multiset????
    // multiset<int> mst;
    // set<T> st =>
    // set<T, greater<T>> st;
    // multiset<int, greater<int>> mst; // descending order

    // multiset<int, abc> mst;

    // mst.insert(8);
    // mst.insert(5);
    // mst.insert(9);
    // mst.insert(4);
    // mst.insert(10);
    // mst.insert(7);

    // mst.insert(-22);
    // mst.insert(5);

    // for (auto x : mst)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // set<pair<int, int>> st;

    // st.insert({1, 2});
    // st.insert({2, 1});
    // st.insert({1, 3});
    // st.insert({1, 3});
    // st.insert({3, 5});

    // set<T> st;
    // set<vector<int>> st;
    // vector<int> v1 = {1, 2};
    // vector<int> v2 = {2, 1};
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end());
    // st.insert(v1);
    // st.insert(v2);
    // st.insert({1, 3});
    // st.insert({1, 3});
    // st.insert({3, 5});

    // for (auto p : st)
    // {
    //     cout << p[0] << "  " << p[1] << endl;
}
}
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    unordered_set<int> st = {1, 3, 4, 11, 3, 6, 7};

    for (int ele : st)
    {
        cout << ele << " ";
    }
    cout << endl;

    // insert
    st.insert(55);

    for (int ele : st)
    {
        cout << ele << " ";
    }
    cout << endl;

    auto it = st.find(4);
    if (it != st.end())
    {
        cout << "element found " << *it << endl;
    }
    else
    {
        cout << "element not found " << endl;
    }

    st.erase(55);
    st.erase(it);

    cout << st.size() << " :-> ";
    for (auto x : st)
    {
        cout << x << " ";
    }

    // st.begin() ->iterator
}
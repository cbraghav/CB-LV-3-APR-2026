#include <bits/stdc++.h>
using namespace std;

void print(deque<int> &dq)
{
    for (int ele : dq)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int32_t main()
{
    // deque<int> dq;
    deque<int> dq = {1, 3, 5};
    // print(dq);

    dq.push_back(7);
    // dq.push_front(-1);

    // print(dq);

    // // dq.pop_back();
    // // dq.pop_back();

    // dq.pop_front();
    // dq.pop_front();
    // print(dq);

    // cout << dq.front() << " " << dq.back() << endl;

    // cout << dq.size() << endl;
    cout << "size " << dq.size() << " :  empty ? " << dq.empty() << endl;

    print(dq);
    // dq.clear();

    // cout << "size " << dq.size() << " :  empty ? " << dq.empty() << endl;

    // print(dq);

    // auto it = find(dq.begin(), dq.end(), 76);
    // if (it == dq.end())
    // {
    //     cout << "element not found" << endl;
    // }
    // else
    // {
    //     cout << "element found ";
    //     cout << *it << endl;
    // }

    cout << dq[2] << endl;
}
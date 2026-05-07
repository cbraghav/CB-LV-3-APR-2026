#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    queue<int> q;
    // insert

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4232);

    cout << "size : " << q.size() << endl;

    cout << q.back() << endl;

    // while (q.size() > 0)
    // {
    //     cout << q.front() << " ";
    //     q.pop(); // delete element
    // }
}
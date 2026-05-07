#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    stack<int> st;
    st.push(1); // insert element
    st.push(3);
    st.push(4);

    // cout << "top element : " << st.top() << endl;
    // st.pop(); // delete element
    // cout << "size : " << st.size() << endl;
    // cout << "top element : " << st.top() << endl;
    // st.pop();
    // cout << "size : " << st.size() << endl;
    // cout << "top element : " << st.top() << endl;
    // st.pop();
    // cout << "size : " << st.size() << endl;

    // // traversal
    // while (st.size() > 0)
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // downsize of traversal -> it makes the original stack empty

    stack<int> copy = st;

    while (copy.size() > 0)
    {
        cout << copy.top() << " ";
        copy.pop();
    }
}
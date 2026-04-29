#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    //     cout << "hello" << endl;
    // int n, m;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // cout << "output elements are : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // 2 D Vector
    // int n = 5; //  5 rows
    // int m = 3; // 3 cols
    // cin >> n >> m;
    /*
    {0, 0,0}
    {0, 0,0}
    {0, 0,0}
    {0, 0,0}
    {0, 0,0}
    */
    // vector<vector<int>>
    //     v(n, vector<int>(m, 0));

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> v[i][j];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<vector<int>> v;

    // for (int i = 0; i < n; i++)
    // {
    //     vector<int> internal;
    //     for (int j = 0; j < m; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         internal.push_back(x);
    //     }
    //     v.push_back(internal);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // vector<int> v = {1, 3, 5, 7, 9};

    // auto it = v.begin();

    // vector<int> *ptr = &v;

    // // cout << *v.begin() << endl;

    // // cout << *v.rbegin() << endl;

    // // for (auto it = v.begin(); it < v.end(); it++)
    // // {
    // //     cout << *it << " ";
    // // }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << (*ptr)[i] << endl;
    // }

    // for each loop

    // vector<int> v = {9, 7, 5, 3};
    // for (int x : vv)
    // {
    //     cout << x << " ";
    // }
    // auto it = find(v.begin(), v.end(), 7);
    // if (it == v.end())
    // {
    //     cout << "element not found" << endl;
    // }
    // else
    // {
    //     cout << "element found ";
    //     cout << *it << endl;
    // }

    vector<vector<int>> v = {{1, 2}, {3, 4, 7}, {5, 6}};

    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    for (auto x : v) // x -> vector<int>
    {
        for (auto ele : x) // ele -> int
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}
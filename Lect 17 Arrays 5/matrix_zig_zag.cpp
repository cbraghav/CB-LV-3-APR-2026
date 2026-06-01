#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<vector<int>> v = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};

    int n = v.size();
    int m = v[0].size();

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << v[i][j] << " ";
            }
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << v[i][j] << " ";
            }
        }
        cout << endl;
    }
}
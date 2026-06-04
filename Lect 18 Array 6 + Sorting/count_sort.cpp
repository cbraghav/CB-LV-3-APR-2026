#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    vector<int> v = {-7, 2, 4, 2, -1, 5, -8, 1, 3, 21, 7, 0};
    int n = v.size();

    int max_value = 0;
    int min_value = 0;
    for (int ele : v) // O(N)
    {
        min_value = min(ele, min_value);
        max_value = max(ele, max_value);
    }

    int freq[max_value + 1 + abs(min_value + 1)]{};
    // unordered_map<int, int> freq;

    for (int ele : v) // O(N)
        freq[ele + abs(min_value)]++;

    int idx = 0;
    // O(max_value + O(N))
    for (int i = min_value; i <= max_value; i++) // O(max_value + min_value)
    {
        // this loop runs N times for the entire run of the program
        // it will not run N times for every value of i
        while (freq[i + abs(min_value)] > 0)
        {
            v[idx] = i;
            freq[i + abs(min_value)]--;
            idx++;
        }
    }

    for (auto ele : v)
        cout << ele << " ";
}
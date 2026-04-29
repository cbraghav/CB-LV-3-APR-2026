#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    multimap<string, int> marks;
    marks.insert({"Raghav", 70});
    marks.insert({"Raghav", 20});
    marks.insert({"Raghav", 50});

    marks.insert({"Aman", 50});

    // auto it = marks.find("Raghav");

    // (*it).second = 30;

    for (auto mark : marks)
    {
        cout << mark.first << " " << mark.second << endl;
    }

    // marks.erase("Raghav");
    marks.erase(marks.find("Raghav"));

    cout << "after deletion " << endl
         << endl;
    for (auto mark : marks)
    {
        cout << mark.first << " " << mark.second << endl;
    }
}

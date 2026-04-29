#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    map<string, int> marks;

    marks.insert({"Raghav", 30});
    marks.insert({"Aman", 90});
    marks["Naman"] = 57;
    marks["Raghav"] = 30;
    marks.at("Naman") = 74;
    for (pair<string, int> mark : marks)
    {
        cout << mark.first << " " << mark.second << endl;
    }
    auto it = marks.find("fasdl");

    if (it == marks.end())
    {
        cout << " no student found " << endl;
    }
    else
    {

        cout << (*it).first << endl;
    }

    marks.erase("Raghav");

    for (pair<string, int> mark : marks)
    {
        cout << mark.first << " " << mark.second << endl;
    }
}
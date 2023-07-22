#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["sohel"] = 56;
    mp["sakib"] = 75;
    mp["tamim"] = 29;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
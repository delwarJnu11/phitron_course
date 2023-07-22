#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max_number = 0;
        int max_count = 0;
        for (auto val : mp)
        {
            // cout << val.first << " " << val.second << endl;
            if (val.second > max_count || (val.second == max_count && val.first > max_number))
            {
                max_number = val.first;
                max_count = val.second;
            }
        }
        cout << max_number << " " << max_count << endl;
    }
    return 0;
}

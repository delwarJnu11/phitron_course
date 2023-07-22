#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        list<int> l;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            l.push_back(x);
        }
        l.sort(greater<int>());
        l.unique();

        for (int val : l)
        {
            cout << val << " ";
        }

        cout << endl;
    }
    return 0;
}

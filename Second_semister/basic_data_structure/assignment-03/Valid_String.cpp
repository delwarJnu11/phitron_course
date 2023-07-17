#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char> stck1;
        stack<char> stck2;
        for (char c : s)
        {
            if (c == 'B')
            {
                stck1.push(c);
            }
            if (c == 'A')
            {
                stck2.push(c);
            }
        }
        stck1.size() == stck2.size() ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
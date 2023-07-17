#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st1;
    for (char c : s)
    {
        if (c == '#')
        {
            if (!st1.empty())
            {
                st1.pop();
            }
        }
        else
        {
            st1.push(c);
        }
    }
    string t;
    cin >> t;
    stack<char> st2;
    for (char c : t)
    {
        if (c == '#')
        {
            if (!st2.empty())
            {
                st2.pop();
            }
        }
        else
        {
            st2.push(c);
        }
    }
    bool flag = false;
    if (st1 == st2)
    {
        flag = true;
    }
    flag ? cout << "True" : cout << "false";
    return 0;
}

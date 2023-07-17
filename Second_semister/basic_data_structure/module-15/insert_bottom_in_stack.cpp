#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    stack<int> ns;
    while (!s.empty())
    {
        ns.push(s.top());
        s.pop();
    }
    int y;
    cin >> y;
    ns.push(y);
    while (!ns.empty())
    {
        s.push(ns.top());
        ns.pop();
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}

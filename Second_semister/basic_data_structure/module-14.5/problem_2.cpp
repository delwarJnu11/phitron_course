// Question : Take a stack of size N and a queue of size M as input.Then check if both of them are the same or not in the order of removing.You should use STL to solve this problem.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (st.size() != q.size())
    {
        flag = false;
    }
    if (st.size() == q.size())
    {
        while (!st.empty() && !q.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}

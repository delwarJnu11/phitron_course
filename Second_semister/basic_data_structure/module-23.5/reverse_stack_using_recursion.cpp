#include <bits/stdc++.h>
using namespace std;
void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }
    while (!newSt.empty())
    {
        cout << newSt.top() << endl;
        newSt.pop();
    }
}
int main()
{
    stack<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    reverseStack(s);
    return 0;
}
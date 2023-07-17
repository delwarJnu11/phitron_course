#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> stck;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            char c;
            cin >> c;
            if (!stck.empty() && stck.top() == c)
            {
                stck.pop();
            }
            else if ((!stck.empty() && c == 'R' && stck.top() == 'B') || (!stck.empty() && c == 'B' && stck.top() == 'R'))
            {
                stck.pop();
                stck.push('P');
            }
            else if ((!stck.empty() && c == 'R' && stck.top() == 'G') || (!stck.empty() && c == 'G' && stck.top() == 'R'))
            {
                stck.pop();
                stck.push('Y');
            }
            else if ((!stck.empty() && c == 'B' && stck.top() == 'G') || (!stck.empty() && c == 'G' && stck.top() == 'B'))
            {
                stck.pop();
                stck.push('C');
            }
            else
            {
                stck.push(c);
            }
        }

        // create new stack
        stack<char> newStck;
        ;
        while (!stck.empty())
        {
            if (!newStck.empty() && stck.top() == newStck.top())
            {
                stck.pop();
                newStck.pop();
            }
            else
            {
                newStck.push(stck.top());
                stck.pop();
            }
        }

        while (!newStck.empty())
        {
            cout << newStck.top();
            newStck.pop();
        }
        cout << endl;
    }

    return 0;
}
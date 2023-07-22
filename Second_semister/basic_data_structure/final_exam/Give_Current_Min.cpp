#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int command, x;
        cin >> command;
        if (command == 0)
        {
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (command == 1)
        {

            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            // delete if not empty
            if (!pq.empty())
                pq.pop();
            // print if not empty
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
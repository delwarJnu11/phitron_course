#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> qq;
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        if (number == 0)
        {
            string name;
            cin >> name;
            qq.push(name);
        }

        if (!qq.empty())
        {
            if (number == 1)
            {
                cout << qq.front() << endl;
                qq.pop();
            }
        }
        else if (qq.empty() && number == 1)
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}
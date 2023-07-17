#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] > a[i])
            {
                flag = 1;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}

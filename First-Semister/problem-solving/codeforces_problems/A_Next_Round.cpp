#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (k <= a[i])
        {
            cnt++;
        }
        if (a[i] <= 0)
        {
            cnt = 0;
        }
    }
    cout << cnt;
    return 0;
}
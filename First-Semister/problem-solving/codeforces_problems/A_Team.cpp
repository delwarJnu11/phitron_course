#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a[3];
    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[i];
            if (sum >= 2)
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
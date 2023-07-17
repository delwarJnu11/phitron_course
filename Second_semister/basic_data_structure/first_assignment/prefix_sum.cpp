#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long pre[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        pre[i] = sum;
    }
    // reverse prefix array
    reverse(pre, pre + n);
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }
    return 0;
}
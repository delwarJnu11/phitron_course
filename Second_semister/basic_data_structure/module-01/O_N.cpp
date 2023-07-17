#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    // O(N) Time complexity
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    // O(N) Time complexity
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum;
    return 0;
}
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5 + 5;

ll saveAns[N];

ll fibo_memoization(ll n)
{
    if (n == 0 || n == 1)
        return 1;

    if (saveAns[n] == -1)
    {
        return saveAns[n] = fibo_memoization(n - 1) + fibo_memoization(n - 2);
    }
}
// ll fibo_memoization(ll n)
// {
//     if (n == 0 || n == 1)
//         return 1;

//     if (saveAns[n] != -1)
//     {
//         return saveAns[n];
//     }
//     ll ans1 = fibo_memoization(n - 1);
//     ll ans2 = fibo_memoization(n - 2);
//     saveAns[n] = ans1 + ans2;
//     return saveAns[n];
// }

int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        saveAns[i] = -1;
    }

    cout << fibo_memoization(n) << endl;
    return 0;
}
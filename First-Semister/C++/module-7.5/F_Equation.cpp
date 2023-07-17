#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    long long int result = 0;
    for (int i = 2; i <= n; i += 2)
    {
        result += abs((pow(x, i)));
    }
    cout << result << endl;

    return 0;
}

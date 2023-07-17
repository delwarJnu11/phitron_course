#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // find max
    int max_1 = max(a, b);
    int max_res = max(max_1, c);
    // find min
    int min_1 = min(a, b);
    int min_res = min(min_1, c);
    // output
    cout << min_res << " " << max_res;

    return 0;
}
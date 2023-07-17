#include <bits/stdc++.h>
using namespace std;

void count_N_times(int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        char ch;
        cin >> ch;
        count_N_times(n, ch);
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 5;
int adjmat[N][N];
vector<int> vec[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        adjmat[u][v] = 1; // directed hole
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adjmat[i][j] == 1)
            {
                vec[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "List " << i << ": ";
        for (auto j : vec[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
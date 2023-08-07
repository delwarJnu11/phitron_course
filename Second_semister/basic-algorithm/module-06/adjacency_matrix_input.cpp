#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int arr[N][N];
int main()
{

    int x, y;
    cin >> x >> y;
    // input directed unweighted adjacency matrix
    while (y--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // directed & weighted
        arr[u][v] = w;
        // undirected & weighted
        arr[v][u] = w;
    }
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
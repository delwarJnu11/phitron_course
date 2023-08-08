// You will be given an undirected graph.Print its DFS traversal in reverse order.Consider root as 1

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adjList[N];
bool visited[N];

// dfs traversal
void dfs(int u)
{
    visited[u] = true;
    for (int val : adjList[u])
    {
        if (visited[val])
            continue;

        dfs(val);
    }
    cout << u << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " -> ";
    //     for (int j = 0; j < adjList[i].size(); j++)
    //     {
    //         cout << adjList[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    cout << "reverse list -> ";
    dfs(1);
    return 0;
}

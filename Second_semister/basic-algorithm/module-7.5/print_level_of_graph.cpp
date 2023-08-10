// Question : You will be given an undirected graph as input.This graph will contain only one connected component.The edge number will be exactly node - 1. Then take a node from the input and print its level.Consider root as 1.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 4;
vector<int> adj[N];
bool visited[N];
int level[N];

void dfs(int root)
{
    visited[root] = true;

    for (auto child : adj[root])
    {
        if (visited[child])
            continue;
        level[child] = level[root] + 1;
        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    int target;
    cin >> target;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == target)
    //     {
    //         cout << "Level of " << target << " -> " << level[i];
    //     }
    // }
    cout << "Level of " << target << " -> " << level[target];
    return 0;
}

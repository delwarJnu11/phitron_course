// Question : You will be given an undirected graph as input.Now count its connected components and print it.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;
vector<int> adj[N];
bool visited[N];

void dfs(int root)
{
    visited[root] = true;

    for (auto child : adj[root])
    {
        if (visited[child])
            continue;
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

    int con_comp = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
        con_comp++;
    }

    cout << "Total Connected Components Number -> " << con_comp;
    return 0;
}
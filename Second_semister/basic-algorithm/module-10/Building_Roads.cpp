#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<bool> visited(N);

void dfs(int src)
{
    visited[src] = true;
    for (auto child : adj[src])
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

    vector<int> leaders;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        leaders.push_back(i);
        dfs(i);
    }

    cout << leaders.size() - 1 << endl;

    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }

    return 0;
}
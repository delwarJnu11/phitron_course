#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
bool visited[N];

void dfs(int s)
{
    visited[s] = true;

    for (auto child : adj[s])
    {
        if (!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> leaders;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            leaders.push_back(i);
        }
    }

    cout << leaders.size() - 1 << endl;

    for (int i = 0; i < leaders.size() - 1; i++)
    {
        cout << leaders[i] << " " << leaders[i + 1] << endl;
    }
    return 0;
}
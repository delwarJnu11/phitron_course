#include <bits/stdc++.h>
using namespace std;

const int N = 20;
vector<int> adj[N];
bool visited[N];
int depth[N];

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

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    int k;
    cin >> k;
    dfs(k);
    int reachable = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            reachable++;
        }
    }
    // decreasing kamal's own house
    reachable--;
    cout << reachable;
    return 0;
}

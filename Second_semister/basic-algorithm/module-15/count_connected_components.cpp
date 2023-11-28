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

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            count++;
            dfs(i);
        }
    }

    cout << count << endl;
    return 0;
}
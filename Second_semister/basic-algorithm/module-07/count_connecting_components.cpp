#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 4;
vector<int> adj[N];
bool visited[N];

void bfs(int root)
{
    queue<int> q;
    if (root)
        q.push(root);
    visited[root] = true;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        for (auto child : adj[f])
        {
            if (visited[child])
                continue;
            q.push(child);
            visited[child] = true;
        }
    }
}

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
    int connect_componet = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        dfs(i);
        connect_componet++;
    }
    cout << "Connecting Components Number-> " << connect_componet << endl;
    return 0;
}
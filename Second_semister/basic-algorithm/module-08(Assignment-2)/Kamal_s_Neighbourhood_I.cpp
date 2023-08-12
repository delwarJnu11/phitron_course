#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 3;
vector<int> adj[N];
bool visited[N];

void bfs(int root)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto child : adj[u])
        {
            if (visited[child])
                continue;

            q.push(child);
            visited[child] = true;
        }
    }
    int ch = 0;
    for (int child : adj[root])
    {
        if (visited[child])
        {
            ch++;
        }
    }
    cout << ch;
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
    int k;
    cin >> k;
    bfs(k);
    return 0;
}

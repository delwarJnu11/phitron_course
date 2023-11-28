#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
vector<bool> visited(N, false);
vector<int> level(N, 1);
vector<int> parent(N, -1);

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto child : g[u])
        {
            if (visited[child])
                continue;
            q.push(child);
            visited[child] = true;
            level[child] = level[u] + 1;
            parent[child] = u;
        }
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
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);

    if (!visited[n])
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        vector<int> path;
        int cur = n;
        while (cur != -1)
        {
            path.push_back(cur);
            cur = parent[cur];
        }
        cout << level[n] << endl;
        reverse(path.begin(), path.end());
        for (auto p : path)
        {
            cout << p << " ";
        }
    }
    return 0;
}
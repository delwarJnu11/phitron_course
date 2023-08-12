#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int root)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;
    level[root] = 0;

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
            level[child] = level[u] + 1;
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
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int src, dest;
        cin >> src >> dest;

        for (int i = 0; i < N; i++)
        {
            level[i] = -1;
            visited[i] = false;
        }
        bfs(src);
        cout << level[dest] << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;
vector<int> adj[N];
bool visited[N];
int level[N];

// shortest distance from source node
void findShortestDistance(int root)
{
    queue<int> q;
    if (root)
        q.push(root);
    visited[root] = true;
    level[root] = 0;

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
            level[child] = level[f] + 1;
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

    int src, dest;
    cin >> src >> dest;
    findShortestDistance(src);
    for (int i = 1; i <= n; i++)
    {
        cout << "shortest distance of " << i << " -> " << level[i] << endl;
    }
    // cout << "shortest distance of " << dest << " -> " << level[dest];
    return 0;
}
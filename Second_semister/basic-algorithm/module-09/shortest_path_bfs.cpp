#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 3;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void findShortestPath(int root)
{
    queue<int> q;
    if (root)
        q.push(root);
    visited[root] = true;
    level[root] = 0;
    parent[root] = -1;

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
            parent[child] = f;
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
    findShortestPath(src);
    cout << "Distance -> " << level[dest] << endl;

    vector<int> path;
    int current = dest;
    while (current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }

    reverse(path.begin(), path.end());
    cout << "Path : ";
    for (auto parent : path)
    {
        cout << parent << " ";
    }
    return 0;
}
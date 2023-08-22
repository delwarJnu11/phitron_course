#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;
vector<int> adj[N];
bool visited[N];
int level[N];

// depth first search algorithm code
void dfs(int src)
{
    visited[src] = true;
    cout << src << " ";

    for (auto child : adj[src])
    {
        // child visited status false then move forward
        if (!visited[child])
        {
            level[child] = level[src] + 1;
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
        // input adjacency list
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << " -> " << level[i] << endl;
    }

    return 0;
}
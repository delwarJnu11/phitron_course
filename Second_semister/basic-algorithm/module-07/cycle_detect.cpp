#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 2;
vector<int> adj[N];
bool visited[N];

bool isCycle(int root, int par = -1)
{
    visited[root] = true;
    bool cycleExists = false;
    for (auto child : adj[root])
    {
        if (child == par)
            continue;
        if (visited[child])
            return true;
        cycleExists |= isCycle(child, root);
    }
    return cycleExists;
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
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        flag = flag || isCycle(i);
    }
    flag == true ? cout << "Cycle detected" : cout << "No Cycle detected" << endl;
    return 0;
}
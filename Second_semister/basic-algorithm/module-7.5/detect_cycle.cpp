// Question : You will be given an undirected graph as input.Now print “YES” if there is a cycle and print “NO” if there isn’t any cycle.Consider root as 1.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 4;
vector<int> adj[N];
bool visited[N];

bool is_cycle(int root, int p = -1)
{
    visited[root] = true;

    bool cycle_exists = false;

    for (auto child : adj[root])
    {
        if (child == p)
            continue;
        if (visited[child])
            return true;
        cycle_exists |= is_cycle(child, root);
    }
    return cycle_exists;
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

    if (is_cycle(1))
    {
        cout << "Yes, Cycle Detected";
    }
    else
    {
        cout << "No, Cycle not Detected";
    }

    return 0;
}
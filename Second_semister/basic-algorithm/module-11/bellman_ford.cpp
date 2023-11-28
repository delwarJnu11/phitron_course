#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e4 + 2;
const int INF = INT_MAX;
vector<pii> adj[N];
vector<int> dist(N, INF);

void bellman_ford(int src, int n)
{
    dist[src] = 0;
    // realx all edges
    for (int i = 1; i < n; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (auto child : adj[u])
            {
                int w = child.first;
                int v = child.second;

                if (dist[u] != INF)
                    dist[v] = min(dist[v], dist[u] + w);

                // if (dist[u] != INF && dist[v] > dist[u] + w)
                //     dist[v] = dist[u] + w;
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
    }

    bellman_ford(1, n);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of " << i << " -> " << dist[i] << endl;
    }
    return 0;
}

/*
7
10
1 2 6
1 3 5
1 4 5
2 5 -1
3 2 -2
3 5 1
4 3 -2
4 6 -1
5 7 3
6 7 3
*/
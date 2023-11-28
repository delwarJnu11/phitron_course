#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;
const int N = 1e5 + 5;
vector<pair<pii, int>> listOfEdges;
vector<int> dist(N, INF);
// int dist[N];

void bellman_ford(int src, int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     dist[i] = INF;
    // }

    dist[src] = 0;

    for (int i = 1; i < n; i++)
    {
        // relax all edges
        for (auto edge : listOfEdges)
        {
            int u = edge.first.first;
            int v = edge.first.second;
            int w = edge.second;

            if (dist[u] != INF)
                dist[v] = min(dist[v], dist[u] + w);
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
        listOfEdges.push_back({{u, v}, w});
    }

    bellman_ford(1, n);

    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of " << i << " -> " << dist[i] << endl;
    }
    return 0;
}
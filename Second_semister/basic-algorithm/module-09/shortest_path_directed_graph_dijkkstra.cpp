#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int INF = 1e9 + 20;
const int N = 1e4 + 3;
vector<pii> adj[N];
vector<bool> visited(N);
vector<int> dist(N, INF);

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        visited[u] = true;

        for (auto pair : adj[u])
        {
            int v = pair.first;
            int w = pair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
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
        adj[u].push_back({v, w});
    }

    int s, d;
    cin >> s >> d;
    dijkstra(s);
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i == d)
    //     {
    //         cout << dist[i];
    //     }
    // }

    cout << "Distance of " << d << " -> " << dist[d];
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1e4 + 3;
const int INF = 1e9 + 10;

vector<pii> adj[N];
vector<bool> visited(N);
vector<int> dist(N, INF);

// find shortest path using Dijkstra algoritm
void dijkstra(int root)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[root] = 0;
    pq.push({dist[root], root});

    while (!pq.empty())
    {
        int f = pq.top().second;
        pq.pop();

        visited[f] = true;

        for (auto pair : adj[f])
        {
            int v = pair.first;
            int w = pair.second;
            if (visited[v])
                continue;
            if (dist[v] > dist[f] + w)
            {
                dist[v] = dist[f] + w;
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
        adj[v].push_back({u, w});
    }

    dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "distance of " << i << " : " << dist[i] << endl;
    }
    return 0;
}
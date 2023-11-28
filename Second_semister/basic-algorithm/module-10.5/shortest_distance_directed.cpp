#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int INF = 1e9 + 4;
const int N = 1e5 + 10;

vector<pii> adj[N];
vector<bool> visited(N, false);
vector<int> dist(N, INF);

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    // initialize src with 0
    dist[src] = 0;
    // push priority queue distance of src and src
    pq.push({dist[src], src});

    // loop while queue is not empty
    while (!pq.empty())
    {
        // select front node of pq
        int selectedNode = pq.top().second;
        // pop node  from pq
        pq.pop();

        // if selected node is visited skip all code below jane do
        if (visited[selectedNode])
            continue;
        // if selected node is not visited then change status false to true
        visited[selectedNode] = true;

        // loop parent node to child and push child into pq
        for (auto child : adj[selectedNode])
        {
            // extract weight and node from child pair
            int edgeCost = child.first;
            int node = child.second;

            // relaxation
            // distance of node value is greater than distance of selected node + it's weight than distance is upadated
            if (dist[node] > dist[selectedNode] + edgeCost)
            {
                dist[node] = dist[selectedNode] + edgeCost;
                pq.push({dist[node], node});
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
    int src, dest;
    cin >> src >> dest;
    dijkstra(src);
    cout << "Shortest Distance of " << dest << " -> " << dist[dest] << endl;

    return 0;
}
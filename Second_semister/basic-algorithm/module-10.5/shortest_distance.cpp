// Question : You will be given an undirected weighted graph.At first you will be given N, the number of nodes then you will be given M, the number of edges.The value of nodes are from 1 to N.Next M lines will contain A, B and W which means there is an edge from A to B where the cost is W.There will be no negative weight in the graph.Also, you will be given a source and a destination.You need to tell the shortest distance between source and destination.

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 10;
const int N = 1e5 + 10;

vector<pair<int, int>> adj[N];
vector<bool> visited(N, false);
vector<int> dis(N, INF);
vector<int> parent(N);

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dis[src] = 0;
    parent[src] = -1;
    pq.push({dis[src], src});

    while (!pq.empty())
    {
        int f = pq.top().second;
        pq.pop();
        if (visited[f])
            continue;
        visited[f] = true;

        for (auto child : adj[f])
        {
            int w = child.first;
            int v = child.second;

            if (dis[v] > dis[f] + w)
            {
                dis[v] = dis[f] + w;
                pq.push({dis[v], v});
                parent[v] = f;
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
        adj[v].push_back({w, u});
    }
    int src, destination;
    cin >> src >> destination;
    dijkstra(src);

    for (int i = 1; i <= n; i++)
    {
        cout << "Shortest Distance of " << i << " -> " << dis[i] << endl;
    }

    cout << endl;

    vector<int> path;
    int cur = destination;
    while (cur != -1)
    {
        path.push_back(cur);
        cur = parent[cur];
    }

    reverse(path.begin(), path.end());

    for (auto v : path)
    {
        cout << v << " ";
    }
    return 0;
}

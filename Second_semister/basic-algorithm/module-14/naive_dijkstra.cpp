#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 4;

vector<pair<int, int>> adj[N];
int dist[N];

void naive_dijkstra(int src)
{
    queue<int> q;
    q.push(src);
    dist[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        // for (int i = 0; i < adj[parent].size(); i++)
        // {
        //     auto child = adj[parent][i];
        //     int childNode = child.first;
        //     int egdeCost = child.second;

        //     if (dist[parent] + egdeCost < dist[childNode])
        //     {
        //         dist[childNode] = dist[parent] + egdeCost;
        //         q.push(childNode);
        //     }
        // }

        for (auto child : adj[parent])
        {
            int childNode = child.first;
            int edgeCost = child.second;

            if (dist[parent] + edgeCost < dist[childNode])
            {
                dist[childNode] = dist[parent] + edgeCost;
                q.push(childNode);
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    naive_dijkstra(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Distance of Node " << i << " ->" << dist[i] << endl;
    }
    return 0;
}
// Given a directed graph, that can contain multiple edges and loops.Each edge has a weight that is expressed by a number(possibly negative).It is guaranteed that there are no cycles of negative weight.

// Calculate the length of the shortest paths from the vertex number 1 to all other vertices

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

const int N = 105;
const int INF = INT_MAX;
int n, e;
vector<Edge> edgeList;
int dist[N];

void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    dist[s] = 0;

    for (int i = 1; i < n; i++)
    {
        for (auto edge : edgeList)
        {
            int u = edge.u;
            int v = edge.v;
            int w = edge.w;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
}

int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        Edge ed(a, b, w);
        edgeList.push_back(ed);
    }

    bellman_ford(1);

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            cout << 30000 << " ";
        else
            cout << dist[i] << " ";
    }
    return 0;
}
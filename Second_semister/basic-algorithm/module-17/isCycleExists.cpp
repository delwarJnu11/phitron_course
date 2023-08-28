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

vector<Edge> edge_list;
int dist[1000];
int n, e;
bool isCycle = false;

void bellman_ford_cylce_exixts(int src)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }

    dist[src] = 0;

    for (int i = 1; i < n; i++)
    {
        for (auto edge : edge_list)
        {
            int u = edge.u;
            int v = edge.v;
            int w = edge.w;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    for (auto edge : edge_list)
    {
        int u = edge.u;
        int v = edge.v;
        int w = edge.w;

        if (dist[u] + w < dist[v])
        {
            isCycle = true;
            break;
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

        edge_list.push_back(ed);
    }

    bellman_ford_cylce_exixts(1);

    if (isCycle)
    {
        cout << "Cycle Exists" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "Node " << i << " : " << dist[i] << endl;
        }
    }

    return 0;
}

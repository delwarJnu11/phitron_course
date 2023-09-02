#include <bits/stdc++.h>
using namespace std;

const int N = 10005;
const long long INF = 1e18 + 3;

vector<pair<int, int>> adj[N];
long long dist[N];
bool cycle = false;
int n, e;

void bellmanFord(int src)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    dist[src] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (const pair<int, int> &edge : adj[u])
            {
                int v = edge.first;
                long long w = edge.second;

                if (dist[u] != INF && dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }

    for (int u = 1; u <= n; u++)
    {
        for (auto edge : adj[u])
        {
            int v = edge.first;
            long long w = edge.second;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                cycle = true;
                break;
            }
        }
    }
}

int main()
{

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }

    int src, t;
    cin >> src;

    bellmanFord(src);

    cin >> t;

    while (t--)
    {
        int destination;
        cin >> destination;

        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dist[destination] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[destination] << endl;
            }
        }
    }

    return 0;
}
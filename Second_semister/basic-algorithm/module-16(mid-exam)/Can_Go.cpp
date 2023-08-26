#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

const int N = 1e5 + 5;
vector<pair<int, int>> adj[N];
int dist[N];
bool visited[N];

void dijkstra(int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({dist[src], src});

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();

        int parentNode = parent.second;

        if (visited[parentNode])
        {
            continue;
        }

        visited[parentNode] = true;
        long long parentCost = parent.first;

        for (auto child : adj[parentNode])
        {
            long long childNode = child.first;
            long long childCost = child.second;

            if (parentCost + childCost < dist[childNode])
            {
                dist[childNode] = parentCost + childCost;
                pq.push({dist[childNode], childNode});
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
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    int src, t;
    cin >> src;
    dijkstra(src);

    cin >> t;

    while (t--)
    {
        int destination, cost;
        cin >> destination >> cost;

        if (dist[destination] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
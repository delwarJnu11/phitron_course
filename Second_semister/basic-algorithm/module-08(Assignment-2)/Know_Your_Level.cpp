#include <bits/stdc++.h>
using namespace std;

const int N = 10e5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int root)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;
    level[root] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto child : adj[u])
        {
            if (visited[child])
                continue;

            q.push(child);
            visited[child] = true;
            level[child] = level[u] + 1;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int l;
    cin >> l;
    bfs(0);
    vector<int> shop;

    for (int i = 0; i < N; i++)
    {
        if (level[i] == l)
        {
            shop.push_back(i);
        }
    }

    if (shop.empty())
    {
        cout << "-1";
    }
    else if (l == 0)
    {
        cout << "0";
    }
    else
    {
        for (int val : shop)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}

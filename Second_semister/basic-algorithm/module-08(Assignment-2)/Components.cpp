#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<int> adj[N];
bool visited[N];
vector<int> nodeCounted;

void dfs(int root, int &cnt)
{
    visited[root] = true;
    cnt++;
    for (auto child : adj[root])
    {
        if (!visited[child])
            dfs(child, cnt);
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

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            int cnt = 0;
            dfs(i, cnt);
            if (cnt > 1)
                nodeCounted.push_back(cnt);
        }
    }
    sort(nodeCounted.begin(), nodeCounted.end());

    for (auto val : nodeCounted)
        cout << val << " ";
    return 0;
}
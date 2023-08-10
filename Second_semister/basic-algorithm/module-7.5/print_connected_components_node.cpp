// You will be given an undirected graph as input. Now count its connected components and print it. Then print All the nodes in a connected component. See the sample output for more clarification.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;
vector<int> adj[N];
bool visited[N];
vector<int> ans[N];
int row = 0;

void bfs(int root)
{
    queue<int> q;
    if (root)
        q.push(root);
    ans[row].push_back(root);
    visited[root] = true;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();

        for (auto child : adj[f])
        {
            if (visited[child])
                continue;
            q.push(child);
            ans[row].push_back(child);
            visited[child] = true;
        }
    }
}

void dfs(int root)
{
    visited[root] = true;
    ans[row].push_back(root);
    for (auto child : adj[root])
    {
        if (visited[child])
            continue;
        dfs(child);
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

    int con_comp = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;
        bfs(i);
        con_comp++;
        row++;
    }

    cout << "Components Number -> " << con_comp << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Component " << i + 1 << " : ";
        for (int val : ans[i])
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
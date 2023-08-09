#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 4;
vector<int> adjList[N];
bool visited[N];
int level[N];

void bfs(int root)
{
    queue<int> q;
    if (root)
        q.push(root);
    visited[root] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << "Visited -> " << u << " " << endl;

        // child node q te dhukate hobe
        for (auto val : adjList[u])
        {
            if (visited[val])
                continue;
            q.push(val);
            visited[val] = true;
            level[val] = level[u] + 1;
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
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bfs(1);
    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << " is -> " << level[i] << endl;
    }
    return 0;
}
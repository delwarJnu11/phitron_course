#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;

vector<int> adjList[N];
int level[N];
bool visited[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adjList[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bfs(1);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "Level of " << i << " -> " << level[i] << endl;
    }
    return 0;
}
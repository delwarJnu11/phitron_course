// Question : You will be given an undirected graph.Print its BFS traversal in reverse order.Consider root as 1.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 4;
vector<int> adj[N];
bool visited[N];

void bfs(int root)
{
    queue<int> q;
    stack<int> st;
    if (root)
        q.push(root);
    visited[root] = true;

    while (!q.empty())
    {
        int f = q.front();
        st.push(f);
        q.pop();

        for (auto child : adj[f])
        {
            if (visited[child])
                continue;
            q.push(child);
            visited[child] = true;
        }
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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
    bfs(1);
    return 0;
}
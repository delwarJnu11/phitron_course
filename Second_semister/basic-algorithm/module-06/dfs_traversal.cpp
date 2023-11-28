#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u)
{
    visited[u] = true;
    for (auto val : adj[u])
    {
        if (visited[val])
            continue;
        depth[val] = depth[u] + 1;
        dfs(val);
        height[u] = max(height[u], height[val] + 1);
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
        // undirected & unweighted
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    dfs(1);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "depth of Node " << i << " : " << depth[i] << endl;
    // }
    // cout << "**********" << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Height of Node " << i << " : " << height[i] << endl;
    // }
    return 0;
}
// tree input
/*
19
18
1 2
1 3
1 4
2 6
2 5
5 7
5 8
3 10
3 15
15 20
15 25
25 30
4 35
4 40
35 50
35 60
50 55
60 65
ouput->
visited: 1
visited: 2
visited: 6
visited: 5
visited: 7
visited: 8
visited: 3
visited: 10
visited: 15
visited: 20
visited: 25
visited: 30
visited: 4
visited: 35
visited: 50
visited: 55
visited: 60
visited: 65
visited: 40
*/
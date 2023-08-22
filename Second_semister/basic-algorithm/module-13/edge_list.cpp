#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        edge_list.push_back({u, v});
    }

    for (auto edge : edge_list)
    {
        cout << edge.first << " " << edge.second << endl;
    }
    return 0;
}
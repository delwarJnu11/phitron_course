#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adjList[n + 1];

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Index-> " << i << " : ";
    //     //vector print normal for loop
    //     for (int j = 0; j < adjList[i].size(); j++)
    //     {
    //         cout << adjList[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        cout << "Index-> " << i << " : ";
        // vector print range based loop
        for (auto val : adjList[i])
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
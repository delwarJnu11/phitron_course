// Question : You are given a 2D grid which will contain only the characters ‘s’, ‘.’, ‘x’ and ‘e’.The size of the grid is N *M squares, where ‘s’ means where you should start, ‘.’ means there is a path, ‘x’ means there is no path and ‘e’ means where you should stop.You can walk left, right, up, and down through the cell of squares.You need to say “YES” if you can go from ‘S’ to ‘E’.Otherwise print “NO”.There will be exactly one ‘s’ and one ‘e’.If there is no path, print - 1.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

vector<string> adj[N];
bool visited[N][N];

int n, m;

bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int i, int j)
{
    if (!isValid(i, j))
        return;
    if (visited[i][j])
        return;
    if (adj[i][j] == '#')
        return;
}

int main()
{
    cin >> n >> m;
    while (n--)
    {
        string x;
        cin >> x;
        adj->push_back(x);
    }

    // bool path_exists = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == '#' && j == '#')
                continue;
            if (visited[i][j])
                continue;
            dfs(i, j);
        }
    }
    return 0;
}
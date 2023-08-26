#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

const int N = 1005;
char grid[N][N];
int n, m;
bool visited[N][N];

vector<pii> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && grid[ci][cj] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        pii p = dir[i];

        int ci = si + p.first;
        int cj = sj + p.second;

        if (isValid(ci, cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj;

    dfs(si, sj);
    cin >> di >> dj;
    if (visited[di][dj])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
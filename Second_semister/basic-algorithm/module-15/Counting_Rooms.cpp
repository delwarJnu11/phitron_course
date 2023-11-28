#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1005;
int n, m;
char grid[N][N];
bool visited[N][N];

vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int child_row, int child_col)
{
    if (child_row >= 0 && child_row < n && child_col >= 0 && child_col < m && grid[child_row][child_col] == '.')
        return true;
    else
        return false;
}

void dfs(int s_row, int s_col)
{
    visited[s_row][s_col] = true;

    for (int i = 0; i < 4; i++)
    {
        pii parent = path[i];
        int child_row = s_row + parent.first;
        int child_col = s_col + parent.second;

        if (isValid(child_row, child_col) && !visited[child_row][child_col])
        {
            dfs(child_row, child_col);
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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && grid[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int N = 1005;
bool visited[N][N];
int dist[N][N];
vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool isValid(int child_row, int child_col)
{
    if ((child_row >= 0 && child_row < n) && (child_col >= 0 && child_col < m))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void bfs(int src_row, int src_col)
{
    queue<pii> q;
    q.push({src_row, src_col});
    visited[src_row][src_col] = true;
    dist[src_row][src_col] = 0;

    while (!q.empty())
    {
        pii parentCell = q.front();
        q.pop();

        int parent_row = parentCell.first;
        int parent_col = parentCell.second;

        for (int i = 0; i < 4; i++)
        {
            pii p = path[i];
            int child_row = parent_row + p.first;
            int child_col = parent_col + p.second;

            if (isValid(child_row, child_col) && !visited[child_row][child_col])
            {
                q.push({child_row, child_col});
                visited[child_row][child_col] = true;
                dist[child_row][child_col] = dist[parent_row][parent_col] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    char grid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int src_row, src_col;
    cin >> src_row >> src_col;
    bfs(src_row, src_col);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
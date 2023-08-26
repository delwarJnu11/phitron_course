#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

const int N = 1e3 + 5;
int n, m;
bool visited[N][N];
int dist[N][N];

vector<pii> dir = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

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

int bfs(int src_row, int src_col, int dest_row, int dest_col)
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

        if (parent_row == dest_row && parent_col == dest_col)
            return dist[parent_row][parent_col];

        for (int i = 0; i < 8; i++)
        {
            pii p = dir[i];
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

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = 0;
                visited[i][j] = false;
            }
        }

        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

        int count_steps = bfs(ki, kj, qi, qj);

        cout << count_steps << endl;
    }
    return 0;
}

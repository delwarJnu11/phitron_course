#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

const int N = 1e3 + 5;
int n, m;
bool visited[N][N];
int dist[N][N];

vector<pii> dir = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int row, int col)
{
    return (row >= 0 && row < n) && (col >= 0 && col < m);
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
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = 0;
                visited[i][j] = false;
            }
        }

        bfs(ki, kj);

        if (visited[qi][qj])
        {
            cout << dist[qi][qj] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

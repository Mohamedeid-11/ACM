#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[501][501];
bool search(int y, int x, int parent_y, int parent_x, int grand_y, int grand_x)
{
    if ((x < 1 || x > m || y < 1 || y > n) || (y == grand_y && x == grand_x) || grid[y][x] == '.')
    {
        return false;
    }

    cout << y << ' ' << x << '\n';

    if (grid[y][x] != 'O')
    {
        search(y + 1, x, y, x, parent_y, parent_x);
        search(y - 1, x, y, x, parent_y, parent_x);
        search(y, x + 1, y, x, parent_y, parent_x);
        search(y, x - 1, y, x, parent_y, parent_x);
    }

    return true;
}

int main()
{
    cin >> n >> m;

    int x, y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'S')
            {
                y = i;
                x = j;
            }
        }
    }

    search(y, x, -1, -1, -1, -1);
}
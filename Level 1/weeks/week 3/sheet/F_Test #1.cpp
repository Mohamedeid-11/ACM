#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];
    }

    long long max_sum = 0;
    for (int row1 = 0, row2 = k - 1; row2 < n; row1++, row2++)
    {
        for (int col1 = 0, col2 = k - 1; col2 < n; col1++, col2++)
        {
            long long sum = 0;
            for (int i = row1; i <= row2; i++)
            {
                for (int j = col1; j <= col2; j++)
                    sum += grid[i][j];
            }

            max_sum = (!max_sum || sum > max_sum) ? sum : max_sum;
        }
    }

    cout << max_sum << endl;
}
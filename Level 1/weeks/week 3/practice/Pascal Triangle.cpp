#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    unsigned long long pascal_triangle[n + 1][n + 1] = {};
    // {    0  1  2  3
    //   0 {0},
    //   1 {0, 1}
    //   2 {0, 1, 1},
    //   3 {0, 1, 2, 1}
    // };

    pascal_triangle[1][1] = 1;
    cout << pascal_triangle[1][1] << endl;
    for (int i = 2; i <= n; i++) // rows
    {
        pascal_triangle[i][1] = 1;
        cout << pascal_triangle[i][1] << ' ';

        for (int j = 2; j < i; j++) // columns
        {
            pascal_triangle[i][j] = pascal_triangle[i - 1][j] + pascal_triangle[i - 1][j - 1];
            cout << pascal_triangle[i][j] << ' ';
        }

        pascal_triangle[i][i] = 1;
        cout << pascal_triangle[i][i] << endl;
    }

    return 0;
}
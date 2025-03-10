#include <iostream>
using namespace std;

int main()
{
    short int n;
    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[j][i] << ' ';

        cout << endl;
    }
    return 0;
}

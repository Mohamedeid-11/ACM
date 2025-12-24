#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, counter;
    cin >> t;
    while(t--)
    {
        counter = 0;
        cin >> n >> m;
        char arr[n+1][m+1];

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> arr[i][j];
                if(i == n && arr[i][j] == 'D') counter++;
                else if(j == m && arr[i][j] == 'R') counter++;
            }
        }

        cout << counter << '\n';
    }

    return 0;
}
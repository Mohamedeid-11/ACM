#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin >> t;
    while (t--)
    {
        bool candy = false;
        int n, x = 0, y = 0;
        cin >> n;

        char move;
        for(int i = 0; i < n; i++)
        {
            cin >> move;
            if(move == 'R') x++;
            else if(move == 'L') x--;
            else if(move == 'U') y++;
            else y--;

            if(x == 1 && y == 1) candy = true;
        }

        cout << (candy? "YES" : "NO") << '\n';
    }
}
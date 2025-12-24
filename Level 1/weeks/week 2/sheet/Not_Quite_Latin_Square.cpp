#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            int total = 0;
            bool found = false;
            for (int j = 0; j < 3; j++)
            {
                char c; cin >> c;
                
                if(c == '?') found = true;
                else total += (c - 'A');
            }

            if (found) cout << char('A' + 3-total) << '\n';
        }
    }
}
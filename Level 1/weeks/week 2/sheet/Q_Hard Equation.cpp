#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, solutions = 0;
        cin >> n;
        for(int z = 0; (4 * z*z*z*z) <= n; z++)
        {
            for(int y = 0; (3 * y*y*y) <= n; y++)
            {
                for(int x = 0; (2 * x*x) <= n; x++)
                {
                    if((2 * x*x) + (3 * y*y*y) + (4 * z*z*z*z) <= n) solutions++;
                }
            }
        }

        cout << solutions << '\n';
    }
}
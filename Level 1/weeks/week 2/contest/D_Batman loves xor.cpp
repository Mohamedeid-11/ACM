#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{    
    ull n, m;
    cin >> n >> m;
    
    int min_ones = 64;
    for(int x = 2; x < 63; x++)
    {
        int ones = 0;
        for (ull pos = 0; pos < 63; pos++)
        {
            int nBit = (n >> pos) & 1;
            int sBit = (pos && pos <= m*x && !(pos%x)? 1: 0);
            ones += nBit ^ sBit;
        }
        min_ones = min(ones, min_ones);
    }
    cout << min_ones;

}
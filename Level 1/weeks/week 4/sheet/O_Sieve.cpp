#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ull x, y; cin >> x >> y;

    map<int, int> factors;
    for(int i = 2; i*i <= x; i++)
    {
        while(x%i == 0)
        {
            x /= i;
            factors[i]++;
        }
    }
    if (x > 1) factors[x]++;

    cout << factors.size() << '\n';
    for(auto [fac, pow] : factors)
    {
        cout << fac << ' ' << pow*y << '\n'; // pow*y might be greater than int but we avoided overflow as y is ull
    }
}
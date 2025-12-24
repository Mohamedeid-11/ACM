#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int const m = 1e9+7;

// Check: General\modular_exponentiation.cpp

int expMod(int x, int n)
{
    if (n == 0) return 1;

    ull res = expMod(x, n/2);
    res = (res * res) % m;
    if(n % 2 == 1) res = (res * (x % m)) % m;

    return res;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int towers[3] = { expMod(a, b), expMod(b, a), expMod(c, abs(a-b)) };
    sort(towers, towers + 3);

    cout << towers[0] << " " << towers[1] << " " << towers[2];
}

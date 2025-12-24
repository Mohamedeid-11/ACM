#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    ull n, m, s;
    cin >> n >> m >> s;
    cout << ((m-1)*n + (n-1)*m) * s;
}


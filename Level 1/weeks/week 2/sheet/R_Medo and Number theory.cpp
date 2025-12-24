#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{    
    int l, r, m;
    cin >> l >> r >> m;

    ull product = 1;
    while(l <= r)
    {
        product = ((l%m) * product) % m; // notice we didn't change l itself so we don't mess the counting from l to r
        if(product == 0) break;
        l++;
    }

    cout << product;
}
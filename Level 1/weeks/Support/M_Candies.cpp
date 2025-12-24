#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    
    // x^2 + x - 2n = 0  --> 1, 1, -2n
    // (-b +- (b^2 - 4ac)^0.5) / 2a
    ll x = (-1 + sqrt(1 + 8*n)) / 2; 

    cout << x;
}
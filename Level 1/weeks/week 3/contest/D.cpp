#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x; cin >> x;
    x = abs(x);

    // c is the suggested mininmum number of contests
    // where abs(x) = c(c+1)/2 - 2r, so: 
    //      1. sum(c) >= abs(x)
    //      2. sum(c) - abs(x)   must be even


    ll c = 0, sum = 0;
    while (true) 
    {
        sum += c;
        if (sum >= x && (sum - x) % 2 == 0) 
        {
            cout << c << '\n';
            break;
        }
        c++;
    }
}

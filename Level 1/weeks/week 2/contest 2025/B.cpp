#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ull sum = 0;
    int n, a, min_odd = 1e9;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a % 2 == 1 && a < min_odd) min_odd = a;
        sum += a;
    }

    cout << (sum%2 == 0? sum : sum-min_odd);
    

    return 0;
}
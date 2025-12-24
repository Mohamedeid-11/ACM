#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ull sum = 0;
    int n, a; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a % 2 == 0) sum += a;
    }

    cout << sum;

    return 0;
}
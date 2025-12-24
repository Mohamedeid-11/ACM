#include <bits/stdc++.h>
using namespace std;

int main() 
{    
    char r;
    int x, y, n;
    cin >> x >> y >> n >> r;

    n = n % 4;
    if(n == 0) cout << x << " " << y;
    else if((n == 1 && r == 'C') || (n == 3 && r == 'A')) cout << y << " " << -x;
    else if(n == 2) cout << -x << " " << -y;
    else cout << -y << " " << x;
}
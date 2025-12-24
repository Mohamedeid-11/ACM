#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{    
    int n, x1, x2;
    cin >> n >> x1;
    n--;

    bool win = true;
    while(n--)
    {
        cin >> x2;
        if(x2 <= x1) win = false;
        x1 = x2;
    }

    if(win) cout << "YES";
    else    cout << "NO";
}
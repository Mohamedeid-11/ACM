#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{    
    ull n;
    cin >> n;

    if(n%2) 
    {
        cout << -1;
    }
    else
    {
        cout << n/2 << ' ' << 1 << ' ' << 1;
    }
    
}
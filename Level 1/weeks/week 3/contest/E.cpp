#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if ( (n && !(n%2)) || (!n && !(m%2)) )
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
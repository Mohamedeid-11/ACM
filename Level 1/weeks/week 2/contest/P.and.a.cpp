#include <bits/stdc++.h>
using namespace std;

int main()
{    
    int n, x;
    cin >> n >> x;
    int ans = x, cur = x;
    for(int i = 1; i < n; i++)
    {
        cin >> x;
        cur = min(cur&x, x); // at each step check wether it is better to add the new value or to start from it
        ans = min(ans, cur);
    }

    cout << ans;
}
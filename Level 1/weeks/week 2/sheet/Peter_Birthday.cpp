#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n, a, Min = 1e9, Max = 1;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            Min = min(Min, a);
            Max = max(Max, a);
        }
        cout << Max - Min << '\n'; 
    }
}
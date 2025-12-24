#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    int n;
    cin >> n;
    ull players_pre_sum[n + 1] = {}, days_pre_sum[n+1] = {}; // prefix sum of new players each day, and sum of it each day
    for (int i = 1; i <= n; i++)
    {
        cin >> players_pre_sum[i];
        players_pre_sum[i] += players_pre_sum[i - 1];
        days_pre_sum[i] = days_pre_sum[i-1] + players_pre_sum[i];
    }

    int q, x;
    cin >> q;
    while (q--)
    {
        cin >> x;
        cout << days_pre_sum[x] << '\n';
    }
}



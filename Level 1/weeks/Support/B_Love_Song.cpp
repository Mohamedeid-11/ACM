#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    char song[n];
    int sum[n + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> song[i];
        int index = song[i] - 'a' + 1;
        sum[i + 1] = index + sum[i];
    }

    int l, r;
    while (q--)
    {
        cin >> l >> r;
        cout << sum[r]-sum[l-1] << '\n';
    }
}



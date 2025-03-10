#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s, s2, t;
    cin >> s >> t;
    s2 = s;
    reverse(s2.begin(), s2.begin() + n);

    unsigned long long cost = 0, cost2 = 0;
    if (s2 == t)
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (t[i] != s[i])
            cost += (i + 1) * min(abs(t[i] - s[i]), 25 - abs(t[i] - s[i]) + 1);
        if (t[i] != s2[i])
            cost2 += (i + 1) * min(abs(t[i] - s2[i]), 25 - abs(t[i] - s2[i]) + 1);
    }

    cout << min(cost, cost2);

    return 0;
}
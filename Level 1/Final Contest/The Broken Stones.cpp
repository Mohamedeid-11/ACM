#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    long long x1, y1, x2, y2, n;
    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        double dist = hypot((x1 - x2), (y1 - y2));
        double r1, r2;

        if (n == 1)
        {
            r1 = dist / 2;
            r2 = r1;
        }
        else
        {
            double sqrt_n = sqrt(n);
            double r2 = dist / (sqrt_n + 1.0);
            double r1 = r2 * sqrt_n;
        }
        cout << fixed << setprecision(10) << r1 << ' ' << r2 << endl;
    }

    return 0;
}
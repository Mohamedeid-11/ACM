#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << ' ' << n / 2 << endl;
        else
        {
            int spf = 0;
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    spf = i;
                    break;
                }
            }
            if (!spf)
                spf = n;

            int a = n / spf;
            cout << a << ' ' << n - a << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unsigned long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        unsigned long long ones = 0;
        while (a[i])
        {
            if (a[i] & 1)
                ones++;
            a[i] >>= 1;
        }
        a[i] = ones * b[i];
    }
    sort(a, a + n);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        unsigned long long k;
        cin >> k;

        int ans = -1, start = 0, end = n - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;

            if (a[mid] <= k)
            {
                ans = mid;
                start = ++mid;
            }
            else
                end = --mid;
        }
        cout << ans + 1 << endl;
    }

    return 0;
}

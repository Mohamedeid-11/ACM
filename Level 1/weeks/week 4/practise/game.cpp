#include <iostream>
using namespace std;

int main()
{
    // take input
    int n, q, a;
    cin >> n >> q;
    int num[n], ans[q];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> a;
        ans[i] = 0;

        int start = 0, end = n - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;

            if (num[mid] > a)
            {
                ans[i] = num[mid];
                end = --mid;
            }
            else
                start = ++mid;
        }
    }

    for (int i = 0; i < q; i++)
    {
        if (ans[i])
            cout << ans[i] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
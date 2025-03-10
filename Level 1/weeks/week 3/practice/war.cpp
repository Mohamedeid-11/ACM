#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int soldiers[n] = {};
    int ans[n] = {};

    for (int i = 0; i < n; i++)
        cin >> soldiers[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (soldiers[i] > soldiers[j])
                ans[i]++;
        }
    }

    cout << ans[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << ans[i];
}
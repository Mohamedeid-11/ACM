#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    long long c;
    cin >> n >> q >> c;

    vector<long long> minimum_h(n);
    long long greatest = 0;

    long long monster;
    for (int i = 0; i < n; i++)
    {
        cin >> monster;
        if (!i)
            minimum_h[0] = monster;
        else
        {
            long long temp = monster - c * i;
            if (temp < 0)
                temp = 0;
            minimum_h[i] = max(temp, minimum_h[i - 1]);
        }
        if (minimum_h[i] > greatest)
            greatest = minimum_h[i];
    }

    int counter;
    long long h;
    while (q--)
    {
        cin >> h;
        counter = 0;

        if (h >= greatest)
            counter = n;
        else
            counter = upper_bound(minimum_h.begin(), minimum_h.end(), h) - minimum_h.begin();

        cout << counter << endl;
    }

    return 0;
}

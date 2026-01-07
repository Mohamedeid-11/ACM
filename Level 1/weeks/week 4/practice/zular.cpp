#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int aliens_strength[n];
    long long sum[n];

    for (int i = 0; i < n; i++)
    {
        cin >> aliens_strength[i];
    }

    sort(aliens_strength, aliens_strength + n);

    sum[0] = aliens_strength[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = aliens_strength[i] + sum[i - 1];
    }

    int q;
    cin >> q;
    long long aliens[q];
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        if (p >= aliens_strength[n - 1])
        {
            aliens[i] = n;
        }
        else if (p < aliens_strength[0])
        {
            aliens[i] = 0;
        }
        else
        {
            aliens[i] = 0; 
            int start = 0, end = n - 1, mid;
            int first_defeatd;
            while (start <= end)
            {
                mid = (start + end) / 2;
                if (aliens_strength[mid] <= p)
                {
                    first_defeatd = mid;
                    start = ++mid;
                }
                else
                    end = --mid;
            }

            aliens[i] = ++first_defeatd;
        }
    }

    for (int i = 0; i < q; i++)
    {
        if (aliens[i])
            cout << aliens[i] << ' ' << sum[aliens[i] - 1] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
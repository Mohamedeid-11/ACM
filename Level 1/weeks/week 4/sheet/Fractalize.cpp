#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int n;
    cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    int degree, least_degree = -1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int commor_factor = gcd(num[i], num[j]);
            int a = num[i] / commor_factor;
            int b = num[j] / commor_factor;

            degree = (a - b > 0) ? a - b : -1 * (a - b);

            if (least_degree == -1 || degree < least_degree)
                least_degree = degree;
        }
    }

    cout << least_degree;
}
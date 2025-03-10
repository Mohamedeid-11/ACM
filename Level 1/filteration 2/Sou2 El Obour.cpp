#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n;

    int odd, greatest_odd_poss, greatest_odd = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        if (p % 2 == 1)
        {
            odd++;
            if (p > greatest_odd)
            {
                greatest_odd = p;
                greatest_odd_poss = i;
            }
        }
    }

    if (odd % 2 == 0)
        cout << n << endl;
    else if (n == 1)
        cout << -1;
    else
        cout << n - 1 << endl;

    for (int i = 1; i <= n; i++)
    {
        if (odd % 2 == 1 && i == greatest_odd_poss)
            continue;

        cout << i;
        if (i != n)
            cout << ' ';
    }

    return 0;
}
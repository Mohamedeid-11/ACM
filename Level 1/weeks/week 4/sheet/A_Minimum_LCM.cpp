#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    /*
        we need lcm(a, b) to be the least (hence gcd is maximum) where n = a + b
        so we need (a, b) to share as many common factors as possible.

        By observation we can notice
        (1) for even numbers: 2, 4, 6, 8, 10 solution is (half): 1, 2, 3, 4, 5 
        (2) for prime numbers: 3, 5, 7, 11   solution is (1, n-1): (1, 2), (1, 4), (1, 6), (1, 10)
        (3) the problem is with odd non-prime numbers like 9, 15, 21  --> (3, 6), (5, 10), (7, 14)
            you can notice the least divisor of n is always in the solution
            which we can get by deviding by the least factor
    */


    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << ' ' << n / 2 << endl;
        else
        {
            int spf = 0; //smallest prime factor
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    spf = i;
                    break;
                }
            }

            if (!spf) spf = n; // then n is prime

            int a = n / spf;
            cout << a << ' ' << n - a << endl;
        }
    }

    return 0;
}



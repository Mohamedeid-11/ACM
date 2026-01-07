#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if (x == 1) return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false; // it's not prime
    }

    return true;
}

// find numbers with 3 divisors
// 3 is odd, so the number must be a perfect square to have 3 divisors(1, sqrt(n), n)
// that sqrt(n) must be prime so we don't find any more devisors
// 100 = 2^2 * 5^2
// sqrt(100) = 10 which is not prime 10 = 2 * 5 so 100 has more devisors consisting of 2 and 5
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    unsigned long long x;
    while (n--)
    {
        cin >> x;
        int sqr = x / sqrt(x);

        if (x != 1 && sqrt(x) == sqr && isPrime(sqr))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

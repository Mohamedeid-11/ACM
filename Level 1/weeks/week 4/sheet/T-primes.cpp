#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if (x == 1)
        return false;
    else
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
                return false; // it's not prime
        }

        return true;
    }
}

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

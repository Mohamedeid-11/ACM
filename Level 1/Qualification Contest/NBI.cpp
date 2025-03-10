#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool prime(int x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> primes_in_range;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (prime(temp))
            primes_in_range.insert(temp);
    }

    int q;
    cin >> q;
    unsigned long long x;
    while (q--)
    {
        cin >> x;
        bool prime_factorial = true, in_range = true;
        if (x == 1)
            prime_factorial = false;
        int factor = 2;
        while (x > 1)
        {
            if (x % factor != 0)
            {
                prime_factorial = false;
                break;
            }
            else
            {
                x /= factor;
                if (x % factor == 0)
                {
                    prime_factorial = false;
                    break;
                }
                if (in_range && primes_in_range.find(factor) == primes_in_range.end())
                    in_range = false;
            }

            if (factor % 2 == 0)
                factor++;
            else
                factor += 2;
            while (!prime(factor))
                factor += 2;
        }

        if (prime_factorial && in_range)
            cout << "Case Solved" << endl;
        else if (prime_factorial)
            cout << "Case Opened" << endl;
        else
            cout << "Case Declined" << endl;
    }
}

bool prime(int x)
{

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}
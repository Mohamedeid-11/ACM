#include <iostream>
using namespace std;

int main()
{
    int n, almost_primes = 0;
    cin >> n;
    for (int num = 6; num <= n; num++)
    {
        // counter of prime factors
        int temp = num, counter = 0;

        // check prime numbers till sqrt(temp)
        for (int i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                while (temp % i == 0)
                    temp /= i;

                counter++;
                if (counter > 2)
                    break;
            }
        }
        // for some cases 10 for example
        // we will check till i = 4 so temp still has a prime factor (5) that we need to consider
        if (temp > 1)
            counter++;
        // num is almost prime if it has 2 distinct prime factors
        if (counter == 2)
            almost_primes++;
    }

    cout << almost_primes;
}
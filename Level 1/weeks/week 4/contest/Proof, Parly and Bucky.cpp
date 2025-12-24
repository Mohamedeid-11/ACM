#include <bits/stdc++.h>
using namespace std;

long long expMod(long long base, long long exponent, long long modulus)
{
    int bin[64];
    int digit = 0;
    int temp = exponent;
    while (temp)
    {
        if (temp & 1)
            bin[digit] = 1;
        else
            bin[digit] = 0;
        ++digit;
        temp >>= 1;
    }

    long long mod = base % modulus, final_mod;
    if (bin[0])
        final_mod = mod;
    else
        final_mod = 1;

    for (int i = 1; i < digit; i++)
    {
        mod = (mod * mod) % modulus;
        if (bin[i])
        {
            final_mod *= mod;
            final_mod %= modulus;
        }
    }
    return final_mod;
}

bool miller_rabin_primality_test(long long n)
{
    long long b = n - 1;
    long long k = 0;
    while (b % 2 == 0)
    {
        k++;
        b /= 2;
    }

    long long a = 2 + rand() % (n - 4);

    long long final_mod = expMod(a, b, n);

    if (final_mod == 1 || final_mod == n - 1)
        return true;

    // Keep squaring x while one of the following doesn't
    // happen
    // (i)   b does not reach n-1
    // (ii)  (x^2) % n is not 1
    // (iii) (x^2) % n is not n-1
    while (b != n - 1)
    {
        final_mod = (final_mod * final_mod) % n;
        b *= 2;

        if (final_mod == 1)
            return false;
        if (final_mod == n - 1)
            return true;
    }

    // Return composite
    return false;
}
bool isPrime(long long n)
{
    // Corner cases
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    // Find r such that n = 2^d * r + 1 for some r >= 1

    // Iterate given number of 'k' times
    for (int i = 0; i < 4; i++)
        if (!miller_rabin_primality_test(n))
            return false;

    return true;
}
long long PollardRho(long long n)
{
    /* initialize random seed */
    srand(time(NULL));

    /* no prime divisor for 1 */
    if (n == 1)
        return n;

    /* even number means one of the divisors is 2 */
    if (n % 2 == 0)
        return 2;

    /* we will pick from the range [2, N) */
    long long int x = (rand() % (n - 2)) + 2;
    long long int y = x;

    /* the constant in f(x).
     * Algorithm can be re-run with a different c
     * if it throws failure for a composite. */
    long long int c = (rand() % (n - 1)) + 1;

    /* Initialize candidate divisor (or result) */
    long long int d = 1;

    /* until the prime factor isn't obtained.
       If n is prime, return n */
    while (d == 1)
    {
        /* Tortoise Move: x(i+1) = f(x(i)) */
        x = (expMod(x, 2, n) + c + n) % n;

        /* Hare Move: y(i+1) = f(f(y(i))) */
        y = (expMod(y, 2, n) + c + n) % n;
        y = (expMod(y, 2, n) + c + n) % n;

        /* check gcd of |x-y| and n */
        d = __gcd(abs(x - y), n);

        /* retry if the algorithm fails to find prime factor
         * with chosen x and c */
        if (d == n)
            return PollardRho(n);
    }

    return d;
}

int main()
{

    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "AGAIN!";
        return 0;
    }

    int aPrimes = 0, bPrimes = 0;
    bool need_more_test = false;
    for (int i = 2; i * i < a; i++)
    {
        if (a % i == 0)
            aPrimes++;
        while (a % i == 0)
            a /= i;
        if (a != 1 && i > 1e6)
        {
            need_more_test = true;
            break;
        }
    }
    if (!need_more_test && a > 1)
        aPrimes++;
    do
    {
        if (isPrime(a))
        {
            aPrimes++;
            break;
        }
        else
        {

            long long factor = PollardRho(a);
            while (a % factor == 0)
                a /= factor;
            aPrimes++;
        }
    } while (need_more_test);

    need_more_test = false;
    for (int i = 2; i * i < b; i++)
    {
        if (b % i == 0)
            bPrimes++;
        if (bPrimes > aPrimes)
            break;
        while (b % i == 0)
            b /= i;
        if (i > 1e6)
        {
            need_more_test = true;
            break;
        }
    }
    if (!need_more_test && b > 1)
        bPrimes++;
    // if (need_more_test)
    // {
    //     if (isPrime(b))
    //         bPrimes++;
    //     else
    //     {
    //         do
    //         {
    //             long long factor = PollardRho(b);
    //             while (b % factor == 0)
    //                 b /= factor;
    //             bPrimes++;
    //         } while (b != 1);
    //     }
    // }
    do
    {
        if (isPrime(b))
        {
            bPrimes++;
            break;
        }
        else
        {

            long long factor = PollardRho(b);
            while (b % factor == 0)
                b /= factor;
            bPrimes++;
        }
    } while (need_more_test);

    if (aPrimes > bPrimes)
        cout << "Proof MVP";
    else if (aPrimes < bPrimes)
        cout << "Parly MVP";
    else
        cout << "AGAIN!";
    return 0;
}
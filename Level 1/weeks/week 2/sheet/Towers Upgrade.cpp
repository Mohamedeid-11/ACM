#include <iostream>
using namespace std;

int const M = 1000000007;

int modularEponentiation(int a, int b);

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c;
    x = abs(a - b);

    int h1, h2, h3, temp;

    h1 = modularEponentiation(a, b);
    h2 = modularEponentiation(b, a);
    h3 = modularEponentiation(c, x);

    if (h1 > h2)
    {
        temp = h1;
        h1 = h2;
        h2 = temp;
    }
    if (h1 > h3)
    {
        temp = h1;
        h1 = h3;
        h3 = temp;
    }
    if (h2 > h3)
    {
        temp = h2;
        h2 = h3;
        h3 = temp;
    }

    cout << h1 << ' ' << h2 << ' ' << h3;

    return 0;
}

int modularEponentiation(int a, int b)
{
    int digit = 0;
    int bin[17];
    int temp = b;

    while (temp)
    {
        if (temp & 1)
            bin[digit] = 1;
        else
            bin[digit] = 0;
        ++digit;
        temp >>= 1;
    }

    unsigned long long mod = a % M;
    unsigned long long final_mod;
    if (bin[0])
        final_mod = mod;
    else
        final_mod = 1;

    for (int i = 1; i < digit; i++)
    {
        mod = (mod * mod) % M;
        if (bin[i])
        {
            final_mod *= mod;
            final_mod %= M;
        }
    }

    return final_mod;
}
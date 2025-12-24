#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x);

int main()
{
    int x;
    cin >> x;

    cout << boolalpha << isPrime(x) << endl;

    return 0;
}

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

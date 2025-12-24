#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int even = 0, odd = 0;

    while (n)
    {
        // check if the the first digit is even or odd
        if ((n % 10) % 2 == 0)
            even++;
        else
            odd++;

        // shift the decimal number to the right so 323 will become 32
        n /= 10;
    }

    cout << "Even : " << even << '\n'
         << "Odd : " << odd << endl;

    return 0;
}
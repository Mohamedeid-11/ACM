#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    cin >> num;
    int len = num.length();

    int digit, even, odd, prime;
    even = odd = prime = 0;

    // for each digit in num
    for (int i = 0; i < len; ++i)
    {
        // convert char to int
        digit = num[i] - '0';

        // check digit is even or odd
        if (digit % 2 == 0)
        {
            ++even;

            // prime number should be grater than 1
            if (digit > 1)
            {
                ++prime;
                for (int i = 2; i < digit; ++i)
                {
                    // if the digit can be divided by any number other than itself or 1, then it's not prime.
                    if (digit % i == 0)
                    {
                        --prime;
                        break;
                    }
                }
            }
        }
        else
        {
            ++odd;

            if (digit > 1)
            {
                ++prime;
                for (int i = 3; i < digit; i += 2)
                {
                    if (digit % i == 0)
                    {
                        --prime;
                        break;
                    }
                }
            }
        }
    }

    cout << even << ' '
         << odd << ' '
         << prime;

    return 0;
}
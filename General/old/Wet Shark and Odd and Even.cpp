#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    long long sum = 0;

    // how many odd numbers we have
    int odd_nums = 0;

    // store the smallest number
    long long small_odd;

    // to store the number temporarily
    long long temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        if (temp % 2 != 0)
        {
            ++odd_nums;
            if (temp < small_odd || small_odd == 0)
                small_odd = temp;
        }
    }

    // if i have an odd number of odd numbers like: (3 9 15)
    // then emit the smallest
    // as i want the biggest sum and the sum of even number of odd numbers like 2 odd numbers: (9 15) will always be even
    if (odd_nums % 2 != 0)
        sum -= small_odd;

    cout << sum << endl;
    return 0;
}

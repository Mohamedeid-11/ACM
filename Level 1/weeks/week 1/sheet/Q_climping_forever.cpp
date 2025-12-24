#include <iostream>
using namespace std;

int main()
{
    // suppose n = 7, a = 2, b = 10
    long long n, a, b;
    cin >> n >> a >> b;

    // z is the number of days that contains errors  (multiples of a that are less than n)
    // z = 7/2 = 3   (so the error happens in 3 days)
    long long z = n / a;

    // correct steps = all steps - supposed steps in days with error
    // correct steps = (1+2+3+4+5+6+7) - (2+4+6)
    // (2+4+6) = 2 (1+2+3)   where 2 is (a) and (1+2+3) is the summution from 1 to z

    long long point = (n * (n + 1) / 2) - (a * (z * (z + 1) / 2));

    // now add b + (b+1) + (b+2)... +(b + (z-1)) = (10+11+12) so we can use
    // S = z(b + l) / 2
    // where,
    // S = sum of the consecutive integers
    // z = number of integers in the range
    // b = first term
    // l = last term = b + (z-1)

    point += z * (b + (b + z - 1)) / 2;

    cout << point << endl;
    return 0;
}

// https://www.cuemath.com/sum-of-integers-formula/
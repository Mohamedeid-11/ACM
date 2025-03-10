#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;

    if (a >= n)
        cout << 1 << endl;
    else if (a <= b)
        cout << -1 << endl;

    else // n > a > b

        // bob climbs a on the last day
        if ((n - a) % (a - b) == 0)
            cout << 1 + (n - a) / (a - b) << endl;

        // when bob doesn't need to climb the full 'a' distance on the last day
        else
            // round up
            cout << 1 + (1 + (n - a) / (a - b)) << endl;

    return 0;
}

// on the last day
// bob moves up (S) steps [where 1 <= S <= a], then he reaches the top so he doesn't get bushed down
// if he climbed s on the last then he climbed (n - s) on previous days, (a-b) steps each day
// so the number of days = 1 + (n - s) / (a - b) but there's a small problem
// (n - s) / (a - b) won't be an intiger unless (S = a)
// and when bob doesn't have to climb the full 'a' distance (1 <= S < a)
// we just have to round (n - s) / (a - b) up to get the right number of day

/*
to [ROUND UP] use ( (x + y - 1)/y )  or (if condition) with integers instead of ceil(1.0 * x/y) to avoid precision issues.

How does ceil(x/y) == (x + y - 1) / y  ???

When x divides evenly by y:
Example: x = 10, y = 2
Regular division: 10/2 = 5
Ceiling: ceil(10/2) = 5
Our formula: (10 + 2 - 1)/2 = 11/2 = 5   //c++ omit decimal point when dealing with integers

When there's a remainder:
Example: x = 10, y = 3
Regular division: 10/3 = 3.33...
Ceiling: ceil(10/3) = 4
Our formula: (10 + 3 - 1)/3 = 12/3 = 4

*/

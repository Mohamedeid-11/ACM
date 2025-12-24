#include <iostream>
using namespace std;

int main()
{
    long long a, b, k, steps = 0, mid;
    cin >> a >> b >> k;

    while (a <= b)
    {
        steps++;

        mid = (a + b) / 2;

        if (mid < k)
            a = ++mid;
        else if (mid > k)
            b = --mid;
        else
            break;
    }

    cout << steps;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, m, x;
    cin >> n >> m >> x;

    if (m % 2 != 0)
        m++;

    // omit whole cycles
    m = m % n;

    if (m + x > n)
        cout << m + x - n;
    else
        cout << m + x;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int l, r, m;
    cin >> l >> r >> m;

    unsigned long long sum = 1;

    while (l <= r)
    {
        sum = (sum * (l % m)) % m;
        if (sum == 0)
            break;
        l++;
    }

    cout << sum;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, l, r;
    cin >> n;

    while (n)
    {
        cin >> l >> r;
        cout << (l + r) * (r - l + 1) / 2 << endl;
        n--;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    // k: initial price(initial_price)
    // n: soldier's money(money)
    // w: number of bananas(n)
    int initial_price, money, n;
    cin >> initial_price >> money >> n;

    // 3+6+9+12 = 3(1+2+3+4) = 3* [n(n+1)*0.5] where n is 4
    long long bill = initial_price * n * (n + 1) * 0.5;

    if (bill > money)
        cout << (bill - money) << endl;
    else
        cout << 0 << endl;

    return 0;
}
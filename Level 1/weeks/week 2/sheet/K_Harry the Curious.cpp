#include <iostream>
using namespace std;

int main()
{
    int l, r, n;
    cin >> l >> r >> n;
    string factors = "";

    int temp = n;
    for (int i = 2; i * i <= temp; i++)
    {
        if (n % i == 0)
        {
            if (i >= l && i <= r)
                factors += to_string(i) + ' ';

            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1 && n >= l && n <= r)
        factors += to_string(n);

    if (factors.back() == ' ')
        factors.pop_back();

    if (factors == "")
        factors = "-1";

    cout << factors;

    return 0;
}

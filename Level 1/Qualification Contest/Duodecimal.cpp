#include <iostream>
#include <cmath>
using namespace std;

bool hasNoDecimal(double x)
{
    double integer_part = trunc(x);
    return abs(x - integer_part) < 0.0000000001 || abs(x - integer_part) > 0.9999999999;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, k;
    cin >> w >> k;
    bool duodecimal;

    if (k == 1 && w == 1)
        duodecimal = true;
    else if (k == 1 || w == 1)
        duodecimal = false;
    else
    {
        long double root = 1.0 / (k - 1);
        duodecimal = hasNoDecimal(pow(w, root));
    }
    if (duodecimal)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, k, a;
    cin >> n >> k >> a;

    if (round(n * k / a) == n * k / a)
        if (2147483647 - n * k / a >= 0)
            cout << "int" << endl;
        else
            cout << "long long" << endl;
    else
        cout << "double" << endl;

    return 0;
}

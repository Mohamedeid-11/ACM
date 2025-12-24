#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << fixed << setprecision(6) << a * b - (0.5 * (a - c) * (b - d)) << endl;

    return 0;
}
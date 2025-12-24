#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    short int n, k, d;
    long long c;
    cin >> n >> k >> d >> c;

    short int x, y;
    x = n;
    y = d * n * (n - 1);
    long long z = ((pow(d, 2) * n * (n - 1) * (2 * n - 1) / 6) - c / k);

    double a = max((-y + sqrt(y * y - 4 * x * z)) / (2 * x), (-y - sqrt(y * y - 4 * x * z)) / (2 * x));

    if (isnan(a))
        cout << fixed << setprecision(6) << -1.0 << endl;
    else
        cout << fixed << setprecision(6) << a << endl;

    return 0;
}

/*
after simplyifing the equation we can find that
n * a^(2) + (d*n*(n-1)) * a + ( (d^(2) *n*(n-1)*(2n-1)/6) - c/k )  =  0

by storing the coefficients in  x, y, z the equation become:   x * a^(2) + y*a + z = 0
and we can solve it by
a = (  -y + ( y^(2)-4*x*z )^(0.5) ) / 2x  ,  (  -y - ( y^(2)-4*x*z )^(0.5) ) / 2x
*/
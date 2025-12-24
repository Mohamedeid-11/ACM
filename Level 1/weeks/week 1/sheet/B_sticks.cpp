#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    // the Triangle Inequality Theorem
    // states that the sum of any two side lengths of a triangle is always greater than the third side.
    if (a + b > c && a + c > b && b + c > a)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
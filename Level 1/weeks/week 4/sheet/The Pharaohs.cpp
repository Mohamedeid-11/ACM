#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    unsigned long long n, a;
    while (t--)
    {
        cin >> n;
        a = ceil(abs(-1 + sqrt(1 + 4 * n * 2)) / 2.0);
        cout << a << endl;
    }
}
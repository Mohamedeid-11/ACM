#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, m;
    cin >> n >> m;

    cout << n * (m * (m - 1) / 2) + m * (n * (n - 1) / 2);

    return 0;
}

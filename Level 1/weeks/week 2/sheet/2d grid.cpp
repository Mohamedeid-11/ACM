#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    cout << (m * (m - 1) / 2) * n + n * (n - 1) * m / 2;

    return 0;
}

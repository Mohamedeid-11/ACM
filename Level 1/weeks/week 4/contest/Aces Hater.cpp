#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if ((a % 2 + b % 2) == 1)
        cout << 1;
    else
        cout << 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;

        cout << n;
        while (n != 1)
        {
            cout << ' ';

            if (n % 2 == 0)
                n /= 2;
            else 
                n = n * 3 + 1;

            cout << n;
        }
        cout << '\n';
    }
}
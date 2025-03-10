#include <iostream>
using namespace std;

int main()
{
    unsigned short int t, n;
    cin >> t;

    while (t)
    {
        cin >> n;
        cout << n;
        ;
        for (unsigned short int i = 1; i < n; i++)
            cout << ' ' << n;

        cout << endl;
        t--;
    }

    return 0;
}
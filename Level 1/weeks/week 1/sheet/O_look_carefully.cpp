#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    switch (x)
    {
        case 'C':
        case 'h':
        case 'i':
            cout << "Yes" << endl;
            break;
        default:
            cout << "No" << endl;
    }

    return 0;
}
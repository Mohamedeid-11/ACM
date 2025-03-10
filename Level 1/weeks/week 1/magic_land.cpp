#include <iostream>
using namespace std;

int main()
{
    short int a, b;
    int c;
    cin >> a >> b >> c;

    if (c % a == 0 && c % b == 0)
        cout << "Both" << endl;
    else if (c % a == 0)
        cout << "First" << endl;
    else if (c % b == 0)
        cout << "Second" << endl;
    else
        cout << "None of them" << endl;

    return 0;
}

// he could open a door if the number on the key is divisible by the number written on that door.
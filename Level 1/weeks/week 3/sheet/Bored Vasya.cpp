#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int temp, counter = 0;
    short int pos[m] = {};

    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        if (!(temp % n))
            pos[counter++] = i + 1;
    }

    if (counter)
    {
        cout << counter << endl;
        while (--counter)
            cout << pos[counter] << ' ';
        if (pos[counter])
            cout << pos[counter];
    }
    else
        cout << 0;
}
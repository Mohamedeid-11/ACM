#include <iostream>
using namespace std;

int main()
{

    unsigned short int n, t = 0, e = 0, b = 0, c = 0;
    cin >> n;

    char temp;

    while (n)
    {
        cin >> temp;

        if (temp == 't')
            t++;
        else if (temp == 'e')
            e++;
        else if (temp == 'b')
            b++;
        else
            c++;

        n--;
    }

    cout << t << ' ' << e << ' ' << b << ' ' << c;

    return 0;
}
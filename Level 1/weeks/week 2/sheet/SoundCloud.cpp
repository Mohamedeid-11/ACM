#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    char c;
    while (n)
    {
        cin >> c;

        i++;
        if (i == 21)
            i = 1;

        if (c == '>')
        {
            i++;
            if (i == 21)
                i = 1;
        }
        else if (c == '<')
        {
            i--;

            if (i == 0)
                i = 20;
        }

        n--;
    }

    cout << i;

    return 0;
}

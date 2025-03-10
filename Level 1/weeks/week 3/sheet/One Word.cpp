#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    char s[n + 1];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    s[n] = '\0';

    char last = s[0];
    int new_n = n, counter = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == last)
            counter++;
        else
        {
            new_n -= counter;
            last = s[i];
            counter = 0;
        }
    }
    new_n -= counter;

    int q;
    cin >> q;
    while (q--)
    {
        char temp;
        cin >> temp;

        if (last != temp)
        {
            last = temp;
            new_n++;
        }

        cout << new_n << endl;
    }

    return 0;
}

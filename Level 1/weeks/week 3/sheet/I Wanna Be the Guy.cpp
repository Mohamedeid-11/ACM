#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int levels[n] = {};

    int p, q, a;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> a;
        levels[a - 1]++;
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        levels[a - 1]++;
    }

    bool win = true;
    for (int i = 0; i < n; i++)
    {
        if (!levels[i])
        {
            win = false;
            break;
        }
    }

    if (win)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
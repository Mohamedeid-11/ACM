#include <iostream>
using namespace std;

int main()
{
    int n, x, y, a, b;
    cin >> n;

    bool on_the_same_line = true;

    double slope;
    cin >> x >> y;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
            cin >> a >> b;
        else
            cin >> x >> y;

        if (i == 1)
            slope = 1.0 * (b - y) / (a - x);

        if (1.0 * (b - y) / (a - x) != slope)
        {
            on_the_same_line = false;
            break;
        }
    }

    if (on_the_same_line)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cout << slope << endl;

    return 0;
}
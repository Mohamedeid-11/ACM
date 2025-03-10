#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b;
    while (t--)
    {
        cin >> a >> b;

        int steps = a - b;

        if (steps < 0)
            steps *= -1;

        if (ceil(steps / 10.0) == steps / 10 || !steps)
            cout << steps / 10 << endl;
        else
            cout << steps / 10 + 1 << endl;
    }
}
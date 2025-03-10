#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    unsigned long long mod = d % n, mod10 = 10 % n;
    int counter;
    if (mod && !mod10)
    {
        mod = 0;
        counter = -1;
    }
    else
        counter = 1;

    // to detect cycles
    bool visited[n + 1] = {};
    visited[mod] = true;
    while (mod)
    {
        mod = (mod + (d % n * mod10) % n) % n;

        if (!visited[mod])
            visited[mod] = true;
        else
        {
            counter = -1;
            break;
        }

        mod10 = (mod10 * 10 % n) % n;
        counter++;
    }

    cout << counter;
}
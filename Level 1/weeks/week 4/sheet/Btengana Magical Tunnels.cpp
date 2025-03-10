#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int map[++n];
    map[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> map[i];
    }

    long long fastest_road = -1, current_road, road = 0;

    int a = 0, b = 10000;
    while (n > 10000)
    {
        road = accumulate(map + a, map + b, road);
        a += 10000;
        b += 10000;
        n -= 10000;
    }
    road = accumulate(map + a, map + a + n, road);

    int m,
        x, y;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        current_road = road;
        while (y >= x)
        {
            current_road -= map[x];
            x++;
        }

        if (fastest_road == -1 || current_road < fastest_road)
            fastest_road = current_road;
    }

    cout << fastest_road;
}

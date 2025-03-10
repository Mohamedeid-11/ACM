#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int city[n], tower[m];
    for (int i = 0; i < n; i++)
        cin >> city[i];
    for (int i = 0; i < m; i++)
        cin >> tower[i];

    int maximum_distance = 0;
    for (int i = 0; i < n; i++)
    {
        // distance between tower and city
        int dist;

        // all towers are on the right side of the city
        if (tower[0] > city[i])
            dist = abs(city[i] - tower[0]);

        // all towers are on the left side of the city
        else if (tower[m - 1] < city[i])
            dist = abs(city[i] - tower[m - 1]);

        // city between towers
        else
        {
            int start = 0, end = m - 1, mid;
            dist = abs(city[i] - tower[0]);

            while (start <= end)
            {
                mid = (start + end) / 2;

                if (abs(tower[mid] - city[i]) < dist)
                    dist = abs(city[i] - tower[mid]);

                if (tower[mid] <= city[i])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        if (dist > maximum_distance)
            maximum_distance = dist;
    }

    cout << maximum_distance;
}
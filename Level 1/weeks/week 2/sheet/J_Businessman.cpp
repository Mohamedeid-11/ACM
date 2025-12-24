#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    double x1, y1, x2, y2, x3, y3;
    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int dist1 = sqrt( pow((x1 - x2), 2) + pow((y1 - y2), 2) );
        int dist2 = sqrt( pow((x1 - x3), 2) + pow((y1 - y3), 2) );
        int dist3 = sqrt( pow((x3 - x2), 2) + pow((y3 - y2), 2) );

        cout << ((dist1 == dist2 && dist1 == dist3)? "Yes" : "No") << '\n';
    }
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    double x1, y1, x2, y2, x3, y3;

    while (t)
    {
        // for(int i = )
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (floor(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) == floor(sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2))) && floor(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2))) == floor(sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2))))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        t--;
    }
    return 0;
}

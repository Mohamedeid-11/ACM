#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (x3 * (y2 - y1) + x2 * (y1 - y3) + x1 * (y3 - y2) == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

// we are  trying to figure out if three points can form a single straight line
// we can check if the slope between 2 points equalls the slope of 2 others
// or we can check wether the area of the triangle that consists of those three points is 0

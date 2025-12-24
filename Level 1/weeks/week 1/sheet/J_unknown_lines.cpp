#include <iostream>
using namespace std;

int main()
{
    short int ax, ay, bx, by, cx, cy, dx, dy;
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

    // slope_1: slope of AB    (by - ay) / (bx - ax)
    // slope_2: slope of CD    (dy - cy) / (dx - cx)

    if ((by - ay) * (dx - cx) == (dy - cy) * (bx - ax))
        cout << "Parallel" << endl;
    else if ((by - ay) * (dy - cy) == (-1 * (bx - ax) * (dx - cx)))
        cout << "Perpendicular" << endl;

    else
        cout << "Neither" << endl;

    return 0;
}

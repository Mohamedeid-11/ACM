#include <iostream>
using namespace std;

int main()
{
    unsigned long long _1, _3;
    cin >> _1 >> _3 >> _3;

    bool equal_sides = 0, equal_angles = 0;
    if (_1 == _3)
        equal_sides = 1;

    cin >> _1 >> _1 >> _3 >> _3;
    if (_1 == _3)
        equal_angles = 1;

    if (equal_angles)
    {
        if (equal_sides)
            cout << "Square";
        else
            cout << "Rectangle";
    }
    else
    {
        if (equal_sides)
            cout << "Rhombus";
        else
            cout << "Parallelogram";
    }

    return 0;
}

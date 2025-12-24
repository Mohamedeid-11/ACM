#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int l;
    cin >> l;

    cout << fixed << setprecision(4) << l / sqrt(2) << endl;

    return 0;
}

// in the square abcd
// inscribed angle abd = dbc = acd...,and so on equals 180/4 = 45  as they over looks the quarter of the circle.
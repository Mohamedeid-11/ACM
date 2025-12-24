#include <iostream>
using namespace std;

int main()
{
    char x, y, z;
    cin >> x >> y >> z;

    // 'a'-1 == 96
    cout << x - 96 + y - 96 + z - 96 << endl;
    return 0;
}
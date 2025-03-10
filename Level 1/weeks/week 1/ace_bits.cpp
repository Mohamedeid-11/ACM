#include <iostream>
using namespace std;

int main()
{
    char x, oper, y;
    cin >> x >> oper >> y;

    // lower than
    if (oper == 60)
    {
        if (x < y)
            cout << "YES";
        else
            cout << "NO";
    }

    // grater than
    else if (oper == 62)
    {
        if (x > y)
            cout << "YES";
        else
            cout << "NO";
    }

    // equal
    else
    {
        if (x == y)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}

// He will provide you with either two 1-digit numbers or two lowercase English letters along with a comparison operator.
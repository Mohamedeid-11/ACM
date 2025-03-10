#include <iostream>
using namespace std;

int main()
{
    int n, temp_1, temp_2;
    cin >> n >> temp_1;

    bool strictly_increasing = true;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            cin >> temp_2;

            if (!(temp_2 > temp_1))
            {
                strictly_increasing = false;
                break;
            }
        }
        else
        {
            cin >> temp_1;

            if (!(temp_1 > temp_2))
            {
                strictly_increasing = false;
                break;
            }
        }
    }

    if (strictly_increasing)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

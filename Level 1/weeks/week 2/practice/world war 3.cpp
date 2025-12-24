#include <iostream>
using namespace std;

int main()
{

    int n, first_cell = 0, last_cell, num_of_r_soldiers = 0;
    long long r, r_i;

    cin >> n >> r;

    for (int i = 1; i <= n; i++)
    {
        cin >> r_i;

        if (r == r_i)
        {
            if (first_cell == 0)
                first_cell = i;

            last_cell = i;

            num_of_r_soldiers++;
        }
    }

    if (num_of_r_soldiers)
        cout << first_cell << ' ' << last_cell << ' ' << num_of_r_soldiers << endl;
    else
        cout << -1 << endl;

    return 0;
}
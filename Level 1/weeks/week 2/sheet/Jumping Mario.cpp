#include <iostream>
using namespace std;

int main()
{
    short int n, wall_1, wall_2, high_jumb = 0, low_jumb = 0;
    cin >> n;

    if (n > 1)
    {
        cin >> wall_1;
        for (short int i = 1; i < n; i++)
        {
            // this condition is to organise input between our 2 varibles
            if (i % 2 == 1)
            {
                cin >> wall_2;
                if (wall_2 > wall_1)
                    high_jumb++;
                else if (wall_2 < wall_1)
                    low_jumb++;
            }
            else
            {
                cin >> wall_1;
                if (wall_1 > wall_2)
                    high_jumb++;
                else if (wall_1 < wall_2)
                    low_jumb++;
            }
        }
    }

    cout << high_jumb << ' ' << low_jumb;

    return 0;
}
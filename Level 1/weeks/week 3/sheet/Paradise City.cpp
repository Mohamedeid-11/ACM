#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char temp;
        int people_in_district[n] = {};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 1; j <= n * 3; j++)
            {
                cin >> temp;
                if (temp == '*')
                {
                    int cell = (j % 3 != 0) ? (j / 3) : (j / 3 - 1);
                    people_in_district[cell] += 4;
                }
            }
        }
        cout << *max_element(people_in_district, people_in_district + n) << endl;
    }
}

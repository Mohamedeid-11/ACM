#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int temp;
    int primary_sum = 0, secondary_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> temp;

            if (i == j)
                primary_sum += temp;
            if (i == (n - 1 - j))
                secondary_sum += temp;
        }
    }

    cout << primary_sum << ' ' << secondary_sum << endl;
}
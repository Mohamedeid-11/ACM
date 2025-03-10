#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, k;
    cin >> t;

    int count;
    while (t)
    {
        cin >> k;

        count = 2;

        for (int i = 2; i <= sqrt(k); i++)
        {
            if (k % i == 0)
            {
                count++;
                if (i != sqrt(k))
                    count++;
            }
        }
        if (k == 1)
            count = 1;
        cout << count << endl;

        t--;
    }
    return 0;
}

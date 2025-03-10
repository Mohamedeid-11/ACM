#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    // (1e9 + 1) is greater than any value of the array
    // therefore it's greater than any AND operation between the array's elements
    int temp_and, smallest_and = 1000000001;

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (j - i == 1)
            {
                temp_and = num[i];
            }
            temp_and &= num[j];

            if (temp_and < smallest_and)
            {
                smallest_and = temp_and;
                if (smallest_and == 0)
                    break;
            }
        }

        if (smallest_and == 0)
            break;
    }

    if (smallest_and == 1000000001)
        smallest_and = 0;

    cout << smallest_and << endl;

    // cout << '(' << i << ", " << j << ")\n";
    return 0;
}

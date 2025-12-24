#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    int n;
    while (t--)
    {
        cin >> n;

        // make a sorted array
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num, num + n);

        // find number that occured for an odd number of times
        int occurrance = 1, target;
        for (int i = 1; i < n; i++)
        {
            if (num[i] == num[i - 1])
                occurrance++;
            else
            {
                if (occurrance % 2 == 1)
                {
                    target = num[i - 1];
                    occurrance = 0;
                    break;
                }
                else
                    occurrance = 1;
            }
        }

        // if the last digit was the target (we didn't determine it by the loop)
        if (occurrance % 2 == 1)
            target = num[n - 1];

        // print target
        cout << target << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    // take input
    int n, q, a;
    cin >> n >> q;
    int num[n], ans[q];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    bool decreasing = false;
    int change = 0;
    // check if the array is decreasing
    if (num[1] < num[0])
    {
        decreasing = true;
    }
    else
    {
        // check if it decreases after increasing
        if (num[n - 1] < num[n - 2])
        {
            int start = 0;
            int end = n - 1;
            while (start <= end)
            {
                int mid = (start + end) / 2;

                if (num[mid] < num[mid + 1])
                    start = ++mid;
                else if (num[mid] > num[mid + 1])
                {
                    change = mid;
                    end = --mid;
                }
            }
        }
    }

    // check for each a in q
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        ans[i] = 0;

        int start = 0;
        int end = n - 1;

        if (decreasing)
        {
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (num[mid] < a)
                    end = --mid;

                else if (num[mid] > a)
                    start = ++mid;

                else
                {
                    ans[i] = mid + 1;
                    break;
                }
            }
        }
        else
        {
            if (change)
                end = change - 1;

            // if a is in the first part
            while (start <= end)
            {
                int mid = (start + end) / 2;
                if (num[mid] < a)
                    start = ++mid;

                else if (num[mid] > a)
                    end = --mid;

                else
                {
                    ans[i] = mid + 1;
                    break;
                }
            }

            // if a is in the first part
            if (change && !ans[i])
            {
                start = change;
                end = n - 1;
                while (start <= end)
                {
                    int mid = (start + end) / 2;
                    if (num[mid] < a)
                        end = --mid;

                    else if (num[mid] > a)
                        start = ++mid;

                    else
                    {
                        ans[i] = mid + 1;
                        break;
                    }
                }
            }
        }
    }

    // print ans
    for (int i = 0; i < q; i++)
    {
        if (ans[i])
            cout << "Yes" << ' ' << ans[i] << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int nums[n];
    bool found[101] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (!found[nums[i]])
            found[nums[i]] = true;
    }

    bool beautiful = true;
    for (int i = 1; i < n; i++)
    {
        int product = nums[i] * nums[i - 1];
        if (product > 100 || !found[product])
        {
            beautiful = false;
            break;
        }
    }

    if (beautiful)
        cout << "YES";
    else
        cout << "NO";
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];

    // get array and calc sum
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum += num[i];
    }

    // determine cool or not
    bool cool = true;
    for (int temp : num)
    {
        if (sum % temp != 0)
        {
            cool = false;
            break;
        }
    }

    if (cool)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int k = 0, p = 0;
    int shadow[7] = {};
    while (n--)
    {
        int temp;
        cin >> temp;
        if (!shadow[temp])
        {
            k++;
            shadow[temp] = 2;
        }
        else
        {
            p++;
            shadow[temp]--;
        }
    }

    if (p > k)
        cout << "YES";
    else
        cout << "NO";
}
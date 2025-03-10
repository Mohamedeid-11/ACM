#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long num = 1;
    int temp;
    bool found[99991 + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (!found[temp])
        {
            num *= temp;
            found[temp] = true;
        }
    }
    cout << num;

    return 0;
}

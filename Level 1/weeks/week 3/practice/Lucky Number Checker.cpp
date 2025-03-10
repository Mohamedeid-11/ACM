#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char num;
    bool lucky = true;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (!(num == '3' || num == '6' || num == '9'))
        {
            lucky = false;
            break;
        }
    }

    if (num % 2 == 0 && lucky)
        cout << "YES";
    else
        cout << "NO";
}
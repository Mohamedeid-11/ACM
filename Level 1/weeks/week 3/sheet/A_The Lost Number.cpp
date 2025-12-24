#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num[10];
    for (int i = 0; i < 10; i++)
        cin >> num[i];

    int target;
    cin >> target;

    bool found = false;
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == target)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}

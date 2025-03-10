#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pairs = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && (arr[i] + arr[j]) == x)
                pairs++;
        }
    }

    cout << pairs << endl;
    return 0;
}

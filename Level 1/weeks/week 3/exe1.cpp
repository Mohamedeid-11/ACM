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

    while (n)
    {
        n--;
        cout << num[n] << ' ';
    }

    return 0;
}

// sum of array func: accumulate or reduce

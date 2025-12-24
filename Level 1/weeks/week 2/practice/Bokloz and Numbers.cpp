#include <iostream>
using namespace std;

int main()
{

    int n;
    long long greatest_num, temp;
    cin >> n >> temp;

    greatest_num = temp;
    n--;

    while (n)
    {
        cin >> temp;

        if (greatest_num < temp)
            greatest_num = temp;

        n--;
    }

    cout << greatest_num;

    return 0;
}
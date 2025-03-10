#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double k;
        cin >> k;

        int num = 100;
        while (round(num / k) != num / k)
            num += 100;

        cout << num / k << endl;
    }
}
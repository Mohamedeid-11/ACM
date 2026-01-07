#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k; cin >> k;
        cout << 100 / gcd(k, 100) << endl;

        /* --- Another Solution ---
           double k; cin >> k;
           int num = 100;
           while (round(num / k) != num / k)
               num += 100;
           cout << num / k << endl;
        */
    }
}
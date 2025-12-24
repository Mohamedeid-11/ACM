#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{    
    ull n, x, product, sum = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        product = 1;
        for(int i = 2; i <= x; i++) product *= i;
        sum += product;
    }
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int a, b, c, res;
    cin >> a >> b >> c;
    res = max((a+1)*b*c, a*(b+1)*c);
    cout << max(res, a*b*(c+1));
}
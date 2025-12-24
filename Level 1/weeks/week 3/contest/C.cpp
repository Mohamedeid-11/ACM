#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() 
{    
    int x, y;
    cin >> x >> y;
    ull weight = 1, sum = 0;
    
    while(y)
    {
        if (y & 1)  sum += weight;
        y /= 2;
        weight *= 2;
    }

    string x_str = "";
    while(x)
    {
        if (x & 1)
            x_str.append("1");
        else 
            x_str.append("0");

        x /= 2;
    }
    x_str.reserve();

    for(char bit : x_str)
    {
        if(bit == '1') sum += weight;
        weight *= 2;
    }

    cout << sum;
}
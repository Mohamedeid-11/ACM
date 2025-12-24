#include <bits/stdc++.h>
using namespace std;

int main()
{    
    char c;
    int freq[3] = {};
    while(cin >> c)
    {
        if(c == 'R') freq[0]++;
        if(c == 'B') freq[1]++;
        if(c == 'G') freq[2]++;
    }

    cout << "Red stones = "   << freq[0] << '\n'
         << "Blue stones = "  << freq[1] << '\n'
         << "Green stones = " << freq[2];
}
#include <bits/stdc++.h>
using namespace std;
/*
week 3 sheet
I. Snacktower
https://codeforces.com/group/g3REqA871s/contest/570641/problem/I
*/
int main()
{    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int target = n;
    bool found[n+1] = {};
    for(int i = 0; i < n; i++)
    {
        found[arr[i]] = true;
        while(found[target])
        {
            cout << target << ' ';
            target--;
        }
        cout << '\n';
    }
}
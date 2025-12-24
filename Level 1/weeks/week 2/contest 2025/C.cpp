#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    bool accepted = true;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x == 0) accepted = false;
    }
    cout << (accepted? "HAHA EZ" : "Tani ?");

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string x; cin >> x;

    int freq[10] = {};
    for(int i = 0; i < n; i++) freq[x[i]-'0']++;

    int q, k, c;
    cin >> q;
    while(q--)
    {
        cin >> k >> c;
        cout << (freq[c] >= k? "YES" : "NO") << '\n';
    }
}

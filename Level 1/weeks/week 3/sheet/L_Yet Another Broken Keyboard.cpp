#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    bool allowed_letters['a' + 26] = {};

    char c;
    for(int i = 0; i < k; i++)
    {
        cin >> c;
        allowed_letters[int(c)] = true;
    }

    ull subStr_count = 0;
    int l = 0, r;
    for(int i = 0; i <= n; i++)
    {
        if(i == n || !allowed_letters[int(s[i])])
        {
            r = i-1;
            ull count = r - l + 1;
            subStr_count += count*(count+1)/2;
            l = i+1;
        }
    }

    cout << subStr_count;
}


#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int G(ull x)
{
    int ones = 0;
    while(x)
    {
        ones += (x & 1);
        x >>= 1;
    }
    return ones;
}

int main()
{
    int n; cin >> n;
    ull a[n], b[n], s[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) 
    {
        cin >> b[i];
        s[i] = G(a[i]) * b[i];
    }
    sort(s, s + n);

    int q; cin >> q;
    while (q--)
    {
        ull k; cin >> k;

        // binary search to count how many elements in s are <= k
        int ans = -1; // assume no elements <= k
        int start = 0, end = n - 1, mid;
        while (start <= end) 
        {
            mid = (start + end) / 2;

            if (s[mid] <= k) 
            {
                ans = mid;      // This element is a candidate, 
                start = mid + 1; // but look for a larger index further right
            } 
            else end = mid - 1;
        }
        
        cout << ans + 1 << endl;     // 0 index to 1 index
    }
}



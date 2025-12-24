#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

// Equation:
// \sum_{i=1}^{n} \sum_{j=i+1}^{n} (a_i + a_j)^2


int main() 
{    
    int n; cin >> n;
    ull arr[n+2];
    ull reveresd_prefix_sum[n+2] = {};
    ull sqr_reveresd_prefix_sum[n+2] = {};

    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = n; i >= 1; i--)
    {
        reveresd_prefix_sum[i] += reveresd_prefix_sum[i+1] + arr[i];
        sqr_reveresd_prefix_sum[i] += sqr_reveresd_prefix_sum[i+1] + (arr[i]*arr[i]);
    }
    
    ull sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (arr[i]*arr[i]) * (n-i);
        sum += sqr_reveresd_prefix_sum[i+1];
        sum += 2*arr[i] * reveresd_prefix_sum[i+1];
    }
    
    cout << sum;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n+1];
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    bool found_nums[(int)1e5+1] = {false};
    int distinct_nums_suff_sum[n+2] = {0}; // if n -> 10   we can hold values from 0 to 11 (0 not needed and 11 as 10 depends on 10)
    for(int i = n; i > 0; i--)
    {
        distinct_nums_suff_sum[i] = distinct_nums_suff_sum[i+1];

        if(!found_nums[arr[i]])
        {
            found_nums[arr[i]] = true;
            distinct_nums_suff_sum[i]++;
        }
    }

    int l;
    for(int i = 0; i < m; i++)
    {
        cin >> l;
        cout << distinct_nums_suff_sum[l] << '\n';
    }
}
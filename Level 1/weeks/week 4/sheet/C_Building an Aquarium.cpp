#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int t; cin >> t;
    int n, x;
    while(t--)
    {
        cin >> n >> x;
        int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];

        ull min = 0, max = 1e18, hight, ans; // binary search on the hight
        while(min <= max)
        {
            hight = (min+max)/2;

            ull water = 0;
            for(int i=0;i<n;i++) water += (hight>arr[i]? hight-arr[i] :0);
            
            if(water > x) max = hight-1;
            else
            {
                min = hight+1;
                ans = hight;
            }
        }
        
        cout << ans << '\n'; 
    } 
}
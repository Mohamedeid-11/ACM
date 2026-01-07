#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int minDiff = 1e9;
    for(int i=0; i<n; i++)
    {
        for(int j= i+1; j<n; j++)
        {
            // simplify each term (as if we devided)
            int GCD = gcd(arr[i], arr[j]);
            int x1 = arr[i] / GCD;
            int x2 = arr[j] / GCD;
            if(abs(x1-x2) < minDiff) 
            {
                minDiff = abs(x1-x2);
                if(minDiff == 0) break;
            }
        }
    }

    cout << minDiff;
}
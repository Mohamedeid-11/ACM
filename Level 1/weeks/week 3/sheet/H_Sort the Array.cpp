#include <bits/stdc++.h>
using namespace std;

int main()
{    
    int n;
    cin >> n;

    int arr[n]; cin >> arr[0];

    int l, r = -1;
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] < arr[i-1])
        {
            if(r == -1) l = i-1;
            r = i;
        }
    }

    bool ans = true;
    if (r == -1) l = 0, r = 0; // if arr was already sorted
    else
    {
        reverse(arr + l, arr + (r+1));

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i-1])
            {
                ans = false;
                break;
            }
        }
    }

    if(ans) 
        cout << "yes" << '\n' << l+1 << ' ' << r+1; // print 1 indexed indicies
    else
        cout << "no";
}
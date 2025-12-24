#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    /*
        // get the position of each a and b alone
        int aPos = 1, bPos = 1;
        int x;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            if(a > x) aPos++;
            if(b > x) bPos++;
        }
        // then sort them relative to each other
        if(a > b) aPos++;
        else bPos++;

        // Descending order
        n += 2;
    // then continue solution
    */
    n += 2;
    int arr[n];
    arr[0] = a, arr[1] = b;
    for(int i = 2; i < n; i++) cin >> arr[i];
    
    sort(arr, arr + n);
    
    int aPos = distance(arr, find(arr, arr + n, a)) + 1;
    int bPos = distance(arr, find(arr, arr + n, b)) + 1;
    int Des_aPos = n - aPos + 1;
    int Des_bPos = n - bPos + 1;
    
    cout << aPos << ' ' << Des_aPos << '\n'
         << bPos << ' ' << Des_bPos << endl; 
}
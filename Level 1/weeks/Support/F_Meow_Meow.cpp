#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];

    int quitest = 1e9, loudest = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < quitest) quitest = arr[i];
        if (arr[i] > loudest) loudest = arr[i];
    }    
    cout << loudest - quitest;
}
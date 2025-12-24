#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], arr_sorted[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr_sorted[i] = arr[i];
    }
    
    sort(arr, arr + n);

    int score = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr_sorted[i]) score++;
    }

    cout << score;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double arr[7];
    for(int i = 0; i < 7; i++) cin >> arr[i];

    long double resualt = 0;
    for(int i = 0; i < 3; i++)
        if(arr[i] > arr[6]) 
            resualt += arr[i+3];
    resualt /= (arr[5] + arr[4] + arr[3]);

    cout << fixed << setprecision(6) << resualt;
}
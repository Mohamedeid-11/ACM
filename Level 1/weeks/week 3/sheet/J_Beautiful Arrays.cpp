#include <bits/stdc++.h>
using namespace std;

// Beautiful Arrays: the product of any 2 consecutive elements in this array exist in the array.
int main()
{    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    bool found[101] = {};
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        found[arr[i]] = true;
    }

    bool beautiful = true;
    for(int i = 1; i < n; i++)
    {
        int product = arr[i] * arr[i-1];
        if (product > 100 || !found[product])
        {
            beautiful = false;
            break;
        }
    }

    cout << (beautiful? "YES" : "NO");
}
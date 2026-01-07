#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int M = 1e9 + 7;
ull expMod(int pow)
{
    if(pow == 0) return 1;

    ull sqrRoot = expMod(pow/2);
    ull result = (sqrRoot*sqrRoot) % M;
    if(pow%2 == 1) result = (result*4) % M; // base is 4

    return result;     
} 
int main()
{
    int n; cin >> n;
    cout << expMod(n);   
}
#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main()
{
    string recipe; cin >> recipe;
    int r[3] = {0};
    for(auto ing : recipe) 
    {
        switch(ing)
        {
            case 'B': r[0]++; break;
            case 'S': r[1]++; break;
            case 'C': r[2]++; break;
        }
    }

    ull n[3], p[3], money;
    for(int i=0; i<3; i++) cin >> n[i];
    for(int i=0; i<3; i++) cin >> p[i];
    cin >> money;

    ull min = 0, max = 1e18, mid, ans;
    while(min <= max)
    {
        mid = (min+max)/2;
        ull cost = 0;
        for(int i=0; i<3; i++) if(r[i]*mid > n[i]) cost += (r[i]*mid-n[i])*p[i];

        if(cost > money) max = --mid;
        else if(cost <= money) 
        {
            min = mid + 1;
            ans = mid;
        }
    }

    cout << ans;
}
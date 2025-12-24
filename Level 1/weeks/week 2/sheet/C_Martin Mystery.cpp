#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    double slope = (y2 - y1) / (double)(x2 - x1);

    bool same_line = true;
    for(int i = 2; i < n; i++)
    {
        cin >> x2 >> y2;
        if(same_line)
        {
            double new_slope = (y2 - y1) / (double)(x2 - x1);
            
            // if slopes arn't equal
            if(abs(slope - new_slope) > 1e-9) 
                same_line = false; 
        }
    }

    if (same_line) cout << "YES";
    else cout << "NO";
}
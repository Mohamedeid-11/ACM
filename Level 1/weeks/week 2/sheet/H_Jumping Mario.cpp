#include <iostream>
using namespace std;

int main()
{    
    int n, wall[2], highJumps = 0, lowJumps = 0;
    cin >> n >> wall[0];

    // (1 - bit) to inverse it
    // 1 - (0) = 1
    // 1 - (1) = 0
    for(int i = 1; i < n; i++)
    {
        cin >> wall[i%2];
        if( wall[i%2] > wall[1 - i%2] )      highJumps++;
        else if( wall[i%2] < wall[1 - i%2] ) lowJumps++;
    }

    cout << highJumps << " " << lowJumps;
}
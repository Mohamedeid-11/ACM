#include <iostream>
using namespace std;

int main()
{
    int n, lastSong = -1; // lastSong is 0 indexed
    cin >> n;

    char state;
    while(n--)
    {
        cin >> state;
        if( state == '*' )      lastSong = (lastSong + 1) % 20;
        else if (state == '>')  lastSong = (lastSong + 2) % 20;
    }

    cout << lastSong + 1; // convert it into 1 indexed
}

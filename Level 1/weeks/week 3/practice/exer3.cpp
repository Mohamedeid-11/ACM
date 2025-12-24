#include <iostream>
using namespace std;

int main()
{
    // initializing array to nothing[] or leaving some indices not initialized
    // gives the rest indices 0 for int or '\0' for char.

    int freq[27] = {};

    int n;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        freq[num[i]]++;
    }

    // prrint frequency of numbers from 1 to 26
    for (int i = 1; i < 27; i++)
        cout << freq[i] << ' ';

    return 0;
}

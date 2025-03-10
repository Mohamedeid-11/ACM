#include <iostream>
using namespace std;

int main()
{
    int n, freq[27] = {0};
    cin >> n;
    char letter[n];

    for (int i = 0; i < n; i++)
    {
        cin >> letter[i];
        freq[letter[i] - 'a' + 1]++;
    }

    for (int i = 1; i < 27; i++)
        cout << freq[i] << ' ';

    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int seq, max_sequance = 0;

    int piece[2]; // current and previous pieces: piece[0], piece[1]
    cin >> piece[0];
    int sushi[3] = {0, 0, 0}; // Tuna --> sushi[1]       Ell --> sushi[2]
    sushi[piece[0]]++;

    for (int i = 1; i < n; i++)
    {
        cin >> piece[i % 2];

        if (piece[0] != piece[1])
        {
            seq = 2 * min(sushi[1], sushi[2]);
            max_sequance = max(seq, max_sequance);
            sushi[piece[i % 2]] = 0;
        }
        // update
        sushi[piece[i % 2]]++;
    }

    seq = 2 * min(sushi[1], sushi[2]);
    max_sequance = max(seq, max_sequance);

    cout << max_sequance;

    return 0;
}
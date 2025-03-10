#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int freq_a[n][26] = {};
    int freq_b[n][26] = {};

    char temp;
    cin >> temp;
    freq_a[0][temp - 97]++;
    for (int i = 1; i < n; i++)
    {
        cin >> temp;
        freq_a[i][temp - 97]++;
        for (int j = 0; j < 26; j++)
            freq_a[i][j] += freq_a[i - 1][j];
    }
    cin >> temp;
    freq_b[0][temp - 97]++;
    for (int i = 1; i < n; i++)
    {

        cin >> temp;
        freq_b[i][temp - 97]++;
        for (int j = 0; j < 26; j++)
            freq_b[i][j] += freq_b[i - 1][j];
    }

    int bigz, serag;
    int l, r;
    while (q--)
    {
        bigz = 0, serag = 0;
        cin >> l >> r;
        l--, r--;
        int remove_a[26] = {}, remove_b[26] = {};
        int letter_i_a, letter_i_b;
        for (int i = 0; i < 26; i++)
        {
            letter_i_a = freq_a[r][i];
            letter_i_b = freq_b[r][i];
            if (l)
            {
                letter_i_a -= freq_a[l - 1][i];
                letter_i_b -= freq_b[l - 1][i];
            }

            if (letter_i_a && letter_i_b)
            {
                bigz += letter_i_a + letter_i_b;
                remove_a[i] = letter_i_a;
                remove_b[i] = letter_i_b;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq_a[n - 1][i] - remove_a[i] || freq_b[n - 1][i] - remove_b[i])
                serag++;
        }

        if (serag > bigz)
            cout << "SERAGMOHEMA" << endl;
        else if (serag < bigz)
            cout << "BIGZ" << endl;
        else
            cout << "DRAW" << endl;
    }
}

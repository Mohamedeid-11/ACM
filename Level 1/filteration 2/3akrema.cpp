#include <iostream>
using namespace std;

int freq[26] = {};
int n;
int longest_word();

int main()
{
    cin >> n;
    char word[n];
    for (int i = 0; i < n; i++)
        cin >> word[i];

    for (int i = 0; i < n; i++)
        freq[word[i] - 97]++;

    int q;
    cin >> q;
    short int task;
    while (q--)
    {
        cin >> task;
        if (task == 1)
            // longest similar-letters word
            cout << longest_word() << endl;
        else
        {
            int i;
            cin >> i;
            i--;

            freq[word[i] - 97]--;
            cin >> word[i];
            freq[word[i] - 97]++;
        }
    }

    return 0;
}

int longest_word()
{
    int longest_word = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > longest_word)
            longest_word = freq[i];
    }
    return longest_word;
}
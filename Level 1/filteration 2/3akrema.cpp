#include <iostream>
using namespace std;

int freq[26] = {};
int N;
int longest_word();

int main()
{
    cin >> N;
    char word[N];
    for (int i = 0; i < N; i++)
        cin >> word[i];

    for (int i = 0; i < N; i++)
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
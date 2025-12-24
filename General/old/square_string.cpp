#include <iostream>
using namespace std;

int main()
{
    // number of strings
    int n;
    cin >> n;

    // variables to store words and their half length
    string word;
    int half_len;

    // array to stores answers
    bool ans[n];

    // for each test case
    for (int t = 0; t < n; t++)
    {
        // get word and calculate its half length
        cin >> word;

        if (word.length() % 2 == 0)
        {
            half_len = word.length() / 2;
            // assume that the string is doubled
            ans[t] = true;

            // then correct that if it's not doubled
            for (int i = 0; i < half_len; i++)
            {
                if (word[i] != word[i + half_len])
                {
                    ans[t] = false;
                    break;
                }
            }
        }
        else
        {
            ans[t] = false;
        }
    }

    // print each answer
    for (int i = 0; i < n; i++)
    {
        if (ans[i])
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        cout << endl;
    }

    return 0;
}
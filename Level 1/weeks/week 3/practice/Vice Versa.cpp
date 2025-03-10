#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    char word[n + 1];
    for (int i = 0; i < n; i++)
        cin >> word[i];

    bool palindrome = true;
    for (int i = 0; i < (n / 2); i++)
    {
        if (word[i] != word[n - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
        cout << word[i];
    cout << endl;

    if (palindrome)
        cout << "Yes";
    else
        cout << "No";
}

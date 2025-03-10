#include <iostream>
using namespace std;

int letters[26];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        letters[temp - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (letters[i]--)
            cout << char(i + 97);
    }
}
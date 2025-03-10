#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int left = 0;
    bool balanced = true;
    for (unsigned long long i = 0; i < s.size(); i++)
    {
        if (s[i] == '{')
            left++;
        else if (s[i] == '}' && !s.empty() && left)
            left--;
        else
        {
            balanced = false;
            break;
        }
    }

    if (balanced && !left)
        cout << "Balanced";
    else
        cout << "Not Balanced";
}
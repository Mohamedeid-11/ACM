#include <iostream>
using namespace std;

int main()
{
    int vowels = 0;
    string letters;
    cin >> letters;
    int i = 0;
    // '\0' prints nothing in vscode
    while (letters[i] != '\0')
    {
        switch (letters[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vowels++;
            break;
        }
        i++;
    }

    cout << vowels;

    return 0;
}

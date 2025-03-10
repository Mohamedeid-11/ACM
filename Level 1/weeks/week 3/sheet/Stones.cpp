#include <iostream>
using namespace std;

char stones[101];
int red, blue, green;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> stones;

    int i = 0;
    while (stones[i] != '\0')
    {
        if (stones[i] == 'R')
            red++;
        else if (stones[i] == 'B')
            blue++;
        else
            green++;
        i++;
    }

    cout << "Red stones = " << red << '\n'
         << "Blue stones = " << blue << '\n'
         << "Green stones = " << green;
}
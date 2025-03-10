#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;     // num of dishes
    char a, b; // order of serving dishes , tables (ascending or descending)
    cin >> n >> a >> b;

    int dish[n];
    for (int i = 0; i < n; i++)
    {
        int num = 0;

        char temp;
        int pow2 = 128;
        for (int j = 0; j < 8; j++)
        {
            cin >> temp;
            if (temp - 48)
                num += pow2;
            pow2 /= 2;
        }

        dish[i] = num;
    }
    if (a == 'A')
        sort(dish, dish + n);
    else
        sort(dish, dish + n, greater<int>());

    char table[n + 1];
    for (int i = 0; i < n; i++)
        cin >> table[i];
    table[n] = '\0';

    if (b == 'A')
        sort(table, table + n);
    else
        sort(table, table + n, greater<char>());

    for (int i = 0; i < n; i++)
        cout << table[i] << dish[i] << ' ';
}

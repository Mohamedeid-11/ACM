#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> table;
    int temp;
    cin >> temp;
    table.push_back(temp);
    int score[2] = {};
    string player[2];
    cin >> player[1] >> player[0];
    unsigned long long siz = player[0].size();

    for (int i = 1; i <= 2 * siz; i++)
    {
        int next = player[i % 2].back() - '0';
        if (table.size() && table[table.size() - 1] == next)
        {
            score[i % 2] += next;
            table.pop_back();
        }
        else
            table.push_back(next);
        player[i % 2].pop_back();
    }

    if (score[1] > score[0])
        cout << "Alfred";
    else
        cout << "Batman";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    int n;
    while (T--)
    {
        cin >> n;
        int soldier[n];

        for (int i = 0; i < n; i++)
            cin >> soldier[i];

        char t[n];
        map<char, deque<int>> team;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            team[t[i]].push_back(soldier[i]);
        }

        bool possible = true;
        if (team['R'].size() && team['B'].size())
        {
            sort(team['R'].begin(), team['R'].end());
            sort(team['B'].begin(), team['B'].end());

            soldier[0] = team[t[0]].front();
            team[t[0]].pop_front();

            for (int i = 1; i < n; i++)
            {

                soldier[i] = team[t[i]].front();
                team[t[i]].pop_front();

                if (soldier[i] < soldier[i - 1])
                {
                    possible = false;
                    break;
                }
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

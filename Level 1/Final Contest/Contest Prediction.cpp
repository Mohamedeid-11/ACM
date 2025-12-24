#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int freq[16] = {};
    map<int, priority_queue<int>> penalty;
    set<int> h;

    for (int i = 0; i < n; i++)
    {
        int score, pnt;
        cin >> score >> pnt;
        freq[score]++;
        penalty[score].push(pnt * -1);
    }
    for (int i = 15; i > 0; i--)
    {
        while (freq[i])
        {
            cout << i << ' ' << penalty[i].top() * -1 << endl;
            penalty[i].pop();
            freq[i]--;
        }
    }
}

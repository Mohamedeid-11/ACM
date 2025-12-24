#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, int>> list;
    // pair<string, int> list[n];
    vector<int> greater_than_70;

    for (int i = 0; i < n; i++)
    {
        pair<string, int> pr;
        cin >> pr.first >> pr.second;
        list.push_back(pr);
        // list[i] = pr;

        if (list[i].second >= 70)
            greater_than_70.push_back(i);
    }

    cout << endl;
    for (unsigned long long i = 0; i < greater_than_70.size(); i++)
        cout << list[greater_than_70[i]].first << endl;
}
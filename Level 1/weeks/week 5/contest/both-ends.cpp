#include <iostream>
#include <deque>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    deque<int> seq;
    deque<int> freq;
    int q;
    cin >> q;
    int longest_sub;
    int act, x;
    set<int> s;
    for (int i = 0; i < q; i++)
    {
        longest_sub = 0;

        cin >> act;
        if (act == 1 || act == 2)
            cin >> x;

        if (act == 1)
        {
            if (x == seq.front())
                freq.front()++;
            else
                freq.push_front(1);
            seq.push_front(x);
        }
        else if (act == 2)
        {
            if (x == seq.back())
                freq.back()++;
            else
                freq.push_back(1);
            seq.push_back(x);
        }
        else if (act == 3)
        {
            freq.front()--;
            if (!freq.front())
                freq.pop_front();
            seq.pop_front();
        }
        else
        {
            freq.back()--;
            if (!freq.back())
                freq.pop_back();
            seq.pop_back();
        }
        for (int j = 0; j < freq.size(); j++)
        {
            if (freq[j] > longest_sub)
                longest_sub = freq[j];
        }

        if (!seq.size())
            longest_sub = 0;

        cout << longest_sub << endl;
    }

    return 0;
}

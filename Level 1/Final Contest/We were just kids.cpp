#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;

    int current, goal = x, longest_seq = 0, cur_seq = 0;

    while (n--)
    {
        cin >> current;
        if (current == goal)
        {
            cur_seq++;
            goal++;
        }
        else if (current != goal - 1)
        {
            if (cur_seq > longest_seq)
                longest_seq = cur_seq;
            cur_seq = 0;
            goal = x;
        }
    }
    if (cur_seq > longest_seq)
        longest_seq = cur_seq;
    cout << longest_seq;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec;

    char command;
    while (n--)
    {
        cin >> command;
        if (command == 'a')
        {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        else if (command == 'd')
            vec.pop_back();
        else
        {
            for (unsigned long long i = 0; i < vec.size(); i++)
                cout << vec[i] << ' ';
            cout << endl;
        }
    }
}
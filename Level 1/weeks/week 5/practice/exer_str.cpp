#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int size = s.size();

    bool perfecto = true;
    if (size % 2 != 0)
        perfecto = false;
    else
    {
        int b_num = 0;
        for (int i = 0; i < size; i++)
            if (s[i] == 'b')
                b_num++;

        if (b_num <= size / 2)
            perfecto = false;
    }

    if (perfecto)
        cout << "Perfecto";
    else
        cout << "Not Perfecto";
}
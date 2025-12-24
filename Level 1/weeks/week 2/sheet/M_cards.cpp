#include <iostream>
using namespace std;

// First box: 2^(2k) * m                an (even power of 2) or (power of 4)
// Second box: 2^(2k+1) * m
// where k <= 0, m is odd

bool evenPowerOf2(long long n);

int main()
{
    int n;
    cin >> n;
    char ans[n];

    long long num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (evenPowerOf2(num))
            ans[i] = '1';
        else
            ans[i] = '2';
    }

    for (int i = 0; i < n; i++)
        if (ans[i] == '1')
            cout << "First Box" << endl;
        else
            cout << "Second Box" << endl;
}

bool evenPowerOf2(long long n)
{
    int numOf2 = 0;
    while (n % 2 == 0)
    {
        numOf2++;
        n /= 2;
    }

    if (numOf2 % 2 == 0)
        return true;
    else
        return false;
}

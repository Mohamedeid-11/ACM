#include <iostream>
using namespace std;

int main()
{
    int n;
    char winner;
    cin >> n >> winner;

    if ((n % 2 == 0 && winner == 'g') || (n % 2 != 0 && winner == 't'))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}

/*
The teams will fight each others for n rounds, in the first round T1 wins, in the second round Gen.G wins,
and they keep alternating wins (i.e T1 wins the third round, Gen.G wins the fourth and so on) till the nth round

*/
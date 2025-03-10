#include <iostream>
using namespace std;

int main()
{
    int n, plate[5];
    cin >> n;

    long long sultan = 0;
    long long abbas = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> plate[i];

        if (plate[i] % n == 0)
            abbas += plate[i];
        else
            sultan += plate[i];
    }

    if (sultan > abbas)
        cout << "Sultan";
    else if (sultan < abbas)
        cout << "3abas";
    else
        cout << "TIE" << endl;

    return 0;
}

// if plate number is divisible by n, 3abas's score will increase by plate number
// if not then sultan's score will increase by the number on the plate.
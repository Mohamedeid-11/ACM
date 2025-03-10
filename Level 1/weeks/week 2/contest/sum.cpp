#include <iostream>
using namespace std;

unsigned long long factorial(unsigned short int x);

int main()
{
    unsigned short int n, temp;
    unsigned long long sum = 0;
    cin >> n;

    while (n)
    {
        cin >> temp;
        sum += factorial(temp);
        n--;
    }

    cout << sum << endl;

    return 0;
}

unsigned long long factorial(unsigned short int x)
{
    unsigned long long sum = x;
    while (x > 2)
    {
        x--;
        sum *= x;
    }
    return sum;
}

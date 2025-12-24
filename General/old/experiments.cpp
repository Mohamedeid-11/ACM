#include <array>
#include <iostream>
using namespace std;

std::array<int, 4> update_array(int n);

int main()
{
    int n;
    cin >> n;
    n += 100;
    std::array<int, 4> year = update_array(n);
    for (int i = 0; i < 4; i++)
    {
        cout << year[i];
    }
    return 0;
}

std::array<int, 4> update_array(int n)
{
    std::array<int, 4> year;

    for (int i = 0; i < 4; i++)
    {
        year[3 - i] = n % 10;
        n /= 10;
    }
    return year;
}
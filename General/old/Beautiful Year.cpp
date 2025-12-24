#include <iostream>
#include <array>
using namespace std;

std::array<int, 4> update_array(int n);
int correct(int n);

int main()
{
    int n;
    cin >> n;
    n++;
    std::array<int, 4> year = update_array(n);

    for (int i = 1; i < 4; i++)
    {
        for (int x = 0; x < i; x++)
        {
            if (year[i] == year[x])
            {
                n += 10 * (3 - i);
                update_array(n);
            }
        }
    }

    cout << n;
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

int correct(std::array<int, 4> year)
{
    for (int i = 1; i < 4; i++)
    {
        for (int x = 0; x < i; x++)
        {
            if (year[i] == year[x])
            {
                n += 10 * (3 - i);
            }
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int num[] = {1, 2, 3, 7, 18, 26, 100, 50, 40, 31, 30, 11, 4};

    int start = 0;
    int end = 12;
    int change;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (num[mid] < num[mid + 1])
            start = ++mid;

        else if (num[mid] > num[mid + 1])
        {
            change = mid;
            end = --mid;
        }
    }

    cout << change;
}
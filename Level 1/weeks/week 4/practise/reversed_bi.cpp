#include <iostream>
using namespace std;

int main()
{
    int a = 60;
    int num[] = {60, 57, 52, 33, 27, 17, 12, 4};

    int start = 0, end = 7;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (num[mid] < a)
            end = --mid;

        else if (num[mid] > a)
            start = ++mid;

        else
        {
            cout << mid + 1;
            break;
        }
    }

    return 0;
}
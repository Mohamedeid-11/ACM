#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char hamburger[100 + 1];
    cin >> hamburger;

    unsigned long long recipe[] = {0, 0, 0};

    int n = 0;
    while (hamburger[n] != '\0')
    {
        if (hamburger[n] == 'B')
            recipe[0]++;
        else if (hamburger[n] == 'S')
            recipe[1]++;
        else
            recipe[2]++;
        n++;
    }

    unsigned long long kitchen[3], prices[3];
    for (int i = 0; i < 3; i++)
        cin >> kitchen[i];
    for (int i = 0; i < 3; i++)
        cin >> prices[i];

    unsigned long long wallet;
    cin >> wallet;

    unsigned long long left = 0, right = 1e18, mid, max;
    while (left <= right)
    {
        mid = (left + right) / 2;
        unsigned long long req_b = (recipe[0] * mid >= kitchen[0]) ? (recipe[0] * mid - kitchen[0]) : 0;
        unsigned long long req_s = (recipe[1] * mid >= kitchen[1]) ? (recipe[1] * mid - kitchen[1]) : 0;
        unsigned long long req_c = (recipe[2] * mid >= kitchen[2]) ? (recipe[2] * mid - kitchen[2]) : 0;
        unsigned long long total_cost = req_b * prices[0] + req_s * prices[1] + req_c * prices[2];

        if (total_cost <= wallet)
        {
            max = mid;
            left = ++mid;
        }
        else
            right = --mid;
    }

    cout << max;
}
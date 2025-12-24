#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    unsigned long long num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n, greater<unsigned long long>());

    unsigned long long sum = 0;
    for (int i = 0; i < k; i++)
        sum += num[i];

    cout << sum;
}
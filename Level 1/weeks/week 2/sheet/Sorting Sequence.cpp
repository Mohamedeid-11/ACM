#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    n += 2;
    int nums[n];
    nums[0] = a, nums[1] = b;
    for (int i = 2; i < n; i++)
        cin >> nums[i];

    sort(nums, nums + n);
    int apos1 = distance(nums, find(nums, nums + n, a)) + 1;
    int bpos1 = distance(nums, find(nums, nums + n, b)) + 1;
    int apos2 = n - apos1 + 1;
    int bpos2 = n - bpos1 + 1;

    cout << apos1 << ' ' << apos2 << '\n'
         << bpos1 << ' ' << bpos2 << endl;

    return 0;
}

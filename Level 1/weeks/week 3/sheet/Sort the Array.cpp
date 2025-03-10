#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    bool sorted = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i && arr[i] < arr[i - 1])
            sorted = false;
    }

    if (sorted)
    {
        cout << "yes\n1 1";
        return 0;
    }

    // Find the left and right boundaries
    int left = 0;
    while (left < n - 1 && arr[left] <= arr[left + 1])
    {
        left++;
    }
    int right = n - 1;
    while (right > 0 && arr[right] >= arr[right - 1])
    {
        right--;
    }

    // Reverse the segment [left, right]
    for (int l = left, r = right; l < r; l++, r--)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    // Check if the reversed array is sorted
    bool possible = true;
    for (int i = 0; i < n - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "yes\n"
             << left + 1 << " " << right + 1;

    else
        cout << "no";

    return 0;
}
#include <iostream>
#include <cmath>
#include <array>
using namespace std;

void sortedSquarredArray(int *arr, int n, int *new_arr)
{
    int left_ptr = 0, right_ptr = n-1;
    for(int i = n-1; i >= 0; i--)
    {
        // square before comparsion as there might be negative numbers
        int left_sq = pow(arr[left_ptr], 2);
        int right_sq = pow(arr[right_ptr], 2);

        if(left_sq > right_sq)
        {
            new_arr[i] = left_sq;
            left_ptr++;
        }
        else
        {
            new_arr[i] = right_sq;
            right_ptr--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n], new_arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    sortedSquarredArray(arr, n, new_arr);

    for (int i = 0; i < n; i++)
    {
        cout << new_arr[i];
        if(i != n-1) cout << ", ";
    }
    return 0;
}





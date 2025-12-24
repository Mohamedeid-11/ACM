#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isMonotonic(vector<int> &nums)
{
    int first_state_increasing = -1;
    for (int i = 1; i < nums.size(); i++)
    {
        int prev = nums[i - 1];

        int increasing = -1;
        if(nums[i] < prev) 
            increasing = 0;
        else if(nums[i] > prev)
            increasing = 1;
        else continue;

        if(increasing != -1 && first_state_increasing == -1)
            first_state_increasing = increasing;
        else if (increasing != -1 && first_state_increasing != -1 && first_state_increasing != increasing)
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 3 ,2};
    cout << isMonotonic(arr);

    return 0;
} 
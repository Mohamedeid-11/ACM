#include <iostream>
using namespace std;

int main()
{
    string coords;
    cin >> coords;
    int up_nums, down_nums, right_chars, left_chars;

    right_chars = 8 - (coords[0] - 96);
    left_chars = 7 - right_chars;

    up_nums = 8 - (coords[1] - 48);
    down_nums = 7 - up_nums;

    int sum = min(right_chars, up_nums) + min(left_chars, up_nums) + min(right_chars, down_nums) + min(left_chars, down_nums);

    cout << sum << endl;

    return 0;
}

/*

the bishop can move in 4 directions up-right, up-left, down-right, down-left
by determining how many available positions on the x axis on the right and the left the bishop (their sum is always 7)
and how many available positions on the y axis up and down the bishop (their sum is always 7)
we can calculate how many positions it can move to in each of the 4 directions

Example: bishop at c4                                                      |   (2) 4 (4)   |
it has 5 letters on its right and 2 letters before it                      |    2  P  5    |
and it has 4 numbers above it and 3 numbers down it                        |   (2) 3 (3)   |

so it can move:

2 to the up-left    (2 letters < 4 nums)
2 to the down-left  (2 letters < 3 nums)
4 to the up-right   (4 nums < 5 letters)
3 to the down-right (3 nums < 5 letters)

so it has 11 positions to move to

now you can definitely notice the pattern
the number of the available diagonal cells in a direction equalls the least number of letters or numbers in that direction


*/
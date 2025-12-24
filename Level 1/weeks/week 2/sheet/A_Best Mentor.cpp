#include <iostream>
using namespace std;

int main()
{
    bool palindrome = true, divides_by_its_sum = false;
    string id;
    cin >> id;

    // number of digits in id
    // maximum will be 19 as id <= 1e18 which is 19 digits
    short int digits_num = size(id);

    // is it palindrome?
    for (short int i = 0; i < (digits_num / 2); i++)
    {
        if (id[i] != id[digits_num - i - 1])
        {
            palindrome = false;
            break;
        }
    }

    // id digits sum
    // maximum will be 19 nine which's 171
    short int sum = 0;
    for (short int i = 0; i < digits_num; i++)
    {
        sum += (id[i] - 48);
    }

    // can it divides by (its digits sum) ?
    if (stoll(id) % sum == 0)
        divides_by_its_sum = true;

    // give ranks
    if (divides_by_its_sum && palindrome)
        cout << "Best mentor.";
    else if (divides_by_its_sum || palindrome)
        cout << "He's good.";
    else
        cout << "He'll be fired.";

    return 0;
}
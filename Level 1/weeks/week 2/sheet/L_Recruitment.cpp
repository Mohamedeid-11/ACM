#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // the solution is number of factors 
    int t;
    cin >> t;

    int num, count;
    while (t--)
    {
        cin >> num;
        count = (num == 1)? 1: 2;
        for (int i = 2; i <= sqrt(num); i++) // loop starts from num = 4
        {
            if (num % i == 0)
            {
                count++;
                if (i != sqrt(num))
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}

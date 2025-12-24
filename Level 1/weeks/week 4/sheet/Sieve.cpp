#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int factor = 0;
    int max_num_of_pfactors = 20, prime[max_num_of_pfactors] = {};
    for (int i = 2; i * i <= x; i++)
    {
        while (!(x % i))
        {
            if (!factor || i != prime[factor - 1])
            {
                prime[factor] = i;
                factor++;
            }
            // store the power of prime[factor] in ythe othe rhalf of the array
            prime[max_num_of_pfactors - factor]++;
            x /= i;
        }
    }
    if (x > 1)
    {
        prime[factor] = x;
        factor++;
        prime[max_num_of_pfactors - factor]++;
        x /= x;
    }

    cout << factor << endl;
    for (int i = 0; i < factor; i++)
    {
        cout << prime[i] << ' ' << static_cast<long long>(y) * prime[max_num_of_pfactors - 1 - i] << endl;
    }

    return 0;
}
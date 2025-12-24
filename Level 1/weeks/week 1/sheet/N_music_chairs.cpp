#include <iostream>
using namespace std;

int main()
{
    // ( 1  ≤  X  ≤  N < 2^63 , 0  ≤  M < 2^63 )
    // so ( x+m <= (2^63 + 2^63 ==  2^63 * 2 == 2^64) ) 
    unsigned long long n, m, x;
    cin >> n >> m >> x;

    if (m%2 != 0) m++;
    
    unsigned long long pos = (x+m)%n; // omit whole cycles

    // pos == 36%6 == 0  (should be turned into 6)
    cout << (res == 0? n : res); 

    return 0;
}
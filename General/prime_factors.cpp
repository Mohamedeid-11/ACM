#include <bits/stdc++.h>
using namespace std;

/*
https://stackoverflow.com/questions/11924249/finding-prime-factors
https://www.youtube.com/watch?v=CWmTWxEjZ5A
https://mathschallenge.net/library/number/number_of_divisors
https://brainly.in/question/15254203#:~:text=be%20mentioned%20once.-,Therefore%2C%20the%20factors%20are%201%2C%202%2C%203%2C%204,does%20not%20have%20a%20pair.

*/

vector<int> primeFactors(int n )
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }

    if (n > 1) f.push_back(n); // check if there is a factor greater than sqrt(n)

    return f;
}

// number of factors
int countFactors(int num)
{
    int count = (num == 1)? 1: 2;        // count (1) and (num) itself as a factor
    for (int i = 2; i <= sqrt(num); i++) // loop starts from num = 4
    {
        if (num % i == 0)
        {
            count++;
            if (i != sqrt(num)) count++;
        }
    }
    cout << count << endl;
}
int countFactors_2(int num)
{
    vector<int> powerOfPrimeFactors;
    
    // get power of each prime factor
    for (int i = 2; i * i <= num; i++)
    {
        int power = 0;
        while(num % i == 0)
        {
            power++;
            num /= i;
        }
        if(power) powerOfPrimeFactors.push_back(power);
    }
    if(num > 1) powerOfPrimeFactors.push_back(1);

    // number of factors = (p1 + 1) * (p2 + 1) * .... *(pn + 1)
    int ans = 1;
    for( int power : powerOfPrimeFactors )
    {
        ans *= power + 1;
    }
    cout << ans << '\n';
}
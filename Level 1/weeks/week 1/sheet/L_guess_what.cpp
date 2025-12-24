#include <iostream>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k >> a;

    long long temp = (long long)n*k;

    if(temp % a != 0)
        cout << "double";
    else if(temp/a > 2147483647)
        cout << "long long";
    else 
        cout << "int";

    return 0;
}
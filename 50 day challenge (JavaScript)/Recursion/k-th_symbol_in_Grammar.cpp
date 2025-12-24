#include <iostream>
#include <cmath>
using namespace std;

int kthGrammar(int n, int k) 
{
    if (n == 1) return 0;
    
    int line = pow(2, n-1);
    int mid = line / 2;
    
    if (k <= mid) 
    return kthGrammar(n - 1, k);
    else 
    return 1-kthGrammar(n - 1, k - mid); 
    // (1-x) works like ! (not):  1 - (1) = (0)  ||  1 - (0) = (1)          
}

int main()
{
    cout << kthGrammar(3, 2);

    return 0;
} 
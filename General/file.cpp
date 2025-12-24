#include<iostream>
using namespace std;

int main()
{
    int j = 8;
    int *p = &j;
    cout << &j << endl;
    cout << p << ' ' << *p;
}
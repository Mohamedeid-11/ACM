#include <iostream>
// or
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // we can consider it as a vector of characters
    string s;
    cout << "Size is: " << s.size() << endl;

    s.push_back('a'); // size = 1
    s.push_back('b'); // size = 2
    s.push_back('c'); // size = 3
    s.push_back('d'); // size = 4
    cout << "Size is: " << s.size() << endl;
    for (unsigned long long i = 0; i < s.size(); i++)
        cout << s[i] << ' ';
    cout << endl;

    s.pop_back();                            // removes the last added element
    cout << "Size is: " << s.size() << endl; // size = 3
    for (unsigned long long i = 0; i < s.size(); i++)
        cout << s[i] << ' ';
    cout << endl;

    cout << s.front(); // returns the first added element s[0]
    cout << endl;
    cout << s.back(); // returns the last added element s[s.size()-1]
    cout << endl;

    // string supports random access
    // (the ability to access any element instantly without having to go through all previous elements)
    cout << s[1];
    cout << endl;

    // Returns: Index of first occurrence.
    cout << s.find('c');
}
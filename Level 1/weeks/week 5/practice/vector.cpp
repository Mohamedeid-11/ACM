#include <iostream>
#include <vector>
#include <algorithm>
// or
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec; // size = 0
    // vector<int> vec(n);  //size = n
    cout << "Size is: " << vec.size() << endl;

    vec.push_back(1);  // size = 1 --> 1
    vec.push_back(34); // size = 2 --> 1 34
    vec.push_back(65); // size = 3 --> 1 34 65
    vec.push_back(7);  // size = 4 --> 1 34 65 7
    cout << "Size is: " << vec.size() << endl;
    for (unsigned long long i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
    cout << endl;

    vec.pop_back(); // removes the last added element
    // size = 3 --> 1 34 65

    cout << "Size is: " << vec.size() << endl; // size = 3
    for (unsigned long long i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
    cout << endl;

    cout << vec.front(); // returns the first added element vec[0]
    cout << endl;
    cout << vec.back(); // returns the last added element vec[vec.size()-1]
    cout << endl;

    // supports random access
    // (the ability to access any element instantly without having to go through all previous elements)
    cout << vec[1];
    cout << endl;
    cout << endl;

    // to sort vector use .begin() and .end()
    sort(vec.begin(), vec.end());

    vector<int>::iterator itr;
    itr = vec.begin();

    // * get what that iterator points to
    cout << *itr;
    cout << endl;
    itr = next(itr);
    cout << *itr;
    cout << endl;
    itr = prev(itr);
    cout << *itr;
    cout << endl;

    itr = vec.end();
    // get index of elemnts by iterators (in random access STLs like vector)
    int index = itr - vec.begin();
    cout << "index of last element: " << index;
}
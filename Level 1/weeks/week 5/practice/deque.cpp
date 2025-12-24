#include <iostream>
#include <deque>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // deque allows you to insert/pop from the front or the bcak
    // supports random access
    deque<int> my_deque;
    my_deque.push_back(20);  // my_deque --> 20
    my_deque.push_back(30);  // my_deque --> 20 30
    my_deque.push_back(40);  // my_deque --> 20 30 40
    my_deque.push_front(10); // my_deque --> 10 20 30 40
    cout << my_deque.front() << ' ' << my_deque.back();

    my_deque.pop_back();  // my_deque --> 10 20 30
    my_deque.pop_front(); // my_deque --> 20 30
}
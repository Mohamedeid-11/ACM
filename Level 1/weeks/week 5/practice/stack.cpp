#include <iostream>
#include <stack>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // stack follows the LIFO (last in first out) like the stack of plates
    // Doesn't support random access
    stack<int> my_stack;
    my_stack.push(10); // my_stack --> 10
    my_stack.push(20); // my_stack --> 10 20
    my_stack.pop();    // my_stack --> 10

    cout << my_stack.top() << endl; // gets the last element
    my_stack.push(27);              // my_stack --> 10 27
    cout << my_stack.top() << endl;
}
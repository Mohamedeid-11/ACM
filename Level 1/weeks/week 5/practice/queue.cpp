#include <iostream>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // queue follows the FIFO (First in first out) like the queue
    // Doesn't support random access
    queue<int> my_queue;
    my_queue.push(10); // my_queue --> 10
    my_queue.push(20); // my_queue --> 10 20
    my_queue.pop();    // my_queue --> 20

    cout << my_queue.front() << endl; // gets the first element
    my_queue.push(27);                // my_queue --> 20 27
    cout << my_queue.front() << endl;
}
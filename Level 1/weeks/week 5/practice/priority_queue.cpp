#include <iostream>
#include <queue>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // the priority in any process taken by the priority_queue is to the greatest/smallest element (greatest by default)
    // Doesn't support random access

    // to set the priority the smallest element
    // priority_queue<int, vector<int>, greater<int>> pq;

    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    cout << pq.top() << endl; // 20
    pq.push(100);
    cout << pq.top() << endl; // 100
    pq.pop();
    cout << pq.top() << endl; // 20
    pq.pop();
    cout << pq.top(); // 10
}

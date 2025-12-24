#include <iostream>
#include <set>
#include <iterator>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // set - multiset (based on self-balanced BSTs)
    // they order their elements
    // prevent repetitions (only in set)
    // don't support random access

    set<int> s = {4, 3, 2, 1, 3};
    // foreach
    for (auto i : s)
        cout << i << ' ';

    cout << endl;

    multiset<int> ms = {4, 3, 2, 1, 3};
    for (auto i : ms)
        cout << i << ' ';

    cout << endl;

    // erase(3):  removes all 3s
    ms.erase(3);
    for (auto i : ms)
        cout << i << ' ';

    ms = {4, 3, 2, 1, 3};
    cout << endl;

    // erase(ms.find(3)) or extract(3): removes only one 3
    ms.erase(ms.find(3));
    for (auto i : ms)
        cout << i << ' ';
}

/*

insert():
 Adds an element to the set. O(log(n))

begin():
 Returns an iterator to the first element of the set. O(1)

end():
 Returns an iterator to the theoretical element that follows the last element in the set. O(1)

empty():
 Checks whether the set is empty or not. O(1)

size():
 Returns the number of elements in the set. O(1)

erase(position):
 Removes the element from the specified address from the set. O(1)

erase(value):
 Removes the specified element from the set. O(log(n))

erase(first,last):
 Removes the specified range of elements from the set. O(n)

find(element):
 Returns an iterator to the element in the set if found, else returns the iterator to the end. O(log(n))

MultiSet:
count(value)
 Returns number of ocurances of value
*/
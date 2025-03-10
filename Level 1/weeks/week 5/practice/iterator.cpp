#include <iostream>
#include <iterator>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main()
{
    multiset<int> ms = {4, 3, 2, 1, 3};

    // Declaring iterator to a multiset
    multiset<int>::iterator itr1;
    for (itr1 = ms.begin(); itr1 != ms.end(); itr1++)
    {
        cout << *itr1 << " ";
    }
    cout << endl;

    set<int> st = {4, 3, 2, 1, 3};

    // Declaring iterator to a set
    set<int>::iterator itr2;
    for (itr2 = st.begin(); itr2 != st.end(); itr2++)
    {
        cout << *itr2 << " ";
    }
    cout << endl;

    map<int, int> mp;

    // Declaring iterator to a map
    map<int, int>::iterator itr3;
    for (itr3 = mp.begin(); itr3 != mp.end(); itr3++)
    {
        cout << itr3->first << " " << itr3->second << endl;
    }
    cout << endl;

    vector<int> v = {4, 3, 2, 1, 3};

    // Declaring reverse iterator to a vector
    vector<int>::reverse_iterator it4;
    for (it4 = v.rbegin(); it4 != v.rend(); it4++)
        cout << *it4 << " ";
    return 0;
}
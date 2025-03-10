#include <iostream>
#include <map>
// or
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // like dictionary. it has a key and a value

    // decleration
    map<string, int> family = {{"Ahemd", 29}, {"Mohamed", 19}};

    // adding values / initialization
    family["mama"] = 52;
    family.insert({"sara", 18});
    family.insert(make_pair("lolo", 4));

    for (auto member : family)
        cout << member.first << "'s age is: " << member.second << endl;
}
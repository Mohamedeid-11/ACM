#include <iostream>
using namespace std;

int main()
{
    // decleration
    pair<string, int> pr;

    // assignment
    pr = {"car", 13};
    // or
    pr.first = "car";
    pr.second = 13;

    // initialization
    pair<string, int> pair1("blabla", 1);
    pair<string, int> pair2{"blabla", 5};
    pair<string, int> pair3 = {"blabla", 10};
}
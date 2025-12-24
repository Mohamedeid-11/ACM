#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Full name: ";
    string name;
    getline(cin, name);

    cout << "Age: ";
    int age;
    cin >> age;

    cout << "Hello " << name << " you're " << age << " years old." << endl;
}
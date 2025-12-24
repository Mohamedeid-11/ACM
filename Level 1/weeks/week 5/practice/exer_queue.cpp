#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> my_queue;
    int n;
    cin >> n;

    string temp;
    cin >> temp;
    my_queue.push(temp);
    n--;

    while (n--)
    {
        cin >> temp;
        my_queue.push(temp);
        if (temp == my_queue.front())
            my_queue.pop();
    }

    while (!my_queue.empty())
    {
        cout << my_queue.front() << ' ';
        my_queue.pop();
    }
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(18);
    cout << d.front() << "\n";
    d.push_back(20);
    cout << d.back() << "\n";
    d.pop_back();
    cout << d.front() << "\n";
    cout << d.back() << "\n";
    d.pop_back();
    d.empty() ? cout << "Dequeue is empty " : cout << "Dequeue is not empty";
    return 0;
}
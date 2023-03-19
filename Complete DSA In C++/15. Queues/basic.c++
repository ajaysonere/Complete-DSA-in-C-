#include<iostream>
#include<queue>
using namespace std;

int main ()
{

    // cout << "Queues";
    queue<int> q;
    q.push(12);
    cout << "Front Element is :" << q.front() << "\n";
    q.push(15);
    cout << "Front Element is :" << q.front() << "\n";
    q.push(9);
    cout << "Front Element is :" << q.front() << "\n";

    return 0;
}
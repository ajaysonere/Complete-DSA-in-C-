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

    if(q.empty()){
        cout << "queue is empty \n";
    }else{
        cout << "queue is not empty \n";
    }

    q.pop();
    cout << "Front of Queue is :" << q.front() << " \nRear Of Queue is : " << q.back() << "\n";

    return 0;
}